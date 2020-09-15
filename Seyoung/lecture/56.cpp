#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

stack<int> s;

// 스택을 굳이 만들어서 했는데
// 사실 그럴 필요가 없었다.  
void recur(int n){		
	if(n==0) return; // 재귀함수 탈출 조건 
	else{
		s.push(n);
		recur(n-1);
	
		// 재귀함수 탈출했을 때 다시 돌아와서 실행하기 시작할 문장들 
		printf("%d ", s.top());
		s.pop();
	
		return;
	} 

}

void recur2(int n){
	if(n==0) return;
	else{
		recur(n-1);
		// 프린트 문장 위치만 바꿔도 해결가능  
		printf("%d ",n);
	}
}

int main(){
	freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	
	recur2(n);
	
	return 0;
}
