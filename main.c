#include "libft.h"

int main(void)
{
  t_list *top;
  t_list *new;
  void *a;

  a = 10;

  *new = *ft_lstnew(a);
  ft_lstadd_front(&top,new);
  

}
