// Lab-3
// 1. Implement private and public members in a class.

// 2. Define a class Complex with variables real and imaginary along with
// following:
// (a) void setComplex (float, float) to initialize object values.
// (b) void displayComplex to show the complex number
// (c) Pass and return objects to calculate sum of two complex numbers. Display the sum.

// 3. Implement scope resolution operator : : for the following
// uses:
// (a) Class functions defined outside the class
// (b) Access a static variables
// (c) Use inbuilt libraries (cin cout with scope resolution operator)

// 4. Implement constructor and destructor in a class




//############################################################
//**************************** 1 *****************************

// #include<iostream>
// using namespace std;

// class Basic{
//     private:                               //by default members are private.
//     float value;
//     public:
//     float value2;
//     void setter(float x,float y){              //public Members can access private ones
//         value = x;
//         value2 = y;
//     }
//     void getter(){
//         cout<<"\nValue1 is "<<value;
//         cout<<"\nValue2 is "<<value2<<endl;
//     }
// };
// float main(){
//     Basic obj1;                            //Making objects of class Basic
//     obj1.setter(7,8);                      //Objects calling member functions
//     obj1.getter();
//     return 0;
// }





//############################################################
//**************************** 2 *****************************

// #include<iostream>
// using namespace std;

// class Complex{
//     float real;
//     float imaginary;
// public:
//     void set_val(float re, float im){
//         real = re;
//         imaginary = im;
//     }
//     void display(){
//        cout<<"The number is : "<<real<<" +  i"<<imaginary<<endl; 
//     }

//     Complex sum(Complex obj1){
//         Complex temporary;
//         temporary.real = real + obj1.real;
//         temporary.imaginary = imaginary + obj1.imaginary;
//         return temporary;
//     }
// };

// int main(){
//     Complex obj1,obj2;
//     obj1.set_val(3.5,4.99);
//     obj2.set_val(4.9,4);

//     obj1 = obj1.sum(obj2);

//     obj1.display();

//     return 0;
// } 





//############################################################
//**************************** 3 *****************************



// //********* Part 1 *************

// #include<iostream>
// using namespace std;

// class myClass
// {
// private:
//     int test_subject;
// public:
//     void set_data(int t);
//     void display_data();
// };

// void myClass::set_data(int t)
// {
//     test_subject = t;
// }
// void myClass::display_data()
// {
//     cout<<"\nHere's your test subject defined outside the class : "<<test_subject<<endl<<endl;
// }

// int main(){
//     myClass obj1;
//     obj1.set_data(444);
//     obj1.display_data();
//     return 0;
// }



// //********* Part 2 *************

// #include <iostream>
// using namespace std;

// class MyClass {
// public:
//     static int count; // Declaration of static variable
// };

// int MyClass::count = 0; // Definition of static variable using scope resolution operator

// int main() {
//     MyClass::count = 5; // Accessing and modifying static variable using scope resolution operator
//     cout << "Count: " << MyClass::count << endl;

//     return 0;
// }



// //********* Part 3 *************

// #include<iostream>

// int main(){
//     std::cout<<"Hi"<<std::endl;
//     return 0;
// }





// //############################################################
// //**************************** 4 *****************************

// #include<iostream>
// using namespace std;

// class khedi{

//     public:
//     khedi(){
//         cout<<"It's a Constructor (it has same name as class)";
//         cout<<", it is commonly used to initialize objects"<<endl;
//     }
//     ~khedi(){
//         cout<<"It's a Destructor"<<endl;
//     }
// };

// int main(){
//     khedi obj1;
//     return 0;
// }