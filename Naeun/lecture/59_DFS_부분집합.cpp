#include <iostream>
#include <stdio.h>
using namespace std;
int num, ch[11];

void D(int L){
    if(L == (num+1)){
        for(int i=1; i<=num; i++){
            if(ch[i] == 1)
                printf("%d ", i);
        }
        printf("\n");
    }
    else {
        ch[L] = 1;
        D(L+1);
        ch[L] = 0;
        D(L+1);
    }
}

int main(void) {
    scanf("%d", &num);
    
    D(1);
    
    return 0;
}

