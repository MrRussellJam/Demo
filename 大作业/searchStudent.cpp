//���ѧԺѧ��
void searchStudet(studentMessage stu[], int n)
{
	FILE *fp;
	char ch;
	int num;
	int i;
	fp = fopen("C_Info.txt", "r");
	ch = fgetc(fp);
	while (!feof(fp))
	{
		putchar(ch);
		ch = fgetc(fp);
	}
	printf("\n******************************************************\n");
	printf("��������Ҫ������ѧԺѧ��:");
	scanf("%d", &num);

	if (stu[2].avegrade > 0)printf("ѧ��\t����\t�Ա�\tѧԺ\t�γ�1\t�γ�2\t�γ�3\t�γ�4\t�γ�5\t�γ�6\t�γ�7\t�γ�8\t�γ�9\t�γ�10\tƽ����\n");
	else printf("ѧ��\t����\t�Ա�\tѧԺ\t�γ�1\t�γ�2\t�γ�3\t�γ�4\t�γ�5\t�γ�6\t�γ�7\t�γ�8\t�γ�9\t�γ�10\n");

	for (i = 0; i < n; i++)
	{
		if (stu[i].college == num)
		{
			printf("%d\t%s\t%d\t%d\t", stu[i].id, stu[i].name, stu[i].sex, stu[i].college);
			for (int k = 0; k < 10; k++)
			{
				printf("%d\t", stu[i].grade[k]);
			}
			if (stu[i].avegrade > 0) printf("%.2f", stu[i].avegrade);
			printf("\n");
		}
	}
}
