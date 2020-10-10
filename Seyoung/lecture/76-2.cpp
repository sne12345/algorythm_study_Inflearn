#include <vector>
#include <algorithm>
#include <stdio.h>
#include <queue>

using namespace std;
int dy[21][21];

int DFS(int size, int sel){
	if(dy[size][sel]>0) return dy[size][sel]; //�̹� ���� �����ϱ� �״�� ��ȯ 
	if(sel==0) return 1;
	else if(size==sel) return 1;
	else return dy[size][sel]=DFS(size-1, sel-1)+DFS(size-1, sel);
}

int main(void)
{
	freopen("input.txt", "rt", stdin);
	int n, r;
	scanf("%d %d", &n, &r);
	printf("%d\n", DFS(n, r));
}
