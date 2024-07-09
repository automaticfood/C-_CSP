#include <cstdio>

using namespace std;

int main(){
	double h, rev, sum, tmp;
	scanf("%lf", &h);
	
	sum = h;
	for(int i = 0; i < 9; i++){
		h = h / 2;
		sum += 2 * h;
	}
	printf("%g\n%g", sum, h / 2);
	
	return 0;
}
