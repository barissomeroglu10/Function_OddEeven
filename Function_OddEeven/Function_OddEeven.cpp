/*
In this code we will figure total and multiplication for odd and even numbers (from 1 to 99)

Developer: Barış Someroğlu
Date: 20.03.2024 - 01:30 a.m.
*/



#include <iostream>

using namespace std;

// Prototype notification for function
long long int OddTotal();
long long int OddMultiplication();
long long int EvenTotal();
long long int EvenMultiplication();

int main()
{
    long long int a = OddTotal();
    long long int b = OddMultiplication();

    long long int c = EvenTotal();
    long long int d = EvenMultiplication();

    cout << "Total for Odd Numbers: " << a << endl;
    cout << "Multiplication for Odd Numbers: " << b << endl;

    cout << "Total for Even Numbers: " << c << endl;
    cout << "Multiplication for Even Numbers: " << d << endl;

    return 0;
}

long long int OddTotal() // function for odd total
{
    long long int OT = 0;

    for (int i = 1; i <= 99; i++)
    {
        if (i % 2 != 0)
        {
            OT += i;
        }
    }

    return OT;
}

long long int OddMultiplication() // function for odd multilication 
{
    long long int OM = 1;

    for (int i = 1; i <= 99; i++)
    {
        if (i % 2 != 0)
        {
            OM *= i;
        }
    }

    return OM;
}

long long int EvenTotal() // function for even total
{
    long long int ET = 0;

    for (int i = 1; i <= 99; i ++)
    {
        if (i % 2 == 0)
        {
            ET += i;
        }
    }

    return ET;
}

long long int EvenMultiplication() // function for even multilication
{
    long long int EM = 1;

    for (int i = 1; i <= 99; i++)
    {
        if (i % 2 == 0)
        {
            EM *= i;
        }
    }

    return EM;
}


