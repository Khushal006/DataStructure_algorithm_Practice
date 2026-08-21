// Without getline function
#include<iostream>
using namespace std;
int main(){
    string str;
    cin >> str;
    cout << str;
    return 0;
}
//with getline function
#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    cout << s;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
   
    int len = s.size();
    cout << len << endl;
    cout << s[len -1] << endl;
    cout << s;

    return 0;
}