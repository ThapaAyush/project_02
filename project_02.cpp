// Calculator Application Project
#include<iostream>
using namespace std;

int main () {

char value;
char again;
start:
cout<<endl;
cout<<"Welcome To Our Calculator Application "<<endl;
cout<<"Please Follow The Instructions "<<endl;
cout<<endl;
cout<<"(1) For Addition Press a or A"<<endl;
cout<<"(2) For Subtraction Press s or S"<<endl;
cout<<"(3) For Multiplication Press m or M"<<endl;
cout<<"(4) For Division Press d or D"<<endl;
cout<<"(5) For Modulo Press o or O"<<endl;
cout<<endl;
cout<<"Please Enter your choice => ";

int addition(void);
int multiplication(void);
int subtraction(void);
int division(void);
int modulo(void);

cin>>value;
// if , else for addition
    if(value=='a' || value=='A'){
    int addvalue = addition();
    cout<<endl;
    cout<<"Addition is "<<addvalue<<endl;
    cout<<endl;
    cout<<"Do you want to use our application again, y or n => ";
    adddAgain:
    cin>>again;
    if(again=='y' || again=='Y'){
        cout<<endl;
        goto start;
    }
    else if(again=='n' || again=='N'){
        cout<<endl;
        cout<<"Thank you for using our Calculator Application, See You soon"<<endl;
    }
    else{
        cout<<endl;
        cout<<"You have entered wrong choice please select y or n"<<endl;
        goto adddAgain;
    }
    }

    // if , else for multiplication
    else if(value=='m' || value=='M'){
    int mulvalue = multiplication();
    cout<<endl;
    cout<<"Multiplication is "<<mulvalue<<endl;
    cout<<endl;
    cout<<"Do you want to use our application again, y or n => ";
    multiAgain:
    cin>>again;
    if(again=='y' || again=='Y'){
        cout<<endl;
        goto start;
    }
    else if(again=='n' || again=='N'){
        cout<<endl;
        cout<<"Thank you for using our Calculator Application, See You soon"<<endl;
    }
    else{
        cout<<endl;
        cout<<"You have entered wrong choice please select y or n"<<endl;
        goto multiAgain;
    }
    }

    // if , else for subtraction
    else if(value=='s' || value=='S'){
    int subvalue = subtraction();
    cout<<endl;
    cout<<"Subtraction is "<<subvalue<<endl;
    cout<<endl;
    cout<<"Do you want to subtract more numbers again, y or n => ";
    subAgain:
    cin>>again;
    if(again=='y' || again=='Y'){
        cout<<endl;
        goto start;
    }
    else if(again=='n' || again=='N'){
        cout<<endl;
        cout<<"Thank you for using our Calculator Application, See You soon"<<endl;
    }
    else{
        cout<<endl;
        cout<<"You have entered wrong choice please select y or n"<<endl;
        goto subAgain;
    }
    }

    // if , else for Division
    else if(value=='d' || value=='D'){
    int divvalue = division();
    cout<<endl;
    cout<<"Division is "<<divvalue<<endl;
    cout<<endl;
    cout<<"Do you want to divide more numbers again, y or n => ";
    divAgain:
    cin>>again;
    if(again=='y' || again=='Y'){
        cout<<endl;
        goto start;
    }
    else if(again=='n' || again=='N'){
        cout<<endl;
        cout<<"Thank you for using our Calculator Application, See You soon"<<endl;
    }
    else{
        cout<<endl;
        cout<<"You have entered wrong choice please select y or n"<<endl;
        goto divAgain;
    }
    }

    // if , else for Modulo
    else if(value=='o' || value=='O'){
    int modvalue = modulo();
    cout<<endl;
    cout<<"Your Remainder is "<<modvalue<<endl;
    cout<<endl;
    cout<<"Do you want to find remainder again, y or n => ";
    modAgain:
    cin>>again;
    if(again=='y' || again=='Y'){
        cout<<endl;
        goto start;
    }
    else if(again=='n' || again=='N'){
        cout<<endl;
        cout<<"Thank you for using our Calculator Application, See You soon"<<endl;
    }
    else{
        cout<<endl;
        cout<<"You have entered wrong choice please select y or n"<<endl;
        goto modAgain;
    }
    }
    else{
        cout<<"You have entered wrong choice, please enter again:"<<endl;
        goto start;
    }
}

// Addition Operations
int addition(){
    int a;
    int total=0;
    char choice;
    add:
    cout<<endl;
    cout<<"Your Number => ";
    cin>>a;
    total += a;
    cout<<endl;
    cout<<"Do you want to add more numbers,y or n => ";
    cin>>choice;
    sumagain:
    if(choice=='y' || choice == 'Y'){
        goto add;
    }
    else if(choice=='n' || choice == 'N'){
        return total;
    }
    else{
        cout<<endl;
        cout<<"You have entered wrong choice please select y or n"<<endl;
        goto sumagain;
    return total;
}
return total;
}

// Multiplication perations
int multiplication(){
    int m;
    int total=1;
    char choice;
    mul:
    cout<<endl;
    cout<<"Your Number => ";
    cin>>m;
    total *= m;
    cout<<endl;
    cout<<"Do you want to multiply more numbers,y or n => ";
    cin>>choice;
    mulagain:
    if(choice=='y' || choice == 'Y'){
        goto mul;
    }
    else if(choice=='n' || choice == 'N'){
        return total;
    }
    else{
        cout<<endl;
        cout<<"You have entered wrong choice please select y or n"<<endl;
        goto mulagain;
    return total;
}
return total;
}

// Subtraction Operations
int subtraction(){
    int a,b;
    int subtact;
    char choice;
    cout<<endl;
    cout<<"Enter your 1st Number => ";
    cin>>a;
    cout<<"Enter your 2nd Number => ";
    cin>>b;
    if(a>b){
        subtact = a - b;
    }
    else{
        subtact = b - a;
    }
    return subtact;
}

// Division Operations
int division(){
    int a,b;
    int divide;
    char choice;
    cout<<endl;
    cout<<"Enter your 1st Number => ";
    cin>>a;
    cout<<"Enter your 2nd Number => ";
    cin>>b;
    if(a>b){
        divide = a / b;
    }
    else{
        divide = b / a;
    }
    return divide;
}

// Modulo Operations
int modulo(){
    int a,b;
    int modulo;
    char choice;
    cout<<endl;
    cout<<"Enter your 1st Number => ";
    cin>>a;
    cout<<"Enter your 2nd Number => ";
    cin>>b;
    if(a>b){
        modulo = a%b;
    }
    else{
        modulo = a%b;
    }
    return modulo;
}







