#include <stdio.h>
#include <vector>
#include <algorithm>

#define x frist
#define y second

using namespace std;

int n, m;
vector<pair<int, int> > map[30];
int cost = 99999;
int chk[30];

void DFS(int v, int sum)
{
	if(v == n) cost = sum < cost ? sum : cost;
	else {
		for(int i = 0; i < map[v].size(); i++) {
			if(!chk[map[v][i].first]) {
			chk[map[v][i].first] = 1;
			DFS(map[v][i].first, sum + map[v][i].second);
			chk[map[v][i].first] = 0;
			}
		}
	}
}
int main()
{
	scanf("%d %d", &n, &m);
	
	int x, y, w;
	for(int i = 0; i < m; i++) {
		scanf("%d %d %d", &x, &y, &w);
		map[x].push_back(make_pair(y, w));
	}
	
	chk[1] = 1;
	DFS(1, 0);
	
	printf("%d", cost);
}
