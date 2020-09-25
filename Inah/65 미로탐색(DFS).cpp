#include <stdio.h>
#define SIZE 7

int maze[SIZE + 1][SIZE + 1];
int chk[SIZE + 1][SIZE + 1];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int cnt = 0;

void DFS(int x, int y)
{
	int nx, ny;
	if(x == SIZE && y == SIZE) cnt++;
	else {
		for(int i = 0; i < 4; i++) {
			nx = x + dx[i];
			ny = y + dy[i];
			if(nx == 0 || nx == SIZE + 1 || ny == 0 || ny == SIZE + 1) continue;
			//if(nx < 1 ||  nx > SIZE || ny < 1 || ny > SIZE) continue;
			if(!chk[nx][ny] && !maze[nx][ny]) {
				chk[nx][ny] = 1;
				DFS(nx, ny);
				chk[nx][ny] = 0;
			}
		}
	}
}
int main()
{
	for(int i = 1; i <= SIZE; i++) {
		for(int j = 1; j <= SIZE; j++) {
			scanf("%d", &maze[i][j]);
		}
	}
	
	chk[1][1] = 1;
	DFS(1, 1);
	
	printf("%d", cnt);
}
