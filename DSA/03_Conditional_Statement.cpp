// Conditionals Statements

#include<iostream>
using namespace std;

int main(){
/*    
// If Statements
    int a = 10;
    int b = 20;

    if(a < b){
        cout<<"A is Less Then B"<<endl;
    }


// If Else 
     if(a > b){
        cout<<"A is Less Then B"<<endl;
    } else {
        cout<<"A is Greater Then B"<<endl;
    }
*/

// IF ELSE IF

    int num;
    
    cout<<"Enter The Number : ";
    cin>>num;

    if(num > 0){
        cout<<"This is Positive Number";
    } else if (num < 0){
        cout<<"This is Negtive Number";
    } else {
        cout<<"This is 0";
    }

}