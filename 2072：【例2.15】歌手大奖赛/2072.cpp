#include <cstdio>

using namespace std;

int main(){
	double all = 9.6 * 6;
	
	printf("%5.2lf", ((all - (all - 9.4 * 5) - (all - 9.8 * 5)) / 4));
	
	return 0;
}
