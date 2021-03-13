//WAP to create a recursive function for factorial of a number
#include <iostream>
using namespace std;

int factorial(int n){
    if(n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
int main()
{
    int num;
    cout<<"Enter the number to find its factorial:"<<endl;
    cin>>num;
    int res=factorial(num);
    cout<<res;

    return 0;
}