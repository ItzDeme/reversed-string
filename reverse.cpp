#include <iostream>
#include <string>

using namespace std;

string tweakletter(string test){
    int i = test.length() - 1;
    string reversed = "";
   
    while(i >= 0){
        reversed += test[i];
        i--;
        
        }
    return reversed;
}

int main()
{
    string randomString;
 cout << "Enter a string: ";
 getline(cin, randomString);
 cout << tweakletter(randomString);
 
 
}
