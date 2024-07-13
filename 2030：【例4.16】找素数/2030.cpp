#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int a, b;
	bool flag;
	scanf("%d%d", &a, &b);
	
	for(int i = a; i <= b; i++){
		flag = true;
		for(int j = 2; j <= sqrt(i); j++){
			if(i % j == 0) flag = false;
		}
		if(flag){
			printf("%d\n", i);
		}
	}
	
	return 0;
}
