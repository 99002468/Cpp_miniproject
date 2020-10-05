#include "base.h"
#include <list>
#include <iterator>
#include<iostream>
#include <fstream>
//#include <ofstream>
#include <sstream>
#include <iostream>
#include<vector>
using namespace std;

//list <base> datal;
base::base(){}
base::base(string m_id,string m_name,string m_add,string m_city,string m_state,string m_zipcode,string m_country,string m_phno):id(m_id),name(m_name),address(m_add),city(m_city),state(m_state),zipcode(m_zipcode),country(m_country),phno(m_phno){}
string base::get_id()
{
	return(id);
}
string base::get_name()
{
	return(name);
}
string base::get_address()
{
	return(address);
}
string base::get_city()
{
	return(city);
}
string base::get_state()
{
	return(state);
}
string base::get_zipcode()
{
	return(zipcode);
}
string base::get_country()
{
	return(country);
}
string base::get_phno()
{
	return(phno);
}

