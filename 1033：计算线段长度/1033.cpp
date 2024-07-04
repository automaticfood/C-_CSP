#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	double xa, ya, xb, yb;
	double x, y;
	scanf("%lf%lf\n%lf%lf", &xa, &ya, &xb, &yb);
	
	y = abs(yb - ya);
	x = abs(xa - xb);
	printf("%.3lf", sqrt(y * y + x * x));
	
	return 0;
}
