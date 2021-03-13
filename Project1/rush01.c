/*
#include <stdio.h>
#include <io.h>

//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�boite_legale.c�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�

int	is_line_legal(int ligne, int* consigne, int tab[4][4])
{
	int i;
	int boites_en_vue;

	boites_en_vue = 1;
	i = 0;
	while (i < 4)
	{
		if (tab[ligne][i] > tab[ligne][0])
			boites_en_vue++;
		i++;
	}
	if (boites_en_vue != *consigne)
		return (0);
	boites_en_vue = 1;
	i = 0;
	while (i < 4)
	{
		if (tab[ligne][i] > tab[ligne][3])
			boites_en_vue++;
		i++;
	}
	if (boites_en_vue != *(consigne + 4))
		return (0);
	return (1);
}

int	is_col_legal(int col, int* consigne, int tab[4][4])
{
	int i;
	int boites_en_vue;

	boites_en_vue = 1;
	i = 0;
	while (i < 4)
	{
		if (tab[i][col] > tab[0][col])
			boites_en_vue++;
		i++;
	}
	if (boites_en_vue != *consigne)
		return (0);
	boites_en_vue = 1;
	i = 0;
	while (i < 4)
	{
		if (tab[i][col] > tab[3][col])
			boites_en_vue++;
		i++;
	}
	if (boites_en_vue != *(consigne + 4))
		return (0);
	return (1);
}

int	boite_legale(int box, int tab[4][4], int coord[2], int* consignes)
{
	int i;

	i = 0;
	while (i++ < coord[0])
	{
		if (tab[i - 1][coord[1]] == box)
			return (0);
	}
	i = 0;
	while (i++ < coord[1])
	{
		if (tab[coord[0]][i - 1] == box)
			return (0);
	}
	if (coord[0] == 3)
	{
		if (!(is_line_legal(coord[0], &consignes[8 + coord[0]], tab)))
			return (0);
	}
	if (coord[1] == 3)
	{
		if (!(is_col_legal(coord[1], &consignes[coord[1]], tab)))
			return (0);
	}
	return (1);
}

//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�boite_legale.c�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�

//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�maketab�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�

int		boite_legale(int box, int tab[4][4], int coord[2], int* consignes);

void	ft_putchar(char c)
{
	_write(1, &c, 1);
}

void	print_tab(int tab[4][4])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < 4)
	{
		while (i < 4)
		{
			ft_putchar((char)(tab[i][j] + '0'));
			i++;
		}
		_write(1, "\n", 1);
		j++;
	}
}

void	trouver_emplact_vide(int* coord, int tab[4][4])
{
	int i;
	int j;

	*coord = 42;
	i = 0;
	j = 0;
	while (j++ < 4)
	{
		while (i++ < 4)
		{
			if (tab[j - 1][i - 1] == 0)
			{
				*coord = j - 1;
				*(coord + 1) = i - 1;
				return;
			}
		}
	}
}

int		disposition(int tab[4][4], int* consignes)
{
	int coord[2];
	int boite_testee;

	trouver_emplact_vide(&coord[0], tab);
	if (coord[0] == 42)
		return (1);
	boite_testee = 0;
	while (boite_testee++ < 4)
	{
		if (boite_legale(boite_testee, tab, coord, consignes) == 1)
		{
			tab[coord[0]][coord[1]] = boite_testee;
			if (disposition(tab, consignes) == 1)
				return (1);
		}
	}
	return (0);
}

void	maketab(int* consignes)
{
	int tableau[4][4];
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			tableau[i][j] = 0;
			j++;
		}
		i++;
	}
	if (disposition(tableau, consignes))
		print_tab(tableau);
	else
		_write(1, "Error\n", 6);
}
//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�maketab�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�



 // �ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�main.c�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
void	set_consignes(char* argument, int* consignes, int* j)
{
	while (*argument && *j < 16)
	{
		if ((*argument >= '1' && *argument <= '4')
			&& (*(argument + 1) == ' ' || *(argument + 1) == 0))
		{
			consignes[*j] = ((int)(*argument - '0'));
			*j = *j + 1;
			argument++;
		}
		if (*argument == ' ')
		{
			argument++;
		}
		else if (*argument != 0)
		{
			return;
		}
	}
}

//int		main(int argc, char** argv)
int main()
{
	int argc = 2;
	char **argv = {
	{1, 2, 3, 4},
	{1, 2, 3, 4},
	{1, 2, 3, 4},
	{1, 2, 3, 4}
	};

//	char** argv = { 1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4 };
	char ch_ptr[4][4] = {
		{1,2,3,4},
		{1,2,3,4},
		{1,2,3,4},
		{1,2,3,4}
	};
	char** argv = ch_ptr;

	int consignes[16];
	int j;

	j = 0;
	if (argc == 2)
	{
		set_consignes(argv[1], &consignes[0], &j);
		(j == 16) ? maketab(consignes) : _write(1, "Error\n", 6);
	}
	else
	{
		_write(1, "Error\n", 6);

	}
	return (0);
}
// �ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�main.c�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
*/