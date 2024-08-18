#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	int l;
	
	cin >> s;
	l = s.size() - 1;
	if((s[l] == 'r' && s[l - 1] == 'e') || (s[l] == 'y' && s[l - 1] == 'l')){
		s.erase(l - 1, 2);
	}
	if(s[l] == 'g' && s[l - 1] == 'n' && s[l - 2] == 'i'){
		s.erase(l - 2, 3);
	}
	cout << s;
	
	return 0;
}