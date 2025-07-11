#include<iostream>
#include<math.h>
using namespace std;
float a,b,c;
double x1, x2, delta;
void header();
void form();
void insert();
void deltagreater();
void deltazero();
void deltaless();
void display();
void menu();
int main () {
    while(true){
    header();
    form();
    insert();
    cout<<"===> delta = b^2 - 4ac"<<endl;
    delta = pow(b,2) - 4*a*c;
    if(delta>0){
        cout<<"delta > 0"<<endl;
        deltagreater();
        display();
    }
    else if(delta==0){
        cout<<"delta = 0"<<endl;
        deltazero();
        display();
    }
     else{
        cout<<"delta < 0"<<endl;
        deltaless();
    }
    menu:
    menu();
        int choise;
        cout<<"YOUR CHOISE: ";
        cin>>choise;
        switch(choise){
            case 1:
           system("clear");
            cout<<"Calulate again...."<<endl;
            break;
            case 2:
            cout<<"You have been Exit"<<endl;
            return 0;
            break;
            default:
            system("clear");
            cout<<"You choose the wrong choise "<<endl;
            cout<<"Try again...!!! "<<endl;
            goto menu;
            break;
        }
    }
    
    return 0;
}
void header(){
    cout<<"========================================"<<endl;
    cout<<"========== Quadratic Equation =========="<<endl;
    cout<<"========================================"<<endl;
}
void form(){
    cout<<"==== Equation form ===="<<endl;
    cout<<"     Ax^2 + Bx + C = 0    "<<endl;
    cout<<"======================="<<endl;
}
void insert(){
    cout<<"========= Please insert =========="<<endl;
    cout<<"Value A: ";cin>>a;
    cout<<"Value B: ";cin>>b;
    cout<<"Value C: ";cin>>c;
    cout<<"====== Equation form ====="<<endl;
    cout<<a<<"x^2 + ("<<b<<"x) + ("<<c<<") = 0"<<endl;
}
void deltagreater(){
    x1 = (-b - pow(delta,0.5))/(2*a);
    x2 = (-b + pow(delta,0.5))/(2*a);
}
void deltazero(){
    x1 = -b /(2*a);
    x2 = x1;
}
void deltaless(){
    cout<<"=========== Answer =============="<<endl;
    cout<<"=== no root as a real number ===="<<endl;
    cout<<"================================="<<endl;
}
void display(){
    cout<<"X1 = "<<x1<<endl;
    cout<<"X2 = "<<x2<<endl;
}
void menu(){
    cout<<"======================"<<endl;
    cout<<"========= Menu ======="<<endl;
    cout<<"[1].Calulate again. "<<endl;
    cout<<"[2].Exit program. "<<endl;
    cout<<"======================"<<endl;
    
}
    