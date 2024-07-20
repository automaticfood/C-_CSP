#include <cstdio>

using namespace std;

int main(){
	int tmp, M, mx = 0, mn = 10000;
	scanf("%d", &M);
	
	for(int i = 0; i < M; i++){
		scanf("%d", &tmp);
		if(tmp > mx) mx = tmp;
		else if(tmp < mn) mn = tmp;
	}
	printf("%d", mx - mn);
	
	return 0;
}
