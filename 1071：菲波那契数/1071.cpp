#include <cstdio>

using namespace std;

int main(){
	int k, i, fib[100]={1, 1};
	scanf("%d", &k);
	
	for(i = 2; i < k; i++){
		fib[i] = fib[i - 1] + fib[i -2];
	}
	printf("%d", fib[k - 1]);
	
	return 0;
}
