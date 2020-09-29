#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>
using namespace std;

int Q[100], front=-1, back=-1, ch[10];
vector<int> map[10]; //인접 리스트  , 무방향 
int main(void){
	freopen("input.txt", "rt", stdin);
	int i, a, b, x;
	for(i=1; i<=6; i++){
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
		map[b].push_back(a);
	} 
	
	Q[++back]=1;
	ch[1]=1;
	
	while(front<back){
		x = Q[++front];// 값을 빼내서 같아짐  
		printf("%d ", x);
		
		// 이제 x와 연결된 노드들을 다 추가해야됨
		for(i=0; i<map[x].size(); i++){
			if(ch[map[x][i]]==0){
				ch[map[x][i]]=1;
				Q[++back]=map[x][i];
			}
		}
		 
		// 만약 더이상 꺼낼 자료가 없으면
		// f == b되므로 끝남  
	}
}	

