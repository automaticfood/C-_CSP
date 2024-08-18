#include <cstdio>

using namespace std;

int main(){
	int arr[5][5], mx, mn;
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i = 0; i < 5; i++){
		mx = 0;
		for(int j = 0; j < 5; j++){
			if(arr[i][j] > arr[i][mx]){
				mx = j;
			}
		}
		mn = i;
		for(int j = 0; j < 5; j++){
			if(arr[j][mx] < arr[i][mx]){
				mn = j;
				break;
			}
		}
		if(mn == i){
			printf("%d %d %d", i + 1, mx + 1, arr[i][mx]);
			return 0;
		}
	}
	
	return 0;
}
