#include "course.h"


course::course(string course_name){
    name = course_name;
    //name="NONe";
    code="None";
    description="None";
    limit=0;
    fees=0;
    available=false;
    course_time_map["start_day"]="9-7-2021";
    course_time_map["graduation_day"]="1-1-2022";
    course_time_map["weeks"]="0 Weeks";
    course_time_map["lecture_starting_time"]="10 AM ";
    course_time_map["lecture_finishing_time"]="12 PM ";


}
///////////////////////
///// setters for all  course data
// basic setters
void course::set_name(string courseName="None"){

name=courseName;

}

void course::set_code(string courseCode="None"){

code=courseCode;

}

void course::set_availabilty(bool  courseAvailability=false){

available=courseAvailability;

}

void course::set_description(string courseDescription="None"){

description=courseDescription;

}

void course::set_outcomes(vector<string> courseOutcomes){

outcomes=courseOutcomes;

}
void course::set_limit(int courseLimit){
 limit=courseLimit;
}

void course::set_fees(int courseprice){
fees=courseprice;
}
////////////////
// teaching staff operations
void course::add_professor(Teacher new_prof){

teaching_staff.push_back(new_prof);


}
void course::remove_professor(string removed_professor){
int removing_index=0;
for (;removing_index< teaching_staff.size();removing_index++){
    Teacher *current_teacher = &teaching_staff[removing_index];
    if( current_teacher->get_name() == removed_professor) {
            teaching_staff.erase(teaching_staff.begin()+removing_index);
            break;
    }

}



}


////////////
// set all times of course
void course::set_starting(string courseStart){

course_time_map["start_day"]=courseStart;


}
void course::set_graduation(string courseGraduationDay){

course_time_map["graduation_day"]=courseGraduationDay;


}

void course::set_course_long( string courseWeeksLong ){
course_time_map["weeks"]=courseWeeksLong;

}
void  course::set_lecture_start(string LectureStart){


course_time_map["lecture_starting_time"]=LectureStart;
}


void  course::set_lecture_finish(string LectureFinish){


course_time_map["lecture_finishing_time"]=LectureFinish;
}


void course::set_days(vector<string > days){

course_days=days;
}



////////////////
//// basic getters

string course::get_name(){

  return name;

}
string course::get_code(){

  return code;

}
string course::get_description(){
return description;
}


vector<string> course::get_outcomes(){

return outcomes;


}
int course::get_fees(){
return fees;
}
int course::get_limit(){


return limit;
}
bool course::is_available(){
return available;
}

/////// getting all time data

string course::get_starting(){

return course_time_map["start_day"];


}
string course::get_graduation(){

return course_time_map["graduation_day"];


}


string course::get_course_long(){
return course_time_map["weeks"];

}
string course::get_lecture_start(){


return course_time_map["lecture_starting_time"];
}


string course::get_lecture_finish(){


return course_time_map["lecture_finishing_time"];
}


///////////
// get_teachers_data
vector<Teacher> course::get_teachers_data(){




return teaching_staff;
}






