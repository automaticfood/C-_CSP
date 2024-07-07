#include <cstdio>

using namespace std;

int main(){
	int n, mn = 1001, mx = 0, tmp;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &tmp);
		if (tmp > mx){
			mx = tmp;
		}
		if (tmp < mn){
			mn = tmp;
		}
	}
	printf("%d", mx - mn);
	
	return 0;
}
