#include <iostream>
#include <time.h>
using namespace std;


int ROCK =1 , PAPER =2, SCISSOR=3 ; 
int chosen,flag;
int comp;
int N = 3;

void comOption(){
    srand(time(0));
    comp = rand() % N+1;
    cout << "The option chosen by computer is "<< comp << " "<<endl;
  
}


void options(){
   cout<<" 1) ROCK"<<endl;
   cout<<" 2) PAPER"<<endl;
   cout<<" 3) SCISSOR"<<endl;
   cout<<"Press 1 to choose ROCK, Press 2 to choose PAPER, Press 3 to choose SCISSOR"<<endl;

    cout<<"Option Chosen: ";
    cin>>chosen;
    if  (chosen == 1)
    {
      cout<<"You have chosen ROCK"<<endl;

    }
    else if (chosen == 2)
    {
      cout<<"You have chosen PAPER"<<endl;
    }
    else if (chosen == 3)
    {
      cout<<"You have chosen SCISSOR"<<endl;
    }
    else{
      flag = 1;
    }

    if (flag ==1)
    {
      cout<<"Invalid option"<<endl;
      exit(flag);
    }
}


void game() {
    if (chosen == comp) {
        cout << "IT IS A DRAW" << endl;
    } else if ((chosen == ROCK && comp == SCISSOR) || (chosen == PAPER && comp == ROCK) || (chosen == SCISSOR && comp == PAPER)) {
        cout << "WOW!!! YOU WON" << endl;
    } else {
        cout << "OH!!! YOU LOST" << endl<<"Better Luck Next Time"<<endl;
    }
}
  
int main()
{
    
    cout<<"HELLO!!!"<<endl;
    cout<<"WELCOME TO THE GAME: [ROCK-PAPER-SCISSOR] "<<endl;
   cout<<"CHOOSE YOUR OPTION: "<<endl;
   options();
   comOption();
   cout<<"Now the game starts: "<<endl;
   game();
   return 0;
    }
   
 

   



