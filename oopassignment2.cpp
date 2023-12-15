#include<iostream>
#include<cstring>
using namespace std;

class student
{
	 char name[40],class1[10],div[2],dob[15],bloodgrp[15];
	 int roll;
  
	public:
	friend class student1;
	
	student()
	{
	    char* name = new char[40];
	    char* dob = new char [15];
	    char* bloodgrp = new char[15];
	    char* class1 =  new char[10];
	    char* div = new char[2];
	    roll = 0;
	}
	static int count;
	static void TotalRecordCount() //static method
	{
              cout<<"total records created:"<<count<<endl;;
    }
 };
class student1
{
    char address[30],tele_no[15],license_no[10];
    public:
    student1()
    {
       strcpy(address," ");
       strcpy(tele_no," ");
       strcpy(license_no," ");
    }
    
    void input(student* obj);
    void display(student* obj);
    
    friend class student;
};
int student::count=0;

void student1::input(student *obj)
{
  cout<<"ROLL_NO"<<endl;
  cin>>obj->roll;
  cout<<"Name"<<endl;
  cin>>obj->name;
  cout<<"CLASS"<<endl;
  cin>>obj->class1;
  cout<<"DIVISION"<<endl;
  cin>>obj->div;
  cout<<"DATE OF BIRTH(DD-MM-YYYY):"<<endl;
  cin>>obj->dob;
  cout<<"BLOOD GROUP:"<<endl;
  cin>>obj->bloodgrp;
  cout<<"ADDRESS"<<endl;
  cin>>this->address;
  cout<<"TELEPHONE NUMBER: "<<endl;
  cin>>this->tele_no;
  cout<<"DRIVING LICENSE"<<endl;
  cin>>this->license_no;
  
  obj->count++;
}
void student1::display(student* obj)
{
	cout<<endl;
	cout<<"roll no: "<<obj->roll<<endl<<
	     "NAME: "<<obj->name<<endl<<
	    "CLASS: "<<obj->class1<<endl<<
	    "div: "<<obj->div<<endl<<
	    "DOB: "<<obj->dob<<endl<<"address: "<<this->address<<endl<<"telephone: "<<this->tele_no<<endl<<"blood_group: "
	    <<obj->bloodgrp<<endl<<"licence: "
	    <<this->license_no<<" ";
}

int main()
{
	student1 *a[10];
	student *c[10];
	int n =0 ,i,choice;
	
	char ans;
	
     do{	
	cout<<"MENU"<<endl;
	cout<<"1_input data"<<endl;
	cout<<"2_display data"<<endl;
	cout<<"enter your choice"<<endl;
	cin>>choice;
	
	switch(choice)
	{
		case 1:
		cout<<"ENTER THE DETAILS"<<endl;
		cout<<"-------------------------------"<<endl;
		do
		{
		   a[n] = new student1;
		   c[n] = new student;
		   a[n]->input(c[n]);
		   n++;
		   student::TotalRecordCount();
		   cout<<"DO YOU WANT TO ADD MORE(y or n)?"<<endl;
		   cin>>ans;
		 }while(ans=='y'||ans=='Y');
		 break;  	    
	          
	          case 2:
	          cout<<"-------------------------------------"<<endl;
	          for(i=0;i<n;i++)
	          {
	               a[i]->display(c[i]);
	               student::TotalRecordCount();
	            
	          }
	    }
	    cout<<"DO YOU WANT TO GO TO MAIN MENU?(Y or N)"<<endl;
	    cin>>ans;
	    cin.ignore(1,'\n');
	  }while(ans=='y'||ans=='Y');
	  
	  return 0;
	  
}	  
