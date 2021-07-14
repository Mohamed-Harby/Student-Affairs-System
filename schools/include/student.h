#include <bits/stdc++.h>
#include "professor.h"
#include "course.h"
#include "school.h"
=using namespace std;


class student
{
    public:
        student(string student_name="None");
        /////////////////#include ""

        //// setters

        void set_name (string studentName="None");
        void set_level (int  studentLevel="0");
        void set_grade(float studentGrade="0");
        void set_school (school studentSchool = "None");
        // transfer school
        void reset_all(); // initial courses and requested vectors to empty
        void transfer_school(string school); // submit request to admin with school name
        void unenroll(string course_name); // remove course from courses
        void register_course(course register_course,string status="unpaid"); // add course to requested courses vector
        void approve_course(string course_name); // remove course from requested courses and add it to courses vector
        //
        //
        //
        //// getters
        ////

        //// all courses

        //// getters
        //basic
        string get_name();
        int  get_level();
        float get_grade();
        school get_school();
        //courses
        vector<pair<string ,course>> get_courses(); // returns a vector of courses
        vector<pair<string ,course>> get_requested_courses(); // return a vector of requested courses
        // fees
        float total_fees(); // retrun total fees as float


    protected:

    private:

    string name;
    string level;
    vector<pair<string ,course>> courses;
    vector<pair<string ,course>> requested_courses;
    school registed_school;
    string grade ;





};

