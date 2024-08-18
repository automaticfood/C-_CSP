#include <iostream>
#include <string>

using namespace std;

int main(){
	int a = 0;
	string s;
	getline(cin, s);
	
	for(int i = 0; i < s.size(); i++){
		a = 0;
		for(int j = 0; j < s.size(); j++){
			if(s[j] == s[i]){
				a++;
			}
			if(a >= 2){
				break;
			}
		}
		if(a == 1){
			cout << s[i];
			return 0;
		}
	}
	printf("no");
	
	return 0;
}
