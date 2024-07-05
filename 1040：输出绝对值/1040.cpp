#include <cstdio>

using namespace std;

int main(){
	double n;
	scanf("%lf", &n);
	
	if(n < 0){
		n = -n;
	}
	printf("%.2lf", n);
	
	return 0;
}
