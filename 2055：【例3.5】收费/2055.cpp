#include <cstdio>

using namespace std;

int main(){
	double weight;
	double price = 0;
	scanf("%lf", &weight);
	
	if(weight <= 20) price = 1.68;
	else price = 1.98;
	printf("%.2lf", weight * price);
	
	return 0;
}
