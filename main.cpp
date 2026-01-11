#include <iostream>
using namespace std;
class Course{
    public:
    int creditUnit;
    char grade;
    int gradePoint = 0;
    void gradePointFunct(){
    switch(grade){
        case 'A':
        gradePoint = 5;
        break;
        case 'B':
        gradePoint = 4;
        break;
        case 'C':
        gradePoint = 3;
        break;
        case 'D':
        gradePoint = 2;
        break;
        case 'E':
        gradePoint = 1;
        break;
        case 'F':
        gradePoint = 0;
        break;
        default:
        cout << "invalid grade";
        gradePoint = 0;
    }
}
double getQualityPoint(){
   return creditUnit * gradePoint; 
}


};
int main(){
    int courseNum;
    cout << "Enter the number of courses that you have: ";
     cin >> courseNum;
    Course Courses[courseNum];
    for (int i = 0; i < courseNum; i++){
cout << "Enter course credit unit: ";
cin >> Courses[i].creditUnit;
cout << "Enter grade: ";
cin >> Courses[i].grade;
    }
double totalQualityPoint = 0;
for(int i = 0; i < courseNum; i++){
    Courses[i].gradePointFunct();
}
for(int i = 0; i < courseNum; i++){
    totalQualityPoint += Courses[i].getQualityPoint();
}
double totalCreditUnit = 0;
for(int i = 0; i < courseNum; i++){
    totalCreditUnit += Courses[i].creditUnit;
}
double Cgpa = totalQualityPoint / totalCreditUnit;
cout << "Your CGPA is: " << Cgpa;
}
