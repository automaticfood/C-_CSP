#include <cstdio>

using namespace std;

int main(){
	int n, j = 0, o = 0;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		if (i % 2 == 0){
			o += i;
		} else{
			j += i;
		}
	}
	printf("%d %d", o, j);
	
	return 0;
}
