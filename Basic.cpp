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
int fact(int num){
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
int ForLoop(int num){
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
// int result = fact(5);
// cout << result;
int num;
cout << "Enter the number: ";
cin >> num;
int result = ForLoop(num);
cout << result<< endl;
    return 0;
}