#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    vector<string> disliced = { "Broccoli" };
    vector<string> words;
    for (string temp; cin >> temp;) {
        words.push_back(temp);
    }
    cout << endl;
    for (size_t i = 0; i < words.size(); ++i) {
        for (size_t z = 0; z < disliced.size(); ++z) {
            if (words[i] == disliced[z]) {
                words[i] = "BLEEP";
            }
        }
    }
    for (int i = 0; i < words.size(); ++i) {
        cout << words[i] << " ";
    }
}




	//cout << "Всего слов - " << words.size() << endl;
		//sort(words.begin(), words.end());

		//for (int i = 0; i < words.size(); i++) {
			//if (i == 0 || words[i - 1] != words[i])
			//	cout << words[i]<< endl;
		//}


