#include<stdio.h>
 int main()
{
    int it[20],p[20],wt[20],ft[20],i,j,n,total=0,pos,temp;
    float avg_wt,avg_ft;
    printf("Enter number of interviews:\n");
    scanf("%d",&n);
  
    printf("Enter interview Time:\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&it[i]);
        p[i]=i+1;         
    }
  
   //sorting of interview times
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(it[j]<it[pos])
                pos=j;
        }
  
        temp=it[i];
        it[i]=it[pos];
        it[pos]=temp;
  
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
    for(i = 0 ; i < n ; i++)
    {
        printf("%d ",it[i]);
    }
   
    wt[0]=0;            
  
   printf("waiting times\n");
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=it[j];
            printf("%d\n",wt[i]);
  
        total+=wt[i];
    }
  
    avg_wt=(float)total/n;      
    total=0;
  
    printf("finish Time\n");
    for(i=0;i<n;i++)
    {
        ft[i]=it[i]+wt[i];
        printf("%d\n",ft[i]);
        total+=ft[i];
    }
       
  
    avg_ft=(float)total/n;    
    printf("Average Waiting Time=%f\n",avg_wt);
    printf("Average Finish Time=%f\n",avg_ft);
    return 0;
}
