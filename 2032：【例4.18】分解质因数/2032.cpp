#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int n, i = 2, flag = 1;
	scanf("%d", &n);

	printf("%d=", n);
	while(n > 1){
		if(n % i == 0){
			if(flag) flag = 0;
			else{
				printf("*");
			}
			printf("%d",i);
			n /= i;
		}else{
			i++;
		}
	}
}
