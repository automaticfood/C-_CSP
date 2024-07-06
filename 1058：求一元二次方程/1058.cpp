#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	double a, b, c, x1, x2, z;
	scanf("%lf%lf%lf", &a, &b, &c);
	
	x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	x2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	z = b * b - 4 * a * c;
	if (z < 0){
		if (x1 == x2){
			printf("x1 = x2 = %.5lf", x1);
		} else{
			if (x1 < x2){
				printf("x1=%.5lf;x2=%.5lf;", x1, x2);
			} else{
				printf("x1=%.5lf;x2=%.5lf;", x2, x1);
			}
		}
	} else {
		printf("No answer!");
	}
}
