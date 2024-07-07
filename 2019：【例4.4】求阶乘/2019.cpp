#include <cstdio>

using namespace std;

int main(){
	long long n, res = 1;
	scanf("%lld", &n);
	
	for(int i = 1; i <= n; i++){
		res *= i;
	}
	printf("%lld", res);
	
	return 0;
}
