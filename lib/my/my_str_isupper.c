/*
** EPITECH PROJECT, 2020
** str isupper
** File description:
** f
*/

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
            return (0);
    }
    return (1);
}
