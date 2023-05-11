#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static del(lst)
{

}

static void    print_list_char(t_list *lst)
{
        unsigned int    i;

        i = 1;
	ft_putstr_fd("\nPrint list\n", 1);
        while (lst) // ou while (lst_is_empty(lst)) ou while (lst_is_empty(lst) == 1)
        {
                printf("content %d : %s\n", i, (char *)lst->content);
                printf("lst %d : %p\n", i, lst);
                printf("lst %d -> next : %p\n", i, lst->next);
                lst = lst->next;
                i++;
        }
	ft_putchar_fd('\n', 1);
}

int	main()
{
	t_list	*lst = NULL;
	t_list	*new_lst = NULL;
	char	*s1 = "Romain";
	t_list	*elem_2 = NULL;
	char	*s2 = "Julie";
	t_list	*elem_3 = NULL;
	char	*s3 = "Caroline";
	t_list	*elem_4 = NULL;
	char	*s4 = "Zoe";
	t_list	*elem_5 = NULL;
	char	*s5 = "Basile";

//ft_lstnew
	lst = ft_lstnew(s1);
	printf("lst_adresse : %p\n", &lst);
	elem_2 = ft_lstnew(s2);
	printf("elem2_adresse : %p\n", &elem_2);
//ft_lstadd_front
	ft_lstadd_front(&lst, elem_2);
	print_list_char(lst);
//ft_lstsize
	printf("lstsize: %d\n", ft_lstsize(lst));
	elem_3 = ft_lstnew(s3);
	elem_4 = ft_lstnew(s4);
	elem_5 = ft_lstnew(s5);
//ft_lstadd_back
	ft_lstadd_back(&lst, elem_3);
	ft_lstadd_back(&lst, elem_4);
	ft_lstadd_back(&lst, elem_5);
	print_list_char(lst);
//ft_lstsize
	printf("lstsize: %d\n", ft_lstsize(lst));
	new_lst = ft_lstmap(lst, f, del);
	printf("\nLST\n");
	print_list_char(lst);
	printf("\nNEW_LST\n");
	print_list_char(new_lst);
	return (0);
}

