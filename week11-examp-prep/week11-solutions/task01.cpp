size_t findDevisorsSum(size_t number, size_t answer = 1)
{
	for (size_t i = 2; i < number; ++i)
		if (number % i == 0)
			answer += i;

	return answer;
}

bool isPerfect(size_t number)
{
	if (number < 2)
		return false;

	if (number == findDevisorsSum(number))
		return true;
	
	return 0;
}