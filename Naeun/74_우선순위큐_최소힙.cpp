#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main(void) {
    int a;
    priority_queue<int> pQ;
    
    while(true){
        scanf("%d", &a);
        if(a == -1)
            break;
        if(a == 0){
            if(pQ.empty())
                printf("-1\n");
            else {
                printf("%d\n", -pQ.top());       // top()
                pQ.pop();
            }
        }
        else {
            pQ.push(-a);
        }
    }
    
    return 0;
}
