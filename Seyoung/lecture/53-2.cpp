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
	
	// 기존에 짰던 조건문의 경우 
	// 반복문을 벗어나도 처리를 한 번 더 해줘야 하는데
	// 강의 답안은 그렇지 않음
	// 조건 종료가 보일 때 바로 조건문을 설정하지 말고
	// 진짜 그게 반복의 끝인지 한 번 더 체크해라 ~ (내 악습관인듯)
	 
	while (n>0){ 
		push(n%k);
		n = n/k;
	}
	/*
	while (n/k>=1){ <-- 복잡할 필요도 없었음  
		push(n%k); // 나머지 푸시하고 
		n = n/k; // 몫을 다시 나눌 수로 초기화함 
	}
	
	push(n); <-- 반복문 탈출 조건을 잘못 설정해서 한 번 더 처리할 거리가 생김 
	*/  
	
	
	while (top!=-1){
		printf("%c",str[pop()]); 
		//입력받는 진수마다 표기법이 다르다고 %x 이걸 바꿀게 아니다  
	}
}

