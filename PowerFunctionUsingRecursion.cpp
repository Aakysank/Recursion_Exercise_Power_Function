// PowerFunctionUsingRecursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Recursion Sample 1
//power(m,n) -- m*m*m*m...*m (n times multiplication by itself) -- pow(m,n-1)*m

int power_1(int m, int n)
{
    if (n > 0)
        return power_1(m, n - 1) * m;
    else
        return 1;
}

//Recursion Sample 2
//Reduction in number of multiplications.
//Number of stack frames reduced by half.

//The generalised equation for computing power of a number is 
//power(m,n) = {
//                 1  if n is 0
//                 pow(m*m, n/2) if n is divisble by 2
//                 pow(m*m, n-1/2) *m if n is odd.
//             }
int power_2(int m, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return power_2(m * m, n / 2);
    else
        return power_2(m * m, (n - 1) / 2) * m;
}

int main()
{
    power_1(2, 30);
    power_2(2, 30);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
