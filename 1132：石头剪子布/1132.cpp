#include <iostream>
#include <string>

using namespace std;

int main(){
	int N;
	string s1, s2, winner;
	string res[100];
	
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> s1 >> s2;
		if(s1 == "Rock" && s2 == "Scissors"){
			winner = "Player1";
		}
		else if(s1 == "Scissors" && s2 == "Paper"){
			winner = "Player1";
		}
		else if(s1 == "Paper" && s2 == "Rock"){
			winner = "Player1";
		}
		else if(s1 == s2){
			winner = "Tie";
		}
		else {
			winner = "Player2";
		}
		res[i] = winner;
	}
	for(int i = 0; i < N; i++){
		cout << res[i] << endl;
	}
	
	return 0;
}