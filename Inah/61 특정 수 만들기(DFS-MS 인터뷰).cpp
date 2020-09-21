#include <stdio.h>

int n, m;
int cnt = 0;
int a[100];

void DFS(int L, int total)
{
	if(L == n + 1) {
		if(total == m) cnt++;
	}
	else {
		DFS(L + 1, total + a[L]);
		DFS(L + 1, total);
		DFS(L + 1, total - a[L]);
	}
} 
int main()
{
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	
	DFS(1, 0);
	
	printf("%d", cnt);
}
