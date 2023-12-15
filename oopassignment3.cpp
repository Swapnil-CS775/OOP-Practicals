#include<iostream>
using namespace std;

class publication
{
    private:
    string title;
    float price;

    public:
    void getdata()
    {
        cout<<"Enetr a title of book:";
        cin.ignore();
        getline(cin,title);
        cout<<"Enetr a price of book:";
        cin>>price;
    }

    void display()
    {
        cout<<"Title of book is:"<<title<<endl;
        cout<<"Price of book is:"<<price<<endl;
    }
};

class book:public publication
{
    public:
    int page;
    void add_page()
    {
        try
        {
           cout<<"Enetr pages count of the book:";
           cin>>page;
           if(page<0)
           {
            throw page;
           }
        }
        catch(int n)
        {
            cout<<"Please enter valid number of pages!!";
        }
        cout<<endl;
        
    }

    void showpage_count()
    {
        display();
        cout<<"Page count of book is:"<<page<<endl;
    }
};


class tape:public publication
{
    public:
    int playtime;
    void add_playtime()
    {
        try
        {
            cout<<"Enetr play time of book:";
            cin>>playtime;

            if(playtime<0)
            {
                throw playtime;
            }
        }
        catch(int m)
        {
           cout<<"Please enter a valid playtime!!!!";
        }
        
    }

    void show_playtime()
    {
        display();
        cout<<"Playtime of book is:"<<playtime<<" min"<<endl;

    }
    
};


int main()
{
    book obj;
    tape obj1;

    while(1)
    {
        cout<<endl;
        cout<<"****** BOOK PUBLICATION DATABASE ******"<<endl;
        cout<<"ENTER A INFORMATION OF BOOK PUBLICATION"<<endl;
        cout<<endl;
        cout<<"1.Add book information along with pages count!!"<<endl;
        cout<<"2.Display title,price,pagecount of book!!"<<endl;
        cout<<"3.Add book information along with tape!!"<<endl;
        cout<<"4.Display title,price,tape of book!!"<<endl;
        cout<<"5.Add all info about book!!"<<endl;
        cout<<"6.Dispaly all info about book!!"<<endl;

        int ch;
        cout<<"Enetr your choice:";
        cin>>ch;
        cout<<endl;

        switch (ch)
        {
        case 1:
            obj.getdata();
            obj.add_page();
            break;
        case 2:
            obj.showpage_count();
            break;

        case 3:
           obj.getdata();
           obj1.add_playtime();
            break;

        case 4:
            obj1.show_playtime();
            break;
        case 5:
            obj.getdata();
            obj.add_page();
            obj1.add_playtime();
            break;
        case 6:
            obj.display();
            cout<<"Page count of book is:"<<obj.page<<endl;
            cout<<"Play time of book is:"<<obj1.playtime<<endl;
            break;
        default:
            cout<<"Please enter valid choice!!!!"<<endl;
            break;
        }
    }
return 0;
}