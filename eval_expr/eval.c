/*
** EPITECH PROJECT, 2018
** evalexpr
** File description:
** evalexpr function
*/

int	post_parsed_expr(char **);
char	*infix_to_postfix(char *str);

int	eval_expr(char *str)
{
	char *postfix = infix_to_postfix(str);

	return (post_parsed_expr(&postfix));
}
