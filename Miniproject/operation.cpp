#include "operation.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

void operation:: add_hospital(string id,string name,string address,string city,string state,string zipcode,string country,string phno,string hospital_type,string hospital_ownership)
{
    data.push_back( derived(id,name,address,city,state,zipcode,country,phno,hospital_type,hospital_ownership) );
}

void operation:: remove_hospital(string id)
{
     std::list<derived> :: iterator iter;
     for(iter=data.begin(); iter!=data.end();++iter)
     {
         if(iter->get_id() == id)
         {
             data.erase(iter);
             break;
         }

     }
}
derived* operation::get_detailsbyname(string id)
{
    std::list<derived>::iterator iter;
    for(iter=data.begin();iter!=data.end();++iter)
    { //cout<<"hii"<<endl;
        if(iter->get_id()==id)
        {	//cout<<"hii"<<endl;
            return &(*iter);
        }
    }
   return NULL;
}

void operation:: display()
{
    list<derived> :: iterator iter;
    for(iter=data.begin(); iter!=data.end();++iter)
    {
        cout << iter->get_id() << "," << iter->get_name() << "," << iter->get_address() << "," << iter->get_city() << "," << iter->get_state() << "," << iter->get_zipcode() << "," << iter->get_country() << "," << iter->get_phno() << "," << iter->get_type() << "," << iter->get_ownership() <<endl;
    }

}
int operation::Number_of_hospitals()
{
   std::list<derived> :: iterator iter;
   int count =0;
    for(iter=data.begin(); iter!=data.end();++iter)
    {
        count++;
    }

   return count;
}
