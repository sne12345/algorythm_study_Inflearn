#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;

int dis[30], front=-1, back=-1, ch[30];
vector<int> map[30]; //���� �׷���  
int main(void){
	freopen("input.txt", "rt", stdin);
	int n, m, a, b, x;
	queue<int> Q;
	
	scanf("%d %d", &n, &m);
	for(int i=1; i<=m; i++){
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
	}
	
	Q.push(1);
	ch[1]=1;
	
	while(!Q.empty()){
		x=Q.front(); //�����ؼ� �־���
		Q.pop(); // ����
		for(int i=0; i<map[x].size(); i++){
			if(ch[map[x][i]]==0){
				ch[map[x][i]]=1;
				Q.push(map[x][i]);
				dis[map[x][i]]=dis[x]+1; //x��ȣ�� ��忡�� map[x][i]������ ���� �ּҰ� ���� 
			}
		} 
	}
	
	for(int i=2; i<=n; i++){
		printf("%d : %d\n", i, dis[i]);
	}
	
}


