#include <iostream>
#include "story.h"
using namespace std;

int main(){
    int rounds = 0;
    string the_story = "";

    cout << "Welcome to the three word story game.  How many rounds do you want?" << endl;
    
    cin >> rounds;
    int add_to_story(String s){
        the_story.append(s);
    }
    for(int i = 0; i < rounds; i++){
        add_to_story(the_story);
    }
    
    cout << "Your story is:" << endl;
    cout << the_story << endl;
    return 0;
}