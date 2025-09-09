#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    int sum;
    int sub;
    int mult;
    int div;
    int mod;
    int inc;
    int dec;
    cout << "please enter a number: ";
    cin >> x;
    cout << "enter another number : ";
    cin >> y;
    if(x == 6 && y == 7 || sum == 67 || x == 67 || y == 67){
        cout << "Dont do that again" << endl;
    }else{
sum = x + y;
    sub = x - y;
    mult = x * y;
    div = x / y;
    inc = ++x;
    dec = --y;
     
    cout << "The sum is " << sum << endl;
    cout << "The difference is " << sub << endl;
    cout << "The product is " << mult << endl;
    cout << "The quotient is " << div << endl;
    cout << "When you use mod the answer is " << mod << endl;
    cout << "x incremented is " << inc << endl;
    cout << "y decremented is " << dec << endl;
   
    }
    

   
   
}