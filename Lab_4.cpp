// Lab-4
// 1. Write a program in C+ + to create a class Data having member functions get data to input the numbers in an array, largest to find the largest number in the array and display O to print the largest number. Member function largest O and all the data variables should be private.
// 2. Write a program in C++ to implement various constructors (a) No argument (b) one argument (2) two arguments
// 3. Understand the meaning of friend keyword and implement (a) Friend function (b) Friend
// class.
// 4. Write a program to count the objects of a class using static data member.
// 5. Write a program to count the objects of a class using static member function.
// 6. Write the definition for a class called complex that has floating point data members for storing real and imaginary parts. The class has the following member functions:
// A constructor to ask the data member values of an obiect from the user
// and assign these values to the object. 
// •void dispO to display complex number object
// • complex sum(complex) to sum two complex numbers & return complex number
// • A destructor showing "destructing object" message










// //############################################################
// //**************************** 1 *****************************

// #include<iostream>
// using namespace std;

// class LargestInArray{
//     private:
//     int arr[100];
//     int ele;
//     int largest()
//     {
//         int max = arr[0];
//         for(int j = 0;j<ele;j++)
//         {
//             if(arr[j]>max)
//             {
//                 max = arr[j];
//             }
//         }
//     return max;
//     }
//     public:
//     void getdata()
//     {
//         cout<<"How many elements do you want in an array"<<endl;
//         cin>>ele;
//         for(int i=0;i<ele;i++){
//             cin>>arr[i];
//         }
//     }
//     void display(){
//         cout<<"Largest Number is "<<largest();
//     }
// };

// int main(){
//     LargestInArray object1;
//     object1.getdata();
//     object1.display();
//     return 0;
// }




// //############################################################
// //**************************** 2 *****************************

// #include<iostream>
// #include<cstring>
// using namespace std;

// class Constr{
//     string hello;
//     string hi;
//     public:
//     Constr(){
//         cout<<"This is a constructor with no arguments"<<endl;
//     }
//     Constr(string hello){
//         this->hello = hello;
//         cout<<hello<<endl;
//     }
//     Constr(string hello,string hi){
//         this->hello = hello;
//         this->hi = hi;
//         cout<<hello<<" "<<hi<<endl;
//     }
// };

// int main(){
//     Constr obj1;
//     Constr obj2("System");
//     Constr obj3("System","SYSTEM");
//     return 0;
// }


