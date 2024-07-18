#include <cstdio>

using namespace std;

int main(){
	double n, arr[105], sum, a = 0, b = 0, c = 0, d = 0;
	scanf("%lf", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%lf", &arr[i]);
		if(arr[i] >= 0 && arr[i] <= 18) a++;
		else if(arr[i] >= 19 && arr[i] <= 35) b++;
		else if(arr[i] >= 36 && arr[i] <= 60) c++;
		else if(arr[i] >61) d++;
	}
	sum = a + b + c + d;
	printf("%.2lf%%\n%.2lf%%\n%.2lf%%\n%.2lf%%", a / sum * 100, b / sum * 100, c / sum * 100, d / sum * 100);
}
