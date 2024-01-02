//######################################################
// ********************** 1 ****************************

// #include<iostream>
// using namespace std;

// class Student {
// private:
//   string name;
//   int roll_no;
//   string degree;
//   string hostel;
//   float current_cgpa;
// public:
//   void addDetails(string name, int roll_no, string degree, string hostel, float current_cgpa) {
//     this->name = name;
//     this->roll_no = roll_no;
//     this->degree = degree;
//     this->hostel = hostel;
//     this->current_cgpa = current_cgpa;
//   }
//   void updateDetails(string name, int roll_no, string degree, string hostel, float current_cgpa) {
//     this->name = name;
//     this->roll_no = roll_no;
//     this->degree = degree;
//     this->hostel = hostel;
//     this->current_cgpa = current_cgpa;
//   }
//   void updateCGPA(float current_CGPA){
//     this->current_cgpa = current_CGPA;
//   }
//   void updateResidencelnfo (string hostel){
//     this->hostel = hostel;
//   }
//     void displayDetails (){
//      cout<<"######## WELCOME#########"<<endl;
//      cout<<"\nName of the Student is :"<<name;
//      cout<<"\nRoll number of the Student is :"<<roll_no;
//      cout<<"\nName of the Degree of the Student is :"<<degree;
//      cout<<"\nHostel of the Student is :"<<hostel;
//      cout<<"\nCGPA of the Student is :"<<current_cgpa<<endl;
//   }
// };

// int main(){
//     Student obj1;
//     obj1.addDetails("Gautam",102116095,"CSE","Hostel-D",7.5);
//     obj1.displayDetails();
//     obj1.updateCGPA(7.8);
//     obj1.updateResidencelnfo("Hostel-O");
//     obj1.displayDetails();
//     obj1.updateDetails("Puneet",102116073,"CSE","Hostel-D",7);
//     obj1.displayDetails();
//     return 0;
// }




// //######################################################
// // ********************** 2 ****************************


// //************Without ptrs**************

// #include<iostream>
// using namespace std;

// class Complex{
//     int real;
//     int imaginary;
// public:
//     void set_val(int re, int im){
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
//     obj1.set_val(3,4);
//     obj2.set_val(4,4);

//     obj1 = obj1.sum(obj2);

//     obj1.display();

//     return 0;
// } 

// //************* With ptrs(Use pointers to initialize objects) ****************
// //rest of the code is pretty much the same , there's just a small change in main()

// #include<iostream>
// using namespace std;

// class Complex{
//     int real;
//     int imaginary;
// public:
//     void set_val(int re, int im){
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
//     Complex * obj1 = new Complex;
//     Complex * obj2 = new Complex;

//     obj1->set_val(3,4);
//     obj2->set_val(4,4);

//     *obj1 = obj1->sum(*obj2);           //" * " is to be used

//     obj1->display();

//     return 0;
// }



// //######################################################
// // ********************** 3 ****************************


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

// int num = 10; // Global variable

// int main() {
//     int num = 5; // Local variable with the same name

//     cout << "Local variable: " << num << endl;
//     cout << "Global variable: " << ::num << endl; // Accessing global variable using scope resolution operator

//     return 0;
// }


// //********* Part 3 *************

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

// //********* Part 4 *************

// #include<iostream>

// int main(){
//     std::cout<<"Hi"<<std::endl;
//     return 0;
// }


// //######################################################
// // ********************** 4 ****************************

//******* Part 1 *********

// #include<iostream>
// using namespace std;

// class myClass{
//     int bro;
//     void displayPrivate(){
//         cout<<"This is private member funtion"<<endl;
//     }
//     public:
//     void displayPublic(){
//         displayPrivate();            // calling private member function         
//     }
// };

// int main(){
//     myClass object1;
//     object1.displayPublic();
//     return 0;
// }

//Part 2 can also be proved Similarly.