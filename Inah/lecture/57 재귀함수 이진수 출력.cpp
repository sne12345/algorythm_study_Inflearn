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

int main ()
{
	int n;
	cin >> n;
	
	to_binary(n);
	
	return 0;
}
