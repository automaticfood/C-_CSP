#include <cstdio>

using namespace std;

int main(){
	int i, j, k;
	
	for(i = 0; i <= 20; i++){
		for(j = 0; j <= 100 / 3; j++){
			k = 100 - i - j;
			if(5 * i + 3 * j + k / 3 == 100 && k % 3 == 0){
				printf("%d %d %d\n", i, j, k);
			}
		}
	}
	
	return 0;
}
