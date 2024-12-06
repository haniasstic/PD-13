#include<iostream>
#include<fstream>
using namespace std;

string morseCode(string input);

int main() {
    string alphabects = "abcdefghjklmnopqrstuvwxyz";
    string input;
    string output;
    
    cout << "Enter string: ";
    getline(cin, input);
    output = morseCode(input);
    cout<<"The morse code for "<<input<<" is:"<<output;
}

string morseCode(string input)
{
    string str;
for (int i = 0; i < input.length(); i++) 
    {
        if (input[i] == 'A' || input[i] == 'a') 
        {
            str += ".- ";
        }
        if (input[i] == 'B' || input[i] == 'b')
         {
            str += "-... ";
        }
        if (input[i] == 'C' || input[i] == 'c') 
        {
            str += "-.-. ";
        }
        if (input[i] == 'D' || input[i] == 'd')
         {
            str += "-.. ";
        }
        if (input[i] == 'E' || input[i] == 'e') 
        {
            str += ". ";
        }
        if (input[i] == 'F' || input[i] == 'f')
         {
            str += "..-. ";
        }
        if (input[i] == 'G' || input[i] == 'g')
         {
            str += "--. ";
        }
        if (input[i] == 'H' || input[i] == 'h')
         {
            str += ".... ";
        }
        if (input[i] == 'I' || input[i] == 'i')
         {
            str += ".. ";
        }
        if (input[i] == 'J' || input[i] == 'j')
         {
            str += ".--- ";
        }
        if (input[i] == 'K' || input[i] == 'k') 
        {
            str += "-.- ";
        }
        if (input[i] == 'L' || input[i] == 'l')
         {
            str += ".-.. ";
        }
        if (input[i] == 'M' || input[i] == 'm')
         {
            str += "-- ";
        }
        if (input[i] == 'N' || input[i] == 'n')
         {
            str += "-. ";
        }
        if (input[i] == 'O' || input[i] == 'o')
         {
            str += "--- ";
        }
        if (input[i] == 'P' || input[i] == 'p') 
        {
            str += ".--. ";
        }
        if (input[i] == 'Q' || input[i] == 'q')
         {
            str += "--.- ";
        }
        if (input[i] == 'R' || input[i] == 'r')
         {
            str += ".-. ";
        }
        if (input[i] == 'S' || input[i] == 's') 
        {
            str += "... ";
        }
    
        if (input[i] == 'T' || input[i] == 't')
         {
            str += "- ";
        }
        if (input[i] == 'U' || input[i] == 'u') 
        {
            str += "..- ";
        }
        if (input[i] == 'V' || input[i] == 'v') 
        {
            str += "...- ";
        }
        if (input[i] == 'W' || input[i] == 'w') 
        {
            str += ".-- ";
        }
        if (input[i] == 'X' || input[i] == 'x')
         {
            str += "-..- ";
        }
        if (input[i] == 'Y' || input[i] == 'y') 
        
        {
            str += "-.-- ";
        }
        if (input[i] == 'Z' || input[i] == 'z') 
        {
            str += "--.. ";
        }
        if (input[i] == ' ') 
        {
            str += "-.-.-.- ";
        }
    }

    return str;
}
