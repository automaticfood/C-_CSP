#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	double x1, x2, x3, y1, y2, y3;
	double s, p;
	double a, b, c;
	scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
	
	a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	c = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p -b) * (p -c));
	printf("%.2lf", s);
	
	return 0;
}
