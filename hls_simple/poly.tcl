
open_project poly
set_top poly
add_files poly.c
add_files -tb poly_test.c -cflags "-std=c99"
open_solution "solution1"
set_part  {xc7z020clg400-1}
create_clock -period 2

set_directive_pipeline poly -II 1

csynth_design
cosim_design -rtl verilog
export_design

exit
