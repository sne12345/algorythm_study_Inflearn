//좌표를 배열 사용으로 효율 up 

#include <iostream>
#include <vector>

using namespace std;

int n;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int isPeak(int x, int y, vector<vector<int> > v)
{
	for(int i = 0; i < 4; i++) {
		if(v[x][y] <= v[x + dx[i]][y + dy[i]]) {
			return 0;
		}
	}
	return 1;
//	return v[x][y] > v[x - 1][y] && v[x][y] > v[x][y - 1] && 
//		   v[x][y] > v[x][y + 1] && v[x][y] > v[x + 1][y] 
//		   ? 1 : 0;
}

int countPeak(vector<vector<int> > v)
{
	int cnt = 0;
	
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(isPeak(i, j, v)) cnt++;
		}
	}
	
	return cnt;
}

int main()
{
	scanf("%d", &n);
	
	vector<vector<int> > v(n + 2, vector<int>(n + 2, 0));
	
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			scanf("%d", &v[i][j]);
		}
	}
	
	printf("%d", countPeak(v));
}
