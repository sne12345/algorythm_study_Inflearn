#include <stdio.h>
#include <iostream>
using namespace std;

int map[51][51];

int main(void) {
    int n, m;
    int a, b, c;
    scanf("%d%d", &n, &m);
    
    for(int i=1; i<=m; i++){
        scanf("%d%d%d",&a,&b,&c);
        map[a][b] = c;
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
