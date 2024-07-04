#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	double p, s;
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%.3lf", s);
	
	return 0;
}
