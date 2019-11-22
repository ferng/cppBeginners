#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int i, j;
	int nums[] = { 1, 2, 2, 2, 3, 4, 5, 6, 9, 0};		//ints must be sorted

	cout << "This are the dups we found:\n";

	for (i = 0; i < 10; i++) {
		for (j = i+1; j < 10; j++) {
			if (nums[i] == nums[j]){
				cout << nums[j] << ", ";
				i++;
			}
		}
	}

	cout << "\n";

	return 0;
}			
