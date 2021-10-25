#include <stdio.h>

int main()
{
	int x,j,k;
	float arr[9][4];
	int maths=0,phy=0,chem=0,eng=0,urdu=0;
	int rmaths=0,rphy=0,rchem=0,reng=0,rurdu=0;
	int sum[9];
	int low;
	int rlow;
	
	for(x=0;x<=1;x++)
	{
	printf("Enter Maths marks for roll no %d  ", x+1);
	scanf("%f", &arr[x][0]);
	printf("Enter Physics marks for roll no %d  ", x+1);
	scanf("%f", &arr[x][1]);
	printf("Enter Chem marks for roll no %d  ", x+1);
	scanf("%f", &arr[x][2]);
	printf("Enter English marks for roll no %d  ", x+1);
	scanf("%f", &arr[x][3]);
	printf("Enter Urdu marks for roll no %d  ", x+1);
	scanf("%f", &arr[x][4]);	
	} 
	
	phy = arr[x][1];
	for (j=0;j<=9;j++)
	{
		if(phy>arr[j][1])
		{
		phy = arr[j][1];
		rphy = j+1;
		}
	}
		maths = arr[x][0];
	for (j=0;j<=9;j++)
	{
		if(maths>arr[j][0])
		{
		maths = arr[j][0];
		rmaths = j+1;
		}
	}
		chem = arr[x][2];
	for (j=0;j<=9;j++)
	{
		if(chem>arr[j][2])
		{
		chem = arr[j][2];
		rchem = j+1;
		}
	}
		eng = arr[x][3];
	for (j=0;j<=9;j++)
	{
		if(eng>arr[j][3])
		{
		eng = arr[j][3];
		reng = j+1;
		}
	}
		urdu = arr[x][4];
	for (j=0;j<=9;j++)
	{
		if(urdu>arr[j][4])
		{
		urdu = arr[j][4];
		rurdu = j+1;
		}
	}
	
	printf("lowest marks in maths are %d\n",rmaths);
	printf("lowest marks in physics are %d\n",rphy);
	printf("lowest marks in chemistry are %d\n",rchem);
	printf("lowest marks in urdu are %d\n",rurdu);
	printf("lowest marks in english are %d\n",reng);
	
	for(x=0;x<=9;x++)
	{
		for(j=0;j<=9;j++)
		{
		sum[x]=arr[x][j];
		}
	}
	printf("%d", sum[x]);

	low = sum[0];
	for (x=0;x<=9;x++)
	{
	if(sum[x]>low)
	{
		low = sum[x];
		rlow = x+1;
	}
	}
	printf("The student with the lowest marks is %d", rlow);
	
}
