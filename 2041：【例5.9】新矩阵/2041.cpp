#include <cstdio>

using namespace std;

int main (){
  int n, arr[25][25];
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i == j || i + j == n - 1){
        arr[i][j] += 10;
      }
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}