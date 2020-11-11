/* Author: Reza Mirosanlou Date: March 2017 */
#include "poly.h"

void poly(hls::stream<int> &x, int a, int b, int c, hls::stream<int> &y)
{
	int i=0;
	int x_l[N], y_l[N];

loop_rd: for(i=0;i<N;i++) {
		x_l[i]=x.read();
	}

loop1: for(i=0;i<N;i++) {
	       y_l[i]=a*x_l[i]*x_l[i]+b*x_l[i]+c;
       }

loop_wr: for(i=0;i<N;i++) {
	       y.write(y_l[i]);
       }
}
