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
///////// transfer school needed operations
void student::reset_all(){    /// reset all courses and requested courses of student to  empty
courses.clear();
requested_courses.clear();


}
void student::transfer_school(string schoolName){


transfer_student_requests.push_back({this,schoolName}) //pushing to global vriable not  brilliant
}
//// courses oprations
void student::register_course(course register_course,string status){ /// request to register course
requested_courses.push_back(status,register_course);   // pushing to student's vector locally


}

void student::approve_course(string course_name){  // to approve course we need to convert it from requested courses to courses
int approved_course=0;
for (; approved_course<requested_courses.size();approved_course++){

    if (requested_courses[approved_course.second.name]==course_name) {
        courses.push_back(requested_courses[approved_course]);
        requested_courses.erase(requested_courses.begin()+approved_course);
        break;
    }

}



}
void student::unenroll(string course_name){ /// remove courses from courses list if student wants to unenroll


pair< string ,course> removed_course;
int remove_index=0;
for(;remove_index<courses.size();remove_index++){
if(courses[remove_index].second.name == course_name ){
break;
}
}
courses.erase(courses.begin()+remove_index);

}






////////// getters
/////////
//// basic getters
string student::get_name(){


return name;
}
int  student::get_level(){


return level ;

}
float  student::get_grade(){


return grade;

}
school  student::get_school(){


return registed_school;


}
 vector<pair<string ,course>> student::get_courses(){


 return courses;

 }
  vector<pair<string ,course>> student::get_requested_courses(){


 return requested_courses;

 }

 float student::total_fees(){
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
