#include<iostream>

using namespace std;

int main()
{

  int c=0; // numbers of car parked 
  int r=0; // numbers of rickshaw parked 
  int b=0; // numbers of buses parked 

  int u_input;

  int amount=0,count=0;

  //menu 

  while(true)
  {

  cout<<"Press 1 for rickshaw"<<endl;
  cout<<"Press 2 for car"<<endl;
  cout<<"Press 3 for bus"<<endl;
  cout<<"Press 4 to show the record"<<endl;
  cout<<"Press 5 to delete the record"<<endl;

  cin>>u_input;

  if(u_input==1)
  {
    if(count<=50)
    {
      r++; // rickshaw count 
    amount=amount+100;
    count=count+1;
    }
    else
    cout<<"Parking is full"<<endl;
  }

  else if(u_input==2)
  {
    if(count<=50)
    {
      c++; // car count 
    amount=amount+200;
    count=count+1;
    }
    else
    cout<<"Parking is full"<<endl;
  }

  else if(u_input==3)
  {
    if(count<=50)
    {
      b++; // buses count 
    amount=amount+300;
    count=count+1;
    }
    else
    cout<<"Parking is full"<<endl;
  }

   else if(u_input==4)
  {

    
    cout<<"******************************************************"<<endl;
    cout<<"The total amount ="<<amount<<endl;
    cout<<"The total number of vehicles parked ="<<count<<endl;
    cout<<"The total number of rickshaw parked ="<<r<<endl;
    cout<<"The total number of car parked ="<<c<<endl;
    cout<<"The total number of bus parked ="<<b<<endl;
    cout<<"*******************************************************"<<endl;
  }

  else if(u_input==5)
  {
    amount=0;
    count=0;
    r=0;
    c=0;
    b=0;
    cout<<"**********************************************************"<<endl;
    cout<<"RECORD DELETED"<<endl;
    cout<<"**********************************************************"<<endl;
  }

  else 
  {
    cout<<"Invalid number";
  }

  }
  return 0;
}



///////////////////OUTPUT IN THE TERMINAL//////////////////////////////

Press 1 for rickshaw
Press 2 for car
Press 3 for bus
Press 4 to show the record
Press 5 to delete the record
1
Press 1 for rickshaw
Press 2 for car
Press 3 for bus
Press 4 to show the record
Press 5 to delete the record
2
Press 1 for rickshaw
Press 2 for car
Press 3 for bus
Press 4 to show the record
Press 5 to delete the record
3
Press 1 for rickshaw
Press 2 for car
Press 3 for bus
Press 4 to show the record
Press 5 to delete the record
1
Press 1 for rickshaw
Press 2 for car
Press 3 for bus
Press 4 to show the record
Press 5 to delete the record
2
Press 1 for rickshaw
Press 2 for car
Press 3 for bus
Press 4 to show the record
Press 5 to delete the record
3
Press 1 for rickshaw
Press 2 for car
Press 3 for bus
Press 4 to show the record
Press 5 to delete the record
4
******************************************************
The total amount =1200
The total number of vehicles parked =6
The total number of rickshaw parked =2
The total number of car parked =2
The total number of bus parked =2
*******************************************************
Press 1 for rickshaw
Press 2 for car
Press 3 for bus
Press 4 to show the record
Press 5 to delete the record
5
**********************************************************
RECORD DELETED
**********************************************************
Press 1 for rickshaw
Press 2 for car
Press 3 for bus
Press 4 to show the record
Press 5 to delete the record
4
******************************************************
The total amount =0
The total number of vehicles parked =0
The total number of rickshaw parked =0
The total number of car parked =0
The total number of bus parked =0
*******************************************************
Press 1 for rickshaw
Press 2 for car
Press 3 for bus
Press 4 to show the record
Press 5 to delete the record
