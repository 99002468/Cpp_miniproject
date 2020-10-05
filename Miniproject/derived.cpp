#include "derived.h"

using namespace std;

derived::derived():base(),hospital_type(""),hospital_ownership(""){}

derived::derived(string m_id,string m_name,string m_add,string m_city,string m_state,string m_zipcode,string m_country,string m_phno,string m_type,string m_owner):base(m_id,m_name,m_add,m_city,m_state,m_zipcode,m_country,m_phno),hospital_type(m_type),hospital_ownership(m_owner){}

string derived::get_type()
{
	return hospital_type;
}
string derived::get_ownership()
{
	return hospital_ownership;
}
