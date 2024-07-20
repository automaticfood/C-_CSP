#include <cstdio>

using namespace std;

int main(){
	int arr[10], school, home, day = 0, mx = 0;

	for(int i = 0; i < 7; i++){
		scanf("%d%d", &school, &home);
		arr[i] = school + home;
		if(arr[i] > 8){
			if(arr[i] > mx){
				mx = arr[i];
				day = i + 1;
			}
		}
	}
	printf("%d", day);
	
	return 0;
}
