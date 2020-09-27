#include <vector>
#include <stdio.h>
#include <iostream>
#define x first
#define y second
using namespace std;

int ch[30], n, cost = 214700000;
vector<pair<int,int> > map[30];

void DFS(int v, int sum){
    if(v == n){
        if(sum < cost)
            cost = sum;
    } else {
        for(int i=0; i<map[v].size(); i++){
            if(ch[map[v][i].x] == 0){
                ch[map[v][i].x] = 1;
                DFS(map[v][i].x, sum+map[v][i].y);
                ch[map[v][i].x] = 0;
            }
        }
    }
}

int main(void) {
    int m, a, b, c;
    
    scanf("%d%d", &n, &m);
    
    for(int i=1; i<=m; i++){
        scanf("%d%d%d", &a, &b, &c);
        map[a].push_back(make_pair(b, c));
    }
    
    ch[1] = 1;
    DFS(1, 0);
    printf("%d\n", cost);
    
    return 0;
}
