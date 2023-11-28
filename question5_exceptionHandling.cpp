// Peter Joy is working on a program for a school management system that handles student records. Every student in the system has a unique ID, and the program can only accommodate a maximum of 30 student records. 
// In cases where a user attempts to add a new student with an existing ID or if the system reaches its maximum capacity, Peter Joy plans to implement exception handling. 
// He intends to throw custom exceptions named DuplicateIDException and FullDatabaseException, respectively, to address these situations. Help him write the code.
// Input format :
// The first line contains an integer, 'n', representing the number of students to be added to the school database.
// The next 'n' lines contain two values each:
// a. An integer representing the student ID.
// b. A string representing the name of the student.
// Output format :
// The output will depend on the actions performed in the code.
// If a student is added to the database, the output will display: "Student with ID [ID] added to the database."
// If there is an exception due to a duplicate student ID, the output will display: "Exception caught. Error: Student ID already exists."
// If there is an exception due to the database being full, the output will display: "Exception caught. Error: Student database is full."
// Refer to the sample outputs for the formatting specifications.
// Code constraints :
// The maximum capacity of the student database is 30 (MAX_CAPACITY).
// Each student ID must be a positive integer.
// Sample test cases :
// Input 1 :
// 3
// 16 Sam
// 87 Sabari
// 43 Dani
// Output 1 :
// Student with ID 16 added to the database.
// Student with ID 87 added to the database.
// Student with ID 43 added to the database.
// Input 2 :
// 3
// 44 Udhesh
// 33 Sandy
// 44 Keerthi
// Output 2 :
// Student with ID 44 added to the database.
// Student with ID 33 added to the database.
// Exception caught. Error: Student ID already exists.
// Input 3 :
// 32
// 32 zen
// 23 jazz
// 16 sam
// 87 santhiya
// 43 dominic
// 90 felicia
// 17 tera
// 85 wednesday
// 81 sayari
// 39 danny
// 55 udhesh
// 36 nani
// 21 cheenu
// 12 Sakshi
// 49 madhan
// 33 bons
// 41 Ambika
// 30 Sandy
// 47 Charu
// 59 Theju
// 34 Sabari
// 56 Udhesh
// 40 Babu
// 42 Sandeep
// 102 nancy
// 26 saxy
// 13 doll
// 11 craven
// 211 kanaga
// 94 veronic
// 47 jansi
// 33 yalini
// Output 3 :
// Student with ID 32 added to the database.
// Student with ID 23 added to the database.
// Student with ID 16 added to the database.
// Student with ID 87 added to the database.
// Student with ID 43 added to the database.
// Student with ID 90 added to the database.
// Student with ID 17 added to the database.
// Student with ID 85 added to the database.
// Student with ID 81 added to the database.
// Student with ID 39 added to the database.
// Student with ID 55 added to the database.
// Student with ID 36 added to the database.
// Student with ID 21 added to the database.
// Student with ID 12 added to the database.
// Student with ID 49 added to the database.
// Student with ID 33 added to the database.
// Student with ID 41 added to the database.
// Student with ID 30 added to the database.
// Student with ID 47 added to the database.
// Student with ID 59 added to the database.
// Student with ID 34 added to the database.
// Student with ID 56 added to the database.
// Student with ID 40 added to the database.
// Student with ID 42 added to the database.
// Student with ID 102 added to the database.
// Student with ID 26 added to the database.
// Student with ID 13 added to the database.
// Student with ID 11 added to the database.
// Student with ID 211 added to the database.
// Student with ID 94 added to the database.
// Exception caught. Error: Student database is full.


#include <iostream>
#include <unordered_set>
#include <stdexcept>
using namespace std;

const int MAX_CAPACITY = 30;

class DuplicateIDException : public exception {
public:
    const char *what() const noexcept override {
        return "Exception caught. Error: Student ID already exists.";
    }
};

class FullDatabaseException : public exception {
public:
    const char *what() const noexcept override {
        return "Exception caught. Error: Student database is full.";
    }
};

int main() {
    int n;
    cin >> n;

    unordered_set<int> studentIds;

    try {
        for (int i = 0; i < n; i++) {
            int id;
            string name;
            cin >> id >> name;

            if (studentIds.count(id) > 0) {
                throw DuplicateIDException();
            }

            if (studentIds.size() >= MAX_CAPACITY) {
                throw FullDatabaseException();
            }

            studentIds.insert(id);
            cout << "Student with ID " << id << " added to the database." << endl;
        }
    } catch (const exception &e) {
        cout << e.what() << endl;
    }

    return 0;
}