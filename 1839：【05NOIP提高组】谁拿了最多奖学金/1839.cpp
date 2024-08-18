#include<string>
#include <iostream>

using namespace std;

int main(){
	int n, avgscore, classcore, write;
	int money = 0;
	int maxmoney = 0;
	int summoney = 0;
	char gb, xb;
	string name;
	string maxname = "";

	cin >> n;
	for(int i = 0; i < n; i++){
		money = 0;
		cin >> name;
		cin >> avgscore >> classcore >> gb >> xb >> write;
		if(avgscore > 80 && write > 0){
			money += 8000;
		}
		if(avgscore > 85 && classcore > 80){
			money += 4000;
		}
		if(avgscore > 90){
			money += 2000;
		}
		if(avgscore > 85 && xb == 'Y'){
			money += 1000;
		}
		if(classcore > 80 && gb == 'Y') {
			money += 850;
		}
		summoney += money;
		if(money > maxmoney){
			maxname = name;
			maxmoney = money;
		}
	}
	cout << maxname << endl << maxmoney << endl << summoney;
	
	return 0;
}
