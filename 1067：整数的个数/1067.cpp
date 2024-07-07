#include <cstdio>

using namespace std;

int main(){
	int k, tmp, x = 0, y = 0, z = 0;
	scanf("%d", &k);
	
	for(int i = 0; i < k; i++){
		scanf("%d", &tmp);
		if (tmp == 1) x++;
		if (tmp == 5) y++;
		if (tmp == 10) z++;
	}
	printf("%d\n%d\n%d", x, y, z);
	
	return 0;
}
