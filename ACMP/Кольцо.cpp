#define _USE_MATH_DEFINES

#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;
int main()
{
	double r1,s;
	cin>>s>>r1;
	double d = sqrt((M_PI*r1*r1-s)/M_PI);
	printf("%.3f", d);
	return 0;
}