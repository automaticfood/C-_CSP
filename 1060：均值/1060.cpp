#include <cstdio>

using namespace std;

int main(){
	int n;
	double sum, temp;
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%lf", &temp);
		sum += temp;
	}
	printf("%.4lf", sum / n);
	
	return 0;
}
