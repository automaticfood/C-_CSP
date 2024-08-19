#include <cstdio>
#include <cmath>

using namespace std;

struct house{
	double x, y;
	int p;
};

int main(){
	int n;
	double times = 0;
	scanf("%d", &n);
	
	house* hou = new house[n];
	for(int i = 0; i < n; i++){
		scanf("%lf%lf%d", &hou[i].x, &hou[i].y, &hou[i].p);
	}
	for(int i = 0; i < n; i++){
		times += sqrt(hou[i].x * hou[i].x + hou[i].y * hou[i].y) / 50 * 2 + 1.5 * hou[i].p;
	}
	printf("%g", ceil(times));
	
	return 0;
}
