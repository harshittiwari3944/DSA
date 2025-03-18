#include<iostream>
using namespace std;
int main (){
    int age;
    cout<<"tell me your age"<<endl;
    cin >>age;
    /*
    if ((age<18)&&(age>0)){
        cout<<"you can not come to my party"<<endl;
    }
        else if(age==18){
            cout<<"you aare kid and you will get a kid pass to the party"<<endl;

        }
            else if (age<1){
                cout<<"you are not born yet"<<endl;
            }

            

        
        else {
            cout<<"you can come to my party"<<endl;
        }*/

       //***********switch case *****//
       switch (age)
       {
       case 18:
        cout<<"you are 18"<<endl;
        break;
       case 19:
       cout<<" you are 19"<<endl;
       break;
       default :
       cout <<"no special case "<<endl;
        break;
       }
        return 0;
    }
