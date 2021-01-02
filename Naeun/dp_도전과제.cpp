#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> v;

int main(void) {
    
    cin >> N;
    
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    
    for(int i=3; i<=N; i++){
        v.push_back(v[i-1] + v[i-2]);
    }
    
    printf("%d\n", v[N]);
    
    return 0;
}
