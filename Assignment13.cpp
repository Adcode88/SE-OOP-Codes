#include <iostream>
#include <map>
#include <string>
#include <utility>

using namespace std;

int main(){
    
    cout << "\n\n";


    typedef map<string,int> mapType;
    mapType populationMap;
    
    populationMap.insert(pair<string, float>("Maharashtra", 125));
    populationMap.insert(pair<string, float>("UttarPradesh", 225));
    populationMap.insert(mapType::value_type("Bihar", 120)); 
    populationMap.insert(mapType::value_type("WestBengal", 100));
    populationMap.insert(make_pair("MadhyaPradesh", 90)); 
    populationMap.insert(make_pair("TamilNadu", 80)); 
    populationMap.insert(make_pair("Rajasthan", 78));
    populationMap.insert(make_pair("AndhraPradesh", 53));
    populationMap.insert(make_pair("Odisha", 47));
    populationMap.insert(make_pair("Kerala", 38));
    populationMap.insert(make_pair("Telangana", 37));
    populationMap.insert(make_pair("Assam", 35));
    populationMap.insert(make_pair("Jharkhand", 38));
    populationMap.insert(make_pair("Karnataka", 68));
    populationMap.insert(make_pair("Gujarat", 70));
    populationMap.insert(make_pair("Punjab", 31));
    populationMap.insert(make_pair("Chhattisgarh", 30));
    populationMap.insert(make_pair("Haryana", 29));
    populationMap.insert(make_pair("Uttarakhand", 12));
    populationMap.insert(make_pair("HimachalPradesh", 8));
    populationMap.insert(make_pair("Tripura", 04));
    populationMap.insert(make_pair("Meghalaya", 4));
    populationMap.insert(make_pair("Manipur", 3));
    populationMap.insert(make_pair("Nagaland", 2));
    populationMap.insert(make_pair("Goa", 2));
    populationMap.insert(make_pair("ArunachalPradesh", 2));
    populationMap.insert(make_pair("Mizoram", 1));
    populationMap.insert(make_pair("Sikkim", 1));
    mapType::iterator iter = --populationMap.end();
    populationMap.erase(iter);
     
    cout << "Total states and UT's of India i.e. the size of populationMap: " << populationMap.size() << '\n';
    
    for (iter = populationMap.begin(); iter != populationMap.end(); ++iter) 
    {
     cout << iter->first <<": " << iter->second << " million\n";
    }
    
    char c;
    do
    {
        string state;
        cout<<"\nEnter that state you want to know the population of: ";
        cin>>state;
        iter = populationMap.find(state);
        if( iter != populationMap.end() ) 
            cout << state <<"'s populations is "
                << iter->second << " million\n";
        else
            cout << "State is not in populationMap" << '\n';
            
        cout<<"Do you wish to continue?(y/n):";
        cin>>c;
    }while(c=='y'||c=='Y');
     
    populationMap.clear();
    
    cout << "\n\n";
    
    return 0;
}