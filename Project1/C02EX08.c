/*
char* ft_strlowcase(char* str)  // 대문자를 소문자로 바꿔주는 함수
{
	char* charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr >= 'A' && *charptr <= 'Z')
			*charptr += 32;
		charptr++;
	}
	return (str);
}
*/