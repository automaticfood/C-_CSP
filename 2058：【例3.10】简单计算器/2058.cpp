#include <iostream>

using namespace std;

int main(){
	double m, n;
	char op;
	cin >> m >> n >> op;
	
	switch (op){
		case '+':
			cout << m + n;
			break;
		case '-':
			cout << m - n;
			break;
		case '*':
			cout << m * n;
			break;
		case '/':
			if (n == 0) {
				cout << "Divided by zero!";
				break;
			} else{
				cout << m / n;
				break;
			}
		default:
			printf("Invalid operator!");
	}
}
