#include <stdio.h>
#include <stack>
using namespace std;

int main(){
	freopen("input.txt", "rt", stdin);
	char a[31]; // �Է¹��� �迭   
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

	// �� �ϰ� ���� ��ü �迭 ������� �ƴ��� Ȯ�� ����ߵ� !!
	if(s.empty()){
		printf("YES");
	}else printf("NO");
	
}

/*
	���ư��� �ڵ����� �ƴ����� ������..
	�ݴ� ��ȣ�� ���� ���� ���� ��ȣ���� üũ ���ϰ� 
	�ٷ� pop�ع����� ��
	 
	for(int i=0; input_text[i]!='\0'; i++){
		if(input_text[i]==')'){
			if(s.top()=='('){ //�̰� ó�� ���ص� �Ǵ� ��.. 
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
