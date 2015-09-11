#include <iostream>
#include "story.h"
using namespace std;

int main(){
    int rounds = 0;
    string the_story = "";

    cout << "Welcome to the three word story game.  How many rounds do you want?" << endl;
    
    cin >> rounds;
    
    for(int i = 0; i < rounds*3; ++i){
        //cout<<
        //add_to_story(the_story);
        string temp="";
        if (i%3==0){
            cout<<"Round "<<(i/3)+1<<':'<<endl;
        }
        cout<<"Enter word: ";
        cin>>temp;
        the_story.append(temp);
        the_story.append(" ");
    }
    
    cout << "Your story is:" << endl;
    cout << the_story << endl;
    return 0;
}
/*int add_to_story(string s) {
        the_story.append(s);
        return 0;
    }*/