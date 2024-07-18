#include <cstdio>

using namespace std;

int main(){
	int n, arr[25];
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	for(int i = n - 1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(arr[j] < arr[j + 1]){
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%d\n", arr[i]);
	}
	
	return 0;
}
