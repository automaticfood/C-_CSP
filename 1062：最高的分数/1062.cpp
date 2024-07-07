#include <cstdio>

using namespace std;

int main(){
	int n, mx = 0, temp;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &temp);
		if(temp > mx) mx = temp;
	}
	printf("%d", mx);
	
	return 0;
}
