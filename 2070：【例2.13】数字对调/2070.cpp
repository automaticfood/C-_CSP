#include <cstdio>

using namespace std;

int main(){
	int a, result;
	int b, s, g;
	scanf("%d", &a);
	
	g = a % 10;
	s = a / 10 % 10;
	b = a / 100;
	printf("%d",100 * g + s * 10 + b);
	
	return 0;
}
