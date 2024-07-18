#include <cstdio>

using namespace std;

int main(){
	int n, sum = 0,tmp;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		tmp = i;
		while(tmp > 0){
			if(tmp % 10 == 1) sum++;
			tmp /= 10;
		}
	}
	printf("%d", sum);
	
	return 0;
}
