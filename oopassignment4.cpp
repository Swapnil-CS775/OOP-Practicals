#include<iostream>
#include<fstream>
using namespace std;

class employee
{
    char name[100];
    int id,n;
    double sal;

    public:
    void accept()
    {
            cin>>name;
            cin>>id;
            cin>>sal;
    }
    void display()
    {
            cout<<"\nName:"<<name;
            cout<<"\nId:"<<id;
            cout<<"\nSalary:"<<sal;
    }
};

int main()
{
    employee ob[10];
    fstream f;
    f.open("info",ios::out);
    int n,i;
    cout<<"Enter No. of employee:";
    cin>>n;
     cout<<"\n Enter information of employee in this format(NAME/ID/SALARY)"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Enter of info of "<<i+1<<" employee:";
        ob[i].accept();
        f.write((char*)&ob[i],sizeof(ob[i]));
    }
    f.close();

    f.open("info",ios::in);

    cout<<"\n Information of Employees is as follows:";
    for(i=0;i<n;i++)
    {
        f.write((char*)&ob[i],sizeof(ob[i]));
        ob[i].display();
    }
    f.close();
   
    return 0;
}