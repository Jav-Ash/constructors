#include<iostream>
#include<conio.h>

using namespace std;

class student
{
	int roll,marks;
	public:
		student();				
		student(int a);		
		student(student &p);
		
};

student::student()				//Default Constructor
{
	roll=0;						//Initial Value is kept zero
	marks=0;					//Initial Value is kept zero
	cout<<"\n\n\nDefault Constructor";
	cout<<"\n Marks = "<<marks<<"\nRoll No. : "<<roll;
}

student::student(int a)			//Parametric Constructor
{
	roll=a;
	marks=a+a;
	cout<<"\n\n\nParameterized Constructor.";
	cout<<"\n Marks = "<<marks<<"\nRoll No. : "<<roll;
}

student::student(student &p)			//Copy Constructor
{
	roll=p.roll+p.roll;
	marks=p.marks+p.marks;
	cout<<"\n\n\nCopy Constructor.";
	cout<<"\n Marks = "<<marks<<"\nRoll No. : "<<roll;
}

main()
{
	student s1,s2(10),s3(s2);
	return(0);
}
