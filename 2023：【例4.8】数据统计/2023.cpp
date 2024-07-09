#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int mn = 1000, mx = 0, tmp, sum = 0;
	double avg;
	
	int i = 0;
    while(scanf("%d", &tmp)!=EOF){
    	i++;
		if (tmp > mx) {
			mx = tmp;
		}
		if (tmp < mn) {
			mn = tmp;
		}
		sum += tmp;
    }
    printf("%d %d %.3lf", mn, mx, 1.0 * sum / i);
    
    return 0;
}
