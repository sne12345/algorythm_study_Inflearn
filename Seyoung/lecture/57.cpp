#include <stdio.h>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

void B(int n){
	if (n==0) { // ���� 0�̾ �������� ���´�  
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
