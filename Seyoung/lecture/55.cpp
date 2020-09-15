#include <stdio.h>
#include <stack>
#include <vector>
using namespace std;

// ����: ��ȣ������ �����ϴ� �ͱ��� ���� �����ؼ� ó�����ִ°� �ƴϾ���
// �̸� �����ΰ� �����ϴ� �ſ���!!
 
int main(){
	freopen("input.txt", "rt", stdin);
	int n, j=1, m;
	stack<int> s;
	scanf("%d", &n);

	vector<char> str;
	for(int i=1; i<=n; i++){
		scanf("%d", &m); // �Է¹��� ���� �ϳ��� �ֱ�  
		str.push_back('P'); //���� �Ҵ� ����.. ���������� ���� ����  
		s.push(m);
		while(1){
			if(s.empty()) break; //�� ���´µ� ���� ��� ���� �� ���� �� �ƴ� �� 
			if(s.top()==j){ // ��ġ�� �� �߰��ϸ� �۾� ����  
				s.pop();
				str.push_back('O');
				j++;
			}
			else break; //�� ��ġ�� ���� for��  
		}
	}
	
	
	if(!s.empty()) printf("impossible");
	else{
		for(int i=0; i<str.size(); i++) printf("%c", str[i]);
	}
	
	
	return 0;
}
