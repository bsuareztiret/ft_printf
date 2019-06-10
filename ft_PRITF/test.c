int		ft_printf(const char *str, ...);

int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	ft_printf("test tcastout: %.50f\n", 1.1);
	ft_printf("test tcastout: %.50f\n", 0.1);
}
