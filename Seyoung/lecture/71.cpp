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
			if(pos<=0 || pos >10000) continue; // ���� ����  
			if(pos==e){
				printf("%d\n", ch[x]); //��� ������ 1�� �����߱� ������  
				exit(0);
			} // ���� ���������  
			if(ch[pos]==0){
				ch[pos]=ch[x]+1; // �ּ� �Ÿ� �迭
				Q.push(pos);   
			} // �ѹ��� �湮���� ���� �����̶��  
		}
		
	}	
	return 0;
}
