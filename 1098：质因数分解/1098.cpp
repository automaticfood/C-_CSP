#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int n, p;
	scanf("%d", &n);
	
	for(int i = 2; i < sqrt(n); i++){
		if(n % i == 0){
			p = n / i;
			break;
		}
	}
	printf("%d", p);
	
	return 0;
}
