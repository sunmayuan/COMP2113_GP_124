#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

#include "dragon.h"
using namespace std;

int dragon(){
  cout << " < You are travelling around the Hogworts Castle. > " << endl;
  cout << " Woow! Watch out! There is a fire dragon!" << endl;
  cout << " Calm Down! We need to fight it! " << endl;
  cout << endl;

  cout<<"You only know the probable HP of that dragon is around 5-7," << endl;
  cout << "but you will get help from the ghosts three times"<<endl;
  cout<<endl;

  cout<<"Harry can kill 1 HP"<<endl;
  cout<<"Snape can kill 2 HP"<<endl;
  cout<<"Dumbledore can kill 3 HP"<<endl;
  cout << endl;

  cout<<"It depends on your courage and your good luck!"<<endl;
  cout<<"You will get their help ramdomly and you initial power is 0."<<endl;
  cout << endl;

  cout << "Now Here we go!"<<endl;
  cout << endl;
  cout << endl;


  int hp=0;
  int power=0;
  string imput;

  srand(time(NULL));
  hp=rand()%7+5;



  for (int i=0; i<3; i++){
    cout << "Please input <get power> !"<<endl;
    cout << endl;
    cin >> imput;

    int temp=0;

    srand(time(NULL));
    temp = rand()%3+1;

    if (temp==1){
      cout << "You get Harry Potter's Help!" << endl;
      cout << endl;

      power += temp;
      cout << "Your power is " << power << " right now!" << endl;
      cout << endl;

      temp=0;
      cin >> imput;
    }

    else if (temp==2){
      cout << "You get Snape's Help!" << endl;
      cout << endl;

      power += temp;
      cout << "Your power is " << power << " right now!" << endl;
      cout << endl;

      temp=0;
      cin >> imput;
    }

    else if (temp==3){
      cout << "You get Dumbledore's Help!" << endl;
      cout << endl;

      power += temp;
      cout << "Your power is " << power << " right now!" << endl;
      cout << endl;

      temp=0;
      cin >> imput;
    }
  }

  if(power>hp){
    cout << "You successfully beat the dragon!" << endl;
    cout << endl;

    cout << "You earned 2 magic power!" << endl;
    cout << endl;

    return 2;
  }
  else if (power < hp){
    cout << "Unfortunately, you do not have enough ability! You lost!" << endl;
    cout << endl;

    cout << "You lost 2 credits!" << endl;
    cout << endl;

    return -2;
  }
  else{
    cout << "It is a draw!" << endl;
    cout << endl;

    cout << "However, you are brave enough!" << endl;
    cout << endl;

    cout << "You earned 1 magic power!" << endl;
    cout << endl;

    return 1;
  }
}
