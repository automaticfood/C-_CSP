#include <cstdio>

using namespace std;

int main(){
	double a, b;
	scanf("%lf%lf", &a, &b);
	
	printf("%.3lf%%", b / a * 100);
	
	return 0;
}
