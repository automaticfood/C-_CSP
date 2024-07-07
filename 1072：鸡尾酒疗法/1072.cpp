#include <cstdio>
#include <string>

using namespace std;

int main(){
	int n, tmp1, tmp2;
	double chick, arr[100];
	scanf("%d", &n);
	scanf("%d%d", &tmp1, &tmp2);
	
	chick = 1.0 * tmp2 / tmp1 * 100;
	for(int i = 0; i < n - 1; i++){
		scanf("%d%d", &tmp1, &tmp2);
		arr[i] = 1.0 * tmp2 / tmp1 * 100;
	}
	for(int i = 0; i < n - 1; i++){
		double dif = arr[i] - chick;
		if (dif > 5.0){
			printf("better\n");
		} else if (dif < -5.0){
			printf("worse\n");
		} else{
			printf("same\n");
		}
	}
	
	return 0;
}
