#include <cstdio>

using namespace std;

int main(){
	int arr[50], n, tmp;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	tmp = arr[0];
	for(int i = 0; i < n - 1; i++){
		arr[i] = arr[i + 1];
	}
	arr[n - 1] = tmp;
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
