#include<iostream>
using namespace std;

//task4
void myStrcat(char left[], char right[])
{
	int i = myStrlen(left), j;

	for (j = 0; right[j] != '\0'; j++)
	{
		left[i + j] = right[j];
	}
	left[i + j] = '\0';
}


//task5
void myStrcpy(char dest[], char source[])
{
	int i;
	for (i = 0; source[i] != NULL; i++)
	{
		dest[i] = source[i];
	}
	dest[i] = NULL;
}

//task6
int myStrcmp(char left[], char right[])
{
	int i;
	for (i = 0; left[i] != '\0' && right[i] != '\0'; i++)
	{
		if (left[i] < right[i])
		{
			return -1;
		}
		else if (left[i] > right[i])
		{
			return 1;
		}
	}
	if (left[i] == NULL && right[i] == NULL)
	{
		return 0;
	}
	if (left[i] == NULL)
	{
		return -1;
	}
	return 1;
}

int main(){


    return 0;
}