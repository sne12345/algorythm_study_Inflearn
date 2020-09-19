#include <iostream>

using namespace std;

void printSubset(int arr[], int n)
{
	for(int i = 1; i <= n; i++) {
		if(arr[i]) printf("%d ", i);
	}
	printf("\n");
}
void subset(int n, int L, int chk[])
{
	if(L == n + 1) {
		printSubset(chk, n);
	}
	else {
		chk[L] = 1;
		subset(n, L + 1, chk);
		chk[L] = 0;
		subset(n, L + 1, chk);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	
	int chk[n];
	subset(n, 1, chk);
}
