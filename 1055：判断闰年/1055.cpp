#include <cstdio>

using namespace std;

int main(){
	int year;
	char result = 'N';
	scanf("%d", &year);
	
	if (year % 100 != 0){
		if (year % 4 == 0){
			result = 'Y';
		}
	} else{
		if (year % 400 == 0) result = 'Y';
	}
	printf("%c", result);
	
	return 0;
}
