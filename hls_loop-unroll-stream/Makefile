sim:
	g++ -I/opt/Xilinx/Vivado_HLS/2016.4/include poly_test.cc poly.cc -o poly.out
	./poly.out

hw:
	vivado_hls -f poly.tcl

clean:
	rm poly.out
