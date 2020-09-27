#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>
using namespace std;

vector<pair<int, int> > map[30]; 
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
		for(int i=0; i<map[v].size(); i++){
			if(ch[map[v][i].first]==0){
				ch[map[v][i].first]=1;
				DFS(map[v][i].first, s+map[v][i].second);
				ch[map[v][i].first]=0;
			}
		}
	}
}


int main(void){
	//freopen("input.txt", "rt", stdin);

	int m, i, c, a, b;
	scanf("%d %d", &n, &m);
	
	// 인접리스트  모두 입력  
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b, c)); // c가 가중치값 , b 정점  
	}
	
	ch[1]=1;
	
	DFS(1, 0);
	printf("%d", sum);
	
}

