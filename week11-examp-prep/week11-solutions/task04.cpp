int getNumberHelper(char str[], int &answer)
{
	if (str[0] == '\0')
		return 0;

	if (!(str[0] >= '0' && str[0] <= '9'))
		return -1;

	answer = answer * 10 + (str[0] - '0');

	return getNumberHelper(str + 1, answer);
}

int getNumber(char str[])
{
	int answer = 0;
	if (getNumberHelper(str, answer) == -1)
		return -1;
	return answer;
}