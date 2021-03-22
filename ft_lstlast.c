// /*--------------------------------------/
// | Returns the last element of the list. |
// /*-------------------------------------*/

// /*-------------------------/
// | リストの最後の要素を返します. |
// /*------------------------*/

//引数1 : リストの最初のリンクへのポインタ
//返り値 : リストの最後の要素
//使用関数 : 無し

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
  if (!lst)
    return (NULL);
  //末尾までの要素数を見るためにlst->nextがNULLになるまでループ
  while (lst->next)
  {
    //lst->nextがNULLでないならlstをlst->nextにセット
    lst = lst->next;
  }

  //リストの最後の要素であるlstをreturn
  return lst;
}
