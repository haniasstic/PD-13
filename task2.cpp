#include<iostream>
#include<fstream>
using namespace std;
string isPresentAlphabects(string line,string alphabects);
int main()
{
    string output;
    string alphabects="abcdefghijklmnopqrstuvwxyz";
    string line;
    cout<<"Enter a string: ";
    cin>>line;
    output=isPresentAlphabects(line,alphabects);
    cout<<"Missing aplhabects: "<<output;

}

string isPresentAlphabects(string line,string alphabects)
{

    string str;
    for(int i=0; i < alphabects.length(); i++)
    {
        bool isPresentAlphabect=false;
        for(int j=0; j < line.length();j++)
        {
            if(alphabects[i]==line[j])
            {
                isPresentAlphabect= true;
                break;
            }
        }
         if(!isPresentAlphabect)
        {
            str += alphabects[i];
        }
    }
    return str;
}