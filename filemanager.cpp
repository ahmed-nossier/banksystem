#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileManager{
	
public :
	fstream MyFile;
void saveClient(Account);
void deleteClient(Account or id);
void updateClient(Account);

	
};

void FileManager::saveClient(Account){
	
	 MyFile.open("bank.txt", ios::app );
     MyFile.write( (char*)&Account, sizeof(Account) );
	 MyFile.close();
	 
	 }




int main()
{
	
     
}

