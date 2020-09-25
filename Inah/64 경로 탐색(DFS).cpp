#include <iostream>

using namespace std;

int map[30][30];
int visited[30];

int n;
int cnt = 0;

void DFS(int v)
{
	if(v == n) cnt++;
//	if(v == 0 || v == n + 1) return;
	for(int i = 1; i <= n; i++) {
		if(!visited[i] && map[v][i]) {
	 		visited[i] = 1;
	 		DFS(i);
	 		visited[i] = 0;
		}
	}
}
int main()
{
	int m;
	scanf("%d %d", &n, &m);
	
	int x, y;
	for(int i = 0; i < m; i++) {
		scanf("%d %d", &x, &y);
		map[x][y] = 1;
	}
	
	visited[1] = 1;
	DFS(1);
	
	printf("%d", cnt);
}
