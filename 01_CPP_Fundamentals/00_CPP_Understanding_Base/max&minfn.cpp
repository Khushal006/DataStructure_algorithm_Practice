//max min fn using void 
#include <iostream>
using namespace std;

void maxx(int num1 , int num2){
    if(num1 > num2){
        cout << "highest value is " << num1 << endl;
    }
    else{
        cout << "highest value is " << num2 << endl;
    }
}

void minn(int num1 , int num2){
    if(num1 > num2){
        cout << "lowest value is " << num2 << endl;
    }
    else{
        cout << "lowest value is " << num1 << endl;
    }
}

int main(){
    int num1 , num2;
    cin >> num1 >> num2;

    maxx(num1 , num2);
    minn(num1 , num2);

    return 0;
}
//max and min fn using return 
#include <iostream>
using namespace std;

int maxx(int num1 , int num2){
    if(num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}

int minn(int num1 , int num2){
    if(num1 > num2){
        return num2;
    }
    else{
        return num1;
    }
}

int main(){
    int num1 , num2;
    cin >> num1 >> num2;

    int res1 = maxx(num1 , num2);
    int res2 = minn(num1 , num2);

    cout <<"highest value is "<< res1 << endl;
    cout <<"lowest value is "<< res2 << endl;

    return 0;
}
