#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int n;
	double arr[300], mx, mn, avg, sum = 0, mx_x = 0;
	scanf("%d%lf", &n, &arr[0]);
	
	mx = mn = arr[0];
	sum += arr[0];
	for(int i = 1; i < n; i++){
		scanf("%lf", &arr[i]);
		sum += arr[i];
		if(arr[i] > mx){
			mx = arr[i];
			continue;
		}
		if(arr[i] < mn){
			mn = arr[i];
		}
	}
	sum -= mx + mn;
	avg = sum / (n - 2);
	for(int i = 0; i < n; i++){
		if(arr[i] == mx || arr[i] == mn) continue;
		if(abs(arr[i] - avg) > mx_x) mx_x = abs(arr[i] - avg);
	}
	printf("%.2lf %.2lf", avg, mx_x);
	
	return 0;
}
