#include <cstdio>

using namespace std;

int main(){
	int a1, a2, n;
	int s;
	scanf("%d%d%d", &a1, &a2, &n);
	
	s = a1;
	for(int i = 0; i < n - 1; i++){
		s += a2 - a1;
	}
	printf("%d", s);
	
	return 0;
}
