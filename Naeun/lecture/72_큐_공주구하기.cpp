#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main(void) {
    int n, k;
    queue<int> Q;
    
    scanf("%d %d", &n, &k);
    for(int i=1; i<=n; i++){
        Q.push(i);
    }
    
    while(!Q.empty()){
        for(int i=1; i<k; i++){
            Q.push(Q.front());
            Q.pop();
        }
        Q.pop();
        if(Q.size() == 1){
            printf("%d\n",Q.front());
            Q.pop();
        }
    }
    
    return 0;
}
