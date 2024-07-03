#include <iostream>

using namespace std;

int main(){
	char c;
	scanf("%c", &c);
	
	for(int i = 0; i<3; i++ ){
		for(int k = 0; k<3-i-1; k++ ){
			printf(" ");
		}
		for(int j = 0; j<2 * (i + 1)-1; j++){
			printf("%c", c);
		}
		printf("\n");
	}
	
	return 0;
}
