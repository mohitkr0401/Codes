#include <iostream>
#include <string.h>

using namespace std;


class concatenate {
public:
	
	char object1[25], object2[25];

	
	concatenate(char str1[], char str2[])
	{
		
		strcpy(this->object1, str1);
		strcpy(this->object2, str2);
	}

	
	void operator+()
	{
		cout << "\nConcatenation: " << strcat(object1, object2);
	}
};

int main()
{
	
	char str1[] = "shezad ";
	char str2[] = "program";

	
	concatenate a1(str1, str2);

	
	+a1;
	return 0;
}
