#include <cstdio>

using namespace std;

int main() {
  int n, fmax = -1, arr[10005], num[10005], tmp;
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++){
    scanf("%d", &tmp);
    arr[i] = tmp;
    if(arr[i] > fmax) fmax = arr[i];
  }
  for(int i = 0; i < n; i++){
    if(arr[i] <= fmax) num[arr[i]]++;
  }
  for(int i = 0; i <= fmax; i++){
    printf("%d\n", num[i]);
  }

  return 0;
}
