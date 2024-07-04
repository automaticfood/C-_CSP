#include <cstdio>
#define PI 3.14159

using namespace std;

int main(){
	int r, h;
	double v,total;
	scanf("%d%d", &h, &r);
	
	v = PI * r * r * h;
	total = 20000 / v;
	printf("%d", total > (int)total ? (int)(total + 1) : (int)total);
	
	return 0;
}
