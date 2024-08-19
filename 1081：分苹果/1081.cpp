#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	double n;
	scanf("%lf", &n);
	
	printf("%g", ceil((1 + n) * n / 2));
	
	return 0;
}
