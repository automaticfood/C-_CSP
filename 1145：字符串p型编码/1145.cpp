#include <iostream>
#include <string>

using namespace std;

int main(){
	int num = 1;
	char pre;
	string s;
	cin >> s;
	pre = s[0];
	for(int i = 1; i < s.size(); i++){
		if(s[i] == pre){
			num++;
		}
		else{
			cout << num << pre;
			pre = s[i];
			num = 1;
		}
	}
	cout << num << pre;
	
	return 0;
}