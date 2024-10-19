#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 
    int N;
    cin>>N;
    vector<int> v(N);
    
    for(int i=0;i<N;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    
    int q;
    cin>>q;
    
    while(q!=0){
        int x;
        cin>>x;
        auto it = lower_bound(v.begin(), v.end(), x);        
        int index = it - v.begin() + 1;
        
        if (it != v.end() && *it == x) {
            cout << "Yes " << index << endl;
        } else {
            cout << "No " << index << endl;
        }
        q--;

    }
    
    return 0;
}
