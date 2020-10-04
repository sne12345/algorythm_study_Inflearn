#include <vector>
#include <algorithm>
#include <stdio.h>
#include <queue>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second)
		return a.first > b.first;
	else
		return a.second > b.second;
}

int main(void)
{
	//freopen("input.txt", "rt", stdin);
	int n, i, j, a, b, res = 0, max = -2147000000;
	vector<pair<int, int> > T;
	priority_queue<int> pQ;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d %d", &a, &b);
		T.push_back(make_pair(a, b)); // 페어로 만듬  
		if (b > max) max = b; // 날짜중에 제일 큰 값, 마지막에 강연해야 할 날짜부터 계산할려고  
	}
	sort(T.begin(), T.end(), compare);
	j = 0;

	// 강연 날짜 for loop  
	for (i = max; i >= 1; i--) {
		// 두번째 for loop에서 돌 때마다 j를 0으로 초기화하지 않는 이유
		// break하면서 현재 max인 when보다 작은 값의 인덱스를 j로 저장해놓은 상태라서  
		for (; j < n; j++) {
			if (T[j].second < i) break; //해당 날짜보다 크거나 같은것만 넣기 
			// 작으면 강연을 못하니까 

			// 조건충족하면 금액들을 priority queue에 넣기
			pQ.push(T[j].first);
		}

		if (!pQ.empty()) {
			// 강연 큐가 안 비어있으면 가장 위에꺼 선택하고 큐에서 빼기
			res += pQ.top();
			pQ.pop();
		}
	}

	printf("%d\n", res);
	return 0;
}
