//void function for the sum
#include<bits/stdc++.h>
using namespace std;
void sum(int num1, int num2){
    int num3 = num1 + num2;
    cout << num3;
}
int main(){
    int num1 , num2;
    cin >> num1 >> num2;
    sum(num1 , num2);
}
// return function for sum of 2 numbers 
#include<bits/stdc++.h>
using namespace std;
int sum(int num1 , int num2){
    int num3 = num1 + num2;
    return num3;
}
int main(){
    int num1 , num2;
    cin >> num1 >> num2;
    int res = sum(num1 , num2);
    cout << res;
}