bool isIn(int number, int digit)
{
	if (number == 0)
		return false;

	if (number % 10 == digit)
		return true;

	return isIn(number / 10, digit);
}