static void	test_striteri_1(unsigned int i, char *c)
{
	*c -= i;
}

void		test_striteri()
{
	void	(*f)(unsigned int, char*);
	char	ptr[20] = "bonjour";

	f = &test_striteri_1;
	ft_striteri(ptr, f);
	ft_putstr_fd("TEST STRITERI : ", 1);
	if (!ft_strncmp(ptr, "bnlgkpl", 20))
		ft_putendl_fd("ok :)", 1);
	else
		ft_putendl_fd("not ok :(", 1);
}
