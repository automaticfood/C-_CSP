#include <cstdio>

using namespace std;

int main(){
	int weight, price, fee = 0;
	char c;
	scanf("%d %c", &weight, &c);
	
	if (c == 'y') fee = 5;
	if(weight <= 1000){
		price = 8 + fee;
	}
	else{
		if ((weight - 1000) % 500 == 0){
			price = (weight - 1000) / 500 * 4 + 8 + fee;
		} else{
			price = (weight - 1000) / 500 * 4 + 4 + 8 + fee;
		}
	}
	printf("%d", price);
	
	return 0;
}
