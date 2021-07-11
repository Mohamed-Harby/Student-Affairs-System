#ifndef STUDENT_H
#define STUDENT_H
#include <vector>


class student
{
    public:
        student(string student_name="None");
        /////////////////
        //// setters

        void set_name (string studentName="None");
        void set_level (int  studentLevel="0");
        void set_grade(float studentGrade="0");
        void set_school (school studentSchool = "None");
        void reset_all();
        void unenroll(string course_name);
        void register_course(course register_course,string status="unpaid");
        void approve_course(string course_name);

        //
        //
        //
        //// getters
        ////
        string get_name();
        string get_level();
        string get_grade();
        school get_school();
        //// all courses
        vector<pair<string ,course>> get_courses();
        vector<pair<string ,course>> get_requested_courses();
        // transfer school
        void transfer_school(string school);
        //// getters
        string get_name();
        int  get_level();
        float get_grade();
        school get_school();
        vector<pair<string ,course>> student::get_courses()
        vector<pair<string ,course>> get_requested_courses();
        float total_fees();


    protected:

    private:

    string name;
    string level;
    vector<pair<string ,course>> courses;
    vector<pair<string ,course>> requested_courses;
    school registed_school;
    string grade ;





};

#endif // STUDENT_H
