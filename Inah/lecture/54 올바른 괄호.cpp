#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main ()
{
	//fropen("input.txt", "rt", stdin);
	stack<char> s;
	char a[50];
	int i, flag = 1;

	scanf("%s", &a);
	
	for(int i = 0; a[i] != '\0'; i++) {
		if(a[i] == '(') s.push(a[i]);
		else {
			if(s.empty()) {
				cout << "NO";
				flag = 0;
				break;
				//return 0;
			}
			else s.pop();
		}
	}
	
	if(s.empty() && flag == 1) cout << "YES";
	else if(!s.empty() && flag == 1) cout << "NO";
	
	return 0;
}
