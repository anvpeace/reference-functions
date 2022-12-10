#include <iostream>

using namespace std;

void setValue(int &);
int input;
int &value = input;



int main(){

    cout << "Input a value" << endl;
    cin >> value;

    setValue(value);


    return 0;
}

void setValue(int &value){

    int &declaredNum = value;

    cout << endl;

    cout << declaredNum << " " << &declaredNum <<endl; 

    cout << value << " " << &value << endl;

    cout << input << " " << &input << endl;

}

// Exercise 1.

// Write a function called "setValue" which takes one integer argument. The function should
// ask the user to input a value and set the value of the sent argument. Write a simple program
// in which you should declare an integer variable and send it to the setValue function. Then
// print out the value of the variable in the console.