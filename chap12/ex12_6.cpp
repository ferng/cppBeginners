#include <iostream>
#include <cstring>

using namespace std;

template <class Type1, class Type2> void quicksort(Type1 *items, Type2 len);

template <class Type1, class Type2> void qs(Type1 *items, Type2 left, Type2 right);

int main()
{
	char str[]="jfmckldoelazlkper";

	cout << "Original order: " << str << "\n";

	quicksort(str, strlen(str));

	cout << "Sorted order: " << str << "\n";

	return 0;
}

template <class Type1, class Type2> void quicksort(Type1 *items, Type2 len)
{
	qs(items, (unsigned int)0, len-1);
}

template <class Type1, class Type2> void qs(Type1 *items, Type2 left, Type2 right)
{
	Type2 i, j;
	Type1 x, y;

	i = left;
	j = right;
	x = items[(left+right) / 2];

	do {
		while((items[i] < x) && (i < right))
			i++;
		while((x < items[j]) && (j > left))
			j--;

		if (i <= j) {
			y = items[i];
			items[i] = items[j];
			items[j] = y;
			i++;
			j--;
		}
	} while(i <= j);

	if (left < j)
		qs(items, left, j);
	if (i < right)
		qs(items, i, right);
}
