#include <cstdio>

using namespace std;

int main(){
	int n;
	int a, b, c;
	scanf("%d", &n);
	
	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;
	printf("%d%d%d", c, b, a);
	
	return 0;
}
