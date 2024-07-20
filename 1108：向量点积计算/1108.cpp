#include <cstdio>

using namespace std;

int main(){
	int n, arr1[1005], arr2[1005], sum = 0;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr1[i]);
	}
	for(int i = 0; i < n; i++){
		scanf("%d", &arr2[i]);
	}
	for(int i = 0; i < n; i++){
		sum += arr1[i] * arr2[i];
	}
	printf("%d", sum);
	
	return 0;
}
