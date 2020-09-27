#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>
using namespace std;

int map[30][30];
int sum=2147000000;
int n;
int ch[30];

void DFS(int v, int s){
	
	if(v==n){
		if(s<=sum){
			sum = s;
		}
	}
	
	else{
		for(int i=1; i<=n; i++){
			if(ch[i]==0&&map[v][i]>=1){
				ch[i]=1;
				s = s+map[v][i];
				DFS(i, s);
				ch[i]=0;
				s = s-map[v][i];
			}
		}
	}
}


int main(void){
	//freopen("input.txt", "rt", stdin);

	int m, i, c, a, b;
	scanf("%d %d", &n, &m);
	
	// 인접행렬 모두 입력  
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		map[a][b]=c;
	}
	
	ch[1]=1;
	
	DFS(1, 0);
	printf("%d", sum);
	
}

