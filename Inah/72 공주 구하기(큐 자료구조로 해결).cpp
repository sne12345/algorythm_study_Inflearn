#include <stdio.h>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	queue<int> Q;
	int n, k;
	int i;
	
	scanf("%d %d", &n, &k);
	for(int i = 1; i <= n; i++) {
		Q.push(i);
	}
	i = 1;
	while(Q.size() != 1) {
		if(i == k) {
			i = 1;
		}
		else {
			Q.push(Q.front());
			i++;
		}
		Q.pop();
	}
	
	printf("%d", Q.front());
}
