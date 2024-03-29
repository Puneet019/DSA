#include<iostream>
using namespace std;

// Program for calculating grade

int main(){

    int marks;
    cin >> marks;
   

    if(marks>=90){
        cout<<"A+";

    }
    else if (marks>=80){
        cout<<"A";

    }
    else if (marks>=70){
        cout<<"B";

    }
    else if (marks>60)
    {
        cout<< "c";

    }
    else if (marks>=50)
    {
        cout<< "d";

    }

    else{
        cout<<"fail";
    }




}
