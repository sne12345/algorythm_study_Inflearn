#include <vector>
#include <algorithm>
#include <stdio.h>
#include <queue>

using namespace std;

// c++에서는 클래스나 구조체나 거의 동일함
// 큰 차이도 없음

// 굳이 구조체 쓰는 이유는 
// 알고리즘 문제풀이에서 구조체..선입견.. 
// 그냥 겉멋인듯
 
struct Data{
	int money;
	int when;
	Data(int a, int b){
		money = a;
		when = b;
	}
	
	// 구조체 정렬시..  
	// 속도 빠르게 하려고 주소를 사용했다고 함  
	bool operator<(const Data &b){
		// 날짜가 같으면 돈이 큰 순부터 정렬하려고 조건 하나 추가함  
		if(when==b.when){
			return money>b.money;
		}
		else return when>b.when;
	}
};

int main(void)
{
	freopen("input.txt", "rt", stdin);
	int n, i, j, a, b, res=0, max=-2147000000;
	vector<Data> T;
	priority_queue<int> pQ;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d %d", &a, &b);
		T.push_back(Data(a, b)); //하나씩 Data 구조체 타입으로 데이터를 벡터에 추가하기 
		if(b>max) max = b; // 날짜중에 제일 큰 값, 마지막에 강연해야 할 날짜부터 계산할려고  
	}
	sort(T.begin(), T.end());
	j=0; 
	
	// 강연 날짜 for loop  
	for(i=max; i>=1; i--){
		// 두번째 for loop에서 돌 때마다 j를 0으로 초기화하지 않는 이유
		// break하면서 현재 max인 when보다 작은 값의 인덱스를 j로 저장해놓은 상태라서  
		for(; j<n; j++){
			if(T[j].when<i) break; //해당 날짜보다 크거나 같은것만 넣기 
			// 작으면 강연을 못하니까 
			
			// 조건충족하면 금액들을 priority queue에 넣기
			pQ.push(T[j].money); 
		}
		
		if(!pQ.empty()){
			// 강연 큐가 안 비어있으면 가장 위에꺼 선택하고 큐에서 빼기
			res+=pQ.top(); 
			pQ.pop();
		}
	}
	
	printf("%d\n", res);
	return 0;
}
