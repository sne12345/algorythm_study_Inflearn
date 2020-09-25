#include <stdio.h>

int n, m;
int map[30][30];
int chk[30];
int min = 99999;
int sum = 0;
void DFS(int v, int sum)
{
	if(v == n) min = sum < min ? sum : min;
	else {
		for(int i = 1; i <= n; i++) {
			if(!chk[i] && map[v][i]) {
				chk[i] = 1;
				DFS(i, sum + map[v][i]);
				chk[i] = 0;
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
		map[x][y] = w;
	}
	
	chk[1] = 1;
	DFS(1, 0);
	
	printf("%d", min);
}
