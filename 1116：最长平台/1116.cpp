#include <cstdio>

using namespace std;

int main (){
  int n, arr[1000], mx = 0, tmp = 0;
  scanf("%d", &n);
  
  scanf("%d", &arr[0]);
  for(int i = 1; i < n; i++){
    scanf("%d", &arr[i]);
    if(arr[i] == arr[i - 1]) {
      tmp++;
      if(tmp > mx) mx = tmp;
    }
    else{
      tmp = 0;
    }
  }
  printf("%d", mx);
}