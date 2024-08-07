//============================================================================
// Name        : 21376_asssignment7.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

class Database{
    private:
    string name, college;
    int age;

    public:
    void getdata(){
        cout << "Enter Name:";
        cin >> name;
        cout << "Enter College Name:";
        cin >> college;
        cout << "Enter Age:";
        cin >> age;
    }
    void writedata();
    void readdata(string,string,int);
};

void Database::writedata()
{
ofstream fobj("hello.txt");

fobj << name << endl;
fobj << college << endl;
fobj << age << endl;

fobj.close();
}

void Database::readdata(string n, string c, int a)
{
ifstream fobj("hello.txt");

fobj >> n;
fobj >> c;
fobj >> a;

cout << "n is:" << n << endl;
cout << "c is:" << c << endl;
cout << "a is:" << a << endl;


fobj.close();
}

int main(){

    int a;
    string n, c;

    Database obj1;

    obj1.getdata();
    obj1.writedata();
    obj1.readdata(n,c,a);


    return 0;
}


/*int main() {
int ch;
int i;

cout << "Enter number of empoyees:";
cin >> i;

Database n[i];
Database ID[i];

for(int a=0;a<i;a++){
cout << "Type '.' at end of entering" << endl << "Employee " << a+1 << ":" << endl;
cout << "Enter Employee Name:";
n[a].writedata();
cout << "Enter ID:";
ID[a].writedata();
cout << endl;
}


n[i-1].readdata();


}*/