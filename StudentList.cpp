#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Student {
public:
    string name;
    int rollNumber;
    vector<int> marks;
    int total;
    float percent;
    void calculate(int subCount) {
        total = 0;
        for(int i = 0; i < subCount; i++) {
            total += marks[i];
        }
        percent = (float)total / subCount;
    }
};
class MarkSystem {
public:
    vector<Student> classRecords;

    void getData() {
        int studentCount, subjectCount;
        cout << "Number of students: ";
        cin >> studentCount;
        cout << "Number of subjects: ";
        cin >> subjectCount;
        
        for(int i = 0; i < studentCount; i++) {
            Student s;
            cout << "\nStudent " << i+1 << ":\n";
            cout << "Roll no: ";
            cin >> s.rollNumber;
            cout << "Name: ";
            cin.ignore();
            getline(cin, s.name);
            cout << "Enter " << subjectCount << " marks: ";
            for(int j = 0; j < subjectCount; j++) {
                int mark;
                cin >> mark;
                s.marks.push_back(mark);
            }
            s.calculate(subjectCount);
            classRecords.push_back(s);
        }
    }
    void showResults() {
        cout << "\nMARK LIST\n";
        cout << "------------------------------------\n";
        cout << "Roll\tName\t\tTotal\t%\n";
        cout << "------------------------------------\n";   
        for(Student& s : classRecords) {
            cout << s.rollNumber << "\t"
                 << s.name << "\t"
                 << s.total << "\t"
                 << s.percent << "%\n";
        }
        cout << "------------------------------------\n";
    }
};
int main() {
    MarkSystem system;
    system.getData();
    system.showResults();
    return 0;
}