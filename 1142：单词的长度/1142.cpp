#include <string>
#include <iostream>

using namespace std;

int main(){
	string s;
	
	cin >> s;
	cout << s.length();
	while(cin >> s){
		cout << "," << s.length() ;
	}
	
	return 0;
}