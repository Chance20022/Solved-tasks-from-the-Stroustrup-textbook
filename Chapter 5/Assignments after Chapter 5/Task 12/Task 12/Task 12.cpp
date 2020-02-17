#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> NumbersOfProg = {2,5,3,7};
    vector<int> NumbersOfPlayer;
    int choiceOfPlayer = 0;

    for (int i = 0; NumbersOfPlayer != NumbersOfProg;) {
        cout << "Enter your number - ", cin >> choiceOfPlayer;
        cout << endl;

        if (choiceOfPlayer == NumbersOfProg[i]) {
            NumbersOfPlayer.push_back(choiceOfPlayer);
            cout << "Bull" << endl;
            i++;
        }
        else {
            cout << "Cow" << endl;
        }
    }

    cout << "You are win";

}