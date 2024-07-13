#include <cstdio>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	
	while(n != n % 10){
		printf("%d ", n % 10);
		n /= 10;
	}
	printf("%d", n);
	
	return 0;
}
