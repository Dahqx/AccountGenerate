#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
char firstInitial, middleInitial, lastInitial, position;
string firstname, middlename, lastname, fullname;
string national_id;
string joining_year;
string converted,converted_1;
string email,password;
int joining_year_int;
int number;
int lower=0000,upper=9999;
string username,numberstring;
string lastTwo;
string username_e;
int attemps=1;


 while(true){
    cout<<"enter your fullname "<<endl;
        getline(cin,fullname);
        
        istringstream iss(fullname);
        iss>>firstname>>middlename>>lastname;

         if(iss.eof()&& !iss.fail()){
             firstInitial=firstname[0];
             middleInitial=middlename[0];
             lastInitial=lastname[0];
             break;
         }

         else{
            cout<<"invaild input please enter fullname of 3 words "<<endl;
         }
         attemps++;
         }
         
        
    while (true) {
        cout << "Please enter your national ID (10 digits only): "<<endl;
        getline(cin, national_id);
        bool valid = true;

        if (national_id.length() != 10) {
            valid = false;
        } else {
            for (char c : national_id) {
                if (!isdigit(c)) {
                    valid = false;
                    break;
                }
            }
        }
        if (valid) {
            break;
        } else {
            cout << "invaild input enter a id of 10 numbers !!! " << endl;
            attemps++;

        }
    }
   
      
      
 while(true){
    cout<<"enter your position student or employee as (s/e)  : "<<endl;
    cin>>position;
    if(position=='s'|| position=='S'|| position=='e' || position=='E'){



    switch(position){
    case 's':
    case 'S':

     while (true) {
        cout << "Please enter the year you joined the university (4 digits): "<<endl;
        cin >> joining_year;

        
        bool valid = true;
        if (joining_year.length() != 4) {
            valid = false;
        } else {
            for (char c : joining_year) {
                if (!isdigit(c)) {
                    valid = false;
                    break;
                }
            }
        }
        if (valid) {
            int year = stoi(joining_year);
            if (year >= 2013 && year <= 2023) {
                break;

            }
        }
            attemps++;

      }
     
   lastTwo = joining_year.substr(2, 2);
  

            srand(time(nullptr));
            number = (rand() % (upper - lower + 1)) + lower;
            numberstring = to_string(number);

            password = "";
            password += toupper(firstInitial);
            password += tolower(middleInitial);
            password += tolower(lastInitial);
            password += "_";
            password += national_id.substr(0, 6);
            
            cout<<"your username is : "<<"2"<<lastTwo<<"000"<<numberstring<<endl;
            cout << "Email: " << "2"<<lastTwo<<"000"<<numberstring<<"@iau.edu.sa" << endl;
             cout << "your password is : " << password<< endl ;


      break;
      case 'e':
      case 'E':
     
  if (isupper(firstInitial)) {
        converted += tolower(firstInitial);
    } else if (islower(firstInitial)) {
        converted += toupper(firstInitial);
    } 
      if (isupper(middleInitial)) {
        converted_1 += tolower(middleInitial);
    } else if (islower(middleInitial)) {
        converted_1 += toupper(middleInitial);
    } 
    username_e=converted+converted_1+lastname; 

    password = "";
            password += toupper(firstInitial);
            password += tolower(middleInitial);
            password += tolower(lastInitial);
            password += "_";
            password += national_id.substr(0, 6);

 

    cout << "your username is: " << username_e<< endl;
    cout << "Email: " << username_e+"@iau.edu.sa" << endl;
    cout << "your password is : " << password<< endl ;


    
      break;

      } 
    
     break;

     } else {
      cout<<"invaild input enter s/S or e/E ONLY!!!"<<endl<<endl;        
      }
    attemps++;
    } 
  
  if (attemps >1){
  cout<<"User information enterd successfuly, after "<<attemps<<" attempts"<<endl<<endl;
  }else{
      cout<<"User information enterd successfuly, after "<<attemps<<" attempt"<<endl<<endl;

  }
          return 0;
}
