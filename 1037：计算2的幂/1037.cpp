#include <cstdio>

using namespace std;

int main(){
	int n;
	int s = 1;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		s *= 2;
	}
	printf("%d", s);
	
	return 0;
}
