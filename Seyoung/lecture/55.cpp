#include <stdio.h>
#include <stack>
#include <vector>
using namespace std;

// 관건: 번호순으로 도착하는 것까지 내가 생각해서 처리해주는게 아니었음
// 미리 만들어두고 생각하는 거였음!!
 
int main(){
	freopen("input.txt", "rt", stdin);
	int n, j=1, m;
	stack<int> s;
	scanf("%d", &n);

	vector<char> str;
	for(int i=1; i<=n; i++){
		scanf("%d", &m); // 입력받은 순서 하나씩 넣기  
		str.push_back('P'); //동적 할당 재질.. 넣을때마다 공간 생성  
		s.push(m);
		while(1){
			if(s.empty()) break; //다 꺼냈는데 아직 모든 열차 다 들어온 건 아닐 때 
			if(s.top()==j){ // 겹치는 거 발견하면 작업 시작  
				s.pop();
				str.push_back('O');
				j++;
			}
			else break; //안 겹치면 다음 for문  
		}
	}
	
	
	if(!s.empty()) printf("impossible");
	else{
		for(int i=0; i<str.size(); i++) printf("%c", str[i]);
	}
	
	
	return 0;
}
