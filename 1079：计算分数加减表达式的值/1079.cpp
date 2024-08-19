#include <cstdio>

using namespace std;

int main(){
	double n, sum = 0;
	scanf("%lf", &n);
	
	for(int i = 1; i <= n; i++){
		if (i % 2 != 0){
			sum += 1.0 * 1 / i;
		} else {
			sum -= 1.0 * 1 / i;
		}
	}
	printf("%.4lf", sum);
	
	return 0;
}
