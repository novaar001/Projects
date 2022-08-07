#include<iostream>
using namespace std;
 int main()
{
    char currname1;
    char currname2;
    float currency1;
    float currency2;
    char startvalue;
    char selectagain;
    float converter(void);
    start:
    cout <<"********** Welcome to Currency Converter Application **********"<<endl;
    cout <<"********* Please follow the instruction ***********"<< endl;
    cout <<"You can have currencies dollar,rupees,euro,pound"<< endl;
    cout <<"You can typea,b,c,drespectively for currencies dollar,rupees,euro,pound" << endl;
    cout <<"Enter currency1 which you want to convert"<< endl;
    cout <<"Enter value for currency1"<< endl;
    cout <<"Enter currency2 in which you want to convert currency1"<< endl;
    cout <<"(a)dollar(b)rupees(c)euro(d)pound"<< endl;
    cout <<"Please press s to start"<< endl;
    selectchoice:
    cin >> startvalue;
    if (startvalue == 's' || startvalue == 'S')
    {
        float finalvalue = converter();
        cout << "result is " << finalvalue;
        cout << "Do you want to use the application again? y or n" << endl;
       typeagain:
        cin >> selectagain;
        if (selectagain =='y' || selectagain == 'Y'){
            goto start;
        }
        else if (selectagain =='n' || selectagain == 'N'){
            cout << "thank you"<<end;
        }
        else {
            cout << "You have enterd wrong value, please type again" << endl;
            goto typeagain;
        }
    }
    else {
            cout << "You have entered wrong value, please enter s" << endl;
            goto selectchoice;
    }
}
    

float converter(){
    char currname1;
    char currname2;
    float currency1;
    float currency2;
    currlevel1:
    
    cout << "Enter currency1 name" << endl;cin >> currname1;

    cout << "enter currancy1 value" << endl;cin >> currency1;
}
    switch (currname1)
    {
    case 'a':
        currlevel1: 
        cout << "enter currency2 name" << endl;
        cin >> currname2;
        if (currname2 =='a' || currname2 == 'A'){
            currency2 = currency1*1;

        }
          else if (currname2 =='b' || currname2 == 'B'){
            currency2 = currency1*73.84;
        }

         else if (currname2 =='c' || currname2 == 'C'){
            currency2 = currency1*0.85;

             else if (currname2 =='c' || currname2 == 'C'){
            currency2 = currency1*0.72
        }
         else {
            cout << "you have enterd wrong value,try again plese" << endl;
            goto currlevel1;
         }    
         break;
       
       case 'b':
        currlevel2: 
        cout << "enter currency2 name" << endl;
        cin >> currname2;
        if (currname2 =='a' || currname2 == 'A'){
            currency2 = currency1*0.01;

        }
          else if (currname2 =='b' || currname2 == 'B'){
            currency2 = currency1*1;
        }

         else if (currname2 =='c' || currname2 == 'C'){
            currency2 = currency1*0.01;
        }

        else if (currname2 =='c' || currname2 == 'C'){
            currency2 = currency1*0.009;
        }
         else {
            cout << "you have enterd wrong value,try again plese" << endl;
            goto currvalue2;
         }
break;



         case 'c':
        currlevel3: 
        cout << "enter currency2 name" << endl;
        cin >> currname2;
        if (currname2 =='a' || currname2 == 'A'){
            currency2 = currency1*1.16;

        }
          else if (currname2 =='b' || currname2 == 'B'){
            currency2 = currency1*86.37;
        }

         else if (currname2 =='c' || currname2 == 'C'){
            currency2 = currency1*0.1;
        }

        else if (currname2 =='c' || currname2 == 'C'){
            currency2 = currency1*0.003;
        }
         else {
            cout << "you have enterd wrong value,try again plese" << endl;
            goto currvalue3;
         }
break;

         case 'd':
        currlevel4: 
        cout << "enter currency2 name" << endl;
        cin >> currname2;
        if (currname2 =='a' || currname2 == 'A'){
            currency2 = currency1*1.37;

        }
          else if (currname2 =='b' || currname2 == 'B'){
            currency2 = currency1*101.20;
        }

         else if (currname2 =='c' || currname2 == 'C'){
            currency2 = currency1*0.17;
        }

        else if (currname2 =='c' || currname2 == 'C'){
            currency2 = currency1*1;
        }
         else {
            cout << "you have enterd wrong value,try again plese" << endl;
            goto currvalue4;
         }
        break;

    default:{
     cout << "you have enterd wrong value,try again plese" << endl;
            goto currlevel1 ;   
    }
    }
}