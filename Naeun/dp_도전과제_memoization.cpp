#include <stdio.h>
#include <iostream>
using namespace std;

int N;
int arr[46];

int dfs(int num){
    
    if(arr[num] != 0){
        return arr[num];
    }
    
    if(num == 1 || num == 2) return num;
    else {
        return arr[num] = dfs(num-1) + dfs(num-2);
    }
}


int main(void) {
    
    arr[1] = 1;
    arr[2] = 2;

    cin >> N;

    printf("%d\n", dfs(N));
    
    return 0;
}
