#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
                 std::cout << "DDA-Soft Corp [c]"<< std::endl;
          std::cout << "FileQuerySystem v2.0.1"<< std::endl;
               std::cout << "Soft number: Fqs-05-Windows"<< std::endl;
string name;
int a;
cout << "input the user's name: " <<endl;
cin >> name;
name = name + ".txt";
ifstream infile(name);
        if(!infile) { cout<<"error!"; return -1; } 
         string line; 
string result; 
int i=1;
while(getline(infile,line) && i<=10000)
{
result=result+line+'\n'; i++;
}
if(i>10000)
{
cout<<result;
}
else
{
cout<<result;
}
infile.close();
cout << "Press Any Key To Exit..." << endl;
cin >> a;
return 0;

}
