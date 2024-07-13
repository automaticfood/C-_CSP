#include <cstdio>

using namespace std;

int main(){
	int n, tmp = 1;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		tmp = tmp % 100 * 1992;
	}
	printf("%d", tmp % 100);
	
	return 0;
}
