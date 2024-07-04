#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	double a, b;
	int k;
	scanf("%lf%lf", &a, &b);
	
	k = (int)(a / b);
	printf("%g", a - k * b);
	
	return 0;
}
