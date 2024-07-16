#include <cstdio>

using namespace std;

int main(){
	int n, sum = 0, tmp = 1;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		tmp *= i;
		sum += tmp;
	}
	printf("%d", sum);
	
	return 0;
}
