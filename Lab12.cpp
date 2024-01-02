// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;
//     ofstream outputFile("NUM.TXT");

//     if (!outputFile) {
//         cout << "Error opening the file.\n";
//         return 1;
//     }

//     for (int i = 1; i <= 200; ++i) {
//         outputFile << i << endl;
//     }

//     outputFile.close();
//     cout << "Numbers written to NUM.TXT successfully.\n";

//     return 0;
// }







// #include <iostream>
// #include <fstream>
// #include <cctype>
// using namespace std;

// int countAlphabets(const string& filename) {
//     ifstream inputFile(filename);
//     if (!inputFile) {
//         cout << "Error opening the file.\n";
//         return -1;
//     }

//     char ch;
//     int count = 0;

//     while (inputFile.get(ch)) {
//         if (isalpha(ch)) {
//             count++;
//         }
//     }

//     inputFile.close();
//     return count;
// }

// void writeToTxtFile(const string& filename, const string& content) {
//     ofstream outputFile(filename, ios::app);
//     if (!outputFile) {
//         cout << "Error opening the file for writing.\n";
//         return;
//     }

//     outputFile << content << endl;
//     outputFile.close();
// }

// int main() {
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;
//     string filename = "string.txt";
//     int numAlphabets = countAlphabets(filename);

//     if (numAlphabets != -1) {
//         cout << "Number of alphabets in " << filename << ": " << numAlphabets << endl;
//     }

//     return 0;
// }







// #include <iostream>
// #include <fstream>
// using namespace std;
// class Student {
// public:
//     string name;
//     int rollNo;
//     Student() : name(""), rollNo(0) {}
//     Student(string name, int rollNo) : name(name), rollNo(rollNo) {}
// };

// int main() {
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;
//     const string filename = "students.txt";
//     {
//         ofstream outputFile(filename, ios::binary);
//         if (!outputFile) {
//             cout << "Error opening the file.\n";
//             return 1;
//         }
//         Student student1("Rajat", 102116225);
//         Student student2("Vanshul", 102116226);
//         outputFile.write(reinterpret_cast<char*>(&student1), sizeof(Student));
//         outputFile.write(reinterpret_cast<char*>(&student2), sizeof(Student));
//         outputFile.close();
//         cout << "Data written to the file (student.txt) successfully.\n";
//     }
//     {
//         ifstream inputFile(filename, ios::binary);
//         if (!inputFile) {
//             cout << "Error opening the file.\n";
//             return 1;
//         }
//         Student student1, student2;
//         inputFile.read(reinterpret_cast<char*>(&student1), sizeof(Student));
//         inputFile.read(reinterpret_cast<char*>(&student2), sizeof(Student));
//         inputFile.close();
//         cout << "Data read from the file:\n";
//         cout << "Student 1: " << student1.name << ", Roll No: " << student1.rollNo << endl;
//         cout << "Student 2: " << student2.name << ", Roll No: " << student2.rollNo << endl;
//     }
//     return 0;
// }





// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     cout<<"\nPareesh Sharma\nRoll number : 102116092\n"<<endl;
//     const string sourceFile = "source.txt";
//     const string destinationFile = "destination.txt";
//     ofstream sourceOutputFile(sourceFile);
//     if (!sourceOutputFile) {
//         cout << "Error creating source file.\n";
//         return 1;
//     }

//     sourceOutputFile << "This is source file.\n";
//     sourceOutputFile.close();

//     ifstream inputFile(sourceFile);
//     if (!inputFile) {
//         cout << "Error opening source file.\n";
//         return 1;
//     }
//     ofstream outputFile(destinationFile);
//     if (!outputFile) {
//         cout << "Error creating the destination file.\n";
//         return 1;
//     }
//     char ch;
//     while (inputFile.get(ch)) {
//         outputFile << ch;
//     }
//     inputFile.close();
//     outputFile.close();
//     cout << "File contents copied successfully.\n";
//     return 0;
// }





// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     string input;
//     cout << "Enter a string: ";
//     getline(cin, input);

//     cout << "Length of the string: " << input.length() << endl;
//     ofstream outputFile("characters.txt");
//     if (!outputFile) {
//         cout << "Error opening the file.\n";
//         return 1;
//     }
//     outputFile << input;
//     outputFile.close();
//     cout << "String stored in characters.txt.\n";
//     ifstream inputFile("characters.txt");
//     if (!inputFile) {
//         cout << "Error opening the file.\n";
//         return 1;
//     }
//     string storedString;
//     getline(inputFile, storedString);
//     inputFile.close();
//     cout << "Fetched string from characters.txt: " << storedString << endl;
//     return 0;
// }