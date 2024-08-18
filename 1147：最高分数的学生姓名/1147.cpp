#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	int score, mxscore = 0;
	string name, mxname = "";
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> score >> name;
		if(score > mxscore){
			mxscore = score;
			mxname = name;
		}
	}
	cout << mxname;
	
	return 0;
}