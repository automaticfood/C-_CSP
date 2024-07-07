#include <cstdio>

using namespace std;

int main(){
	int n, x, sum;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		scanf("%d", &x);
		sum += x;
	}
	printf("%.2lf", 1.0 * sum / n);
	
	return 0;
}
