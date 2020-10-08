#include <stdio.h>

int memo[21][21] = {-1};
	
int C(int n, int r)
{
	if(r == 0 || r == n) return 1;
	else {
		if(memo[n][r] > 0) return memo[n][r]; 
		else return memo[n][r] = C(n - 1, r - 1) + C(n - 1, r);
	}
}
int main()
{
	int n, r;
	
	scanf("%d %d", &n, &r);
	
	C(n, r);
	
	printf("%d", memo[n][r]);
}
