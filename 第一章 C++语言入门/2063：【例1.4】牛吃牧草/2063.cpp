#include <iostream>

using namespace std;

int main(){
//	��һ�������������ϵ�����ÿ�춼��������������Ƭ�����ɹ�15ͷţ��20�죬
//	��ɹ�20ͷţ��10�죬��ô����Ƭ����ÿ�������Ĳ����ɹ���ͷţ��1�죿
	int cows1 = 15,days1 = 20;
	int cows2 = 20,days2 = 10;
//	ÿ��� C����,ÿ������ R,�������� G 
 	int C = 1;
//	15*20*C = G + 20*R
//	20*10*C = G + 10*R

	int R = (cows1*days1*C - cows2*days2*C)/10;
	
	cout<<R;
	
	return 0;
}
