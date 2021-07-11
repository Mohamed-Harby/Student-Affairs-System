#include <iostream>

#include <bits/stdc++.h>
using namespace std;

class Teacher{

string name="younis";
public:
    string get_name(){
    return name;}



};

class course
{
    public:
        course(string course_name="None");
        //// basic setters
        void set_name(string courseName);
        void set_code (string courseCode);
        void set_availabilty(bool  courseAvailability);
        void set_description(string courseDescription);
        void set_outcomes(vector<string> courseOutcomes);
        void set_limit(int courseLimit);
        void set_fees(int courseprice);
        // teacher stters
        void add_professor(Teacher new_prof);
        void remove_professor(string removed_professor);

        // course timetable
        void set_starting(string courseStart);
        void set_graduation(string courseGraduationDay);
        void set_course_long( string courseWeeksLong );
        void  set_lecture_start(string LectureStart);
        void  set_lecture_finish(string LectureFinish);
        void set_days(vector<string > days);
        //// basic getters
        string get_name();
        string get_code();
        string get_description();
        vector<string> get_outcomes();
        int get_fees();
        int get_limit();
        bool is_available();
        ///// getting all timetable
        string get_starting();
        string get_graduation();
        string get_course_long();
        string get_lecture_start();
        string get_lecture_finish();
        ///// get_teachers_data
        vector<Teacher> get_teachers_data();










    protected:

    private:
    //////////////////
    //// the full course description
    //// for course name , code for course code , ... ,
    //// limit is just a number for allowed students ,  available tells if the course is available right now or no.
    //// and fees for course costs
    string  name , code , description;
    vector<string> outcomes;
    int limit,fees;

    bool available;
    /////////////////////////

    /////////////////////////
    ////// course timing details such as starting and ending days , course duration
    ////// and course days and lecture duration
    //////
    //////   time_map contains : keys {start_day , graduation_day, weeks, lecture_starting_time , lecture_finishing_time}
    //////
    //////   course_days  contains the days which course is illustrated in
    //////                 for example : saturday ,  monday , wednesday
    //////
    map<string,string> course_time_map;
    vector<string> course_days;
    //////////////////////////

    /////////////////////////
    ////   teaching staff : the professors

    vector < Teacher> teaching_staff;
    /////////////////////////





};

