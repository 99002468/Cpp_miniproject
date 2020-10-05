#ifndef BASE_H_INCLUDED
#define BASE_H_INCLUDED

#include <string>
#include<list>
#include<vector>
using namespace std;
class base
{
    
	string id;
	string name;
	string address;
    string city;
    string state;
    string zipcode;
    string country;
    string phno;

    public:
	base();
	base(string,string,string,string,string,string,string,string);
	string get_id();
	string get_name();
	string get_address();
	string get_city();
	string get_state();
	string get_zipcode();
	string get_country();
	string get_phno();
};

#endif // BASE_H_INCLUDED
