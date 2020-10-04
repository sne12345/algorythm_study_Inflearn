#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

struct Data{
    int money;
    int when;
    Data(int a, int b){
        money = a;
        when = b;
    }
    bool operator < (Data &b){
        return when > b.when;
    }
};

int main(void) {
    
    int n, a, b, res = 0, max = -21470000;
    vector<Data> T;
    priority_queue<int> pQ;
    
    cin >> n;
    
    for(int i=1; i<=n; i++){
        cin >> a >> b;
        T.push_back(Data(a, b));
        if(b>max)
            max = b;
    }

    sort(T.begin(), T.end());

    for(int i=max; i>=1; i--){
        for(int j=0; j<n; j++){
            if(T[j].when < i) break;
            pQ.push(T[j].money);
        }
        if(!pQ.empty()){
            res += pQ.top();
            pQ.pop();
        }
    }
    printf("%d\n", res);
    
    return 0;
}
