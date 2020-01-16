#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string dislike = "broccoli";
    vector<string> words;
    for (string word; cin >> word;) { /* if you want end input of words, just tap ctrl+z
                                      and one thing, write one word and tap on enter*/
        if (dislike == word) {
            words.push_back("BLEEP");
        }
        else {
            words.push_back(word);
        }
    }

    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << " ";
    }
}
