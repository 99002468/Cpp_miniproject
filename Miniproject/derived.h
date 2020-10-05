#ifndef DERIVED_H_INCLUDED
#define DERIVED_H_INCLUDED

#include "base.h"

using namespace std;

class derived : public base
{
    string hospital_type;
    string hospital_ownership;
public:
    derived();
    derived(string,string,string,string,string,string,string,string,string,string);
    string get_type();
    string get_ownership();
};

#endif // DERIVED_H_INCLUDED
