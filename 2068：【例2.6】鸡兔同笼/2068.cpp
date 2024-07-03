#include <cstdio>

using namespace std;

int main(){
	int x, y;
	scanf("%d%d", &x, &y);
	
	printf("%d %d", (4*x - y) / 2, x - (4*x - y) / 2);

	return 0;
}
