#include "student.h"

student::student(string student_name )
{
    //ctor
    name=student_name;
}
///////////
//// setters
// basic setters
void student::set_name(string studentName){


name=studentName;
}
void student::set_level(int studentLevel){


level = studentLevel;

}
void student::set_grade(float studentGrade){


grade = studentGrade;

}
void student::set_school(school   studentSchool){


registed_school = studentSchool;


}
////////////
///////// transfer school
void transfer_school(string schoolName){


transfer_student_requests.push_back({this,schoolName})
}
//// courses oprations
void register_course(course register_course,string status){
requested_courses.push_back(status,register_course);






}
void unenroll(string course_name){


pair< string ,course> removed_course;
int remove_index=0;
for(;remove_index<courses.size();remove_index++){
if(courses[remove_index].second.name == course_name ){
break;
}
}
courses.erase(courses.begin()+remove_index);

}
float total_fees(){
double  all_courses_fees=0;
for(int course_index=0;course_index<courses.size();course_index++){
if (courses[course_index].first=="paid"){
all_courses_fees+= courses[course_index].second.fees;

}

}



return all_courses_fees;
}

student::~student()
{
    //dtor
}
