#include <vector>
#include <algorithm>
#include <stdio.h>
#include <queue>

using namespace std;

int DFS(int size, int sel){
	if(sel==0) return 1;
	else if(size==sel) return 1;
	else return DFS(size-1, sel-1)+DFS(size-1, sel);
}

int main(void)
{
	freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	printf("%d\n", DFS(5, 3));
}
