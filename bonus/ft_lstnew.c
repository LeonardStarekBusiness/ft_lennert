t_list	*ft_lstnew(void *content)
{
	t_list	newl;

	newl = malloc(sizeof(t_list));
	ft_memcpy(newl.content, content, sizeof(content));
	newl.next = &newl + sizeof(content);
	return (newl);
}
