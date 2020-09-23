#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int data[10], tmp[10];

void divide(int lt, int rt){
	
	int mid;
	int p1, p2, p3;
	// 범위넘어가면 정렬 끝  
	if(lt<rt){
		mid=(lt+rt)/2; //중간값 구하기  
		divide(lt, mid);
		divide(mid+1, rt);
		// 후위 순회 
		
		// 정렬 시작
		p1=lt;
		p2=mid+1;
		p3=lt;
		
		while(p1<=mid && p2<=rt){
			if(data[p1]<data[p2]) tmp[p3++]=data[p1++];
			else tmp[p3++]=data[p2++];
		}
		
		while(p1<=mid) tmp[p3++]=data[p1++];
		while(p2<=rt) tmp[p3++]=data[p2++];
		
		// 원 배열로 다시 바꾸는 작업
		for(int i=lt; i<=rt; i++){
			data[i]=tmp[i]; //복사하기  
		} 
	}
	
	
			
} // 정렬하고자 하는 범위: left, right  

int main(void){
	freopen("input.txt", "rt", stdin);
	int n, i;
	
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &data[i]);
	}
	
	divide(1, n);
	
	for(i=1; i<=n; i++){
		printf("%d ", data[i]);
	}
}

