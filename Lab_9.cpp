// //################### 1 ###########################
// #include <iostream>
// using namespace std;

// class MinusOverload{
//     int latitude;
//     int longitude;
//     public:
//     void set_val(int lat,int lon){
//         latitude = lat;
//         longitude = lon;
//     }
//     void display(){
//         cout<<"Latitude : "<<latitude<<"\tLongitude : "<<longitude<<endl;
//     }
//     MinusOverload operator-(MinusOverload obj1){
//         MinusOverload temporary;
//         temporary.latitude = latitude - obj1.latitude;
//         temporary.longitude = longitude - obj1.longitude;
//         return temporary;
//     }
// };

// int main(){
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;
//     MinusOverload obj1,obj2;
//     obj1.set_val(4,5);
//     obj2.set_val(34,30);

//     obj1 = obj2-obj1;
//     obj1.display();
// }



// //################### 2 ###########################

// #include <iostream>
// using namespace std;

// class Float {
// public:
//     float x;
//     Float(float val){
//         x = val;
//     }
//     Float operator+(Float obj) {
//         return Float(x + obj.x);
//     }   
//     Float operator-(Float obj) {
//         return Float(x - obj.x);
//     }   
//     Float operator*(Float obj) {
//         return Float(x * obj.x);
//     }   
//     Float operator/(Float obj) {
//         return Float(x / obj.x);
//   }
// };

// int main() {
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;
//     Float obj1(4.4), obj2(2.2);

//     cout << "Addition = " << (obj1 + obj2).x << endl;
//     cout << "Subtraction = " << (obj1 - obj2).x << endl;
//     cout << "Multiplication = " << (obj1 * obj2).x << endl;
//     cout << "Division = " << (obj1 / obj2).x << endl;

//   return 0;
// }




// // //################### 3 ###########################

// #include<iostream>
// using namespace std;

// class Complex{
//     int real;
//     int imaginary;
//     public:
//     void set_val(int re, int imag){
//         real = re;
//         imaginary = imag;
//     }
//     void display(){
//         cout<<"Sum of two complex number is :\t"<<real<<" + "<<imaginary<<"i"<<endl<<endl;
//     }
//     Complex operator+(Complex obj1){
//         Complex temporary;
//         temporary.real = real + obj1.real;
//         temporary.imaginary = imaginary + obj1.imaginary;
//         return temporary;
//     }
// };

// int main(){
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;
//     Complex obj1,obj2,obj;
//     obj1.set_val(2,4);
//     obj2.set_val(4,6);
//     obj = obj1 + obj2;
//     obj.display();
//     return 0;
// }


// //##################### 4 ###########################

// #include<iostream>
// using namespace std;

// class String{
//     private:
//     string stra;
//     public:
//     void set_value(string s){
//         stra = s;
//     }
//     bool operator==(String obj){
//         if (stra == obj.stra)
//             return true;
//         else
//             return false;
//     }
//     String operator+(String obj1){
//         String temporary;
//         temporary.stra= stra + obj1.stra;
//         return temporary;
//     }
//     void display(){
//         cout<<"String Addition gives : "<<stra;
//     }
// };

// int main(){
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;
//     String obj1,obj2,obj3;

//     obj1.set_value("Rajat");
//     obj2.set_value("Rajat");
//     obj3.set_value("Pankaj");

//     if(obj1 == obj2)
//         cout<<"Strings Are Equal"<<endl;
//     else
//         cout<<"String aren't Equal"<<endl;

//     obj1 = obj1+obj2;
//     obj1.display();

//     return 0;
// }



// //########################### 5 #############################

// #include <iostream>
// #include <vector>
// using namespace std;

// class Matrix {
// private:
//     vector<vector<int> > data;
//     int rows;
//     int cols;
// public:
//     Matrix(int numRows, int numCols) : rows(numRows), cols(numCols) {
//         data.resize(rows, vector<int>(cols, 0));
//     }
//     void inputMatrix() {
//         cout << "Enter matrix elements:" << endl;
//         for (int i = 0; i < rows; ++i) {
//             for (int j = 0; j < cols; ++j) {
//                 cin >> data[i][j];
//             }
//         }
//     }
//     void displayMatrix() const {
//         cout << "Matrix:" << endl;
//         for (int i = 0; i < rows; ++i) {
//             for (int j = 0; j < cols; ++j) {
//                 cout << data[i][j] << "\t";
//             }
//             cout << endl;
//         }
//     }
//     Matrix operator*(const Matrix& matrix) {
//         if (cols != matrix.rows) {
//             cerr << "Matrix dimensions mismatch! Cannot multiply." << endl;
//             return Matrix(0, 0);
//         }

//         Matrix result(rows, matrix.cols);

//         for (int i = 0; i < rows; ++i) {
//             for (int j = 0; j < matrix.cols; ++j) {
//                 int sum = 0;
//                 for (int k = 0; k < cols; ++k) {
//                     sum += data[i][k] * matrix.data[k][j];
//                 }
//                 result.data[i][j] = sum;
//             }
//         }
//         return result;
//     }
// };
// int main() {
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;
//     int rows1, cols1, rows2, cols2;
//     cout << "Enter the number of rows and columns for matrix 1: ";
//     cin >> rows1 >> cols1;
//     cout << "Enter the number of rows and columns for matrix 2: ";
//     cin >> rows2 >> cols2;
//     Matrix matrix1(rows1, cols1);
//     matrix1.inputMatrix();
//     Matrix matrix2(rows2, cols2);
//     matrix2.inputMatrix();
//     Matrix result = matrix1 * matrix2;
//     cout << "Result" << endl;
//     result.displayMatrix();
//     return 0;
// }



//############################ 6 #########################

// #include <iostream>
// using namespace std;
// class MyClass {
// private:
//     int value;
// public:
//     MyClass() {
//         value = 0;
//     }
//     friend istream& operator>>(istream& input, MyClass& obj) {
//         input >> obj.value;
//         return input;
//     }
//     friend ostream& operator<<(ostream& output, const MyClass& obj) {
//         output << "Value: " << obj.value;
//         return output;
//     }
// };

// int main() {
//     MyClass obj1;
//     cout << "Enter a value: ";
//     cin >> obj1;
//     cout << "Object 1: " << obj1 << endl;
//     MyClass obj2;
//     cout << "Enter a value: ";
//     cin >> obj2;
//     cout << "Object 2: " << obj2 << endl;
//     return 0;
// }
