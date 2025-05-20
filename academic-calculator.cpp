#include <iostream>
using namespace std;
double computeFullPeriodMark(double test1, double test2, double assignment){
    return (0.33 * test1)+(0.33 * test2)+(0.34 * assignment);
}
double computeFinalMark(double fullPeriodMark, double examMark){
    return (0.40 * fullPeriodMark)+(0.60 * examMark);
}
bool isPassed(double fullPeriodMark, double finalMark){
    return (fullPeriodMark >= 40 && finalMark>=50);
}
int main(){
    int numStudents;
    cout<<"Enter number of students: ";
    cin>>numStudents;

    for(int a=0; a<numStudents; a++){
        string name, surname;
        double test1, test2, assignment, exam;
        cout<<"Enter name: ";
        cin>>name;

        cout<<"Enter surname: ";
        cin>>surname;

        cout<<"Enter test-1 mark: ";
        cin>>test1;
        cout<<"Enter test-2 mark: ";
        cin>>test2;
        cout<<"Enter Assignment mark: ";
        cin>>assignment;
        cout<<"Enter exam mark: ";
        cin>>exam;

        double fullPeriodMark=computeFullPeriodMark(test1, test2, assignment);
        double finalMark=computeFinalMark(fullPeriodMark, exam);
        bool grade=isPassed(fullPeriodMark, finalMark);

        cout<<name<<" "<<surname<<endl<<
            "Full Period Mark: "<<fullPeriodMark<<endl<<
            "Final Mark: "<<finalMark<<endl
            <<"Graded: "<<(grade ? "Pass":"Fail")<<endl<<endl;
    }
    return 0;
}
