#include <iostream>
#include <cstdlib>      // for calling srand(), rand()
#include <ctime>        // for calling time()
#include <algorithm>    // for calling sort()

#include "tripgambler.h"

#define SPADE   "\xE2\x99\xA0"
#define CLUB    "\xE2\x99\xA3"
#define HEART   "\xE2\x99\xA5"
#define DIAMOND "\xE2\x99\xA6"
#define NUMCARDS  5

using namespace std;

char card_num[13] = {'A','2','3','4','5','6','7','8','9','1','J','Q','K'};
int hand_num[NUMCARDS],hand_suit[NUMCARDS];

void DealHand(int cards[]){
  int x;
  cout<<"Please tell the draw machine your lucky number to generate your cards: "<<endl;
  cin >> x;
  srand(x);
  for (int i=0;i<NUMCARDS;i++)
    cards[i] = rand() %52;
}

void PrintHand(int cards[]){
  for(int i=0;i<NUMCARDS;i++){
    int x=cards[i];
    hand_num[i]=x%13;                 // print and restore number
    if (hand_num[i]==9)
      cout<<"10";
    else
      cout<<card_num[ hand_num[i] ];
    if (x<13){                        // print and restore suit
      hand_suit[i]=1;
      cout << SPADE << " ";
    }
    else if (x<26){
      hand_suit[i]=2;
      cout << HEART << " ";
    }
    else if (x<39){
      hand_suit[i]=3;
      cout << CLUB << " ";
    }
    else{
      hand_suit[i]=4;
      cout << DIAMOND <<" ";
    }
  }
  cout<<endl;
}

bool IsFourOfAKind(int cards[]){ // return if the hand is a four of a kind
  int freq_num[13]={};
  for(int i=0;i<NUMCARDS;i++)
    freq_num[ hand_num[i] ]++;
  for(int i=0;i<13;i++)
    if(freq_num[i]==4)
      return 1;
  return 0;
}

bool IsFullHouse(int cards[]){ // return if the hand is a full house
  int freq_num[13]={};
  bool flag=0;                // True if three cards of one rank
  for(int i=0;i<NUMCARDS;i++)
    freq_num[ hand_num[i] ]++;
  for(int i=0;i<13;i++)
    if(freq_num[i]==3)
      flag=1;
  for(int i=0;i<13;i++)
    if(freq_num[i]==2 && flag==1)
      return 1;
  return 0;
}

bool IsFlush(int cards[]){ // return if the hand is a flush
  int freq_suit[5]={};
  for(int i=0;i<NUMCARDS;i++)
    freq_suit[ hand_suit[i] ]++;
  for(int i=1;i<=4;i++)
    if(freq_suit[i]==5)
      return 1;
  return 0;
}

bool IsStraight(int cards[]){ // return if the hand is a straight
  sort( hand_num, hand_num+5 );
  int last=hand_num[0];
  for(int i=1;i<NUMCARDS;i++){
    if(hand_num[i]!=last+1)
      return 0;
    last=hand_num[i];
  }
  return 1;
}

bool IsThreeOfAKind(int cards[]){ // return if the hand is a three of a kind
  int freq_num[13]={};
  for(int i=0;i<NUMCARDS;i++)
    freq_num[ hand_num[i] ]++;
  for(int i=0;i<13;i++)
    if(freq_num[i]==3)
      return 1;
  return 0;
}

bool IsTwoPair(int cards[]){ // return if the hand is a two pair
  int freq_num[13]={};
  bool flag=0;                // True if already one pair
  for(int i=0;i<NUMCARDS;i++)
    freq_num[ hand_num[i] ]++;
  for(int i=0;i<13;i++){
//    cout<<i<<" "<<count[i]<<endl;
    if(flag==0 && freq_num[i]==2)
      flag=1;
    else if(freq_num[i]==2 && flag==1)
      return 1;
  }
  return 0;
}

bool IsOnePair(int cards[]){ // return if the hand is a one pair
  int freq_num[13]={};
  for(int i=0;i<NUMCARDS;i++)
    freq_num[ hand_num[i] ]++;
  for(int i=0;i<13;i++)
    if(freq_num[i]==2)
      return 1;
  return 0;
}

int judge(int hand[]){
  if ( IsFourOfAKind(hand) ){
    cout<<"four of a kind"<<endl;
    return 7;
  }
  else if ( IsFullHouse(hand) ){
    cout<<"full house"<<endl;
    return 6;
  }
  else if ( IsFlush(hand) ){
    cout<<"flush"<<endl;
    return 5;
  }
  else if ( IsStraight(hand) ){
    cout<<"straight"<<endl;
    return 4;
  }
  else if ( IsThreeOfAKind(hand) ){
    cout<<"three of a kind"<<endl;
    return 3;
  }
  else if ( IsTwoPair(hand) ){
    cout<<"two pair"<<endl;
    return 2;
  }
  else if ( IsOnePair(hand) ){
    cout<<"one pair"<<endl;
    return 1;
  }
  else
    cout<<"others"<<endl;
  return 0;
}

int tripgambler()
{
  cout<<"The winding lane is leading you into Hogsmeade. You are walking around when you see a gambler sitting on the side of the road. "<<endl; //描述性话语+介绍你碰到了一个赌徒
  cout<<endl;
  cout<<"The gambler's eyes lit up when he saw you, and he pulled you and said："<<endl;
  cout<<"Hey young man, you are a Hogwarts student, right? I have a unique and factastic magic. Do you want to play a game with me? If you win, I will teach you this magic, which will help you increase your magic power. However, if you lose, you must give me something."<<endl;
  cout<<endl;
  cout<<"Attracted by the charming magic, you agree to play a game with him."<<endl;
  cout<<"He told you the game rule: "<<endl;
  cout<<"Both sides draw five cards respectively, and then you have a chance to choose how much to bet. ";
  cout<<"Finally, two sets of cards are compared to determine the winner."<<endl;
  cout<<"Please note: Four of a kind > Full house > Flush > Straight > Three of a kind > Two pairs > One pair > Others."<<endl;
  cout<<"Please enter anything to confirm that you understand the rules. "<<endl;
  string str;
  cin >> str;

  cout<<endl;
  cout<<"Now, the game begins!"<<endl;
  int hand[NUMCARDS];   // declare an array of 5 integers to store a hand
  int gambler, user;
  int bet=0;
  DealHand(hand);
  cout << "Your cards are: ";
  PrintHand(hand);

  user=judge(hand);

  cout<<endl;
  cout<<"How much you bet will decide the magic power you will earn or the credit you will lose. ";
  cout<<"Please enter the amount you want to bet (an integer larger than 0 and smaller than 5)： "<<endl;
  cin >> bet;
  cout<<endl;

  srand(time(NULL));
  for (int i=0;i<NUMCARDS;i++)
    hand[i] = rand() %52;
  cout<<"Gambler's cards are: ";
  PrintHand(hand);

  gambler=judge(hand);

  if( gambler>user ){
    cout<<"You lose! The gambler asks you to leave your cloak with House logo. "<<endl;
    cout<<"After returning to school, the dean finds out that your cloak is missing. Your house credits have been reduced by "<<bet<<"."<<endl;
    return (0-bet);
  }
  else if( gambler==user ){
    cout<<"It's a tie!"<<endl;
    cout<<"You get nothing, and keep hanging out. It's nice day. "<<endl;
  }
  else{
    cout<<"You win! Your magic power is increased by "<<bet<<"!"<<endl;
    return bet;
  }

  return 0;
}
