
//ѧ���ɼ���Ϣ�޸�
void changeMessage(studentMessage s[],int n)
{
	studentMessage stu[100];
	int temp;
	FILE *fp;
	int i, j;

	for (i = 0; i < length; i++)  stu[i] = s[i];

	fp = fopen("Student_Info.txt", "w");
	printf("\n*******************************************************\n");
	printf("��������Ҫ�޸ĳɼ���Ϣ��ѧ��ѧ��:");
	scanf("%d", &temp);
	if (stu[2].avegrade > 0)printf("ѧ��\t����\t�Ա�\tѧԺ\t�γ�1\t�γ�2\t�γ�3\t�γ�4\t�γ�5\t�γ�6\t�γ�7\t�γ�8\t�γ�9\t�γ�10\tƽ����\n");
	else printf("ѧ��\t����\t�Ա�\tѧԺ\t�γ�1\t�γ�2\t�γ�3\t�γ�4\t�γ�5\t�γ�6\t�γ�7\t�γ�8\t�γ�9\t�γ�10\n");
	for (i = 0; i < n; i++)
	{
		if (temp == stu[i].id)
		{
			printf("%d\t%s\t%d\t%d\t", stu[i].id, stu[i].name, stu[i].sex, stu[i].college);
			for (j = 0; j < 10; j++)
			{
				printf("%d\t", stu[i].grade[j]);
			}
			if (stu[i].avegrade > 0) printf("%.2f", stu[i].avegrade);
			break;
		}
	}
	if (i > n)
	{
		printf("\nѧ�Ŵ���\n");
		return;
	}

	printf("\n���������� 0 \n");
	while (1)
	{
		printf("��������Ҫ�ĵĿγ�:");
		scanf("%d", &temp);
		if (temp < 0 || temp>10)
		{
			printf("�������\n");
			continue;
		}
		if (temp == 0) break;

		printf("�γ� %d �ĳɼ�Ϊ %d\n", temp, stu[i].grade[temp-1]);
		printf("������ĵĳɼ�:");
		scanf("%d", &stu[i].grade[temp-1]);
	}
	int count=0;
	for (j = 0; j < 10; j++)
	{
		count += stu[i].grade[j];
	}

	stu[i].avegrade = count / 10.0;

	int a = i;
	for (i = 0; i < length; i++)
	{
		if (stu[a].id == s[i].id) s[i] = stu[a];
	}

	for (i = 0; i < n; i++)
	{
		fprintf(fp, "%d\t%s\t%d\t%d\t", stu[i].id, stu[i].name, stu[i].sex, stu[i].college);
		for (j = 0; j < 10; j++)
		{
			fprintf(fp,"%d\t", stu[i].grade[j]);
		}
		fprintf(fp, "\n");
	}

}

