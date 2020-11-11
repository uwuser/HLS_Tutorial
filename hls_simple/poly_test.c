/* Author: Reza Mirosanlou Date: March 2017 */
#include <stdio.h>
#include <stdlib.h>
#include "poly.h"

#define N 1024

int main(int argc, char** argv){

	// variables
	int x[N], y[N], y_ref[N];
	int a=3, b=2, c=1;

	// load data
	for(int i=0; i<N; i++){
		x[i] = i;
	}

	// process on hardware
	for(int i=0; i<N; i++){
		poly(x[i],a,b,c,&(y[i]));
	}

	// compare with sw
	int error=0;
	for(int i=0; i<N; i++){
		y_ref[i] = (a*x[i]*x[i]) + 
			(b*x[i]) + c;
		if(y[i] != y_ref[i]){
			error=1;
		}
	}
	if(!error) {printf("Test passed!\n");}

}
