/* Author: Reza Mirosanlou Date: March 2017 */
#include "poly.h"

void poly(int x[N], int a, int b, int c, int y[N])
{
	int i=0;

loop1: for(i=0;i<N;i++) {
		y[i]=a*x[i]*x[i]+b*x[i]+c;
	}
}
