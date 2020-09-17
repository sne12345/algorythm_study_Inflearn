#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main(void) {
    int size, bong = 1, cnt = 0;
    scanf("%d", &size);
    
    vector<vector<int> > arr(size+2, vector<int>(size+2, 0));
    
    for(int i=1; i<=size; i++){
        for(int j=1; j<=size; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i=1; i<=size; i++){
        for(int j=1; j<=size; j++){
            bong = 1;
            for(int k=0; k<4; k++){
                if(arr[i+dx[k]][j+dy[k]] >= arr[i][j]){
                    bong = 0;
                    break;
                }
            }
            if(bong == 1)
                cnt++;
        }
    }
    
    printf("%d\n", cnt);
    
    
    return 0;
}
