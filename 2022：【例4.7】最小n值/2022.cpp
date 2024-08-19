#include <cstdio>

using namespace std;

int main(){
	int m;
	double i, s = 0;
	scanf("%d", &m);

	for(i = 1; s < m; i++){
		s += (1.0 / i);
	}
	printf("%g", i - 1);
	
	return 0;
}
