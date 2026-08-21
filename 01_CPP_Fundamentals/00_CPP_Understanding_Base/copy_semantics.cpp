#include<iostream>
int main(){
    int a, b , c;
    a = 7;
    b = a;
    c = a;

    std :: cout << a << " " << b << " " << c  << '\n';

    b = 100;

    std :: cout << a << " " << b << " " << c << '\n';

    return 0;
}
/*The value of a and c is unchanged becasue in this we first initialize a and then b where b 
 and c are the semantics of a copes */

/* Golden rule of C++ 
 FOR FUNDAMENTAL OF C++ ASSIGNMENT AND INTIALIZATION CREATES COPIES NOT LINKS 
 NO DEPENDENCIES 
 NO PROPAGATION 
 NO SHARED STATE */
 