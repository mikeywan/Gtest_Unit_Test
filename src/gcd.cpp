#include <iostream>
int gcd(int a, int b)
{
	if(a < 0 || b < 0){
		return -1;
	}
	
	int temp;	
	if(a < b){
		temp = a;
		a = b;
		b = temp;	
	}

	if (b == 0){
		return a;
	}else{
		return gcd(b, a%b);
	}
}

