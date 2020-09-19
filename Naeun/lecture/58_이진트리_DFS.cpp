#include <iostream>
#include <stdio.h>

void D(int v){
    
    if(v > 7)       // 총 노드수: 7
        return;
    else {
        //printf("%d ", v);     // 전위순회 1 2 4 5 3 6 7
        D(v*2);
        //printf("%d ", v);     // 중위순회 4 2 5 1 6 3 7
        D(v*2+1);
        //printf("%d ", v);     // 후위순회 4 5 2 6 7 3 1   -> 병합정렬
     }
    
}       // 1 2 4 8 return 9 return 5 10 return 11 return 3 6 12 return 13 return 7 return

int main(void) {
    D(1);
    
    return 0;
}
