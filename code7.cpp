#include<iostream>
using namespace std;
main()
{
string name;
float matric;
float inter;
float ecat;
float aggregate;
float matricper;
float interper;
float ecatper;
float matricperc;
float interperc;
float ecatperc;
cout<<"Enter name ";
cin>>name;
cout<<"Enter matric marks ";
cin>>matric;
cout<<"Enter inter marks ";
cin>>inter;
cout<<"Enter ecat marks ";
cin>>ecat;
matricper=(matric/1100)*100;
matricperc=matricper/10;
interper=(inter/1100)*100;
interperc=interper/40;
ecatper=(ecat/400)*100;
ecatperc=ecatper/50;
aggregate=matricperc+interperc+ecatperc;
cout<<"Your aggregate is "<<aggregate;
}