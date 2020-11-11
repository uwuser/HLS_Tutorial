
open_project poly
set_top poly
add_files poly.cc
add_files -tb poly_test.cc
open_solution "solution1"
set_part  {xc7z020clg400-1}
create_clock -period 2

set_directive_pipeline poly/loop_rd -II 1
set_directive_pipeline poly/loop1 -II 1
set_directive_pipeline poly/loop_wr -II 1
set_directive_unroll poly/loop1 -factor 4
set_directive_interface -mode axis poly x
set_directive_interface -mode axis poly y
set_directive_array_partition poly x_l -factor 4 -type cyclic
set_directive_array_partition poly y_l -factor 4 -type cyclic

csynth_design
export_design

exit
