

open_project poly
set_top poly
add_files poly.c
add_files -tb poly_test.c -cflags "-std=c99"
open_solution "solution1"
set_part  {xc7z020clg400-1}
create_clock -period 2

set_directive_pipeline poly/loop1 -II 1
set_directive_unroll poly/loop1 -factor 4
set_directive_array_partition poly x -factor 4 -type cyclic
set_directive_array_partition poly y -factor 4 -type cyclic

csynth_design
cosim_design -rtl verilog
export_design

exit
