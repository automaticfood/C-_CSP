#include <cstdio>

using namespace std;

int main(){
	int n, m, arr1[100][100], arr2[100][100], res[100][100];
	
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &arr1[i][j]);
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &arr2[i][j]);
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			res[i][j] = arr1[i][j] + arr2[i][j];
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
