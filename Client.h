#ifndef CLIENT_H
#define CLIENT_H
#include "Person.h"
using namespace std;
class Client:public person
{
		private:
		   int balance;
		public:	
		Client(int balance):Person(string firstName,string lastName,string password,int NationalId,int ID){
				setBalance(int balance);
				}
				
				void setBalance(int balance){
			    this->balance = balance;
			    }
			    
				int getBalance(){
			    return balance;
			    }  
			
};
#endif
