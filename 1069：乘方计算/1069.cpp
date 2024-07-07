#include <cstdio>

using namespace std;

int main(){
	int a, n, res;
	scanf("%d%d", &a, &n);
	
	res = a;
	for(int i = 0; i < n - 1; i++){
		res = res * a;
	}
	printf("%d", res);
	
	return 0;
}
