#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <algorithm>


#include "classpsyco.h"
#include "tripgambler.h"
#include "spell.h"
#include "potion.h"
#include "dragon.h"

using namespace std;

struct Wizard {
   string name;
   int magic_power;
   int house_credit;
   int day;
   string house;
};

void saving(Wizard s){
  string filename=s.name+".txt";
  ofstream fout(filename.c_str());
  if(fout.fail()){
    cout<<"Death Eater invade! Failed to save."<<endl;
    exit(1);
  }
  fout << s.name << " " << s.magic_power << " " << s.house_credit << " " << s.day << " " << s.house;
  fout.close();
  return;
}


int main(){

  cout << " *  /-/-/ *                                                           * /-/-/  *. "<< endl;
  cout << "          *  /     /    *                            *    /     /   * " << endl;
  cout << "        *  /   __-/  *                               * /-__  /  * " << endl;
  cout << "           */    /  *                                      * /    /* " << endl;
  cout << "              /*   /)/                                   /(/   */ " << endl;
  cout << "              /// /    /            ___              /    / /// " << endl;
  cout << "           //::/        /      *   *   *   *       /        /::// " << endl;
  cout << "          ||:::|           / *        ^        *  /          '|:::|| " << endl;
  cout << "          ||:::|              )* (        ) ))*(             ''|:::|| " << endl;
  cout << "          ||:::|                ) )Õ  Õ((                  '|:::|| " << endl;
  cout << "          ||:::|              (  (   ~_~    ))               ''|:::|| " << endl;
  cout << "           //::/               ) (    ^    ))               /:::// " << endl;
  cout << "            /Y/______ (     (     ( (    ______ /Y/ " << endl;
  cout << "              v             /  /     )    )  ) /    ,  *¤  v , " << endl;
  cout << "         , *  *  * ,      /      )  (   ( /     /,*            *, " << endl;
  cout << "     , ''     ¤      '',  /        /    )  )        /  ¤       ,¤ ,  , " << endl;
  cout << "              , ¤, ,  /            /( (            /    , *  ¤* , " << endl;
  cout << "           , *       * ,  ,  ,  ,    Y    ,  ,  ,  ,/*   ¤          ¤*, " << endl;
  cout << "              ¤      , *   ¤     * ,  , *  ¤          * , " << endl;
  cout << "                                ¤  , *               ¤      *, " << endl;

  cout << " Congradulations! You have been selected to be a wizard!" << endl;
  cout << endl;
  cout << endl;

  Wizard * s = new Wizard;

  cout<<"Are you ready? Please tell me your name!"<<endl;
  string name;
  cin>>name;
  cout<<endl;

  string filename = name+".txt";
  ifstream fin(filename.c_str());

  if (fin.fail())   // a new Wizard
  {
    (*s).name=name;
    (*s).magic_power=0;
    (*s).house_credit=5;
    (*s).day=1;
    cout<<name<<", my dear young wizard, welcome to Hogwarts! You must be very talent and curious! Here you will be taught brand-new magic knowledge and experience unforeseen exciting events. You will be tested, but afterwards you could win the glory for your house if you can successfully pass them. Good luck and be brave."<<endl;
    cout<<endl;

    //the Sorting Hat
    cout<<"Now, sit tight and the Sorting Hat will assign you a house."<<endl;
    cout<<"Please enter your birthday (yyyymmdd Ignore spaces and symbols): ";
    int birthday;
    cin>>birthday;
    srand(birthday);
    int h;
    string houses[4]={"Gryffindor","Slytherin","Ravenclaw","Hufflepuff"};
    h=rand()%4;
    (*s).house=houses[h];
    cout<<"The Hat considered for a moment, then the rip near the brim opened and shouted: "<<(*s).house<<"! "<<endl;
  }

  else      // an exsiting Wizard
  {
    cout<<"Hey, my old friend! It is so good to see you again! Ready to continue the unfinished adventure? Don’t hesitate! Let’s unpack and start our old journey!"<<endl;
    fin >> (*s).name >> (*s).magic_power >> (*s).house_credit >> (*s).day >> (*s).house;
    fin.close();
  }

  cout<<endl;
  cout << "Now! Let me introduce some rules to you: " << endl;
  cout << "Since you were in muggles' world for so long before," << endl;
  cout << "you have to win 7 Magic power to graduate!" << endl;
  cout << "You will stop your adventure if you lost 5 House Credit!" << endl;
  cout<<endl;

  cout<<"Now your magic power is "<< (*s).magic_power;
  cout<<". Your house credit is "<< (*s).house_credit << ". Go for it! Please enter something to start the journey." << endl;
  string * str = new string;
  cin>> *str;
  delete str;
   
  int c;

  while ( (*s).magic_power < 7 && (*s).house_credit > 0)
  {
    cout<<endl;
    cout<<"Today is Day "<< (*s).day <<endl;
    cout<<"Now your magic power is "<< (*s).magic_power;
    cout<<". Your house credit is "<< (*s).house_credit << "."<<endl;
    if ((*s).day %5 == 1){
      c=potion();
      (*s).day++;
    }
    else if ((*s).day %5 == 2){
      c=tripgambler();
      (*s).day++;
    }
    else if ((*s).day %5 == 3){
      c=classpsyco();
      (*s).day++;
    }
    else if ( (*s).day%5 == 4){
      c=spell();
      (*s).day++;
    }
    else{
      c=dragon();
      (*s).day++;
    }

    if(c>0)
      (*s).magic_power+=c;
    else if(c<0)
      (*s).house_credit+=c;

    cout<<endl;

    string com;
    cout<<"If you have some issues in the muggles’s world, you could quit. That’s fine! Magic journey could restart anytime! Please enter <Quit> if you want to quit. Otherwise, enter anything. "<<endl;
    cin>>com;
    if(com=="Quit"){
       cout<<"See you next time!"<<endl;
       saving(*s);
       break;
    }

  }

  cout<<endl;
  if( (*s).magic_power >= 7 ){  //the player win (graduate)
    cout<< "Congradulations! Your magic power is " << (*s).magic_power << endl;
    cout<< "You are qualified to be a excellent wizard! You can use you power to benefit others!" << endl;
    cout<< "Also, do not forget! Hogworts will always be your home!" << endl;
  }

  else if ((*s).house_credit <= 0) {      //the player lose (stop adventure)
    cout<< "Unfortunately, your have no house credits ." << endl;
    cout<< "But, do not give up! One moment lose does not mean everthing!" << endl;
    cout<< "Trust yourself! You can try other wizards' schools!" << endl;
  }

  delete s;
  return 0;
}
