#include <stdio.h>
#include <stack>

int main(){

	freopen("input.txt", "rt", stdin);
	int n, k;
	stack<int> s;
	char str[20] = "0123456789ABCDEF";
	scanf("%d %d", &n, &k);
	 
	while (n>0){ 
		s.push(n%k);
		n = n/k;
	}
	
	while (!s.empty())){
		printf("%c",str[s.top()]); // top ��ȸ�� �ϰ� �������� ����
		s.pop();  
	}
}

