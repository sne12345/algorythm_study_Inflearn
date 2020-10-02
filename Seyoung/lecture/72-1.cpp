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
		Q.push(i); //�ϴ� �� �ְ� ���� 
	}
	
	int next = 1; 
	while(!Q.empty()){
		x = Q.front();
		if(Q.size()==1){
			printf("%d", x);
			break;
		}
		Q.pop();
		
		// 3�� �ƴϸ� �ٽ� Ǫ���ϱ�  
		if(next%k!=0){
			Q.push(x);
			next++;
		}
		else{
			// Ǫ�� ���ϰ� �ٽ� 1�� �ʱ�ȭ ��Ű��  
			next=1;
		}

	}
	
	return 0;
}
