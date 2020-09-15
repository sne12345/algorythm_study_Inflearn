#include <iostream>
#include <stack>

using namespace std;

void recursion(int n)
{
	if(n == 0) return;
	else {
		recursion(n - 1);
		cout << n;
	}
}

int main ()
{
	stack<int> s;
	int n;
	
	cin >> n;
	
	recursion(n);
	
	return 0;
}
