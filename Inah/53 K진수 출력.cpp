//k������ ���� �������� push

#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
	stack<int> s;
	int n, k;
	char str[20] = "0123456789ABCDEF"; //16������ ���� 
	
	scanf("%d %d", &n, &k);

	while(n > 0) {
		s.push(n % k);
		n /= k;
	}
	
	while(!s.empty()) {
		printf("%c", str[s.top()]); //top()�� �������� 
		s.pop(); //������� 
	}
}
