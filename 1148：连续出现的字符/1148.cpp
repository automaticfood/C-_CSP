#include <iostream>
#include <string>

using namespace std;

int main(){
	int k, num = 1;
	string s;
	char pre;
	
	cin >> k >> s;
	pre = s[0];
	for(int i = 1; i < s.size(); i++){
		if(s[i] == pre){
			num++;
		}
		else{
			if(num >= k){
				cout << s[i - 1];
				return 0;
			}
			pre = s[i];
			num = 1;
		}
	}
	if(num >= k){
		cout << pre;
	}
	else{
		cout << "No";
	}
	
	return 0;
}