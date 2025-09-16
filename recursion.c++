#include <bits/stdc++.h>

using namespace std;

// beginner question
int factorial(int n){
    if(n==1) return 1;
    else return n*factorial(n-1);
}

int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    else return fibonacci(n-1)+fibonacci(n-2);
}

int pow(int x,int n){ // x to the power n
    if(n==1) return x;
    else return x*pow(x,n-1);
}

int print_numbers(int x){
    cout<<x<<endl;
    if(x==0) return -1;
    else return print_numbers(x-1);
}

int number_digits(int digit){
    if(digit==0) return 0;
    else return 1+number_digits(digit/10);
}

int add_digits(int digit){
    int dig = digit-(digit/10)*10;
    if(digit==0) return 0;
    else return dig+add_digits(digit/10);
}

int mul(int x,int n){
    if(n==0) return 0;
    else return x+mul(x,n-1);
}

int count_zeroes(int digit){
    int dig = digit-(digit/10)*10;
    if(digit==0) return 0;
    if(dig==0) return 1+count_zeroes(digit/10);
    else return 0+count_zeroes(digit/10);
}

int main(){
    /*
        Recursion : function  calling itself ;
        ex :- factorial(n) = n*factorial(n-1)

        recursion uses call stack 
    */

    // cout<<fibonacci(6)<<endl;
    // cout<<pow(5,3)<<endl;
    // cout<<print_numbers(10)<<endl;
    // cout<<add_digits(12300)<<endl;
    // cout<<mul(65,2)<<endl;
    cout<<count_zeroes(10000)<<endl;

    
    return 0;
}