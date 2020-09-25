#include <stdio.h>
#include <vector>

using namespace std;

int n, m;
vector<int> map[30];
int chk[30];
int cnt = 0;

void DFS(int v)
{
	if(v == n) cnt++;
	else {
		for(int i = 0 ; i < map[v].size(); i++) {
			if(!chk[map[v][i]]) {
				chk[map[v][i]] = 1;
				DFS(map[v][i]);
				chk[map[v][i]] = 0;
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
	
	chk[1] = 1;
	DFS(1);
	
	printf("%d", cnt);
}
