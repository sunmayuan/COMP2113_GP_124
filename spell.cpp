#include <iostream>
using namespace std;

int main(){
  string input;
  int power=0;
  int credit=0;
  int overall=0;

  while(input!="Exit"){
    cout << " < Professor is ready to take a sudden test. > " << endl;
    cout << endl;

    cout << "Ok! Today we will have a Spell Test!" << endl;
    cout << endl;

    cout << "Please choose which spell is the forbidden spell!" << endl;
    cout << "A. AvadaKedavra B. Reducto" << endl;
    cout << "C. Alohomora D. Lumos" << endl;
    cin >> input;
    cout << endl;

    if (input=="A"){
      cout << "Yes! You are correct!" << endl;
      cout << "Rememeber! Do not use it no matter what!" << endl;
      power+=1;
    }
    else if (input == "B"){
      cout << "No! You did not review my class! Go out and get me some stones!" << endl;
      credit-=1;
    }
    else if (input =="C"){
      cout << "No! Didn't you read the story of secret chamber?" << endl;
      credit-=1;
    }
    else if (input == "D"){
      cout << "No! You need some light my dear student!" << endl;
      credit-=1;
    }
    cout << endl;




    cout << "Please choose which spell is to open the door." << endl;
    cout << "A. AvadaKedavra B. Reducto" << endl;
    cout << "C. Alohomora D. Lumos" << endl;
    cin >> input;
    cout << endl;

    if (input=="C"){
      cout << "Yes! You are correct!" << endl;
      cout << "Rememeber! Do not use it to open my office!" << endl;
      power+=1;
    }
    else if (input == "B"){
      cout << "No! You did not review my class! Go out and get me some stones!" << endl;
      credit-=1;
    }
    else if (input =="A"){
      cout << "No! It will be a disaster if you use this spell!" << endl;
      credit-=1;
    }
    else if (input == "D"){
      cout << "No! You need some light my dear student!" << endl;
      credit-=1;
    }
    cout << endl;



    cout << "Please choose which spell is to get some light." << endl;
    cout << "A. AvadaKedavra B. Reducto" << endl;
    cout << "C. Alohomora D. Lumos" << endl;
    cin >> input;
    cout << endl;


    if (input=="D"){
      cout << "Yes! You are correct!" << endl;
      cout << "Rememeber! Use it when you are in dark!" << endl;
      power+=1;
    }
    else if (input == "B"){
      cout << "No! You did not review my class! Go out and get me some stones!" << endl;
      credit-=1;
    }
    else if (input =="A"){
      cout << "No! It will be a disaster if you use this spell!" << endl;
      credit-=1;
    }
    else if (input == "C"){
      cout << "No! You may need some keys!" << endl;
      credit-=1;
    }
    cout << endl;



    cout << "Please choose which spell is to smash objects." << endl;
    cout << "A. AvadaKedavra B. Reducto" << endl;
    cout << "C. Alohomora D. Lumos" << endl;
    cin >> input;
    cout << endl;


    if (input=="B"){
      cout << "Yes! You are correct!" << endl;
      cout << "Rememeber! Do not use it to your classmates!" << endl;
      power+=1;
    }
    else if (input == "C"){
      cout << "No! You did not review my class! You need some keys!" << endl;
      credit-=1;
    }
    else if (input =="A"){
      cout << "No! It will be a disaster if you use this spell!" << endl;
      credit-=1;
    }
    else if (input == "D"){
      cout << "No! You need some light my dear student!" << endl;
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
    input = "Exit";
    return overall;
  }
}
