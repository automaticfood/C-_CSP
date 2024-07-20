#include <cstdio>

using namespace std;

int main(){
	int N, M, arr[5005] = {};
	bool first = true;
	scanf("%d%d", &N, &M);
	
	for(int i = 1; i <= M; i++){
		for(int j = 1; j <= N; j++){
			if(j % i == 0){
				arr[j] = !arr[j];
			}
		}
	}
	for(int i = 1; i <= N; i++){
		if(arr[i] == 1){
			if(!first){
				printf(",");
			}
			printf("%d", i);
			first = false;
		}
	}
	
	return 0;
}
