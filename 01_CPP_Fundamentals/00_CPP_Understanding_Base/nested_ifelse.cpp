//take the age from the user and then decide accordingly 
//if age < 18 print-> not eligible for job 
//if age > = 18 print->eligible for the job
//if age >= 55 and age <=57, print -> eligible fr job but retirement soon
//if age > 57 print -> retirement time
//take the age from the user and then decide accordingly 
//if age < 18 print-> not eligible for job 
//if age > = 18 print->eligible for the job
//if age >= 55 and age <=57, print -> eligible fr job but retirement soon
//if age > 57 print -> retirement time
#include<bits/stdc++.h>
using namespace std;
int main(){
    int age ;
    cin >> age ;
    if(age < 18){
        cout << "Not eligible for the job";
    }
    else if(age <= 57){
        cout << "Eligible for the job";
            if(age >= 54){
            cout << " but retirement soon";
        }
    }
    else {
        cout << "retirement time";
    }
    return 0;
}