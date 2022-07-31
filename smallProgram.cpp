#include <iostream>
using namespace std;

int main()
{
    // this is a basic computer calculator program 
    // it is not yet perfect , needs some polishing on he code 

    int numb ;
    cout<< " welcome to the terminal calculator !" << endl;
cout << " Choose from the list below an operation you would like to perform :"<<  endl;
cout << " 1) Addition : " << endl;
cout << " 2) Division  : " << endl; 
cout << " 3) Multiplication :  " << endl;
cout << " 4) Division :  "<<  endl;
cout << " 5) Modulus : "<<  endl;
cin>> numb;

switch (numb)
{
    int x , y;
     
     case 1 :
     cout<< "Please enter 2 values you want added "<< endl; 
     cin>> x >> y ;
     cout<< x << " + " << y << " = " << x+y << endl;
     break;

     case 2 :
     cout<< "Please enter 2 values you want subtracted "<< endl; 
     cin>> x >> y ;
     cout<< x << " - " << y << " = " << x-y << endl;
     break;

     case 3 :
     cout<< "Please enter 2 values you want multiplied "<< endl; 
     cin>> x >> y ;
     cout<< x << " x " << y << " = " << x*y << endl;
     break;

     case 4 :
     cout<< "Please enter 2 values you want divided "<< endl; 
     cin>> x >> y ;
     cout<< x << " / " << y << " = " << x/y << endl;
     break;

     case 5 :
     cout<< "Please enter 2 values you want to see the remainder of  "<< endl; 
     cin>> x >> y ;
     cout<< x << " + " << y << " = " << x+y << endl;
     break;

     default: 
     cout<< " you have entered an invalid input " << endl;
}

cout << " thank you !!" << endl;






    return 0;
}
