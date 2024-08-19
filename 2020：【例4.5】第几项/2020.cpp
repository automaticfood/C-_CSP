#include <cstdio>

using namespace std;

int main(){
	int m, n = 1, s = 0;
	scanf("%d", &m);
	
	while(s < m){
		s += n;
		n++;
	}
	printf("%d", n - 1);
}
