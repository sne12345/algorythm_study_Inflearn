
// 출발지점부터 도착지점까지 최소한의 횟수를(최단거리) 구하여라 -> BFS 큐를 사용하여 넓이우선탐색쓰기
#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int ch[10001], d[3] = {1, -1, 5};

int main(void) {
    int s, e, x, pos;
    queue<int> Q;
    
    scanf("%d %d", &s, &e);
    ch[s] = 1;
    Q.push(s);
    
    while(!Q.empty()){
        x = Q.front();
        Q.pop();
        for(int i=0; i<3; i++){
            pos = x + d[i];
            if(pos <= 0 || pos > 10000)
                continue;
            if(pos == e){
                printf("%d\n", ch[x]);
                exit(0);
            }
            if(ch[pos] == 0){
                ch[pos] = ch[x] + 1;
                Q.push(pos);
            }
        }
    }
    
    
    return 0;
}
