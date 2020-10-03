#include <stdio.h>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	int n = 0;
	priority_queue<int> Q;
	while(n != -1) 
	{
		scanf("%d", &n);
		if(!n) {
			if(Q.empty()) printf("-1\n");
			else {
				printf("%d\n", -Q.top());
				Q.pop();
			}
		}
		else {
			Q.push(-n);
		}
	}
}
