#include <iostream>
#include <stdio.h>
using namespace std;

void zeroOrOne(int n){
    if(n == 0)
        return;
    
    zeroOrOne(n/2);
    printf("%d", n % 2);
}

int main(void) {
    int num;
    scanf("%d", &num);
    
    zeroOrOne(num);
    printf("\n");
    
    return 0;
}
