//������������ѧ��
void nameSearch(studentMessage stu[], int n)
{
	int i;
	char nameTemp[20];
	printf("\n*******************************************************\n");
	printf("��������Ҫ���ҵ�ѧ������:");
	scanf("%s", nameTemp);

	if (stu[2].avegrade > 0)printf("ѧ��\t����\t�Ա�\tѧԺ\t�γ�1\t�γ�2\t�γ�3\t�γ�4\t�γ�5\t�γ�6\t�γ�7\t�γ�8\t�γ�9\t�γ�10\tƽ����\n");
	else printf("ѧ��\t����\t�Ա�\tѧԺ\t�γ�1\t�γ�2\t�γ�3\t�γ�4\t�γ�5\t�γ�6\t�γ�7\t�γ�8\t�γ�9\t�γ�10\n");

	for (i = 0; i < n; i++)
	{
		if (strcmp(nameTemp, stu[i].name) == 0)
		{
			printf("%d\t%s\t%d\t%d\t", stu[i].id, stu[i].name, stu[i].sex, stu[i].college);
			for (int j = 0; j < 10; j++)
			{
				printf("%d\t", stu[i].grade[j]);
			}
			if (stu[i].avegrade > 0) printf("%.2f", stu[i].avegrade);
			printf("\n");
			return;
		}
	}
	printf("û������ѧ����\n");
}
