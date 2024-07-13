#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int num;
	
	for(int i = 1; i <= 9; i++){
		for(int j = 0; j <= 9; j++){
			num = 1000 * i + 100 * i + 10 * j + j;
			if(i != j && (int)sqrt(num) * sqrt(num) == num){
				printf("%d%d%d%d\n", i, i, j, j);
			}
			
		}
	}
	
	return 0;
}
