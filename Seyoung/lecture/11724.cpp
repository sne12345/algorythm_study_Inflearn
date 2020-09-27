#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>
using namespace std;

vector<int> map[1001];
int n; 
int ch[1001];

void DFS(int v){
	int i; 
	ch[v]=1; //Ž���ߴٴ� ǥ��
	
	for(i=0; i<map[v].size(); i++){
		if(ch[map[v][i]]==0){
			DFS(map[v][i]);
		}	
	}	
}

int main(void){
	freopen("input.txt", "rt", stdin);

	int m, i, a, b;
	scanf("%d %d", &n, &m);
	
	// ��������Ʈ  ��� �Է�  
	for(i=1; i<=m; i++){
		scanf("%d %d", &a, &b);
		// �������� �� ������̴� !!!  
		map[a].push_back(b); 
		map[b].push_back(a); 
	}
	
	int cnt=0;
	
	// ��������Ʈ ������ dfs Ž��  
	for(i=1; i<=n; i++){
		if(ch[i]==0){ //�湮�� �� ���� ���� Ž��  
			DFS(i);
			cnt++;
		}
	}
	
	printf("%d", cnt);
	
}

