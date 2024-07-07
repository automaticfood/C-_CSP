#include <cstdio>

using namespace std;

int main(){
	int N, m, sum = 0, tmp;
	scanf("%d%d", &N, &m);
	for(int i = 0; i < N; i++){
		scanf("%d", &tmp);
		if(tmp == m) sum++;
	}
	printf("%d", sum);
	
	return 0;
}
