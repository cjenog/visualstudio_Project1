/*
int		ft_word(char c)				// �޾ƿ� ���ڰ� ���� + �����ΰ� �ƴϸ� �ٸ� �����ΰ�? �ܾ��ǿ���̸� 1 , �ƴϸ� 0�� ��ȯ
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char* ft_strcapitalize(char* str)	//�ܾ��� ù���ڴ� �빮�� �������� �ҹ���, �ܾ��Ǳ����� ���� + ������.
{									//Ǫ�¹��, ����ó���ϱ�, �̸� �ҹ��ڷ� ���� �ٲٱ�. �ܾ��� ù������ ������, ���� ��°����� �����̸鼭 �ٷξտ����±��ڰ� �ܾ��Ұ� �ƴҶ���.
									//�ٵ� ���⼭�� �̸� �ҹ��� �ٲٱ�� ������.
	int i;

	i = 0;
	if ((str[i] >= 'a' && str[i] <= 'z') && str[i] != 0)	// ù���ڰ� �ҹ��ڸ� �빮�ڷ� �ٲ����. �̰� �ٷ����� �˻��Ҽ������Ƿ� ù���ڶ��� ���⼭�ٲ��ִ°� + ���� �ƴ��� Ȯ��
	{
		str[i] -= 32;
		i++;
	}
	while (str[i] != 0)								// ��ü�� ����
	{
		if (ft_word(str[i - 1]) == 0)				//ft_word�Լ��� �θ�  �ٷ������ڰ� ���� üũ��. �ܾ��Ҹ� 1 , �ƴϸ� 0�� ��ȯ if���ȿ� ���´ٸ� �ܾ��� ��Ұ� ���۵ȴٴ¶��̹Ƿ�
													//�ҹ��ڸ� �빮�ڷ� �ٲ��ָ��
		{
			if (str[i] >= 'a' && str[i] <= 'z')		// �ҹ��ڸ� �빮�ڷ� �ٲ�.
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')   // ���� ������ �ƴ϶�°� �ܾ��� ������ �ƴ϶�� ����. �ܾ��� ù���ڰ� �ƴϸ鼭 �빮���� �ֵ��� �ҹ��ڷ� �ٲ�.
			str[i] += 32;
		i++;
	}
	return (str);
}
*/