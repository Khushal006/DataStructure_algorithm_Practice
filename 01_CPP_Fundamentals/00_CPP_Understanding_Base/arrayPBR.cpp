// Arrays always pass by reference 
#include<bits/stdc++.h>
using namespace std;

void doSomething(int arr[], int n){
    arr[0] += 100;
    cout << "Value of array inside fn: "<< arr[0] << endl;
}
int main(){
    int n = 5;
    int arr[n];
    for(int i = 0; i < n; i = i + 1){
        cin >> arr[i];
    }
    doSomething(arr, n);
    cout << "Value of array inside intmain(): " << arr[0] << endl;

}