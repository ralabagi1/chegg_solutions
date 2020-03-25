#include<iostream>
#include <stdlib.h>
using namespace std;
char userChoice(){
char choice;
int a;
cout<<"Choose one choice from the following numbers"<<endl;
cout<<"1.Rock\n2.Paper\n3.Scissors\n";
cin>>a;
switch(a){
case 1:
    choice='R';
    break;
case 2:
    choice='P';
    break;
case 3:
    choice='S';
    break;
default:
    cout<<"Invalid Choice\nDo you want to try again(Y/N)?\n";
    char ch;cin>>ch;
    if(ch=='Y' || ch=='y')
        userChoice();
    else
        choice='I';
    // I FOR INVALID AND PROGRAM WILL TERMINATE
}
return choice;
}
char computerChoice(){
/*
Here rand will generate number from 0 to RAND_MAX
but we modulo it to get number in range 1-3
*/
int randchoice=((rand()%3)+1);
char choice;
switch(randchoice){
case 1:
    choice='R';
    break;
case 2:
    choice='P';
    break;
case 3:
    choice='S';
    break;
}
return choice;
}
void determineWinner(char usrchoice,char compchoice){
//Rock v\s scissors Rock wins
if(usrchoice=='R' && compchoice=='S'){
        cout<<"User wins\n";
        return;
}
else if(usrchoice=='S' && compchoice=='P'){
    cout<<"Computer wins\n";
    return;
}
//scissors v\s paper scissors wins
else if(usrchoice=='S' && compchoice=='P'){
        cout<<"User wins\n";
        return;
}
else if(usrchoice=='P' && compchoice=='S'){
    cout<<"Computer wins\n";
    return;
}
//paper v\s rock paper wins
else if(usrchoice=='P' && compchoice=='R'){
    cout<<"User wins\n";
    return;
}
else if(usrchoice=='R' && compchoice=='P'){
    cout<<"Computer wins\n";
    return;
}
//Both have same choice game draws
else if(usrchoice==compchoice){
    cout<<"There is no winner.Game draw\n";
    return;
}
}
bool playagain(){
bool b;
char ch;
cout<<"Do you want to play again (Y/N)?";
cin>>ch;
if(ch=='Y' || ch=='y')
    b=true;
else
    b=false;
return b;
}
void showChoices(char usrchoice,char cmpchoice){
string usr,cmp;
//user choice
    if(usrchoice=='R'){
        usr="Rock";
    }
    else if(usrchoice=='P'){
        usr="Paper";
    }
    else{
        usr="Scissors";
    }
    //computer choice
    if(cmpchoice=='R'){
        cmp="Rock";
    }
    else if(cmpchoice=='P'){
        cmp="Paper";
    }
    else{
        cmp="Scissors";
    }
    cout<<"Your choice: "<<usr<<endl;
    cout<<"Computer Choice: "<<cmp<<endl;
}
int main(){
while(true){
    char usrchoice=userChoice();
    char compchoice=computerChoice();
    showChoices(usrchoice,compchoice);
    determineWinner(usrchoice,compchoice);
    bool b=playagain();
    // In case b is true we play again else we terminate
    if(b)
        continue;
    else
        break;
}
}
