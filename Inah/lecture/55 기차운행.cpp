#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void print_rslt(vector<char> v) 
{
	for(int i = 0; i < v.size(); i++) {
		cout << v[i];
	}
}

int main ()
{
	stack<int> s;
	int n, m;
	int t = 1;
	vector<char> rslt;
	
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> m;
		s.push(m);
		rslt.push_back('P');
		while(s.top() == t) {
			rslt.push_back('O');
			s.pop();
			t++;
			if(s.empty()) break;
		}
	}
	
	if(!s.empty()) cout << "impossible"; //== if(t != 2 * n) ex->2 3 4 1
	else print_rslt(rslt);
	
	return 0;
}
