#include <iostream>
#include <algorithm>
#include <cstring>
 
using namespace std;

int n, a[11], total=0;
bool flag= false;

void DFS(int L, int sum){ // 내가 만드는 부분 집합의 합
	if(sum>(total/2)) return; // 백트래킹 재질 
	if(flag==true) return; // 전체 DFS 종료 조 
	if(L==n+1){
		// 비교하기
		if (sum==(total-sum)){
			flag=true;
		}
	} 
	else{
		DFS(L+1, sum+a[L]); //사용한다 
		DFS(L+1, sum); // 사용하지 않는다 
	}
} 

int main(){
	freopen("input.txt", "rt", stdin);
	int i;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
		total+=a[i];
	}
	DFS(1, 0);
	
	if(flag) printf("YES");
	else printf("NO"); 
}
