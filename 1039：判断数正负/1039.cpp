#include <cstdio>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	
	if(n > 0){
		printf("positive");
	}
	if(n == 0){
		printf("zero");
	}
	if(n < 0){
		printf("negative");
	}
	
	return 0;
}
