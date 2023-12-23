// Calculate the sum of digits of a number using a do-while loop.
#include <iostream>
using namespace std;

int main()
{
    int num, sum =0; // Declare integer variables 'num' and 'sum', and initialize 'sum' to 0.
    int a=0; // Declare and initialize an integer variable 'a' with the value 0.

    cout<<"Enter the number: "; // ask the user to enter a number.
    cin>>num; //store the user input in the variable 'num'.

    do // Starting do-while loop.
    {
        int digit = int(num) % 10; // Calculate the last digit of 'num' using the modulo (%) operator.
        sum += digit; // Add the last digit to 'sum'.
        num /= 10 ; // Remove the last digit from 'num' by dividing it by 10.

        // Loop Explanation:
        // 1. Suppose the user enters '123':
        // 2.In the first iteration: digit = 3, sum = 3, num = 12
        // 3.In the second iteration: digit = 2, sum = 5, num = 1
        // 4.In the third iteration: digit = 1, sum = 6, num = 0 (exit loop)

    } while (num != 0); // Continue as long as the condition satisfy.

    cout<< "Sum of digits: "<< sum <<endl; // Print the sum of digits.

    return 0; //end of this.
}