//ÁÂÇ¥¸¦ ¹è¿­ »ç¿ëÀ¸·Î È¿À² up 

#include <iostream>
#include <vector>

using namespace std;

int n;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
vector<int> v[100]; //º¤ÅÍ °´Ã¼ 100°³ ¸¸µë 

int isEdge(int x, int y)
{
	return x == 0 || x == n - 1 || y == 0 || y == n - 1 ? 1 : 0;
}
int isPeak(int x, int y)
{
	for(int i = 0; i < 4; i++) {
		if(v[x][y] < v[x + dx[i]][y + dy[i]]) {
			return 0;
		}
	}
	return 1;
}
void checkPeak()
{
	for(int i = 1; i < n - 1; i++) {
		for(int j = 1; j < n - 1; j++) {
			printf("%d ", isPeak(i, j));
		}
		printf("\n");
	}
}

int countPeak()
{
	int cnt = 0;
	
	for(int i = 1; i < n - 1; i++) {
		for(int j = 1; j < n - 1; j++) {
			if(isPeak(i, j)) cnt++;
		}
	}
	
	return cnt;
}

int main()
{
	scanf("%d", &n);
	int num;
	
	n+=2;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(isEdge(i, j)) num = 0;
			else scanf("%d", &num);
			v[i].push_back(num);
		}
	}
	
//   checkPeak();
	
	printf("%d", countPeak());
}
