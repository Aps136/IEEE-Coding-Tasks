#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
int main() {
   int Q;
   cin>>Q;
   map<string,int> m;
   while(Q!=0){
       int type;
       string name;
       cin>>type>>name;
        if (type == 1) {
            int score;
            cin >> score;
            m[name] += score;  
        } 
        else if (type == 2) {
        
            m.erase(name);
        } 
        else if (type == 3) {
            cout << m[name] << endl;
        }Q--; 
    }
    return 0;
         
       
       
}

