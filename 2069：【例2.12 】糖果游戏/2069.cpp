#include <cstdio>

using namespace std;

int main(){
	int a[5];
	
	for(int i = 0; i < 5; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < 5; i++){
		int remain = a[i] / 3;
		a[(i + 1) % 5] = a[(i + 1) % 5] + remain;
		a[(i + 4) % 5] = a[(i + 4) % 5] + remain;
		a[i] = remain;
	}
	for(int i = 0; i < 5; i++){
		printf("%5d", a[i]);
	}
}
