/*
** EPITECH PROJECT, 2018
** Infinadd
** File description:
** libmy.a prototypes plus some others
*/

#ifndef MY_H_
#define MY_H_
void	my_putchar(char);
int	my_isneg(int);
int	my_put_nbr(int);
void	my_swap(int *, int *);
int	my_putstr(char const *);
int	my_strlen(char const *);
int	my_getnbr(char const *);
void	my_sort_in_array(int *, int);
int	my_compute_power_rec(int, int);
int	my_compute_square_root(int);
int	my_is_prime(int);
int	my_find_prime_sup(int);
char	*my_strcpy(char *, char const *);
char	*my_strncpy(char *, char const *, int);
char	*my_revstr(char *);
char	*my_strstr(char *, char const *);
int	my_strcmp(char const *, char const *);
int	my_strncmp(char const *, char const *, int);
char	*my_strupcase(char *);
char	*my_strlowcase(char *);
char	*my_strcapitalize(char *);
int	my_str_isalpha(char const *);
int	my_str_isnum(char const *);
int	my_str_islower(char const *);
int	my_isupper(char const *);
int	my_isprintable(char const *);
int	my_showstr(char const *);
int	my_showmem(char const *);
char	*my_strcat(char *, char const *);
char	*m_strncat(char *, char const *, int);
int	sub_pow(int, int, int);
int	sub_square(int, int);
char	*get_remove_sign(char const *, int *);
int	strlen_nbr(const char *);
int	sub_is_prime(int, int);
int	get_int_size(int);
int	tenth_pow(int);
int	my_writeline(char const *str);
int	my_str_isprintable(char const *);
int	my_str_isupper(char const *str);
int	*my_strncat(char *, char const *, int);
int	my_show_word_array(char * const *);
int	get_size_tab(char * const *);
char	**my_str_to_word_array(char const *str);
char	*get_word(char const *str, int, int);
char	**set_array(char const *);
int	is_alphanumeric(char);
#endif
