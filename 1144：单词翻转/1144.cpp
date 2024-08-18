#include <iostream>
#include <string>

using namespace std;

int main(){
	int i = 0,n = 0, sum = 0, start = 0;
	string s;
	getline(cin, s);
	s += ' ';
	for(i = 0; i < s.size(); i++){
		if(s[i] != ' '){
			sum++;
		}
		else{
			for(int j = i - 1; j >= i - sum; j--){
				cout << s[j];
			}
			cout << " ";
			sum = 0;
		}
	}
	
	return 0;
}