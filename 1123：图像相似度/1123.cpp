#include <cstdio>

using namespace std;

int main(){
	int m, n, arr1[100][100], arr2[100][100];
	int sum = 0;
	
	scanf("%d%d", &m, &n);
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &arr1[i][j]);
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &arr2[i][j]);
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(arr1[i][j] == arr2[i][j]){
				sum++;
			}
		}
	}
	printf("%.2lf", 100.0 * sum / (m * n));
	
	return 0;
}
