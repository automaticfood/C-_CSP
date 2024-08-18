#include <cstdio>

using namespace std;

int arr[1000][1000];
int main() {
  int n, m;
  scanf("%d%d", &n, &m);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  for(int i = m - 1; i >= 0; i--){
  	for(int j = n - 1; j >= 0; j--){
	  if(arr[j][i] != 0) printf("%d %d %d\n", j + 1, i + 1, arr[j][i]);
	}
  }

  return 0;
}
