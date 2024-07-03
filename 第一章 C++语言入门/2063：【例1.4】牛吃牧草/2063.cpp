#include <iostream>

using namespace std;

int main(){
//	有一个牧场，牧场上的牧草每天都在匀速生长，这片牧场可供 15 头牛吃 20 天，
//	或可供 20 头牛吃 10 天，那么，这片牧场每天新生的草量可供几头牛吃 1 天？
	int cows1 = 15, days1 = 20;
	int cows2 = 20, days2 = 10;
//	一头牛每天吃 C 单位的草,每天增加 R,草总量是 G
 	int C = 1;
//	15*20*C = G + 20*R
//	20*10*C = G + 10*R
//	R = 10C

	int R = (cows1 * days1 * C - cows2 * days2 * C) / 10;

	cout<<R;

	return 0;
}

