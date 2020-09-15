//k진수로 나눈 나머지를 push

#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
	stack<int> s;
	int n, k;
	char str[20] = "0123456789ABCDEF"; //16진수를 위해 
	
	scanf("%d %d", &n, &k);

	while(n > 0) {
		s.push(n % k);
		n /= k;
	}
	
	while(!s.empty()) {
		printf("%c", str[s.top()]); //top()은 참조만함 
		s.pop(); //빼줘야함 
	}
}
