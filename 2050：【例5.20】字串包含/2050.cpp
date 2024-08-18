#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1, s2;
	
	cin >> s1 >> s2;
	if(s1.size() < s2.size()){
		string tmp = s1;
		s1 = s2;
		s2 = tmp;
	}
	for(int i = 0; i < s1.size() - 1; i++){
		if(s1.find(s2) != s1.npos){
			printf("true");
			return 0;
		}
		else{
			s1 += s1[0];
			s1.erase(0, 1);
		}
	}
	printf("false");
	
	return 0;
}
