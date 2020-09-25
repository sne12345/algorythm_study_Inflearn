#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int map[21][21], ch[21];
int cnt=0;
int n;

void DFS(int v){
	if(v==n){ // ������ vertex�� �ٴٶ�����  
		cnt++; 
		return; // ���� ����
	}  
	else{
		for(int i=1; i<=n; i++){
			if(map[v][i]==1 && ch[i]==0){ // �湮������ ���� �ȵǴ� ����!!  
				ch[i]=1;
				DFS(i);
				ch[i]=0; // ��� ������ �ٽ� ���ƿ��� ���� �����س��� ��� ī���� ����  
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

