#include <cstdio>

using namespace std;

int main(){
	int n, x, y;
	int res;
	scanf("%d%d%d", &n, &x, &y);
	
	res = (int)(n - y * 1.0 / x);
	if(res < 0) res = 0;
	printf("%d", res);
	
	return 0;
}
