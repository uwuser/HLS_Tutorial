/* Author: Reza Mirosanlou Date: March 2017 */
#include <stdio.h>
#include <stdlib.h>
#include <hls_stream.h>

#include "poly.h"

int main(int argc, char** argv){

	// variables
	hls::stream<int> x, y;
	int y_ref[N];
	int a=3, b=2, c=1;

	// load data
	for(int i=0; i<N; i++){
		x.write(i);
	}

	// process on hardware
	poly(x,a,b,c,y);

	// compare with sw
	int error=0;
	for(int i=0; i<N; i++){
		int x_l=i;
		y_ref[i] = (a*x_l*x_l) + 
			(b*x_l) + c;
		if(y.read() != y_ref[i]){
			error=1;
		}
	}
	if(!error) {printf("Test passed!\n");}

}
