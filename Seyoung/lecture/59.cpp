#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;
int n, ch[11];
 
void DFS(int L){ 
	int i;
	if(L==n+1){
		for(i=1; i<=n; i++){
			if(ch[i]==1){
				printf("%d ", i);
			}
		}
		puts(""); //�ٹٲ�  
		return;	
	} 
	else {
		ch[L]=1;
		DFS(L+1); //�����Ѵ�  
		ch[L]=0;
		DFS(L+1); // ���� ���Ѵ�  
	}
}

int main(){
	freopen("input.txt", "rt", stdin);
	scanf("%d", &n);
	DFS(1); 
	return 0;
} 	

