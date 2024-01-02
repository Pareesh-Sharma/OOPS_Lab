// // ############################ 1 ################################

// #include<iostream>
// #include<cmath>
// using namespace std;

// double triangleAreaCalculator(float a){
//     float area = sqrt(3)/4 *a*a;
//     return area;
// }

// double triangleAreaCalculator(float a,float b){ // Function overloading(different parameters)
//     float area = a*b/2;
//     return area;
// }


// int main(){
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;
//     int side;
//     int base;
//     int uneq;
//     int eq;
//     cout<<"For an equilateral Triangle only side is needed (Enter Size) : ";
//     cin>>side;
//     cout<<"Area for an equilateral Triangle is : "<<triangleAreaCalculator(side)<<endl;
//     cout<<"For a right Angle triangle give height/side and then base : ";
//     cin>>side>>base;
//     cout<<"Area for a right Angle triangle is :"<<triangleAreaCalculator(side,base)<<endl;
//     cout<<"For Isosceles triangle Enter height/side, then base : ";
//     cin>>side>>base;
//     cout<<"Area for Isosceles triangle is :"<<triangleAreaCalculator(side,base)<<endl;
//     return 0;
// }


// // ############################ 2 ################################

// #include<iostream>
// using namespace std;

// class Publication{
//     protected:
//     string title;
//     float price;
//     public:
//     void get_data(){
//         cout<<"\nEnter the title of the publication :- ";
//         getline(cin,title);
//         cout<<"\nEnter the price of the publication :- ";
//         cin>>price;
//         cin.ignore();
//     }
//     void put_data(){
//         cout<<"\nBook's Details are: \nTitle :- "<<title;
//         cout<<"\nPrice :- "<<price;
//     }
// };
// class Book : public Publication{
//     private:
//     int page_count;
//     public:
//     void get_data(){ 
//         Publication::get_data();                         //code reuse
//         cout<<"Enter the number of  pages :- ";
//         cin>>page_count;
//         cin.ignore();
//     }
//     void put_data(){
//         Publication::put_data();
//         cout<<"\nNumber of Pages :- "<<page_count;
//     }
// };
// class Tape : public Publication{
//     float playing_time;
//     public:
//     void get_data(){
//         Publication :: get_data();                         //code reuse
//         cout<<"Enter the playing time :- "<<endl;
//         cin>>playing_time;
//         cin.ignore();
//     }
//     void put_data(){
//         Publication::put_data();
//         cout<<"Playing Time :- "<<playing_time;
//     }
// };
// int main(){
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;
//     Book obj1;
//     Tape obj2;

//     cout<<"\n\nBook :-"<<endl;
//     obj1.get_data();
//     obj1.put_data();

//     cout<<"\n\nTape :-"<<endl;
//     obj2.get_data();
//     obj2.put_data();

//     return 0;
// }





// // ############################ 3 ################################


// #include<iostream>
// using namespace std;

// void display(){                      
//     cout << "\nNo argument passed: \n";
//     cout<<"*"<<endl;
// }
// void display(char x){                      //FUNCTION overloading (Different parameters)
//     cout<<"First argument passed: \n";
//     cout<<x;
// }
// void display(char y , int z){              //FUNCTION overloading (Different parameters)
//     cout<<"\nBoth argument passed: \n";
//     for(int a=0;a<z;a++){
//         cout<<y;
//     }
//     cout<<endl;
// }

// int main(){
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;
//     display();
//     display('#');
//     display('$',5);
// }





// //############################ 4 ################################

// #include<iostream>
// using namespace std;

// class Complex{
//     float real;
//     float imaginary;
//     public:
//     Complex() {
//         real = 10;                                 //default initialisation
//         imaginary = 20;
//     }
//     Complex(float real,float imaginary){            //Constructor overloading
//     this->real = real;                              //"this->" used
//     this->imaginary = imaginary;
//     }
//     Complex sum(Complex obj1){
//         Complex temporary;
//         temporary.real = real + obj1.real;
//         temporary.imaginary = imaginary + obj1.imaginary;
//         return temporary;
//     }
//     void display(){
//         cout<<"The sum of the complex numbers is : "<<real<<" + "<<imaginary<<"i"<<endl;
//     }
// };

// int main(){
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;
//     Complex obj;
//     Complex obj2(4,4);
//     Complex obj3(7,8);
//     Complex obj4;

//     obj4 = obj.sum(obj3);
//     obj4.display();

//     obj4 = obj2.sum(obj3);
//     obj4.display();
//     return 0;
// }


// //############################ 5 ################################


// #include<iostream>
// using namespace std;

// class Point{
// private:
//   int x;
//   int y;

// public:
//   Point() {
//     x = 0;
//     y = 0;
//   }
//   Point(int x, int y) {
//     this->x = x;
//     this->y = y;
//   }
//   Point(const Point &p) {
//     x = p.x;
//     y = p.y;
//   }

//   void display() {
//     cout << "x is " << x << endl;
//     cout << "y is " << y << endl;
//   }
// };

// int main() {
//   cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;
//   Point p(10, 20);
//   p.display();
//   Point p2(p);
//   p2.display();
//   return 0;
// }