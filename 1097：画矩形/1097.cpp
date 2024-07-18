#include <cstdio>

using namespace std;

int main(){
	int height, width, flag;
	char c;
	scanf("%d%d %c%d", &height, &width, &c, &flag);
	
	for(int i = 0; i < height; i++){
		if(flag){
			for(int j = 0; j < width; j++){
				printf("%c",c);
			}
		} else{
			if(i == 0 || i == height - 1){
				for(int j = 0; j < width; j++){
					printf("%c", c);
				}
			} else{
				for(int j = 0; j < width; j++){
					if(j == 0 || j == width -1){
						printf("%c", c);
					}else{
						printf(" ");
					}
				}
			}
		}
		printf("\n");
	}
}
