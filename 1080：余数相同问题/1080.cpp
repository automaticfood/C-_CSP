#include <cstdio>

using namespace std;

int main(){
	int a, b, c, i, tmp = 0;
	int x, y, z;
	scanf("%d%d%d", &a, &b, &c);
	
	for(i = 2; tmp == 0; i++){
		x = a % i;
		y = b % i;
		z = c % i;
		if (x == y && x == z && y == z){
			tmp = 1;
			break;
		} 
	}
	printf("%d", i);
	
	return 0;
}
