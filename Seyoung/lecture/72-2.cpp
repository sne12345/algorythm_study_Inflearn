#include <vector>
#include <algorithm>
#include <stdio.h>
#include <queue>

using namespace std;

int main(void)
{
	freopen("input.txt", "rt", stdin);
	int n, k, x;
	queue<int> Q;
	scanf("%d %d", &n, &k);
	
	for(int i=1; i<=n; i++){
		Q.push(i); //일단 다 넣고 시작 
	}
	
	int next = 1; 
	while(!Q.empty()){
		for(int i=1; i<k; i++){
			x = Q.front();
			Q.pop();
			Q.push(x);
		}
		Q.pop();
		
		if(Q.size()==1){
			printf("%d", Q.front());
			Q.pop();
		}
	}
	
	return 0;
}
