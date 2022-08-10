# include <iostream>
# include <string>
using namespace std;

// Conditional Ternary Operator (Condition ? Result1 : Result2)

string esParV1(int entrada)
{
    if (entrada % 2 == 0) {
        return "Es par";
    } else {
        return "No es par";
    }
}

string esParV2(int entrada)
{
    return (entrada % 2 == 0) ? "Es par" : "No es par";
}

// Bitwise Operators

void bitwise()
{
    unsigned int num;
    
    num = 5;    // 0101
    // SHL <<
    cout << "1 Bit shift (Left): " << (num << 1) << endl;   // 1010 = 10

    // SHR >> 5 = 0101
    cout << "1 Bit shift (Right): " << (num >> 1) << endl;          // 0010 = 2

    // NOT ~
    num = 6;    // 0110
    cout << "NOT ~6: " << (~num) << endl; // 1001 = 9

    // AND &     // 1011 = 11
    num = 5;     // 0101
    cout << "AND - 5 & 11: " << (num & 11) << endl;  // 0001 = 1

    // OR |     // 1010 = 10
    num = 5;    // 0101
    cout << "OR - 5 | 10" << (num | 10) << endl;  // 1111 = 15

    // XOR ^     // 1010 = 10
    num = 11;    // 1011
    cout << "XOR - 10 ^ 11" << (num ^ 10) << endl;  // 0001 = 1
    /*       ---------------------
             |  nA  |  nB  |  R  |
             ---------------------
       (&)AND|   0  |   1  |  0  |
             |   1  |   0  |  0  |
             |   0  |   1  |  0  |
             |   1  |   1  |  1  |
             ---------------------
       (|) OR|   0  |   1  |  1  |
             |   1  |   0  |  1  |
             |   0  |   1  |  1  |
             |   1  |   0  |  1  |
             ---------------------
       (^)XOR|   1  |   1  |  0  |
             |   0  |   0  |  0  |
             |   1  |   1  |  0  |
             |   1  |   0  |  1  |
             ---------------------
    */

}

// Compound Assignment
void compound()
{
    int x, y, z;

    // Compound +=, -=, *=, /=, %=
    x = 10;
    y = 5;
    z = x + y;
    x += y;
    cout << "X + Y: " << z << endl;
    cout << "X += Y: " << x << endl << endl;
    
    // Compound bitwise
    x = 5;   // num 5 (0101)
    y = 2;   // shift 2
    z = x << y;
    x <<= y;  // 5 << 2 = 010100 = 20
    cout << "X << Y: " << z << endl;
    cout << "X <<= Y: " << x << endl << endl;
}

// Main

int main()
{
    int num;
    cout << "\nConditional Ternary Operator" << endl;

    // Input
    cout << "Ingrese un numero: ";
    cin >> num;

    // Output
    cout << "Version 1: " << esParV1(num) << endl;  // Solucion regular
    cout << "Version 2: " << esParV2(num) << endl;  // Codigo compacto, mismo resultado

    cout << "\nBitwise operators" << endl;
    bitwise();

    cout << "\nCompound Assignments" << endl;
    compound();
}