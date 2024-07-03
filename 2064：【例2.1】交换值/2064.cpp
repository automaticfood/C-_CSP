#include <iostream>

using namespace std;

int main(){
	int a, b;
	int t;
	scanf("%d%d", &a, &b);
	
	t = a;
	a = b;
	b = t;
	
	cout << a << " " << b;
	
	return 0
}
