/*Simple void fn that doesnt carry anything*/
#include<bits/stdc++.h>
using namespace std;
void printname() {
    cout << "Hey Khushal !";
}
int main(){
    printname();
}
//parameterised void fn that can carry parameter//
#include<bits/stdc++.h>
using namespace std;
void printname(string name) {
    cout << "Hey " << name << endl;
}
int main(){
    string name;
    cin >> name;
    printname(name);

    string name2;
    cin >> name2;
    printname(name2);

    string name3;
    cin >> name3;
    printname(name3);
}