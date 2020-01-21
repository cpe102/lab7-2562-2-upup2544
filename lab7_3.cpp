//status = "ONE-NIGHT-STAND";
#include <iostream>
using namespace std;

int main()
{ int age,money;
string status;
    cout<<"Age :";
    cin>>age;
    if(age<=20){int tall;
         cout<<"Tall :";
         cin>>tall;
         if(tall<160){status="UNFRIEND";}
         else{if(tall<175){status="FRIEND";}else{
             cout<<"Money :";
            cin>>money;
         if(money>69000000){
               status="MARRIED";
          }else{ status="ONE-NIGHT-STAND";}
         }}

    }else{
         if(age<30){ 
         cout<<"Money :";
         cin>>money;
          if(money>10000000){
               status="BESTFRIEND";
          }else{ status="UNFRIEND";}

         }else{ status="UNFRIEND";}
    }
    cout<<status;
    return 0;
}