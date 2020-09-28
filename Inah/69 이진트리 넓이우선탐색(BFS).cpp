#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int Q[100];
int chk[10];
int front = - 1, back = -1;
vector<int> map[10];

void BFS(int v)
{
	Q[++back] = v;
	chk[v] = 1;
	
	while(front < back) {
		int x = Q[++front];
		printf("%d ", x);
		for(int i = 0; i < map[x].size(); i++) {
			if(!chk[map[x][i]]) {
				BFS(map[x][i]);
			}
		}
	}
}
int main()
{
	int x, y;
	for(int i = 0; i < 6; i++) {
		scanf("%d %d", &x, &y);
		map[x].push_back(y);
		map[y].push_back(x);
	}
	
	BFS(1);
}
