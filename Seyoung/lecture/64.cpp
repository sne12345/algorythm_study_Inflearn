#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int map[21][21], ch[21];
int cnt=0;
int n;

void DFS(int v){
	if(v==n){ // 마지막 vertex에 다다랐을때  
		cnt++; 
		return; // 종료 조건
	}  
	else{
		for(int i=1; i<=n; i++){
			if(map[v][i]==1 && ch[i]==0){ // 방문했으면 가면 안되는 것임!!  
				ch[i]=1;
				DFS(i);
				ch[i]=0; // 경로 셌으니 다시 돌아왔을 때는 리셋해놔야 계속 카운팅 가능  
			}
		}	
	}	
}

int main(void){
	freopen("input.txt", "rt", stdin);
	int m, a, b, i, j;
	scanf("%d %d", &n, &m);
	
	for(i=1; i<=m; i++){
		scanf("%d %d", &a, &b);
		map[a][b]=1;
	}

	ch[1]=1;
	DFS(1);
	
	printf("%d", cnt);
}

