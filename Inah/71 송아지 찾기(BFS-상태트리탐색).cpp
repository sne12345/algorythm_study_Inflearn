#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int move[3] = {1, -1, 5};
int chk[100001];
queue<int> Q;

void BFS(int s, int e)
{
	int x, pos;
	chk[s] = 1;
	Q.push(s);
	while(!Q.empty()) {
		x = Q.front();
		Q.pop();
		for(int i = 0; i < 3; i++) {
			pos = x + move[i];
			if(pos <= 0 || pos > 10000) continue;
			if(pos == e) {
				printf("%d", chk[x]);
				return;
			}
			if(!chk[pos]) {
				chk[pos] = chk[x] + 1;
				Q.push(pos);
			}
		}
	}
}
int main()
{
	int s, e;
	scanf("%d %d", &s, &e);
	
	BFS(s, e);
}
