//�޸�����  
int changePassword(char s[])  
{
	int i;
	char s1[18];
	printf("����ԭ����:\n");

	for (i = 0; i < 18; i++)
	{
		if (i < 0) i = 0;
		s1[i] = getch();
		if (s1[i] == '\r')   break;
		if (s1[i] == '\b')
		{
			i -= 2;
			printf("\b \b");
			continue;
		}
		printf("*");
	}
	s1[i] = '\0';

	if (strcmp(s1, s) == 0)
	{
		printf("\n������ȷ��ԭʼ����Ϊ:\n");
		printf("%s\n", s1);
		printf("������������:\n");

		for (i = 0; i < 18; i++)
		{
			if (i < 0) i = 0;
			s1[i] = getch();
			if (s1[i] == '\r') break;
			if (s1[i] == '\b')
			{
				i -= 2;
				printf("\b \b");
				continue;
			}
			printf("*");
		}
		s1[i] = '\0';
		printf("\n\n");
		strcpy(s, s1);
	}
	else 
	{
		printf("�������!\n");
		exit(0);
	}
	return 1;
}
