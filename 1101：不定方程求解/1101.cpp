#include <cstdio>

using namespace std;

int main(){
	int a, b, c, count = 0;
	scanf("%d%d%d", &a, &b, &c);
	
	for(int i = 0; i <= c / a; i++){
		for(int j = 0; j <= c / b; j++){
			if(a * i + b * j == c){
				count++;
			}
		}
	}
	printf("%d", count);
	
	return 0;
}
