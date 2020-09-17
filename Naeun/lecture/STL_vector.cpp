#include <vector>
#include <iostream>
using namespace std;

int main(void) {
    
    // 1.
    vector<int> a;
    a.push_back(6);
    a.push_back(8);
    a.push_back(11);
    printf("size = %d\n", a.size());
    printf("a[1] = %d\n", a[1]);
    
    // 2.
    vector<int> b(3);
    scanf("%d", &b[0]);
    printf("b[0] = %d\n", b[0]);
    
    // 3.
    vector<int> c[3]; // c라는 벡터가 3개 생김
    c[0].push_back(0);
    c[0].push_back(1);
    c[0].push_back(2);
    c[1].push_back(0);
    c[1].push_back(1);
    c[1].push_back(2);
    
    printf("%d ", c[0][0]);
    printf("%d ", c[0][1]);
    printf("%d ", c[0][2]);
    printf("%d ", c[1][0]);
    printf("%d ", c[1][1]);
    printf("%d ", c[1][2]);
    
    // 4.
    vector<pair<int, int> > graph[3];   // 벡터3개생성
    graph[1].push_back({1,1});
    graph[1].push_back({2,2});
    graph[1].push_back({3,3});
    printf("\n%d %d\n", graph[1][0].first, graph[1][0].second);
    
    return 0;
}
