# Quick Sort

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int partition(vector <int> &vec, int low, int high){
    int ele=vec[high];
    int i=(low-1);
    for(int j=low;j<=high-1;j++){
        if(vec[j]<=ele){
            i++;
            swap(vec[i],vec[j]);
            
        }
        
        
    }swap(vec[i+1],vec[high]);
        return (i+1);
    
}
void quicksort(vector <int> &vec, int low, int high){
    if(low<high){
        int pi=partition(vec, low, high);
        quicksort(vec,low,pi-1);
        quicksort(vec, pi+1,high);
    }
    
    
}
int main() {
   vector<int> vec={12,1,80,9,1,5};
   int n=vec.size();
   quicksort(vec,0,n-1);
   for(auto i: vec){
       cout<<i<<" ";
       
   }
   return 0;
}
