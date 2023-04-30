#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 
int main(){
    srand(time(0)); // seed the random number generator with the current time
    string questions[] = {"What is your name?", "What is your age?", "What is your favorite color?", "What is your favorite food?"};
    int numQuestion  = sizeof(questions) / sizeof(questions[0]);
    int radomIndex = rand() % numQuestion;
    

    for (int i = 0; i <numQuestion; i++)
    {
    if(questions[0] == questions[radomIndex]){
    cout<<questions[radomIndex]<<endl;
    cout<<"My name is fizza";}
    else if(questions[1] == questions[radomIndex]){
    cout<<questions[radomIndex]<<endl;
    cout<<"i am 21 years old";
    }     
    }
    
   

    return 0;

}
