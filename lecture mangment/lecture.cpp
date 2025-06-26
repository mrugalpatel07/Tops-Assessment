#include <iostream>
using namespace std;

class lecture {
private:
string lecturerName;
string subjectName;
string courseName;
int totalLectures;

public:

lecture() : lecturerName(""),subjectName(""),courseName(""),totalLectures(0) {}
   
void lectureadd() {
    
cout<< "lecture name ";
cin>>lecturerName;
cout<< "subjectname ";
cin>>subjectName;
cout<< "course name";
cin>>courseName;
cout<<"no. of lecture: ";
cin>>totalLectures;
    }

    void detillecture() 
    {
    cout<<"lecturename;  "<<lecturerName<<endl;
    cout<<"subject name:  "<<subjectName<<endl;
    cout<<"course namwe;  "<<courseName<<endl;
    cout<<"no .of lecture:  "<<totalLectures<<endl;
    cout<<"-----------------------------"<<endl;
    }
};

int main() 
{
int s = 5,i;
lecture lectures[s];

cout <<"5 lecture add";
for (i=0;i<s;i++) {
 cout <<"lecture :"<<(i + 1)<<endl;
lectures[i].lectureadd();
}

cout <<"\nlecture detail";
for (i=0;i<s;i++){
 lectures[i].detillecture();
}
    return 0;
}