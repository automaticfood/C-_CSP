#include <cstdio>

using namespace std;

int main(){
	int tmp;
	double sum = 0;
	double arr[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};

	for(int i = 0; i < 10; i++){\
		scanf("%d", &tmp);
		sum += tmp * arr[i];
	}
	printf("%.1lf", sum);
	
	return 0;
}
