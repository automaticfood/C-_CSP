#include <cstdio>

using namespace std;

int main(){
	double n;
	scanf("%lf", &n);
	
	if (n >= 0 && n < 5){
		printf("%.3lf", -n + 2.5);
	}
	if (n >= 5 && n <= 10){
		printf("%.3lf", 2 - 1.5 * (n -3) * (n -3));
	}
	if (n >= 10 && n < 20){
		printf("%.3lf", n / 2 - 1.5);
	}
	
	return 0;
}
