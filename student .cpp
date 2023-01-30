/*1.display 5 Students information using encapsulation by including below mentioned attributes:
	stu_id
	stu_name
	stu_age
	stu_course
	stu_email
	stu_city
	stu_college*/

#include<iostream>
#include<string>

using namespace std;

class Student
{
	private:
		int student_id;
		int student_age;
		char *student_name;
		char *student_course;
	    char *student_email;
	    char *student_city;
       	char *student_college;
       	
    public:
    	
    	void setter(int student_id,int student_age,char *student_name,char *student_course,char *student_email,char *student_city,char *student_college)
	   {
		this->student_id=student_id;
		this->student_age=student_age;
		this->student_name=student_name;
		this->student_course=student_course;
		this->student_email=student_email;
		this->student_city=student_city;
		this->student_college=student_college;

		
	}
    	
    	void getter();
};

	void Student::getter()
	{
		cout<<"student_id:"<<student_id<<endl;
		cout<<"student_age:"<<student_age<<endl;
		cout<<"student_name:"<<student_name<<endl;
		cout<<"student_course:"<<student_course<<endl;
		cout<<"student_email:"<<student_email<<endl;
		cout<<"student_city:"<<student_city<<endl;
		cout<<"student_college:"<<student_college<<endl;
	}
	main()
	{
		Student obj1;
		
		char name[50] = "name";
		char course[50] = "b.c.a";
		char email[50]="khushbu@gmail.com";
		char city[50]="surat";
		char college[50]="h.l.patel";
		obj1.setter(1,23,name,course,email,city,college);
		obj1.getter();
	}
