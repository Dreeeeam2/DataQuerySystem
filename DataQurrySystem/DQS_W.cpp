#include <bits/stdc++.h>
using namespace std;
int main(){
             std::cout << "DDA-Soft Corp [c]"<< std::endl;
          std::cout << "FileQuerySystem v2.0.1"<< std::endl;
               std::cout << "Soft number: Fqs-05-Windows"<< std::endl;
    ofstream ofile;
    string a1,a2,a3;
    std::cout << "input his/her name" <<endl;
    cin >> a1;
     std::cout << "input his/her age" <<endl;
    cin >> a2;
     std::cout << "input his/her cultural standing" <<endl;
    cin >> a3;
   string name;
   name = a1 + ".txt";
   ofile.open(name);
   if(!ofile.fail()){
    ofile << a1 << "  ";
    ofile << a2 << "  ";
    ofile << a3 << "  ";
   }
   cout << "Write over..." <<endl;
   int w;
   cout << "Press Any Key To Exit..." << endl;
   cin >> w;
       return 0;
}