#include <iostream>  
using namespace std;  
class Student {  
     public:  
        int id;//data member       
        string name;//data member  
};  
int main() 
{  
	Student s1; //creating an object of Student   
	
	s1.id = 069;    
	s1.name = "joshasree";   
	cout<<s1.id<<endl;  
	cout<<s1.name<<endl;  

	return 0;  
}  
