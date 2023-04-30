#include<iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
void Basic();
int main()
{
    Basic();
 return 0;
}

void  Basic(){
  int answer;
  int score = 0;
  int wrong = 0;
  int recordScore;
  cout<<"You chose category one"<<endl;

  srand(time(0)); 
  string BasicQuestion[] ={"Who is the founder of C++?", "How many loops are there in c++?", "Where does static variable save in c++", "How many types of function have", "A variable name can starts with a/an zero/integer ?",""};
  cout<<endl;
  

  int Questions = sizeof(BasicQuestion) /sizeof(BasicQuestion[0]);
  

  
  for(int i = 0; i< Questions; i++){

 

  int randomIndex = rand() % Questions;

  if(BasicQuestion[0] == BasicQuestion[randomIndex] ){
  cout << BasicQuestion[randomIndex] << endl;
  cout<<endl;  
  cout<<"Your options are : "<<endl;
  cout<<"1 . Bjarne Stroustrup " <<" \t "<<"\t" << "2. Dennis M. Ritchie"<<endl<<"3 .Guido van Rossum " <<" \t "<<"\t" << "4. Brendan Eich"<<endl;
  cout<<endl;
  cout<<"Enter your answer  : ";

  cin>>answer;  
   
  if(answer == 1  ){
     cout<<"Correct Answer!"<<endl;
     score += 1;
     
  }else{
    cout<<"Correct answer is option  1 . Bjarne Stroustrup "<<endl;
    cout<<endl;
    wrong +=  1;
    cout<<wrong<<" wrong answer : "<<endl;
  }   
  }else if(BasicQuestion[1] == BasicQuestion[randomIndex] ){
    // cout<<BasicQuestion[1]<<endl;
  cout << BasicQuestion[randomIndex] << endl;
  cout<<endl; 
  cout<<"Your options are : "<<endl;
  cout<<"1 . One" <<" \t "<<"\t" << "2.Two"<<endl<<"3 . three " <<" \t "<<"\t" << "4. four"<<endl;
  cout<<endl;
  cout<<"Enter your answer  : ";

  cin>>answer;
  if(answer == 3){
     cout<<"Correct Answer!"<<endl;
     score += 1;
  }else{
    cout<<"Correct answer is option  3 . three "<<endl;  
    cout<<endl;
    wrong +=  1;
    cout<<wrong<<" wrong answer : "<<endl;
  }
  }
  else if(BasicQuestion[2] == BasicQuestion[randomIndex] ){
  cout << BasicQuestion[randomIndex] << endl;
  cout<<endl;  
  cout<<"Your options are : "<<endl;
  cout<<"1 . RAM" <<" \t "<<"\t" << "2.ROM"<<endl<<"3 . Heap " <<" \t "<<"\t" << "4. Stack"<<endl;
  cout<<endl;
  cout<<"Enter your answer  : ";

  cin>>answer;
  if(answer == 3 ){  
     cout<<"Correct Answer!"<<endl;
     score += 1;
  }else{
    cout<<"Correct answer is option  3 . Heap"<<endl;
    cout<<endl;
    wrong +=  1;
    cout<<wrong<<" wrong answer : "<<endl;
  }
  }
  else if(BasicQuestion[3] == BasicQuestion[randomIndex]){
  cout << BasicQuestion[randomIndex] << endl;
  cout<<endl; 
  cout<<"Your options are : "<<endl;
  cout<<"1 . Four" <<" \t "<<"\t" << "2. Two"<<endl<<"3 . Five " <<" \t "<<"\t" << "4. Six"<<endl;
  cout<<endl;
  cout<<"Enter your answer  : ";

  cin>>answer;
  if(answer == 1 ){  
     cout<<"Correct Answer!"<<endl;
     score += 1;
  }else{
    cout<<"Correct answer is option  1 . Four"<<endl;
    cout<<endl;
    wrong +=  1;
    cout<<wrong<<" wrong answer : "<<endl;
  }
  }
  else if(BasicQuestion[4] == BasicQuestion[randomIndex]){
  cout<<"Your options are : "<<endl;
  cout<<"1. YES" <<" \t "<<"\t" << "2. NO";
  cout<<endl;
  cout<<"Enter your answer  : ";

  cin>>answer;
  if(answer == 1 ){  
     cout<<"Correct Answer!"<<endl;
     score += 1;
  }else{
    cout<<"Correct answer is option 1. YES"<<endl;
    cout<<endl;
    wrong +=  1;
    cout<<wrong<<" wrong answer : "<<endl;
  }
  }
 
   
  }
  // if(score){ 
  // cout<<"Your total score is :  "<<score<<endl; 
  // cout<<"You got "<<wrong << " wrong answer"<<endl;
  
  // if(score== 2){
  //   cout<<"Cngratulations! You ranked 1st 🏆"<<endl;
  //   cout<<"Your total score is :  "<<score<<endl; 
  // }
  // else if(score == 1 ){
  //     cout<<"Cngratulations! You ranked 2nd "<<endl;
  //     cout<<"Your total score is :  "<<score<<endl; 
  // }
  // else{  
  //  cout<<"its okay "<<endl;
  //   }  

  // }

}