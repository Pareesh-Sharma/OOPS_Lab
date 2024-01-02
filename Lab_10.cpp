// // ################ 1 ####################

// #include<iostream>
// using namespace std;

//     template<typename T>
//     T larger(T x,T y){
//         return ((x>y) ? x : y);
//     }

// int main(){
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;

//     int a=2,b=3;
//     float c = 1.03,d=1.02;

//     cout<<"Larger among the two is : "<<larger(a,b)<<endl;
//     cout<<"Larger among the two is : "<<larger(c,d)<<endl;

//     return 0;
// }



// // ################ 2 ####################


// #include <iostream>
// using namespace std;

// template <typename T>
//     T swapVAL(T& x, T& y)
//     {
//         T temporary = x;
//         x = y;
//         y = temporary;
//     }

// int main(){
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;

//     int a=2;
//     int b=3;
//     cout<<"Before swapping : a = "<<a<<"\tand b = "<<b<<endl;
//     swapVAL(a,b);
//     cout<<"After swapping : a = "<<a<<"\tand b = "<<b<<endl;
//     float c = 1.03;
//     float d=1.02;
//     cout<<"\nBefore swapping : c = "<<c<<"\tand d = "<<d<<endl;   
//     swapVAL(c,d);
//     cout<<"After swapping : c = "<<c<<"\tand d = "<<d<<endl;

//     return 0;
// }




// // ################ 3 ####################


// #include<iostream>
// using namespace std;

// template <typename T>
// class Calculator{
//     T a,b;
//     public:
//     Calculator(T x,T y){
//         a = x;
//         b = y;
//     }
//     T addno(){
//         return(a+b);
//     }
//     T subtract(){
//         return(a-b);
//     }
//     T division(){
//         return(a/b);
//     }
//     T multiplication(){
//         return(a*b);
//     }
// };
// int main(){
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;

//     Calculator <int>obj1( 4,2);
//     Calculator <float>obj2(4.4,2.2);

//     cout<<"For integers:->  addition,subtraction,multiplication and division respective results are :  ";
//     cout<<obj1.addno()<<"  ";
//     cout<<obj1.subtract()<<"  ";
//     cout<<obj1.multiplication()<<"  ";
//     cout<<obj1.division()<<endl;
//     cout<<"\nFor floats:->  addition,subtraction,multiplication and division respective results are :  ";
//     cout<<obj2.addno()<<" ";
//     cout<<obj2.subtract()<<" ";
//     cout<<obj2.multiplication()<<" ";
//     cout<<obj2.division()<<endl<<endl;
//     return 0;
// }




//####################### 4 ###########################

// #include <iostream>
// using namespace std;

// template <typename T>
// class LinkedList {
// public:
//     LinkedList() {
//         head = nullptr;
//         tail = nullptr;
//     }

//     ~LinkedList() {
//         while (head != nullptr) {
//             Node* temp = head;
//             head = head->next;
//             delete temp;
//         }
//     }

//     void Insert(T data) {
//         Node* new_node = new Node(data);
//         if (head == nullptr) {
//             head = new_node;
//             tail = new_node;
//         } else {
//             tail->next = new_node;
//             tail = new_node;
//         }
//     }

//     T PopO() {
//         if (head == nullptr) {

//             return T();
//         } else {
//             T data = head->data;
//             Node* temp = head;
//             head = head->next;
//             delete temp;
//             return data;
//         }
//     }

//     T Next() {
//         if (head == nullptr) {

//             return T();
//         } else {
//             return head->data;
//         }
//     }

// private:
//     struct Node {
//         T data;
//         Node* next;

//         Node(T data) {
//             this->data = data;
//             next = nullptr;
//         }
//     };

//     Node* head;
//     Node* tail;
// };

// int main() {
//     cout << "\nPareesh Sharma\nRoll number : 102116092\n" << endl;
//     LinkedList<int> linked_list;
//     linked_list.Insert(10);
//     linked_list.Insert(20);
//     linked_list.Insert(30);

//     std::cout << linked_list.PopO() << std::endl;
//     std::cout << linked_list.Next() << std::endl;

//     return 0;
// }