t_list	*ft_lstnew(void *content)
{
	t_list	*newl;

	newl = malloc(sizeof(t_list));
	if (newl == NULL)
		return (NULL);
	(*newl).content = content;
	(*newl).next = NULL;
	return (newl);
}
