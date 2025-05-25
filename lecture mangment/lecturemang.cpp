#include <iostream>
using namespace std;

// Class
class Lecture {
public:
    string name;      
    string subject;   
    string course;    
    int lectures;    

    // Constructor 
    Lecture() 
	{
        name = " ";
        subject = " ";
        course = " ";
        lectures =  1;
    }

    // Function to take input
    void getDetails() 
	{
        cout << "Enter teacher name: ";
        cin >> name;

        cout << "Enter subject name: ";
        cin >> subject;

        cout << "Enter course name: ";
        cin >> course;

        cout << "Enter number of lectures: ";
        cin >> lectures;
    }

    // output
    void showDetails() 
	{
        cout << "Name     : " << name << endl;
        cout << "Subject  : " << subject << endl;
        cout << "Course   : " << course << endl;
        cout << "Lectures : " << lectures << endl;
        cout << "--------------------------\n";
    }
};

int main() 
{
    Lecture t[5];

    cout << "==== Add Teacher Details ====\n";

    // user
    for (int i = 0; i < 5; i++) 
	
	{
        cout << "Teacher " << (i + 1) << ":\n";
        t[i].getDetails();
        cout << "--------------------------\n";
    }

    cout << "\n==== Teacher Details ====\n";
    
    for (int i = 0; i < 5; i++)
	 {
        cout << "Teacher " << (i + 1) << ":\n";
        t[i].showDetails();
   
   }
    

    return 0;
}
