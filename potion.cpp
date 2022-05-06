#include <iostream>

#include "potion.h"
using namespace std;

int potion(){
  string input;
  int power=0;
  int credit=0;
  int overall=0;
  
  
    cout << " < Professor is ready to take a sudden test. > " << endl;
    cout << endl;

    cout << "Ok! Today we will have a Potion Test!" << endl;
    cout << endl;

    cout << "Please choose how long is the effect of one cup of Polyjuice Potion?" << endl;
    cout << "A. One Day B. Two Hours" << endl;
    cout << "C. One Hour D. Forever" << endl;
    cin >> input;
    cout << endl;

    if (input=="C"){
      cout << "Yes! You are correct!" << endl;
      cout << "Rememeber! Do not drink too much!" << endl;
      power+=1;
    }
    else if (input == "B"){
      cout << "No! You did not review my class! Drink less my child!" << endl;
      credit-=1;
    }
    else if (input =="A"){
      cout << "No! Didn't you read the story of secret chamber?" << endl;
      credit-=1;
    }
    else if (input == "D"){
      cout << "No! You will not want to be someone else forever!" << endl;
      credit-=1;
    }
    cout << endl;




    cout << "Please choose which potion is to cure the traumatic injury." << endl;
    cout << "A. Felix Felicis B. Polyjuice Potion" << endl;
    cout << "C. Dittany D. Skele-Grow" << endl;
    cin >> input;
    cout << endl;

    if (input=="C"){
      cout << "Yes! You are correct!" << endl;
      cout << "Rememeber! Be safe all the time!" << endl;
      power+=1;
    }
    else if (input == "B"){
      cout << "No! You did not review my class!" << endl;
      credit-=1;
    }
    else if (input =="A"){
      cout << "No! You need some luck!" << endl;
      credit-=1;
    }
    else if (input == "D"){
      cout << "No! It is not tasty!" << endl;
      credit-=1;
    }
    cout << endl;



    cout << "Please choose which potion is to get some good luck." << endl;
    cout << "A. Felix Felicis B. Polyjuice Potion" << endl;
    cout << "C. Dittany D. Skele-Grow" << endl;
    cin >> input;
    cout << endl;


    if (input=="A"){
      cout << "Yes! You are correct!" << endl;
      cout << "I hope you did not use your luck to answer that!" << endl;
      power+=1;
    }
    else if (input == "B"){
      cout << "No! You did not review my class!" << endl;
      credit-=1;
    }
    else if (input =="D"){
      cout << "No! It will be a disaster if you need this!" << endl;
      credit-=1;
    }
    else if (input == "C"){
      cout << "No! I hope you will not gonna use this potion." << endl;
      credit-=1;
    }
    cout << endl;



    cout << "Please choose which potion is to grow bones." << endl;
    cout << "A. Felix Felicis B. Polyjuice Potion" << endl;
    cout << "C. Dittany D. Skele-Grow" << endl;
    cin >> input;
    cout << endl;


    if (input=="D"){
      cout << "Yes! You are correct!" << endl;
      cout << "Rememeber! Be safe when you play Quidditch!" << endl;
      power+=1;
    }
    else if (input == "B"){
      cout << "No! You did not review my class!" << endl;
      credit-=1;
    }
    else if (input =="A"){
      cout << "No! You need some luck!" << endl;
      credit-=1;
    }
    else if (input == "C"){
      cout << "No! Wrong potion for this injury!" << endl;
      credit-=1;
    }
    cout << endl;



    overall = credit+power;
    if (overall > 0){
      cout << "You successfully gained " << overall << " magic power!" << endl;
    }
    else if (overall <0){
      cout << "You did not study well! You lost " << -overall << " house credits!" << endl;
    }
    else{
      cout << "You got nothing in the end!" << endl;
    }
    return overall;
  
}
