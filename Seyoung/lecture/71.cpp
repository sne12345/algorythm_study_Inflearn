#include <vector>
#include <algorithm>
#include <stdio.h>
#include <queue>

using namespace std;

int ch[10001], d[3]={1, -1, 5};

int main(void)
{
	freopen("input.txt", "rt", stdin);
	int s, e, x, pos;
	queue<int> Q;
	scanf("%d %d", &s, &e);
	
	ch[s]=1;
	Q.push(s);
	while(!Q.empty()){
		x = Q.front();
		Q.pop();
		
		for(int i=0; i<3; i++){
			pos = x+d[i];
			if(pos<=0 || pos >10000) continue; // 범위 지정  
			if(pos==e){
				printf("%d\n", ch[x]); //출발 지점을 1로 저장했기 때문임  
				exit(0);
			} // 최종 목적지라면  
			if(ch[pos]==0){
				ch[pos]=ch[x]+1; // 최소 거리 배열
				Q.push(pos);   
			} // 한번도 방문하지 않은 지점이라면  
		}
		
	}	
	return 0;
}
