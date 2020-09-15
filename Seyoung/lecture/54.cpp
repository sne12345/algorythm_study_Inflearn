#include <stdio.h>
#include <stack>
using namespace std;

int main(){
	freopen("input.txt", "rt", stdin);
	char a[31]; // 입력받을 배열   
	stack<char> s;
	scanf("%s", a);
	
	for(int i=0; a[i]!='\0'; i++){
		if(a[i]=='(') s.push(a[i]);
		else{
			if(s.empty()){
				printf("NO");
				return 0;
			}
			else s.pop();
		}
	}

	// 다 하고 나서 전체 배열 비었는지 아닌지 확인 해줘야됨 !!
	if(s.empty()){
		printf("YES");
	}else printf("NO");
	
}

/*
	돌아가는 코드인지 아닌지는 모르지만..
	닫는 괄호가 들어가면 굳이 여는 괄호인지 체크 안하고 
	바로 pop해버리면 됨
	 
	for(int i=0; input_text[i]!='\0'; i++){
		if(input_text[i]==')'){
			if(s.top()=='('){ //이거 처리 안해도 되는 거.. 
				s.pop();
			}else if(s.empty()){
				flag = false;
				break;
			}
		}else if(input_text[i]=='('){
			s.push(input_text[i]);
		} 
		
	}
*/
