#include <cstdio>

using namespace std;

int main(){
	int L, M, arr[10005] = {}, start, end, num = 0;
	scanf("%d%d", &L, &M);

	for(int i = 0; i < M; i++){
		scanf("%d%d", &start, &end);
		for(int j = start; j <= end; j++){
			arr[j] = 1;
		}
	}
	for(int i = 0; i <= L; i++){
		if(arr[i] == 0) num++;
	}
	printf("%d", num);
	
	return 0;
}
