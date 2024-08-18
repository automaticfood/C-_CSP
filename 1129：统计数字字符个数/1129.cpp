#include <iostream>
#include <string>

using namespace std;

int main(){
	int sum = 0;
	string s;
	getline(cin, s);
	
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= '0' && s[i] <= '9'){
			sum++;
		}
	}
	cout << sum;
	
	return 0;
}
