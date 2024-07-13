#include <cstdio>

using namespace std;

int main(){
	int m, k, count = 0;
	scanf("%d%d", &m, &k);
	
	if (m % 19 == 0){
		while(m % 10 != m){
			if (m % 10 == 3) count++;
			m /= 10;
		}
		if (m == 3) count++;
		if (count == k){
			printf("YES");
		}else{
			printf("NO");
		}
	} else{
		printf("NO");
	}
	
	return 0;
}
