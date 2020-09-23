#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int map[51][51]; 

int main(void){
	freopen("input.txt", "rt", stdin);
	int n, m, i, j, a, b, c;
	
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		map[a][b]=c; //가중치 방향
		// map[b][a]=1 ; // 무방향 그래프 
	}
	
	// n*n 행렬임을 기억하기  
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			printf("%d ", map[i][j]); 
		}
		printf("\n");
	}
	
}

