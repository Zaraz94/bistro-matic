/*
** EPITECH PROJECT, 2018
** evalexpr
** File description:
** simple doop
*/

int	is_op(char c)
{
	if (c == '+' || c == '-' || c == '/' || c == '%' || c == '*') {
		return (1);
	}
	return (0);
}

int	operator_cmp(char op1, char op2)
{
	if (op2 == '(')
		return 1;
	if (op1 == '+' || op1 == '-') {
		if (op2 == '+' || op2 == '-')
			return (0);
		return (-1);
	}
	if (op1 == '*' || op1 == '/' || op1 == '%') {
		if (op2 == '+' || op2 == '-')
			return (1);
		return (0);
	}
	return (42);
}

int	do_op(char op, int a, int b)
{
	if (op == '+')
		return (a + b);
	if (op == '-')
		return (a - b);
	if (op == '*')
		return (a * b);
	if (op == '/') {
		if (b == 0)
			return (0);
		return (a / b);
	}
	if (op == '%') {
		if (b == 0)
			return (0);
		return (a % b);
	}
	else
		return (0);
}
