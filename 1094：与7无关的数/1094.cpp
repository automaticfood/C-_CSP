#include <cstdio>

using namespace std;

int main(){
	int n, sum = 0, tmp;
	bool flag;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		tmp = i;
		flag = true;
		if(tmp % 7 == 0) {
			continue;
		}
		while(tmp > 0){
			tmp /= 10;
			if(tmp % 10 == 7){
				flag = false;
				break;
			}
		}
		if(flag){
			sum += i * i;
		}
	}
	printf("%d", sum);
}
