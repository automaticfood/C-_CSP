#include <cstdio>

using namespace std;

int main(){
	int n, m, a[100][100];
	scanf("%d%d", &n, &m);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
