#include<iostream>
#include<fstream>
using namespace std;

void readData(string name[], int ages[], int &idx);
string getField(string record, int field);

int main()
{

    string name[100];
    int ages[100];
    int idx = 0;
    readData(name, ages, idx);

 for(int i=0; i<idx;i++){
    if((ages[i])%2==0)
    {
        cout<<"###############"<<endl;
        cout<<"#"<<ages[i]<<" HB "<<name[i]<<"! " <<ages[i]<<"#"<<endl;
        cout<<"###############"<<endl;
    }

    else
    {
        cout<<"***************"<<endl;
        cout<<"*"<<ages[i]<<" HB "<<name[i]<<"! " <<ages[i]<<"*"<<endl;
        cout<<"***************"<<endl;
    }
 }

}



string getField(string record, int field)
{
int commaCount = 1;
string item;

for (int x = 0; x < record.length(); x++)
{
if (record[x] == ',')
{
commaCount = commaCount + 1;

}
else if (commaCount == field)
{
item = item + record[x];
}
}
return item;
}


void readData(string name[], int ages[], int &idx)
{
    fstream file;
    file.open("cakee.txt",ios::in);
    string record;


    while(!(file.eof()))
    {
        getline(file,record);
        name[idx]=getField(record,1);

        ages[idx]=stoi(getField(record,2));
        idx=idx+1;
    }
 
}