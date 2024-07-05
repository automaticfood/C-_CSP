#include <cstdio>

using namespace std;

int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	
	if(m >= 60 && n < 60 || m < 60 && n >=60) printf("1");
	else printf("0");
	
	return 0;
}
