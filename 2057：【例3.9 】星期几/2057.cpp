#include <cstdio>

using namespace std;

int main(){
	int m;
	scanf("%d", &m);
	
	switch (m){
		case 1:
   			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("input error!");
	}
	
	return 0;
}
