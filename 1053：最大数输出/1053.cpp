#include <cstdio>

using namespace std;

int main(){
	int x, y, z, mx;
	scanf("%d%d%d", &x, &y, &y);
	
	mx = x;
	if (y > mx) mx = y;
	if (z > mx) mx = z;
	printf("%d", mx);
	
	return 0;
}
