#include <cstdio>

using namespace std;

int main(){
	int n, arr[1005], i = 0, mx = 0, res;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		if(arr[i] > mx){
			mx = arr[i];
			res = i;
		}
	}
	printf("%d", res + 1);
	
	return 0;
}
