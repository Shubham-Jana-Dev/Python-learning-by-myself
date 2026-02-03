/* 
// basic syntax exploring: 
#include<iostream>
using namespace std;
int main(){
    int x,y;
cout << "Hellow" << endl;
cin >> x>>y;
cout << x << " " << y << endl;
    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
string name,sername;
cin >> name >> sername;
cout << "Hellow" << " " << name << " " << sername;  

    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string fullName ;
    cout << "Enter your full name: ";
    getline(cin,fullName);
    cout << "Hellow " << fullName << "!";
    return 0;
}
*/
// Arithmatic oparetion:-
/*
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float r;
    cin >> r;
    cout << 3.14*(r*r);
    return 0;
}
*/
// understanding function and recursion. 
#include<iostream>
#include<cmath>
using namespace std;
int fact(int num){    // function 1
    if (num == 0 or num == 1){
        return 1;
    }
    else{
        int fac = num*fact(num-1);
        return fac;
    }
}
/*
Loops in C++
There are 3 types of loops
1. For loops
2. while loops
3. Do-while loops
*/
int ForLoop(int num){    // function 2
    if (num == 0 or num == 1){
        return 1;
    }
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact = fact*i; 
    }
    return fact;
}
int main(){
// int result = fact(5);  // function 1
// cout << result;
// int num;
// cout << "Enter the number: ";
// cin >> num;
// int result = ForLoop(num);    // function 2
// cout << result<< endl;
float num1 = 45.73; // by default c++ treats this as a double
float num2 = 45.73f; // we use f for tell the compiler that it's a floating point value
long double num3 = 45.73l; // we use l for tell the compiler that it's a long double.
// cout << sizeof(num1) << endl;
// cout << sizeof(num2) << endl;
// cout << sizeof(num3) << endl;
//*************Reference Variables*************
float div = 234.89;
float & mil = div;
//cout <<"div = " << div << endl;
//cout <<"mil = " << mil << endl;
//*************Typecasting*************
cout << "The value of div is "<<div<<endl;
cout << "The integer value of div is " << (int)div << endl;
    return 0;
}