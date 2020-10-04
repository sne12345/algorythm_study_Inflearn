#include <vector>
#include <algorithm>
#include <stdio.h>
#include <queue>

using namespace std;

// c++������ Ŭ������ ����ü�� ���� ������
// ū ���̵� ����

// ���� ����ü ���� ������ 
// �˰��� ����Ǯ�̿��� ����ü..���԰�.. 
// �׳� �Ѹ��ε�
 
struct Data{
	int money;
	int when;
	Data(int a, int b){
		money = a;
		when = b;
	}
	
	// ����ü ���Ľ�..  
	// �ӵ� ������ �Ϸ��� �ּҸ� ����ߴٰ� ��  
	bool operator<(const Data &b){
		// ��¥�� ������ ���� ū ������ �����Ϸ��� ���� �ϳ� �߰���  
		if(when==b.when){
			return money>b.money;
		}
		else return when>b.when;
	}
};

int main(void)
{
	freopen("input.txt", "rt", stdin);
	int n, i, j, a, b, res=0, max=-2147000000;
	vector<Data> T;
	priority_queue<int> pQ;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d %d", &a, &b);
		T.push_back(Data(a, b)); //�ϳ��� Data ����ü Ÿ������ �����͸� ���Ϳ� �߰��ϱ� 
		if(b>max) max = b; // ��¥�߿� ���� ū ��, �������� �����ؾ� �� ��¥���� ����ҷ���  
	}
	sort(T.begin(), T.end());
	j=0; 
	
	// ���� ��¥ for loop  
	for(i=max; i>=1; i--){
		// �ι�° for loop���� �� ������ j�� 0���� �ʱ�ȭ���� �ʴ� ����
		// break�ϸ鼭 ���� max�� when���� ���� ���� �ε����� j�� �����س��� ���¶�  
		for(; j<n; j++){
			if(T[j].when<i) break; //�ش� ��¥���� ũ�ų� �����͸� �ֱ� 
			// ������ ������ ���ϴϱ� 
			
			// ���������ϸ� �ݾ׵��� priority queue�� �ֱ�
			pQ.push(T[j].money); 
		}
		
		if(!pQ.empty()){
			// ���� ť�� �� ��������� ���� ������ �����ϰ� ť���� ����
			res+=pQ.top(); 
			pQ.pop();
		}
	}
	
	printf("%d\n", res);
	return 0;
}
