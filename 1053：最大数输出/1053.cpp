#include <cstdio>

using namespace std;

int main(){
	int a, b, c, mx;
	scanf("%d%d%d", &a, &b, &c);
	
	if (a > b){
		mx = a;
	} else {
		mx = b;
	}
	if (mx < c){
		mx = c;
	}
	
	printf("%d", mx);
}
