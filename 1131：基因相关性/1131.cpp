#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1, s2;
	int sum = 0;
	double n;
	cin >> n >> s1 >> s2;
	for(int i = 0; i < s1.size(); i++){
		if(s1[i] == s2[i]){
			sum++;
		}
	}
	if(1.0 * sum / s1.size() >= n){
		cout << "yes";
	}
	else{
		cout << "no";
	}
	
	return 0;
}
