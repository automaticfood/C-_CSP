#include <cstdio>

using namespace std;

int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	
	if (m >= 10 || n >= 20){
		printf("%d", 1);
	}else{
		printf("%d", 0);
	}
	
	return 0;
}
