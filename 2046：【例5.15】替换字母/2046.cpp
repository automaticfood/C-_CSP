#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int n;
	char t[201], a, b;
	fgets(t, sizeof(t), stdin);
	n = strlen(t);
	scanf("%c %c", &a, &b);
	for(int i = 0; i < n - 1; i++){
		if(t[i] == a){
			t[i] = b;
		}
		printf("%c", t[i]);
	}
	
	return 0;
}
