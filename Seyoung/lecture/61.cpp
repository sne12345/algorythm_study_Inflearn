#include <iostream>
#include <algorithm>
#include <cstring>
 
using namespace std;

int n, total, a[11], cnt=0; 

void DFS(int L, int sum){ 
	if(L==n+1){
		if(sum==total) cnt++;
	}
	else{
		DFS(L+1, sum+a[L]);
		DFS(L+1, sum-a[L]);
		DFS(L+1, sum);
	}
} 

int main(){
	//freopen("input.txt", "rt", stdin);
	int i;
	scanf("%d %d", &n, &total);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	DFS(1, 0);
	
	if(cnt==0) printf("-1");
	else printf("%d", cnt);
}
