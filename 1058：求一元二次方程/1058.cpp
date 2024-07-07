#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	double a, b, c, x1, x2, z;
	scanf("%lf%lf%lf", &a, &b, &c);

	z = b * b - 4 * a * c;
//	if (z > 0){
//		x1 = (-b + sqrt(z)) / (2 * a);
//		x2 = (-b - sqrt(z)) / (2 * a);
//		printf("x1=%.5lf;x2=%.5lf", x1, x2);
//	} else if (z == 0){
//		x1 = (-b + sqrt(z)) / (2 * a);
//		printf("x1=x2=%.5lf", x1);
//	} else{
//		printf("No answer!");
//	}
	if (a == 0 || z < 0){
		printf("No answer!");
	} else if (z == 0){
		x1 = -b / (2 * a);
		printf("x1=x2=%.5lf", x1);
	} else {
		x1 = (-b + sqrt(z)) / (2 * a);
		x2 = (-b - sqrt(z)) / (2 * a);
		printf("x1=%.5lf;x2=%.5lf", x1, x2);
	}
	
	return 0;
}
