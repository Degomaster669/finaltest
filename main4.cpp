#include <iostream>
#include <vector>
using namespace std;
class Student{
public:
    Student(){};
    ~Student(){};
    string getName() const {
        return name;
    }
    int getId() const {
        return id;
    }
    double getGpa() const {
        return gpa;
    }
    void setName(const string &newName) {
        name=newName;
    }
    void setId(int newId) {
        id=newId;
    }
    void setGpa(double newGpa) {
        gpa=newGpa;
    }
private:students.push_back(harry);
    string name;
    int id;
    double gpa;
};
int main(){
    vector<Student> students;
    Student harry;
    harry.setName("Harry Potter");
    harry.setId(12345);
    harry.setGpa(3.7);
    students.push_back(harry);
    cout<<students[0].getName()<<endl;
    cout<<students[0].getId()<<endl;
    cout<<students[0].getGpa()<<endl;
    return 0;
}