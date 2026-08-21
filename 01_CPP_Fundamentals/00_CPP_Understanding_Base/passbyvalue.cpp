// Pass by value in fn
#include<bits/stdc++.h>
using namespace std;
void Dosomething(int num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}
int main(){
    int num = 10;
    Dosomething(num);
// it send the copy of the function not the original
    cout << num;
}
// string example 
// pass by value 
#include<bits/stdc++.h>
using namespace std;
void doSomething(string &s){
    s[0] = 't';
    cout << s << endl;
}
int main(){
    string s = "raj";
    doSomething(s);
    cout << s << endl;
}