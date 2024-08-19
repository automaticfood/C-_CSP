#include <cstdio>

using namespace std;

int main(){
	int a, b, n, t;
	scanf("%d%d%d", &a, &b, &n);
	
	for(int i = 0; i < n; i++){
		a *= 10;
		t = a / b;
		a %= b;
	}
	printf("%d", t);
	
	return 0;
}
