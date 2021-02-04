/*1 so bt ve mang 1 chieu VA mang 2 chieu
1_SX day so tang dan(bubble soft)
2_Tim so lon thu 2 cua mang_____theo pp_SX day so tang( selection soft)
3_Tim so lon t2 cua mang
4_Them ptu vao mang 1 chieu
5_xoa ptu cua mang 1 chieu
6_in cac so duong co trong mang
7_sap xep cac hang trong ma tran
8_tim so nho nhat cua tung cot trong mang 2c
9_xoa dong k trong ma tran
10 _ktra ma tran doi xung
11_mtran chuyen vi
12_nhan 2mtran
*/
#include<stdio.h> 
void nhap_mang1c( int a[10], int n)
{
	for(int i=1; i<=n;i++)
	{
		printf("a[%d]=",i); scanf("%d", &a[i]);
	}
}
void hienthi_mang1c( int a[10], int n)
{
    printf("\n");
	for(int i=1; i<=n;i++)
	{
		printf("%d\t", a[i]);
	}
}
void nhap_mang2c( int a[][20], int m, int n)
{
	for( int i=1; i<=m; i++)
	{
		for(int j=1; j<=n; j++)
		{
			printf("a[%d][%d]=", i, j); scanf("%d",&a[i][j]);
		}
	}
}
hienthi_mang2c(int a[20][20], int m, int n)
{
	for( int i=1; i<=m; i++)
	{
		for(int j=1; j<=n; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
}
}
void ham_1(int a[10], int n)
// SX noi bot_Bubble sorf//
{
	int m,i;
	for( i=1;i<=n;i++)              //duyet tu ptu 1//
	{
		for(int  j=i+1;j<=n;j++)         //Ptu tiep theo//
		{
			if( a[i]>a[j])              // so sanh 2 ptu voi nhau//        VD: 4>3
			{
				m=a[i];                 //gan m cho a[i] neu a[i]>a[j]         m=4(m coi nhu bien nho tam)
				a[i]=a[j];              //a[i] luc nay dc thay the boi a[j]    
				a[j]=m;                 // va gan a[j] =m( a[i] luc dau//      -->3   4
			}
		}
	}
	
}
void ham_2( int a[10], int n)
//SX chon_selection soft
{
	int m;
	for(int i=1; i<=n; i++)                
	{
	    int min=i;                            //min=ptu dau tien chua sap xep
		for( int j=i+1; j<=n;j++)           //duyet cac ptu chua dc duyet-->het de tim min//
		{
			if(a[j]<a[min])                   // so sanh//
			{
				m=a[min];
				a[i]=a[j];
				a[j]=m;
			}
		}
	}
	printf("%d", a[n-1]);       // in a[] vi tri n-1 dc so lon thu 2
}
int ham_3(int a[10], int n)
//Tim so lon thu 2 cua mang//
{
	int max1=a[1], max2=a[2];
	//vd dãy : 2  3  4  5
	if(max1<max2)          //2<3 true---> max1=3; max2=2//
	{
		max1=a[2];
		max2=a[1];
	}
	for(int i=3;i<=n;i++)
	{
		if(a[i]>max1)      //4>3 true ---> max1=4; max2=3
		{
			max2=max1;
			max1=a[i];
		}
		else                    //Vd dãy 2   4   3   5 -->max1=4; max2=2
		{
			if(a[i]>max2&& a[i]<max1)         //3>2&&3<4--> max2=3//
			{
			max2=a[i];
		    }
		}
	}
	return max2;
}
void ham_4(int a[10], int n)
{
	int k,m;
	printf("\nNhap so can them:"); scanf("%d",&k);
	printf("\nNHap vi tri muon t hem:"); scanf("%d",&m);
	if(n==10)
	{
		printf("Xin loi, mang da full");
	}
	else
	{
		for(int i=n;i>0;i--)        
		{
			a[i+1]=a[i];         //duyet tu cuoi day, keo a[] ve sau 1 dv
		}
		a[m]=k;
	}
}
void ham_5(int a[10], int n)
{
	int k;
	printf("\nNHap vi tri muon xoa:"); scanf("%d",&k);
	for(int i=k+1;i<=n;i++)
	{
		a[i-1]=a[i];
	}
}
void ham_6(int a[10], int n)
{
	printf("day so duong la:");
	for(int i=1;i<=n;i++)
	{
		if(a[i]>=0)
		{
				printf("%d\n",a[i]);
	    }
	}
}
void ham_7(int a[][20], int m, int n)
{
	int k=1,t;
	while(k<=m)
	{
		for(int i=1;i<=n;i++)
		{
		for( int j=i+1;j<=n;j++)
		{
			if(a[k][i]>a[k][j])
			{
			t=a[k][i];
		    a[k][i]	=a[k][j];
		    a[k][j]=t;
		    }
		}
	    }
		k++;
	}
}
void ham_8( int a[][20], int n, int m)
{ 
	int min;
    min=a[1][1];
    int j=1;
    while(j<=m)
	{
	    min=a[1][j];
		for( int i=1; i<=n; i++ )
		{
			
			if( a[i][j]<min)
			{
				min=a[i][j];
		    }	
		}
		printf("\nmin cot thu %d la: %d",j, min);
		j++;
		}
}
void ham_9(int a[][20], int m, int n)
{
	int k;
	printf("\nNhap dong can xoa:"); scanf("%d",&k);
	for(int i=k;i<=m;i++ )
	{
		for(int j=1;j<=m;j++)
	{
		a[i][j]=a[i+1][j];
	}
    }
}
void ham_10(int a[][20], int n)
{
	int k;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[1][1]==a[i][i]& a[i][j]==a[j][i])
			{
				k=1;
			}
			else
			{
				k=0;
			}
		}
	}
	if(k==1)
	{
		printf("TRUE_La ma tran doi xung");
	}
	else
	{
		printf("Khong phai ma tra n doi xung");
	}	
}
void ham_11(int a[][20], int m, int n)
{
	int b[20][20];
	for( int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			b[i][j]=a[j][i];
		}
	}
	printf("Ma tran chuyen vi:\n");
	hienthi_mang2c(b,n,m);
}
void ham_12(int a[][20], int m, int n, int b[][20], int k)
{
	int c[20][20];
	for(int i=1;i<=m;i++)
	{
		for(int j=1; j<=k;j++)
		{
			for(int h=1;h<=n;h++)
			{
				c[i][j]+=a[i][h]*b[h][j];
			}
		}
	}
	hienthi_mang2c(c,m,k);
}
int main()
{
	int a[10], b[20][20],c[20][20];
	int a1, b1,b2,c1,c2;
	int d;
	printf("\nMenu: \n1_SX day so tang dan(bubble soft)\n2_Tim so lon thu 2 cua mang_____theo pp_SX day so tang( selection soft)\n3_Tim so lon t2 cua mang\n4_Them ptu vao mang 1 chieu\n5_xoa ptu cua mang 1 chieu\n6_in cac so duong co trong mang\n7_sap xep cac hang trong ma tran\n8_tim so nho nhat cua tung cot trong mang 2c\n9_xoa dong k trong ma tran\n10 _ktra ma tran doi xung\n11_mtran chuyen vi\n12_nhan 2mtran:");
	printf("\nChon:"); scanf("%d", &d);
	switch(d)
	{
		case 1:
			{
			    printf("\nNhap so ptu cua mang 1 chieu:"); scanf("%d", &a1);
				nhap_mang1c(a, a1);
				ham_1(a, a1);
				printf("\nMang da sap xep:");
				hienthi_mang1c(a, a1);
				break;
			}
		case 2:
			{
				printf("\nNhap so ptu cua mang 1 chieu:"); scanf("%d", &a1);
				nhap_mang1c(a, a1);hienthi_mang1c(a, a1);
				printf("\nSo lon thu 2 cua mang la:");
				ham_2(a, a1);
				break;
			}
		case 3:
			{
				printf("\nNhap so ptu cua mang 1 chieu:"); scanf("%d", &a1);
				nhap_mang1c(a, a1);
				hienthi_mang1c(a, a1);
				printf("\nSo lon thu 2 la:%d", ham_3(a,a1));
				break;
			}
		
		case 4:
			{
				printf("\nNhap so ptu cua mang 1 chieu:"); scanf("%d", &a1);
				nhap_mang1c(a, a1);
				hienthi_mang1c(a, a1);
				printf("\nMang da duoc them:\n");
				ham_4(a,a1);
				hienthi_mang1c(a, a1+1);
				break;
			}
		case 5:
			{
			printf("\nNhap so ptu cua mang 1 chieu:"); scanf("%d", &a1);
				nhap_mang1c(a, a1);
				hienthi_mang1c(a, a1);
				ham_5(a,a1);
				hienthi_mang1c(a, a1-1);
				break;
			}
		case 6:
			{
				printf("\nNhap so ptu cua mang 1 chieu:"); scanf("%d", &a1);
				nhap_mang1c(a, a1);
				hienthi_mang1c(a, a1);
				ham_6(a,a1);
				break;
			}
		case 7:
			{
				printf("\nNhap so dong:"); scanf("%d",&b1);
	            printf("\nNhap so cot:"); scanf("%d",&b2);
	            nhap_mang2c(b,b1,b2);
	            hienthi_mang2c(b,b1,b2);
	            printf("\nMnag da sap xep:\n");
	            ham_7(b,b1,b2);
				hienthi_mang2c(b,b1,b2);
				break;
			}
		case 8:
		{
				printf("\nNhap so dong:"); scanf("%d",&b1);
	            printf("\nNhap so cot:"); scanf("%d",&b2);
	            nhap_mang2c(b,b1,b2);
	            hienthi_mang2c(b,b1,b2);
	            ham_8(b,b1,b2);
	            break;
		}
		case 9:
			{
				printf("\nNhap so dong:"); scanf("%d",&b1);
	            printf("\nNhap so cot:"); scanf("%d",&b2);
	            nhap_mang2c(b,b1,b2);
	            hienthi_mang2c(b,b1,b2);
	            ham_9(b,b1,b2);
				hienthi_mang2c(b,b1-1,b2);
			}
		case 10:
			{
				printf("\nNhap so dong:"); scanf("%d",&b1);
				printf("\nNhap so cot:"); scanf("%d",&b2);
				if(b1==b2)
				{
				nhap_mang2c(b,b1,b2);
	            hienthi_mang2c(b,b1,b2);
				ham_10(b,b1);
				}
				else
				{
					printf("\nNhap lai, nhap b1=b2 de ktra mtran doi xung");
				}
			}
		case 11:
			{
				printf("\nNhap so dong:"); scanf("%d",&b1);
	            printf("\nNhap so cot:"); scanf("%d",&b2);
	            nhap_mang2c(b,b1,b2);
	            hienthi_mang2c(b,b1,b2);
	            ham_11(b,b1,b2);
			}
		case 12:
			{
				printf("\nNhap so dong:"); scanf("%d",&b1);
	            printf("\nNhap so cot:"); scanf("%d",&b2);
	            printf("\nNhap so dong:"); scanf("%d",&c1);
	            printf("\nNhap so cot:"); scanf("%d",&c2);
	            if( b2==c1)
	            {
	            nhap_mang2c(b,b1,b2);printf("Mang1:\n");
				hienthi_mang2c(b,b1,b2);
	            nhap_mang2c(c,c1,c2);printf("Mang2:\n");
				hienthi_mang2c(c,c1,c2);
				printf("Tich 2 mang:\n");
	            ham_12( b, b1, b2, c, c2);
			    }
			else
			{
				printf("\nNhap lai sao cho so cot mtran 1= so dong mtran 2");
			}
}
}
}
//Nguyen Thi Hong Hanh//
