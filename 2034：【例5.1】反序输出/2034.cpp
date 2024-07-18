#include <cstdio>

using namespace std;

int main(){
	int arr[100], n = 0;
	
	while(scanf("%d", &arr[n]) != EOF){
		n++;
	}
	for(int i = n - 1; i >= 0; i--){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
