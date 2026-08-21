/*A school has followring rules for the grading system
below 25 - F
25 to 44 - E 
45 to 49 - D
50 to 59 - C
60 to 79 - B
80 to 100 - A*/
// approach-1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cin >> marks;
    if(marks < 25){
        cout << "F";
    }
    else if(25<=marks && marks<=44){
        cout << "E";
    }
    else if(45<=marks && marks<=49){
        cout << "D";
    }
    else if(50<=marks && marks<=59){
        cout << "C";
    }
    else if(60<=marks && marks<=79){
        cout << "B";
    }
    else if(80<=marks && marks<=100){
        cout << "A";
    }
    return 0;
}
//approach-2
#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cin >> marks;
    if(marks < 25){
        cout << "F";
    }
    else if(25<=marks){
        cout << "E";
    }
    else if(marks<=49){
        cout << "D";
    }
    else if(marks<=59){
        cout << "C";
    }
    else if( marks<=79){
        cout << "B";
    }
    else if( marks<=100){
        cout << "A";
    }
    return 0;
}