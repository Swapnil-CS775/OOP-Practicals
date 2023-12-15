#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int>state;
    state.insert(pair<string,int>("maha",10000));
    state.insert(pair<string,int>("MP",2000));
    state.insert(pair<string,int>("goa",3000));
    state.insert(pair<string,int>("up",40000));
    state.insert(pair<string,int>("delhi",5000));

    string ser;
    cout<<"Enter a string u want to search:";
    cin>>ser;

    map<string,int>::iterator i;
    int count=0;

    for(i=state.begin();i!=state.end();i++)
    {
        if(ser==i->first)
        {
            count++;
            cout<<"Present:"<<i->first<<" population-"<<i->second<<endl;;
        }

    }

    if(count==0)
    {
        cout<<"absent"<<endl;
    }
    return 0;
}