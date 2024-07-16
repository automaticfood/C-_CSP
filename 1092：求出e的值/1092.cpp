#include <cstdio>

using namespace std;

int main(){
	int n;
	double sum = 1, tmp = 1;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		tmp *= i;
		sum += 1 / tmp;
	}
	printf("%.10lf", sum);
	
	return 0;
}
