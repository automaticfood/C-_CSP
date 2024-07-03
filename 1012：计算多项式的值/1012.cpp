#include <cstdio>
#include <math.h>

using namespace std;

int main(){
	double x, a, b, c, d;
	scanf("%lf%lf%lf%lf%lf", &x, &a, &b, &c, &d);
	
	printf("%.7lf", a * pow(x, 3) + b * pow(x, 2) + c * x + d);
	
	return 0;
}
