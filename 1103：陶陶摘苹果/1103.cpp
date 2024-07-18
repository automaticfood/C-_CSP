#include <cstdio>

using namespace std;

int main(){
	int arr[10], height, num = 0;
	
	for(int i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	scanf("%d", &height);
	for(int i = 0; i < 10; i++){
		if(arr[i] <= height + 30) num++;
	}
	printf("%d", num);

	return 0;
}
