#include <cstdio>

using namespace std;

int main(){
	double avg;
	int x, y;
	scanf("%d%d", &x, &y);
	
	avg = (double)(x * 87 + y * 85) / (x + y);
	printf("%.4lf", avg);
	
	return 0;
}
