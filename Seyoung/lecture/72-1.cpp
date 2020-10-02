#include <vector>
#include <algorithm>
#include <stdio.h>
#include <queue>

using namespace std;

int main(void)
{
	//freopen("input.txt", "rt", stdin);
	int n, k, x;
	queue<int> Q;
	scanf("%d %d", &n, &k);
	
	for(int i=1; i<=n; i++){
		Q.push(i); //일단 다 넣고 시작 
	}
	
	int next = 1; 
	while(!Q.empty()){
		x = Q.front();
		if(Q.size()==1){
			printf("%d", x);
			break;
		}
		Q.pop();
		
		// 3이 아니면 다시 푸시하기  
		if(next%k!=0){
			Q.push(x);
			next++;
		}
		else{
			// 푸시 안하고 다시 1로 초기화 시키기  
			next=1;
		}

	}
	
	return 0;
}
