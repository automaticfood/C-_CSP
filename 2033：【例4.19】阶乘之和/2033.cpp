#include <cstdio>

using namespace std;

int main(){
	int n, tmp = 1, sum = 0;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		tmp *= i;
		tmp %= 1000000;
		sum += tmp;
		sum %= 1000000;
	}
	printf("%d", sum);
	
	return 0;
}
