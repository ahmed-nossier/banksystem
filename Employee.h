#ifndef Employee_H
#define Employee_H
#include "Person.h"
using namespace std;
class Employee:public person
{
	    protected:
		int salary;
		public:	
		Employee(int balance):Person(string firstName,string lastName,string password,int NationalId,int ID){
				setSalary(int salary);
				}
				
				void setSalary(int salary){
			    this->salary = salary;
			    }
				int getSalary(){
			    return salary;
			    }  
			
	
};

#endif
