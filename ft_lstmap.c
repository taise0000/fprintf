// /*-------------------------------------------------------------------------------------/
// | Iterates the list ’lst’ and applies the function ’f’ to the content of each element. |
// /*------------------------------------------------------------------------------------*/

// /*--------------------------------------------------------------/
// | リストを「lst」までループし、関数「f」を各要素のコンテンツに適用します。 |
// /*-------------------------------------------------------------*/

//引数1 :要素へのポインタのアドレス。
//引数2 :リストのループ時に適用される関数のアドレス。
//引数3 : 要素のcontentを削除するために使用される関数のアドレス。
//返り値 : 新しいリスト。割り当てが失敗した場合はNULL。
//使用関数 : malloc, free

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	if (!lst || !f )
		return ;

	new_lst = NULL;

	while (lst)
	{
		if (!(new_elem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_lst, del);
			return ;
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}

	return (new_lst);
}
