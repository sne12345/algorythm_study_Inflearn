#include <stdio.h>

int stack[2000];
int top = -1;
	
void push(int x){
	if(top==1999){
		return;
	}
	stack[++top] = x;
}

int pop(){ 
	if(top==-1){
		return -1;
	}	
	return stack[top--];
}

int main(){

	freopen("input.txt", "rt", stdin);
	int n, k;
	char str[20] = "0123456789ABCDEF";
	scanf("%d %d", &n, &k);
	
	// ������ ®�� ���ǹ��� ��� 
	// �ݺ����� ����� ó���� �� �� �� ����� �ϴµ�
	// ���� ����� �׷��� ����
	// ���� ���ᰡ ���� �� �ٷ� ���ǹ��� �������� ����
	// ��¥ �װ� �ݺ��� ������ �� �� �� üũ�ض� ~ (�� �ǽ����ε�)
	 
	while (n>0){ 
		push(n%k);
		n = n/k;
	}
	/*
	while (n/k>=1){ <-- ������ �ʿ䵵 ������  
		push(n%k); // ������ Ǫ���ϰ� 
		n = n/k; // ���� �ٽ� ���� ���� �ʱ�ȭ�� 
	}
	
	push(n); <-- �ݺ��� Ż�� ������ �߸� �����ؼ� �� �� �� ó���� �Ÿ��� ���� 
	*/  
	
	
	while (top!=-1){
		printf("%c",str[pop()]); 
		//�Է¹޴� �������� ǥ����� �ٸ��ٰ� %x �̰� �ٲܰ� �ƴϴ�  
	}
}

