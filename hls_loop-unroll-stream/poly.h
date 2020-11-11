/* Author: Reza Mirosanlou Date: March 2017 */
#include<hls_stream.h>

#define N 1024

void poly(hls::stream<int> &x, int a, int b, int c, hls::stream<int> &y);

