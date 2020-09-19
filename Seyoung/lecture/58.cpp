#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

 
void D(int v){ 
	if(v>7) return;  
	else {
		printf("%d ", v); // 전위 순회  
		D(v*2);
		printf("%d ", v); // 중위 순회  
		D(v*2+1); 
		printf("%d ", v); // 후위 순회  
	}
}

int main(){
	freopen("input.txt", "rt", stdin);
	D(1);
	return 0;
} 	

