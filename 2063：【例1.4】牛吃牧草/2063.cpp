#include <cstdio>

using namespace std;

int main(){
	int cows1 = 15, days1 = 20;
	int cows2 = 20, days2 = 10;

	int R = (cows1 * days1 - cows2 * days2) / 10;

	printf("%d", R);

	return 0;
}

