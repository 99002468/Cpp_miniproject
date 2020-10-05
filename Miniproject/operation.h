#ifndef OPERATION_H_INCLUDED
#define OPERATION_H_INCLUDED

#include "derived.h"
#include <list>
#include <iterator>

class operation
{
    std::list <derived> data;

public:

   // void setup();
    void add_hospital(string id,string name,string address,string city,string state,string zipcode,string country,string phno,string hospital_type,string hospital_ownership);
    void remove_hospital(string id);
    derived* get_detailsbyname(string);
    /*int count_died_with_alldiseases();
    std::list<int> ids_of_all_patients_alive_with_alldiseases();
    int patients_with_smokinghabit();
    int max_ejection_fraction();
    double min_platelet_count();
    int patients_died_ageRange(int x ,int y);
    int patients_have_alldiseases_below_age(int age);*/
    void display();
    int Number_of_hospitals();

};




#endif // OPERATION_H_INCLUDED
