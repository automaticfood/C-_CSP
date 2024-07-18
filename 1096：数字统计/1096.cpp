#include <cstdio>

using namespace std;

int main(){
	int m, n, tmp, sum = 0;
	scanf("%d%d", &m, &n);
	
	for(int i = m; i <= n; i++){
		tmp = i;
		while(tmp > 0){
			if(tmp % 10 == 2) sum++;
			tmp /= 10;
		}
	}
	printf("%d", sum);

	return 0;
}
