#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

 
void D(int v){ 
	if(v>7) return;  
	else {
		printf("%d ", v); // ���� ��ȸ  
		D(v*2);
		printf("%d ", v); // ���� ��ȸ  
		D(v*2+1); 
		printf("%d ", v); // ���� ��ȸ  
	}
}

int main(){
	freopen("input.txt", "rt", stdin);
	D(1);
	return 0;
} 	

