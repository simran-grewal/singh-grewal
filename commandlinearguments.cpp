//first argument is a.out
#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
    if(argc!=6)
    {
        cout<<"please enter the four arguments???";
    }
    else
    {
        cout<<"you program name is"<<argv[0]<<endl;
        cout<<"first argument is="<<argv[1]<<endl;
        cout<<"second argument is="<<argv[2]<<endl;
         cout<<"third argument is="<<argv[3]<<endl;
         cout<<"forth argument is="<<argv[4]<<endl;    
         cout<<"fifth argument is="<<argv[5]<<endl; 
         cout<<"fifth argument is="<<argv[6]<<endl; //it is NULL;
    }
}
