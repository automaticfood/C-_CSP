#include <cstdio>

using namespace std;

int main(){
	double k, m, n;
	scanf("%lf", &k);
	
	m = 27 + 23 + k / 3;
	n = k / 1.2;
	if(m == n) printf("ALL");
	if(m < n) printf("Bike");
	if (m > n) printf("Walk");
	
	return 0;
}
