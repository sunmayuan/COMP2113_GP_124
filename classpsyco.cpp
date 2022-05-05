#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int classpsyco(){
    cout<<"Today we are going to have a mind reading class."<<endl;
    cout<<"This class teaches wizards how to know the thoughts of Death Eaters and win. In this lesson, we will practice simple mind reading skills through a guessing game."<<endl;

    cout<<"Game Rule:"<<endl;
    cout<<"A random integer between 1 and 100 will be generated. You have five chances of guessing. Every time you guess wrong, the system will tell you the relationship between your answer and the correct answer. Then you can guess again. "<<endl;
    cout<<"Please input anything to start the game."<<endl;
    string str;
    cin>>str;

    cout<<endl;
    cout<<"Now it begins."<<endl;
    int answer;
    srand(time(NULL));
    answer=rand()%100+1;

    int x;
    for(int i=5;i>=1;--i)
    {

      cout<<"You have "<<i<<" more chances. "<<endl;
      cout<<"Please enter your answer: ";
      cin>>x;

      if(x==answer){
        cout<<"Congratulations! You are right! "<<endl;
        if(i>2){
          cout<<"Your magic power is increased by 2!"<<endl;
          return 2;
        }
        else{
          cout<<"Your magic power is increased by 1!"<<endl;
          return 1;
        }
      }

      else if(x<answer)
        cout<<"You are wrong. The correct answer is larger than "<<x<<"."<<endl;

      else
        cout<<"You are wrong. The correct answer is smaller than "<<x<<"."<<endl;

    }

    cout<<"Sorry, you didn't pass the game. The correct answer is: "<<answer<<". You need more practice!"<<endl;
    return 0;
}
