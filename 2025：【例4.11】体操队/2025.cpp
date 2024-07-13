#include <cstdio>

using namespace std;

int main(){
	int i;
	bool b = true;
	
	for(i = 0; b; i++){
		if (i % 2 == 1 && i % 3 == 1 && i % 4 == 1 && i % 5 == 1 && i % 6 == 1 && i % 7 != 0){
			b = false;
		}
	}
	printf("%d", i + 1);
	
	return 0;
}
