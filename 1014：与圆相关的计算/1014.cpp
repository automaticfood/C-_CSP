#include <cstdio>
#include <math.h>
#define PI 3.14159

using namespace std;

int main(){
	double r;
	scanf("%lf", &r);
	
	printf("%.4lf %.4lf %.4lf",2 * r, 2 * PI * r, PI * pow (r, 2));
	
	return 0;
}
