double my_pow(double number, int degree) {
    double answer = 1.0;
    while (degree > 0) {
        if (degree % 2 == 1) {               
            answer = answer * number;
        }
        number = number* number;
        degree = degree/2;
    }
	return answer;
}