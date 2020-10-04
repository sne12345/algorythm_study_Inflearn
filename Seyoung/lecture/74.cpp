#include <vector>
#include <algorithm>
#include <stdio.h>
#include <queue>

using namespace std;

int main(void)
{
	freopen("input.txt", "rt", stdin);
	int a;
	priority_queue<int> pQ;
	
	// 최소 힙 구현, 모든 수를 -로 바꿔라  
	while(true){
		scanf("%d", &a);
		if(a==-1) break;
		if(a==0){
			if(pQ.empty()) printf("-1\n");
			else{
				printf("%d\n", -pQ.top());
				pQ.pop();
			}
		}
		else pQ.push(-a);
	}
}
