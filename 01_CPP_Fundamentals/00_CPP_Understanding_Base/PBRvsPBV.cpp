// Pass by refrence 
#include<bits/stdc++.h>
using namespace std;
void change(int &x){
    x = 100;
    cout << "Inside function :" << x << endl;
}
int main(){
    int a;
    a = 10;
    change(a);
    cout << "Inside Main :" << a << endl;
}

// Pass by Value 
#include<bits/stdc++.h>
using namespace std;
void change(int x){
    x = 100;
    cout << "Inside fucntion : " << x << endl;
}
int main(){
    int a;
    a = 10;
    change(a);
    cout << "Inside main : " << a << endl;
}