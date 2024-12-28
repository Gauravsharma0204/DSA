#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    // int i = 1;

    // while(i <= n){
    //     cout<<i<<endl;;
    //     i++;
    // }



    // Sum of N Number 
    // int sum = 0;
    // int i = 1;

    // while (i <= n){
    //     sum = sum + i;
    //     i++;
    // }
    // cout<< "Value of Sum is "<<sum <<endl;
     


     // Sum of All Even Number
    //  int sum = 0;
    //  int i = 2;



    //  while(i <= n){
    //         sum = sum + i;
    //         i += 2;
    //  }
    //   cout<<"Sum of Even Number : "<<sum<<endl;
     

    
    
    //Given Number is Prime or Not
    int i = 2;
    while(i < n){
        if(n%i==0){
            cout<<"Not Prime :"<<endl;
            break;
        }else {
            cout<<"Prime Number :" <<endl;
            break;
        } 
        i++;
    }

}