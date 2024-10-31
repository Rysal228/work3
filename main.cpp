double my_pow(double number, int degree) {
	answer = number;
	for (int i = 0; i < degree; i++)
	{
		answer = answer * number;
	}
	return answer;
}