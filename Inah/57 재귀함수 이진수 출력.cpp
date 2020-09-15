#include <iostream>

using namespace std;

void to_binary(int n)
{
	if(n == 0) return;
	else {
		to_binary(n / 2);
		cout << n % 2;
	}
}
//재귀에서 스택이 비면 메인으로 감 

int main ()
{
	int n;
	cin >> n;
	
	to_binary(n);
	
	return 0;
}
