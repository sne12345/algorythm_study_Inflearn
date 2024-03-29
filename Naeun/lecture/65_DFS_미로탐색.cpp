#include <stdio.h>
#include <iostream>
using namespace std;

int map[10][10], ch[10][10], cnt = 0;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void DFS(int x, int y){
    int xx, yy;
    if(x == 7 && y == 7){
        cnt++;
    } else {
        for(int i=0; i<4; i++){
            xx = x+dx[i];
            yy = y+dy[i];
            if(xx < 1 || xx > 7 || yy < 1 || yy > 7 )
                continue;
            if(map[xx][yy] == 0 && ch[xx][yy] == 0){
                ch[xx][yy] = 1;
                DFS(xx, yy);
                ch[xx][yy] = 0;
            }
        }
    }
}

int main(void) {
    
    for(int i=1; i<=7; i++){
        for(int j=1; j<=7; j++){
            scanf("%d",&map[i][j]);
        }
    }
    
    ch[1][1] = 1;
    DFS(1,1);
    
    printf("%d\n", cnt);
    
    return 0;
}
