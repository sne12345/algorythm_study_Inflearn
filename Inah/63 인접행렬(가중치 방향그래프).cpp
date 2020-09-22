#include <iostream>

using namespace std;

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	
	int arr[n + 1][n + 1] = {0};
	
	int x, y, w;
	for(int i = 0; i < m; i++) {
		scanf("%d %d %d", &x, &y, &w);
		arr[x][y] = w;
	}
	
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
