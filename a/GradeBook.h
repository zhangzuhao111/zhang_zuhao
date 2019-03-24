
#ifndef GRADEBOOK_H_INCLUDED
#define GRADEBOOK_H_INCLUDED



#endif // GRADEBOOK_H_INCLUDED
#include <iostream>
#include<string>

class GradeBook
{
public:
    GradeBook( std::string name1,std::string name2 );
    void setCourseName( std::string name1);
    std::string getCourseName() const;
    void setTeacherName( std::string name2);
    std::string getTeacherName() const;
    void displayMessage() const;
private:
    std::string courseName;
    std::string teacherName;

};

