#include <iostream>

using namespace std;

int n;
int arr[100][100] = {0};

int isEdge(int x, int y)
{
	return x == 0 || x == n - 1 || y == 0 || y == n - 1 ? 1 : 0;
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
int isPeak(int x, int y)
{
	return arr[x][y] > arr[x - 1][y] && arr[x][y] > arr[x][y - 1] && 
		   arr[x][y] > arr[x][y + 1] && arr[x][y] > arr[x + 1][y] 
		   ? 1 : 0;
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
	n += 2;
	for(int i = 1; i < n - 1; i++) {
		for(int j = 1; j < n - 1; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	
//  checkPeak();
	
	printf("%d", countPeak());
}
