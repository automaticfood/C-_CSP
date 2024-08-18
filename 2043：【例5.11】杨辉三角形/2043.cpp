#include <cstdio>

using namespace std;

int main() {
  int n, arr[20][20];
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      if (i == j || j == 0) {
        arr[i][j] = 1;
      } else {
        arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
