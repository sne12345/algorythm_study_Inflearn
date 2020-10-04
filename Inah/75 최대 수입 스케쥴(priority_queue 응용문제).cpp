#include <stdio.h>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int desc(int a, int b)
{
	return a < b;
}
bool compare(pair<int, int> a, pair<int, int> b)
{
//	if(a.first == b.first) {
//		return a.second > b.second;
//	}
	return a.first > b.first;
}
int main()
{
	int N, M, D;
	vector<pair<int, int> > v;
	priority_queue<int> Q; 
	int m = 0;
	int max = -99;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++) {
		scanf("%d %d", &M, &D);
		v.push_back(make_pair(D, M));
		if(D > max) max = D;
	}
	
	sort(v.begin(), v.end(), compare);
//	printf("------sorted\n");
//	for(int i = 0; i < N; i++) {
//		printf("%d : %d %d\n", (i + 1), v[i].first, v[i].second);
//		
//	}
//	printf("max : %d\n\n\n", max);
	int j = 0;
	for(int i = max; i >= 1; i--) {
		for(; j < N; j++) {
			if(v[j].first < i) break;
			Q.push(v[j].second);
//			printf("%d : %d %d\n", i, v[i].first, v[i].second);
		}
		if(!Q.empty()) {
			m += Q.top();
			Q.pop();
		}
	}
	printf("%d", m);
}
