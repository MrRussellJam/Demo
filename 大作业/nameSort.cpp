//��������
void nameSort(studentMessage s[],int n)
{
	studentMessage temp;
	int i, j;

	studentMessage stu[100];
	for (i = 0; i < length; i++)   stu[i] = s[i];

	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			if (strcmp(stu[j].name, stu[j + 1].name) > 0)
			{
				temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = temp;
			}
		}
	}

	if (stu[2].avegrade > 0)printf("ѧ��\t����\t�Ա�\tѧԺ\t�γ�1\t�γ�2\t�γ�3\t�γ�4\t�γ�5\t�γ�6\t�γ�7\t�γ�8\t�γ�9\t�γ�10\tƽ����\n");
	else printf("ѧ��\t����\t�Ա�\tѧԺ\t�γ�1\t�γ�2\t�γ�3\t�γ�4\t�γ�5\t�γ�6\t�γ�7\t�γ�8\t�γ�9\t�γ�10\n");

	for (i = 0; i < length; i++)
	{
		printf("%d\t%s\t%d\t%d\t", stu[i].id, stu[i].name, stu[i].sex, stu[i].college);
		for (j = 0; j < 10; j++)
		{
			printf("%d\t", stu[i].grade[j]);
		}
		if (stu[i].avegrade > 0) printf("%.2f", stu[i].avegrade);
		printf("\n");
	}

}
