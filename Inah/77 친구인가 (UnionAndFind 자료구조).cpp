#include <stdio.h>
#include <algorithm>

using namespace std;

int unf[1001];
int memo[1001][1001];

int Find(int v)
{
	if(v == unf[v]) return v;
	else return unf[v] = Find(unf[v]);
}
void Union(int a, int b)
{
	a = Find(a);
	b = Find(b);
	if(a != b) unf[a] = b;
}
int main()
{
	int n, m, a, b, fa, fb;
	
	scanf("%d %d", &n, &m);
	
	for(int i = 1; i <= n; i++) {
		unf[i] = i;
	}
	for(int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		Union(a, b);
	}
	scanf("%d %d", &a, &b);
	fa = Find(a);
	fb = Find(b);
	
	if(fa == fb) printf("YES");
	else printf("NO");
}
