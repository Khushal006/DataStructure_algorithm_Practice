//1D array and concept
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    arr[4] += 5;
    arr[4] = 5 ;
    cout << arr[4];
    return 0;
}
//2D array and concept 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][5];
    cin >> arr[2][3];
    arr[2][3] -= 30 ;
    arr[2][3] = 12;
    cout << arr[2][3] << '\n'<< arr[1][4];
    return 0;
}