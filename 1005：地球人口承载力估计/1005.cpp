#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	double x, a, y, b;
	double z;
	scanf("%lf%lf%lf%lf", &x, &a, &y, &b);
	
	z = (y * b - x * a) / (b - a);
	
	printf("%.2lf", z);
}
