#include <cstdio>

using namespace std;

int main(){
	int n, sum, tmp;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &tmp);
		sum += tmp;
	}
	printf("%d %.5lf", sum, 1.0 * sum / n);
	
	return 0;
}
