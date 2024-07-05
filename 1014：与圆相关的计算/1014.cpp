#include <cstdio>
#include <math.h>
#define PI 3.14159

using namespace std;

int main(){
	double r;
	scanf("%lf", &r);
	
	printf("%.4lf %.4lf %.4lf",2 * r, 2 * PI * r, PI * r * r);
	
	return 0;
}
