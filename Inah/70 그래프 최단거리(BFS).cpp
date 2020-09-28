#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m;
vector<int> map[30];
int chk[30];
int dis[30];
queue<int> Q;

void BFS(int v)
{
	Q.push(v);
	chk[v] = 1;
	
	while(!Q.empty()) {
		int x = Q.front();
		Q.pop();
		for(int i = 0; i < map[x].size(); i++) {
			if(!chk[map[x][i]]) {
				chk[map[x][i]] = 1;
				Q.push(map[x][i]);
				dis[map[x][i]] = dis[x] + 1;
				
			}
		}
	}
}
int main()
{
	scanf("%d %d", &n, &m);
	
	int x, y;
	for(int i = 0; i < m; i++) {
		scanf("%d %d", &x, &y);
		map[x].push_back(y);
	}
	
	BFS(1);
	
	for(int i = 2; i <= n; i++) {
		printf("%d : %d\n", i, dis[i]);
	}
}
