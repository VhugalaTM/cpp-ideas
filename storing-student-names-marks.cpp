#include <iostream>
using namespace std;
int main(){
    //THIS CODE ASK A USER TO ENTER THE NUMBER OF STUDENTS IN A CLASS AND STORES THEIR NAMES AND MARKS
    int student_no;
    cout<<"How many students are in the class: ";
    cin>>student_no;
    cout<<"Enter their names below: "<<endl;
    string names[student_no];
    for(int i=0; i<student_no; i++){
        cout<<"Enter Name: ";
        cin>>names[i];
    }
    cout<<endl;
    cout<<"STUDENT NAMES: "<<endl;
    for(string a: names){
        cout<<a<<endl;
    }
    cout<<endl;
    cout<<"Enter their marks below: "<<endl;
    int marks[student_no];
    for(int i=0; i<student_no; i++){
        cout<<"Enter mark: ";
        cin>>marks[i];
    }
    cout<<endl;
    cout<<"STUDENT MARKS: "<<endl;
    for(int b: marks){
        cout<<b<<endl;
    }
    return 0;
}
