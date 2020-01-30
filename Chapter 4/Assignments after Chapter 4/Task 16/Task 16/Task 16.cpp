#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbRandom = { 2,51,51,26,367,262,74,57,24,24,51,24,52,51,67,24,24,24,24,24,24,24,24,24,242,49,45,51 }; 
	vector<int> repetNum;
	int counter = 0;
	int counterOFIndex = 0;
	int max = 0;

	for (int i = 0; i < numbRandom.size(); i++) {
		for (int z = 0; z < numbRandom.size(); z++) {
			if (numbRandom[i] == numbRandom[z]) {
				counter++; // Счётчик повторяющегося элемента
				numbRandom.erase(numbRandom.begin() + z); //удаление повторяющегося элемента
			}
			if (max < counter) {
				max = counter;
				counterOFIndex = numbRandom[i];
			}

		}
		counter = counter - counter;

	}

	cout << "Largest repeating number is - " << counterOFIndex << ", repeated " << max << " times" << endl;
}