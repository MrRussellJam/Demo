//���Դ�ļ�
int inDate(studentMessage stu[])  
{
	studentMessage number[1024];
	int i, k;
	FILE *fp;
	fp = fopen("Student_Info.txt", "r");
	if (fp == NULL)
	{
		printf("�޷����ļ���\n");
		exit(0);
	}
	
	i = 0;
	while(!feof(fp))
	{
		fscanf(fp, "%d%s%d%d", &stu[i].id, stu[i].name, &stu[i].sex, &stu[i].college);
		for (k = 0; k < 10; k++)
		{
			fscanf(fp, "%d", &stu[i].grade[k]);
		}
		i++;
	}
	printf("ѧ��\t����\t�Ա�\tѧԺ\t�γ�1\t�γ�2\t�γ�3\t�γ�4\t�γ�5\t�γ�6\t�γ�7\t�γ�8\t�γ�9\t�γ�10\n");
	for (int n = 0; n < i - 1; n++)
	{
		printf("%d\t%s\t%d\t%d\t", stu[n].id, stu[n].name, stu[n].sex, stu[n].college);
		for (k = 0; k < 10; k++)
		{
			printf("%d\t", stu[n].grade[k]);
		}
		printf("\n");
	}
	return i-1;
}
