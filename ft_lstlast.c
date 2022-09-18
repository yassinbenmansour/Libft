#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*copy;

	if (!lst)
		return (NULL);
	while (lst)
	{
		copy = lst;
		lst = lst->next;
	}
	return (copy);
}
