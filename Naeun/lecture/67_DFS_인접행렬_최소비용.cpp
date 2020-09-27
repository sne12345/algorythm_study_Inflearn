#include <stdio.h>
#include <iostream>
using namespace std;

int map[30][30], ch[30], n, cost = 2147000000;

void DFS(int v, int sum){
    if(v == n){
        if(sum < cost){
            cost = sum;
        }
    } else {
        for(int i=1; i<=n; i++){
            if(map[v][i] > 0 && ch[i] == 0){
                ch[i] = 1;
                DFS(i, sum+map[v][i]);
                ch[i] = 0;
            }
        }
    }
}

int main(void) {
    int m, a, b, c;
    
    scanf("%d%d", &n, &m);
    
    for(int i=1; i<=m; i++){
        scanf("%d%d%d", &a, &b, &c);
        map[a][b] = c;
    }
    
    ch[1] = 1;
    DFS(1, 0);
    printf("%d\n", cost);
    
    return 0;
}
