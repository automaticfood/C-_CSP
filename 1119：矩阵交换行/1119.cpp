#include <cstdio>

using namespace std;

int main(){
	int n, m, arr[5][5], tmp;
//	��������Ҫ����������
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d%d", &n, &m);
	n--;
	m--;
//	��������
	for(int i = 0; i < 5; i++){
		tmp = arr[n][i];
		arr[n][i] = arr[m][i];
		arr[m][i] = tmp;
	}
//	�������
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
