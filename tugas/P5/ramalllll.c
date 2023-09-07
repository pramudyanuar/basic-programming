#include <stdio.h>

int proses(int a,int b,int c);
int selisih(int T1,int T2,int i, int j);
char prosses;
int main()

{
 int dd1,mm1,yy1,hasil1,dd2,mm2,yy2,hasil2,hari;

 do
 {
 printf("Masukkan tanggal T1 (dd/mm/yy)   : "); scanf("%d/%d/%d",&dd1,&mm1,&yy1);
 printf("Masukkan tanggal T2 (dd/mm/yy)   : "); scanf("%d/%d/%d",&dd2,&mm2,&yy2);
 if (yy1>yy2) printf("\nT2 harus lebih besar dari T1");
 } while (yy1>yy2);

 hasil1=proses(dd1,mm1,yy1);
 hasil2=proses(dd2,mm2,yy2);
 hari=selisih(hasil1,hasil2,yy1,yy2);
 printf("Selisih hari T1 dan T2 adalah    : %d hari",hari);

 getch();

}
int proses(int a,int b,int c)
{
 int d;
 if(b==1)
 d=a;
 if(b==2)
 d=31+a;
 if(b==3)
 d=59+a;
 if(b==4)
 d=90+a;
 if(b==5)
 d=120+a;
 if(b==6)
 d=151+a;
 if(b==7)
 d=181+a;
 if(b==8)
 d=212+a;
 if(b==9)
 d=243+a;
 if(b==10)
 d=273+a;
 if(b==11)
 d=304+a;
 if(b==12)
 d=334+a;
 if((b>2)&&(c%4==0)&&(c%100!=0)||(c%400==0))
 d=d+1;
 return d;
}
int selisih(int T1,int T2,int i,int j)
{
 int n,jumlah=0;
 if(i!=j)
 {
  for(n=i;n<j;n++)
  {
   jumlah = jumlah+365+(!(n%4)&&(n%100)||!(n%400));
  }
  jumlah=jumlah-T1+T2;
  return jumlah;
 }
 if(i==j)
 jumlah=T2-T1;
 return jumlah;

}
