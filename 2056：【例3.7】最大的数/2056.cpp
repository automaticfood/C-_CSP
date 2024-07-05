#include <cstdio>

using namespace std;

int main(){
	double a, b, c;
	double mx;
	scanf("%lf%lf%lf", &a, &b, &c);
	
//	mx = a > b ? a : b;
//	mx = mx > c ? mx : c;
//	printf("%g", mx);
//
//	mx = a;
//	if(mx < b){
//		mx = b;
//	}
//	if(mx < c){
//		mx = c;
//	}
//	printf("%g", mx);

	if(a >= b){
		if(a >= c){
			mx = a;
		} else{
			mx = c;
		}
	} else{
		if(b >= c){
			mx = b;
		} else{
			mx = c;
		}
	}
	printf("%g", mx);

	return 0;
}
