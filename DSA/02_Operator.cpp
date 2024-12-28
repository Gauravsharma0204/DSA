// Operators 

#include<iostream>
using namespace std;

int main(){

//Arithmetic Opr (+, -, *, /, %, **)
int a = 10, b = 20;

cout<<"a + b : "<<a + b <<endl;
cout<<"a - b : "<<a - b <<endl;
cout<<"a * b : "<<a * b <<endl;
cout<<"a / b : "<<a / b <<endl;
// cout<<"a ** b : "<<a ** b <<endl;
cout<<"a % b : "<<a % b <<endl<<endl;


// Relational Opr (==, <, >, !=, <=, >=)

// greater than 
cout << "a > b = " << (a > b) << endl; 
    
// less than 
cout << "a < b = " << (a < b) << endl; 
    
// equal to 
cout << "a == b = " << (a == b) << endl; 
    
// not equal to 
cout << "a != b = " << (a != b) << endl<<endl<<endl; 



// Logical Opr (&&, ||, !)

//Logical AND operator
cout << "a && b is " << (a && b) << endl;
// Logical OR operator
cout << "a || b is " << (a || b) << endl;
// Logical NOT operator
cout << "!b is " << (!b) << endl<<endl<<endl;




// Assignment Operator (+=, -=, *=, /=, )
    
cout << "a = " << a << endl;
  
//  Add and Assignment Operator
cout << "a += b is " << (a += b) << endl;
  
// Subtract and Assignment Operator
cout << "a -= b is " << (a -= b) << endl;
  
//  Multiply and Assignment Operator
cout << "a *= b is " << (a *= b) << endl;
  
//  Divide and Assignment Operator
cout << "a /= b is " << (a /= b) << endl;


}