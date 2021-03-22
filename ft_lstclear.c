// /*---------------------------------------------------------------------------------------------------------------/
// | Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3). |
// | Finally, the pointer to the list must be set to NULL.                                                          |
// /*--------------------------------------------------------------------------------------------------------------*/

// /*-----------------------------------------------------------------------------------/
// | 変数「del」とfree関数を使用して、指定された要素とその要素より後ろの要素を全て削除して解放します。 |
// | 最後に、リストへのポインタをNULLに設定する必要があります。                                  |
// /*----------------------------------------------------------------------------------*/

//引数1 : 要素へのポインタのアドレス。
//引数2 : 要素のcontentを削除するために使用される関数のアドレス。
//返り値 : 無し
//使用関数 : free

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
  //代入するための構造体変数old_elmを宣言
  t_list *old_elem;

  //関数delが空の場合は終了
  if (!del)
    return;

  //lstが空になるまでループ
  while (*lst)
  {
    //del関数で現在地の要素を削除
    del((*lst)->content);
    //old_elmに要素を削除したlstを代入
    old_elem = *lst;
    //lstはold_elmのnextをセット
    *lst = old_elem->next;
    //old_elmをfree関数で解放
    free(old_elem);
  }
  //リストへのポインタをNULLに設定
  *lst = NULL;
}
