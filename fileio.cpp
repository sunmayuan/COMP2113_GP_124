#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <algorithm>
using namespace std;

struct Student{
  string name;
	int magic_power;
	int house_credit;
	int day;
  string house;
};

void saving(Student s){
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

Student welcome(string name){

  string filename = name+".txt";
  ifstream fin(filename.c_str());
  Student * s = new Student;
  if (fin.fail())   // a new student
  {
    (*s).name=name;
    (*s).magic_power=0;
    (*s).house_credit=5;
    (*s).day=1;
    cout<<name<<", Welcome to Hogwarts, my dear young wizard! You must be very talent and curious! Here you will be taught brand-new magic knowledge and experience unforeseen exciting events. You will be tested, but afterwards you could win the glory for your house if you can successfully pass them. Good luck and be brave."<<endl;
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

  else      // an exsiting student
  {
    cout<<"Hey, my old friend! It is so good to see you again! Ready to continue the unfinished adventure? Don’t hesitate! Let’s unpack and start our old journey!"<<endl;
    fin >> (*s).name >> (*s).magic_power >> (*s).house_credit >> (*s).day >> (*s).house;
    fin.close();
  }

  return (*s);
}
