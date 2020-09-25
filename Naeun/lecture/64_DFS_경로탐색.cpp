#include <stdio.h>
#include <iostream>
using namespace std;

int map[30][30], ch[30], cnt = 0;
int n, m;

void DFS(int v){            // v -> 정점 번호
    if(v == n) {
        cnt++;
    }
    else {
        for(int i=1; i<=n; i++){
            if(map[v][i] == 1 && ch[i] == 0){
                ch[i] = 1;                          // 한 번 길 갈 때, 똑같은 곳을 또 방문하지 않기 위해
                DFS(i);
                ch[i] = 0;
            }
        }
    }
}

int main(void) {
    int a, b;
    
    scanf("%d%d", &n, &m);
    
    for(int i=0; i<m; i++){
        scanf("%d%d",&a,&b);
        map[a][b] = 1;
    }
    ch[1] = 1;
    DFS(1);
    printf("%d\n", cnt);
    
    return 0;
}
