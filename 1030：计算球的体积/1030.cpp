#include <cstdio>
#define PI 3.14

using namespace std;

int main(){
	double r;
	double v;
	scanf("%lf", &r);
	
	v = (4.0 / 3) * PI * r * r * r;
	printf("%.2lf", v);
	
	return 0;
}
