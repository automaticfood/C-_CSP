#include <cstdio>

using namespace std;

int main(){
	int arr[1005], n, m;
	scanf("%d%d", &n, &m);
	
	for(int i = 0; i < n; i++){
		arr[i] = i + 1;
	}
	int index = 0;
	int remain = n;
	while(remain > 0){
		index = (index + m - 1) % remain;
		printf("%d ", arr[index]);
		for(int i = index; i < remain - 1; i++){
			arr[i] = arr[i + 1];
		}
		remain--;
	}
	
	return 0;
}
