//k진수로 나눈 나머지를 push

#include <iostream>
#include <algorithm>

using namespace std;

int stack[100], top = -1;

void push(int x)
{
	stack[++top] = x;
}
int pop()
{
	return stack[top--];
}

int main()
{
	int n, k;
	char str[20] = "0123456789ABCDEF"; //16진수를 위해 
	
	cin >> n >> k;

	while(n > 0) {
		push(n % k);
		n /= k;
	}
	
	while(top != -1) {
		cout << str[pop()];
	}
}
