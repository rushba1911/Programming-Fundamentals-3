#include<iostream>
using namespace std;
main()
{
float megabytes;
float kilobytes;
float bytes;
float bits;
cout<<"Enter mbs";
cin>>megabytes;
bits=megabytes*1024*1024*8;
cout<<"The bytes in it are "<<bits;
}