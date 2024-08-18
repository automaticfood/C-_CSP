#include <cstdio>

using namespace std;

int main(){
	int m, n, arr[100][100], sum = 0;
	scanf("%d%d", &m, &n);
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i = 0; i < n; i++){
		sum += arr[0][i];
		sum += arr[m - 1][i];
	}
	for(int i = 0; i < m; i++){
		sum += arr[i][0];
		sum += arr[i][n - 1];
	}
	sum -= arr[0][0] + arr[0][n - 1] + arr[m - 1][0] + arr[m - 1][n - 1];
	printf("%d", sum);
	
	return 0;
}
