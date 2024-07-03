#include <iostream>

using namespace std;

int main(){
	double x,a,y,b,z;
	scanf("%lf%lf%lf%lf",&x,&a,&y,&b);
	
//	现有资源 G，新增为 R，每亿人消耗速度为 C =1个单位 
	double G,R,C=1;
	
//	x*a*C = G + R * a
//	y*b*C = G + R * b
	R = (y*b - x*a)/(b-a);
	
	printf("%.2lf",R);
}
