#include <cstdio>

using namespace std;

int main(){
	char c;
	scanf("%c", &c);
	
	int n = 5;
	int mid = n / 2;
	
	for(int i = 0; i <= mid; i++){
		for(int j = 0; j < mid - i; j++){
			printf(" ");
		}
		for(int j = 0; j < 2 * (i + 1) - 1; j++){
			printf("%c",c);
		}
		printf("\n");
	}
	for(int i = mid - 1; i >= 0; i--){
		for(int j = 0; j < mid - i; j++){
			printf(" ");
		}
		for(int j = 0; j < 2 * i + 1; j++){
			printf("%c", c);
		}
		printf("\n");
	}
	
	return 0;
}
