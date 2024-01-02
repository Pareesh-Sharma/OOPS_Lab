// #include <iostream>
// using namespace std;

// void checkNumber(int num) {
//     if (num == 0) {
//         throw 0;
//     } else if (num % 2 == 0) {
//         throw "Even";
//     } else {
//         throw 3.14; 
//     }
// }

// int main() {
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     try {
//         checkNumber(num);
//     } catch (int ex) {
//         cout << "Exception: Integer value " << ex << " caught.\n";
//     } catch (const char* ex) {
//         cout << "Exception: String \"" << ex << "\" caught.\n";
//     } catch (...) {
//         cout << "Unknown exception caught.\n";
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//    cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;
//     int age, divisor;
//     string input;

//     try {
//         cout << "Enter your age: ";
//         cin >> age;

//         cout << "Enter a divisor: ";
//         cin >> divisor;

//         if (divisor == 0)
//             throw 1;

//         if (age <= 18)
//             throw 'A';

//         cout << "Enter a string containing only alphabets: ";
//         cin >> input;

//         for (char c : input) {
//             if (!isalpha(c))
//                 throw input;
//         }
//         cout << "Everything is fine!\n";
//     } catch (int ex) {
//         cout << "Exception: Division by zero.\n";
//     } catch (char ex) {
//         cout << "Exception: Age is not greater than 18.\n";
//     } catch (string ex) {
//         cout << "Exception: Only alphabets are allowed. Input: " << ex << "\n";
//     } catch (...) {
//         cout << "Default catch: Unknown exception occurred.\n";
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class MyException {
// public:
//     string message;

//     MyException(string msg) : message(msg) {}
// };

// void divideNumbers(int a, int b) {
//     if (b == 0) {
//         throw MyException("Division by zero is not allowed.");
//     }
//     cout << "Result: " << a / b << endl;
// }

// int main() {
//    cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;
//     int num1, num2;

//     try {
//         cout << "Enter two numbers: ";
//         cin >> num1 >> num2;

//         divideNumbers(num1, num2);
//     } catch (MyException& ex) {
//         cout << "Exception caught: " << ex.message << endl;
//         throw;
//     }

//     return 0;
// }