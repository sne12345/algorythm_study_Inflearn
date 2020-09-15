#include <stdio.h>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

void B(int n){
	if (n==0) { // 몫이 0이어도 나머지는 나온다  
		return;	
	}
	else{
		B(n/2);
		printf("%d", n%2);
	}
}

int main(){
	freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	
	B(n);
	return 0;
} 
