#include <cstdio>

using namespace std;

int main(){
	int n, i, j, arr[10][10];
	scanf("%d%d%d", &n, &i, &j);
	
//	同一行
	for(int k = 0; k < n; k++){
		printf("(%d,%d) ", i, k + 1);
	}
	printf("\n");
//	同一列
	for(int k = 0; k < n; k++){
		printf("(%d,%d) ", k + 1, j);
	}
	printf("\n");
//  左上到右下
	for(int k = 0; k < n; k++){
		for(int l = 0; l < n; l++){
			if(l - k == j - i){
				printf("(%d,%d) ", k + 1, l + 1);
			}
		}
	}
	printf("\n");
//    左下到右上
	for(int k = 0; k < n; k++){
		for(int l = 0; l < n; l++){
			if(l + k + 2 == j + i){
				printf("(%d,%d) ", l + 1, k + 1);
			}
		}
	}
	
	return 0;
}
