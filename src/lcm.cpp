#include <stdio.h>
#include "gcd.cpp"

int lcm(int a, int b)
{
	if (a <=0 || b <= 0){
		return -1;
	}
	
	return a*b/gcd(a,b);
}

