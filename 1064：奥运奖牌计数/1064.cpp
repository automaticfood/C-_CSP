#include <cstdio>

using namespace std;

int main(){
	int n, x, y, z, tmp;
	int x_sum = 0, y_sum = 0, z_sum = 0, sum = 0;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d%d%d", &x, &y, &z);
		x_sum += x;
		y_sum += y;
		z_sum += z;
		sum = x_sum + y_sum + z_sum;
	}
	printf("%d %d %d %d", x_sum, y_sum, z_sum, sum);
	
	return 0;
}
