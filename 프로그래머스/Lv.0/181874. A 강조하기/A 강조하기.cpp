#include <string>
#include <vector>

using namespace std;

string solution(string myString) 
{
    string answer = "";
    
   for(int i=0; i<myString.size(); ++i)
   {
       if(myString[i]=='a')
       {
           myString[i]='A';
       }
       else if(std::isupper(myString[i])&&myString[i]!='A')
       {
           myString[i]=std::tolower(myString[i]);
       }
   }
    
    return myString;
}