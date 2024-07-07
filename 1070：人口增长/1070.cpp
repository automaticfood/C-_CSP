#include <cstdio>

using namespace std;

int main(){
	double n, x;
	scanf("%lf%lf", &x, &n);
	
	for(int i = 0; i < n; i++){
		x = x + x * 0.001;
	}
	printf("%.4lf", x);
}
