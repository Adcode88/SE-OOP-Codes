#include <iostream>
using namespace std;

class student{
private:
static string college;
public:
string Name, RollNo, Classs, Div, DOB, BldGrp, Address, TeleNo, DrivLic;
string MailingAddress;
student()
{   cout << "Name:";
cin >> Name;
cout << "Roll Number:";
cin >> RollNo;
cout << "Class:";
cin  >> Classs;
cout << "Division:";
cin >> Div;
cout << "Date of Birth:";
cin >> DOB;
cout << "Blood Group:";
cin >> BldGrp;
cout << "Telephone Number:";
cin >> TeleNo;
cout << "Driver's License Number:";
cin >> DrivLic;
cout << "Contact Address:";
cin >> Address;

MailingAddress=Address;

}
inline student(student &t){
MailingAddress = t.MailingAddress;
cout << "Mailing Address:";
}

void static printcollege(){
cout << "College:" << college;
}

void display()
{
cout << "Name:" << Name << endl;
cout << "Roll Number:" << RollNo << endl;
cout << "Class:" << Classs << endl;
cout << "Division:" << Div << endl;
cout << "Date of Birth:" << DOB << endl;
cout << "Blood Group:" << BldGrp << endl;
cout << "Telephone Number:" << TeleNo << endl;
cout << "Driver's License Number:" << DrivLic << endl;
cout << "Contact Address:" << Address << endl;
}

};

string student :: college = "PICT";

int main(){
cout << "Enter Student Information" << endl;
student obj1;
cout << endl;
cout << "Student Information:" << endl;
obj1.display();
student obj2(obj1);
cout << obj1.MailingAddress << endl;
obj1.printcollege();

return 0;
}