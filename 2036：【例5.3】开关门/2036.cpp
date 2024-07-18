#include <cstdio>

using namespace std;

int main(){
	int n;
	bool arr[1005] = {};
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(j % i == 0){
				arr[j] = !arr[j];
			}
		}
	}
	for(int i = 1; i <= n; i++){
		if(arr[i]) printf("%d ", i);
	}
	
	return 0;
}
