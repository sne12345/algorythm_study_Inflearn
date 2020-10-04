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
		T.push_back(make_pair(a, b)); // ���� ����  
		if (b > max) max = b; // ��¥�߿� ���� ū ��, �������� �����ؾ� �� ��¥���� ����ҷ���  
	}
	sort(T.begin(), T.end(), compare);
	j = 0;

	// ���� ��¥ for loop  
	for (i = max; i >= 1; i--) {
		// �ι�° for loop���� �� ������ j�� 0���� �ʱ�ȭ���� �ʴ� ����
		// break�ϸ鼭 ���� max�� when���� ���� ���� �ε����� j�� �����س��� ���¶�  
		for (; j < n; j++) {
			if (T[j].second < i) break; //�ش� ��¥���� ũ�ų� �����͸� �ֱ� 
			// ������ ������ ���ϴϱ� 

			// ���������ϸ� �ݾ׵��� priority queue�� �ֱ�
			pQ.push(T[j].first);
		}

		if (!pQ.empty()) {
			// ���� ť�� �� ��������� ���� ������ �����ϰ� ť���� ����
			res += pQ.top();
			pQ.pop();
		}
	}

	printf("%d\n", res);
	return 0;
}
