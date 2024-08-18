#include <iostream>
#include <string>

using namespace std;

int main(){
	string s, s1 = "";
	int i;
	cin >> s;
	for(i = 0; i < s.size() - 1; i++){
		s1 += s[i] + s[i + 1];
	}
	s1 += s[i] + s[0];
	cout << s1;
	
	return 0;
}