#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*clr;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		clr = *lst;
		*lst = (*lst)->next;
		del(clr->content);
		free(clr);
	}
}
