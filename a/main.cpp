#include <iostream>
#include "GradeBook.h"
using namespace std;

int main()
{
    string a = "getCourseName";
    string b = "getTeacherName";
    GradeBook gradeBook1(a,b);
    GradeBook gradeBook2(a,b);

    cout << "Welcome to the the grade book for\n" << gradeBook1.getCourseName()<< "\nThis course is presented by:\n" << gradeBook2.getTeacherName() << endl;



}
