#include <cstdio>

using namespace std;

int main(){
	int k, n = 1;
	double sum = 0;
	scanf("%d", &k);

	while(sum <= k){
		sum += 1.0 / n;
		n += 1;
	}
	printf("%d", n - 1);
	return 0;
}
