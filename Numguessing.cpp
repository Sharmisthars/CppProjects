#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
   srand((unsigned int)time(NULL));

   int num = (rand() % 10) +1;

   int guess = 0;

   do 
   {
    cout << "We have selected a random number between 1-10. See if you can guess it \n ";
    cin>> guess;

    if(guess > num ){
        cout<< "OOPS SORRY! TRY A SMALLER NUMBER"<< '\n';
    }else if(guess <num){
         cout<< "OOPS SORRY! TRY A HIGHER NUMBER"<< '\n';
    }else{
        cout<< "CONGRATULATION YOU WON !"<<'\n';
    }
       
    
   }while (guess != num);

    return 0;
}
