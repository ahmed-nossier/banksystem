#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person{
	protected:
	    string firstName;
	    string lastName;
	    string password;
	    int NationalId;
	    int ID;
	public:  
	     Person(){
			
		}
	   	Person (string firstName,string lastName,string password,int NationalId,int ID){
			setFirst(firstName);
			setLast(lastName);
		    setNationalId(NationalId);
			setPassword(Password);
			setID(ID);
			  
		}
		    void setFirst(string firstName){
			this->firstName = firstName;
		}
			void setLast(string lastName){
			this->lastName = lastName;
		}
			void setNational(int NationalId){
			this->NationalId = NationalId;
				}
			void setPassword(string Password){
			this->password;
		}
		    void setID(int ID){
			this->ID = ID;
				}
		    string getFirstName(){
			return firstName;
		}
	    	string getLastName(){
			return lastName;
		}
	    	string getPassword(){
			return password;
		}
			int getNationalId(){
			return NationalId;
		}
			int getID(){
			return id;
		}

};
*string Encryption ( string password )
 {  
     char x[100];
   for(int i=0;i<password.size();i++)
   { 
       x+=password[i]^26 // must every character in the input string encrypt the character by applying the XOR operator (^)
   }
   cout<<"Encrypted ="<<x<<endl;

 }
 */
 
 
 /* string encryptDecrypt(string toEncrypt) {
    char key = 'K'; //Any char will work
    string output = toEncrypt;
    
    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key;
    
    return output;
*/

 bool validatePassword( string password )
 {
 }

};
#endif
