#include <iostream>

using namespace std;

int main(){
	double x,a,y,b,z;
	scanf("%lf%lf%lf%lf",&x,&a,&y,&b);
	
//	������Դ G������Ϊ R��ÿ���������ٶ�Ϊ C =1����λ 
	double G,R,C=1;
	
//	x*a*C = G + R * a
//	y*b*C = G + R * b
	R = (y*b - x*a)/(b-a);
	
	printf("%.2lf",R);
}
