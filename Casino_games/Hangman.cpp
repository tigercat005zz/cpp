#include <iostream>
#include <string>
using namespace std;

int main () {
    string secretWord = "bruh";
    string guess;
    string answer = "";
    int wrongs;
    for (int i = 0; i < secretWord.length(); i++)
    {
        answer.append("-");   
    }
    cout << answer;
    cout << endl;
    while (answer != secretWord)
    {
        cout << "Guess a letter: " << endl;
        cin >> guess;
        int local = secretWord.find(guess);
        if (local == -1)
        {
            cout << "Wrong";
            wrongs = wrongs + 1;
            if (wrongs == 7)
            {
                cout << "You died!";
                break;
            }
        
        }
        
        else {
            answer.replace(local, 1, guess);
            cout << answer <<endl;
        }
    }
    
    
    
    

    

    return(0);
}