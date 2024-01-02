// // // ############################ 1 ################################

// #include<iostream>
// using namespace std;

// class Shape{
//     protected:
//         int width;
//         int height;
//     public:
//         void set_value(int width,int height){
//             this->width = width;
//             this->height = height;
//         }
// };
// class Rectangle : public Shape{
//     public:
//         int calculate_area(){
//             return width*height;
//         }
// };
// class Triangle : public Shape{
//     public:
//         int calculate_area(){
//             return (width*height)/2;
//         }
// };

// int main(){
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;
//     Shape *obj;
//     Rectangle obj1;
//     Triangle obj2;

//     obj = &obj1;
//     obj->set_value(10,4);
//     cout<<"The Area of the Rectangle (given width, height) is : "<<obj1.calculate_area()<<endl;
    
//     obj = &obj2;
//     obj->set_value(10,4);
//     cout<<"The area of Triangle (given base/width ,height) is : "<<obj2.calculate_area()<<endl<<endl;
//     return 0;
// }


// // ############################ 2 ################################

// #include<iostream>
// using namespace std;

// class Shape{
//     public:
//         virtual float area()=0;
//         virtual void display()=0;
// };
// class circle : public Shape{
//     int radius;
//     public:
//     circle(float r ):radius(r){};
//         float area(){
//             return (3.14*radius*radius);
//         }
//         void display(){
//             cout<<"It's a Circle"<<endl;
//             cout<<"Radius is :"<<radius<<endl;
//             cout<<"Area is "<<area()<<endl;
//             cout<<"######################"<<endl;
//         }
// };
// class rectangle : public Shape{
//     float width,height;
//     public:
//     rectangle(float w,float h):width(w),height(h){};
//         float area(){                      
//             return width*height;
//         }
//          void display(){
//             cout<<"It's a Rectangle"<<endl;
//             cout<<"Width and height respectively are :"<<width<<" & "<<height<<endl;
//             cout<<"Area is "<<area()<<endl;
//             cout<<"######################"<<endl;
//         }
// };
// class trapezoid : public Shape{
//     float long_base,short_base,height;
//     public:
//     trapezoid(float l,float s,float h) : long_base(l),short_base(s),height(h){}
//         float area(){
//             return (long_base+short_base)*height/2;
//         }
//          void display(){
//             cout<<"It's a Trapezoid"<<endl;
//             cout<<"Long base,Short base,Height are "<<long_base<<","<<short_base<<","<<height<<" respectively"<<endl;
//             cout<<"Area is "<<area()<<endl;
//             cout<<"######################"<<endl;
//         }
// };
// int main(){
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;
//     Shape *obj1,*obj2,*obj3;
//     obj1 = new circle(10);
//     obj2 = new rectangle(10,10);
//     obj3 = new trapezoid(10,10,20);

//     obj1->display();
//     obj2->display();
//     obj3->display();

//     return 0;
// }


// // ############################ 3 ################################

// #include<iostream>
// using namespace std;

// class Student{
//     protected:
//     string Name;
//     int RollNO;
//     public:
//     virtual void display() = 0;
// };

// class Engineering : public Student{
//     public:
//     void set_data(string nm,int rn){
//         Name = nm;
//         RollNO = rn;
//     }
//     void display(){
//        cout<<"Name of the (Engineering) student is : "<<Name<<endl;
//        cout<<"Thapar Engineering college enrollment number is : "<<RollNO<<endl<<endl; 
//     }
// };
// class Medicine : public Student{
//     public:
//     void set_data(string nm,int rn){
//         Name = nm;
//         RollNO = rn;
//     }
//     void display(){
//        cout<<"Name of the (Branch : Medical) student is : "<<Name<<endl;
//        cout<<"Thapar Medical college enrollment number is : "<<RollNO<<endl<<endl; 
//     }
// };
// class Science : public Student{
//     public:
//     void set_data(string nm,int rn){
//         Name = nm;
//         RollNO = rn;
//     }
//     void display(){
//        cout<<"Name of the (Science) student is : "<<Name<<endl;
//        cout<<"Thapar Science School enrollment number is : "<<RollNO<<endl<<endl; 
//     }
// };
// int main(){
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;

//     Student *object1[3];
//     Engineering obj1;
//     Medicine obj2;
//     Science obj3;

//     obj1.set_data("Rajat",112166);
//     obj2.set_data("Balkrishan",101166);
//     obj3.set_data("Ramesh",112106);

//     object1[0] = &obj1;
//     object1[1] = &obj2;
//     object1[2] = &obj3;
    
//     for(int i=0;i<3;i++){
//         object1[i]->display();
//     }

//     return 0;
// }