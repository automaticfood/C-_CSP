#include <cstdio>
#define PI 3.1415926

using namespace std;

int main(){
	double r;
	scanf("%lf", &r);
	
	printf("%.4lf %.4lf %.4lf", 2 * r, 2 * r * PI, PI * r * r);

	return 0;
}
