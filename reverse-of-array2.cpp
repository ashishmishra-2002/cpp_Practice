#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cout << "Enter size of array: ";
    cin >> n; 
    
    
    int arr[n];
    
    cout << "Enter "<< n << " digits: ";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    
    
    for(int i=n-1;i>=0;i--){
        cout<< arr[i] ;
        if(i>0){
            cout<<" ";
        }
    }
    
    return 0;
}