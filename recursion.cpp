#include<iostream>
using namespace std;
int FactorialCalculation(int num){
    if (num == 0 or num == 1){
        return 1;
    }
    else{
        return num*FactorialCalculation(num-1);
    }
}
int main(){
    int num;
    cout<<"Enter the number here : ";
    cin >> num;
    cout <<"\n";
    int t = FactorialCalculation(num);
    cout <<"The factorial of "<<num<<" is "<<t<<"."<< endl;
    return 0;
}