#include <cstdio>

using namespace std;

int main(){
	long long m, n, tmp, t;
	scanf("%lld%lld", &m, &n);
	
	if(m < n) {
		tmp = m;
	} else {
		tmp = n;
	}
	for(int i = 1; i <= tmp; i++){
		if (m % i == 0 && n % i == 0){
			t = i;
		}
	}
	printf("%lld", t);
	
	return 0;
}
