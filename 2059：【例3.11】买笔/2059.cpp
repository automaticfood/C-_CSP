#include <cstdio>

using namespace std;

int main(){
	int a, b, c, x, remain;
	scanf("%d", &x);
	
	c = x / 4;
	remain = x % 4;
	switch (remain){
		case 0:
			a = 0;
			b = 0;
			break;
		case 1:
			a = 0;
			b = 1;
			c = c - 1;
			break;
		case 2:
			a = 1;
			b = 0;
			c = c - 1;
			break;
		case 3:
			a = 1;
			b = 1;
			c = c - 2;
			break;
	}
	printf("%d %d %d", a, b, c);
	
	return 0;
}
