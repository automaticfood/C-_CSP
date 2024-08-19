#include <cstdio>

using namespace std;

int main(){
	long long a, b, c = 1;
	scanf("%lld%lld", &a, &b);
	
	for(int i = 0; i < b; i++){
		c *= a;
		c %= 1000;
	}
	printf("%lld", c);
	
	return 0;
}
