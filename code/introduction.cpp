#include<iostream>   /// input output stream header file
#include<conio.h>

using namespace std;
void sumcalculation();
int main(){

    cout<< "Introduction C++"; //cout smaller than is output
    cout<< "\n2 nd line......"<<endl;   // <<endl end line
    cout<< "\t3 rd line......"<<endl;
    cout << "Samiran"<<" Kumar"<<" Halder"<<endl;



    int num1;
    float num3;
    num1 = 10;
    num3 = 11.5F;
    int num = num1+num3;
    float num4 = num1+num3;
    cout << "NUM4:  "<<num4;


    char ch;
    ch = 'a';
    cout<<"\nChar: "<<ch <<endl;


    char name[21] = "samiran kumar Halder"; //21 char last null char

    cout<< "My name: "<<name  ;
    cout<<endl;

    double inputNum;
    cout<<"Input a number: ";
    cin >> inputNum;

    cout<< "\nInput Number Print: "<< inputNum  <<endl;

    sumcalculation();

    getch();
    return 0;
}




void sumcalculation(){
    int num1 = 100;
    int num2 = 33;
    int num3 = num1+num2;
    int num9 = num1-num2;
    double num4 = 44.5;
    double num5 = num4+num3;

    int num6 = num1*num2;
    float num7 = num1/num2;
    float num8 = num1%num2;


    cout<<"SUM int num "    <<num1  <<" + " <<num2 <<" = "  <<num3 <<endl;
    cout<<"SUM double num " <<num4  <<" + " <<num3 <<" = " <<num5 <<endl;
    cout<<"SUB int num "    <<num1  <<" - " <<num2 <<" = "  <<num9 <<endl;
    cout<<"MULTIPLECATION int num " <<num1  <<" * " <<num2 <<" = "  <<num6 <<endl;
    cout<<"Division int num "    <<num1  <<" / " <<num2 <<" = "  <<num7 <<endl;
    cout<<"Reminder int num "   <<num1  <<" % " <<num2 <<" = "  <<num8 <<endl;



    cout<<showpoint;   ///showpoint is amethord
    float num10 = 20.5f;

    cout<<"Num1: "<<num10 <<endl;
    cout<<noshowpoint;
    cout<<"Num1: "<<num10;


}

/*
    what is c++?

C++ is a general-purpose object-oriented programming (OOP) language,
developed by Bjarne Stroustrup, and is an extension of the C language.
C++ is considered to be an intermediate-level language, as it encapsulates
both high- and low-level language features.

    #use of c++
    it use to develop game engine,game,desktop app,art application,music player

    #features
    -simple
    -mid-level programming language
    -reach library
    -memory management
    -first spreed
    -pointer
    -recursion
    -opp
    -compiler based

*/
