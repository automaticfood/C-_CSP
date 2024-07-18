#include <cstdio>

using namespace std;

int main(){
	int n, arr[100], m, num = 0;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	for(int i = 0; i < n; i++){
		if(arr[i] == m) num++;
	}
	printf("%d", num);
	
	return 0;
}
