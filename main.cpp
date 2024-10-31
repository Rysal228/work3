double my_pow(double number, int degree) {
	if (degree < 0) {
		bool isNegativeDegree = 1;
	}
	if (isNegativeDegree) {
		number = 1 / number; 
		degree = -degree;      
	}
	double answer = number;
	for (int i = 0; i < degree; i++)
	{
		answer = answer * number;
	}
	return answer;
}