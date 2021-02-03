#include<iostream> 
using namespace std;
int main() 
{ 
    int age; 
    cout<<"Enter your Age:"; 
    cin>>age; 
if(age>=18) 
{ 
    cout<<"You are  a teenager and hence eligible to vote"; 
} 
else 
{ 
    cout<<"You are not eligible for voting"; 
    cout<<"\nYou will be eligible after"<<18-age<<"years";
} 
    return 0;
}
