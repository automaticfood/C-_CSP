#include <cstdio>

using namespace std;

int main(){
	char c;
	scanf("%c", &c);
	int n = 5;
	
	for(int i = 0; i < n / 2 + 1; i++){
		for(int j = 0; j < n / 2 + 1; j++){
			printf(" ");
		}
		for(int j = 0; j < 2 * (i + 1) - 1; j++){
			printf("%c", c);
		}
		printf("\n");
	}
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < i + 1; j++){
			printf(" ");
		}
		for( int j = 0; j < )
		printf("\n");
	}
	
	return 0;
}
