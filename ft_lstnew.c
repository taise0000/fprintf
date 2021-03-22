
// Allocates (with malloc(3)) and returns a new element.
// The variable ’content’ is initialized with the value of the parameter ’content’.
// The variable ’next’ is initialized to NULL.


// malloc関数で構造体1つ分のメモリを確保し、新しい要素としてリスト構造に繋げる。
// その構造体の変数contentは引数contentで初期化する.
// その構造体の変数nextはNULLに初期化する。


//引数 : 新しい要素を作成するための変数「content」
//返り値 : 新しい要素
//使用関数 : malloc

#include "libft.h"

t_list *ft_lstnew(void *content)
{

  //新しい要素を示す構造体変数を定義
  t_list *newNode;

  //メモリの確保
  if ((newNode = (t_list *)malloc(sizeof(t_list))) == NULL)
  {
    //メモリを確保出来なかった場合プログラムを終了
    printf("malloc error\n");
    return 0;
  }

  //変数「content」はパラメーター「content」の値で初期化。
  newNode->content = content;

  //変数「next」はNULLに初期化
  newNode->next = NULL;

  //処理を行ったnewNodeをreturn
  return newNode;
}
