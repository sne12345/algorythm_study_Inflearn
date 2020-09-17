#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
int dx[4]={-1, 0, 1, 0}; // 신기한 방법  
int dy[4]={0, 1, 0, -1};
int main(){
	freopen("input.txt", "rt", stdin);
	int n, i, j, k, cnt=0, flag;
	
	scanf("%d", &n);

	vector<vector<int> > a(n+2, vector<int>(n+2, 0));
	// 행, 열
	// 기본적으로 0으로 초기화됨
		
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			flag=1;
			for(k=0; k<4; k++){
				if(a[i][j]<=a[i+dx[k]][j+dy[k]]){
					 flag=0;
					 break;
				}			
			}
			
			if(flag==1) cnt++;
		}
	}
	
	printf("%d", cnt);
	
	return 0;
} 
