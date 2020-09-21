#include <iostream>
#include <algorithm>
#include <cstring>
 
using namespace std;

int n, a[11], total=0;
bool flag= false;

void DFS(int L, int sum){ // ���� ����� �κ� ������ ��
	if(flag==true) return; // ��ü DFS ���� �� 
	if(L==n+1){
		// ���ϱ�
		if (sum==(total-sum)){
			flag=true;
		}
	} 
	else{
		DFS(L+1, sum+a[L]); //����Ѵ� 
		DFS(L+1, sum); // ������� �ʴ´� 
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
