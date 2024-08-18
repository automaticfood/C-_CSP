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
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(i == 0 || i == n - 1 || j == 0 || j == m - 1){
				printf("%d ", a[i][j]);
			}
			else{
				printf("%d ", (int)(1.0 * (a[i][j] + a[i - 1][j] + a[i][j - 1] + a[i][j + 1] + a[i + 1][j]) / 5 + 0.5));
			}
		}
		printf("\n");
	}
	
	return 0;
}
