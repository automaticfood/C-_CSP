#include <cstdio>

using namespace std;

int main(){
	int n, arr[10005], x, flag = false;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	scanf("%d", &x);
	for(int i = 0; i < n; i++){
		if(arr[i] == x){
			printf("%d", i + 1);
			flag = true;
			break;
		}
	}
	if(!flag){
		printf("-1");
	}
	return 0;
}
