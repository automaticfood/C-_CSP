#include <cstdio>

using namespace std;

int main(){
	int n;
	double x, sum = 1, tmp = 1;
	scanf("%lf%d", &x, &n);
	
	for(int i = 1; i <= n; i++){
		tmp *= x;
		sum += tmp;
	}
	printf("%.2lf", sum);
	
	return 0;
}
