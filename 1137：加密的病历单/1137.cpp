#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string s, dec;
	int x;
	cin >> s;
	x = 'a' - 'A';
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] = s[i] - x;
		}
		else{
			s[i] = s[i] + x;
		}
	}
	reverse(s.begin(), s.end());
	for(int i = 0; i < s.size(); i++){
		if((s[i] >= 'a' && s[i] <= 'w') || (s[i] >= 'A' && s[i] <= 'W')){
			s[i] = s[i] + 3;
		}
		else{
			s[i] = s[i] - 23;
		}
	}
	cout << s;
	
	return 0;
}