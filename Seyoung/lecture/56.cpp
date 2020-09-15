#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

stack<int> s;

// ������ ���� ���� �ߴµ�
// ��� �׷� �ʿ䰡 ������.  
void recur(int n){		
	if(n==0) return; // ����Լ� Ż�� ���� 
	else{
		s.push(n);
		recur(n-1);
	
		// ����Լ� Ż������ �� �ٽ� ���ƿͼ� �����ϱ� ������ ����� 
		printf("%d ", s.top());
		s.pop();
	
		return;
	} 

}

void recur2(int n){
	if(n==0) return;
	else{
		recur(n-1);
		// ����Ʈ ���� ��ġ�� �ٲ㵵 �ذᰡ��  
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
