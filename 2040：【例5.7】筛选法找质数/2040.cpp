#include <cstdio>

using namespace std;

int main(){
	int n, flag;
	scanf("%d", &n);
	
	for(int i = 2; i <= n; i++){
		flag = 1;
		for(int j = 2; j * j <= i; j++){
			if(i % j == 0) flag = 0;
		}
		if(flag) printf("%d\n", i);
	}
	
	return 0;
}
