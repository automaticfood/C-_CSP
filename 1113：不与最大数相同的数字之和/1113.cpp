#include <cstdio>

using namespace std;

int main(){
	int sum = 0, arr[105], mx = -1000001, n, tmp;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		if(arr[i] > mx) mx = arr[i];
	}
	for(int i = 0; i < n; i++){
		if(arr[i] != mx){
			sum += arr[i];
		}
	}
	printf("%d", sum);
	
	return 0;
}
