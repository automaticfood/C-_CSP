#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	string s[100];
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
	for(int i = 0; i < n; i++){
		if(s[i][0] >= 'a' && s[i][0] <= 'z'){
			s[i][0] = s[i][0] - 32;
		}
		for(int j = 1; j < s[i].size(); j++){
			if(s[i][j] >= 'A' && s[i][j] <= 'Z'){
				s[i][j] = s[i][j] + 32;
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout << s[i] << endl;
	}
	
	return 0;
}