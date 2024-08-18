#include <iostream>
#include <string>

using namespace std;

int main(){
	int sum = 0;
	int mx = 0, mxi = 0;
	int mn = 99999, mni = 0;
	string s;
	getline(cin, s);
	
	for(int i = 0; i < s.size(); i++){
		if(s[i] != ' ' && s[i] != ','){
			sum++;
		}
		else if(sum > 0){
			if(sum > mx){
				mx = sum;
				mxi = i;
			}
			if(sum < mn){
				mn = sum;
				mni = i;
			}
			sum = 0;
		}
	}
	for(int i = mxi - mx; i < mxi; i++){
		cout << s[i];
	}
	cout << endl;
	for(int i = mni - mn; i < mni; i++){
		cout << s[i];
	}
	
	return 0;
}