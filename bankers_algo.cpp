//Reference: Dharit Parikh

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
   int no_of_proc=0,no_of_res=0,count=0,cnt1=0,i,j,k;
	cout<<"\nEnter number of processes\n";
        cin>>no_of_proc;

       	cout<<"\nEnter number of resources\n";
        cin>>no_of_res;

int Claim_matrix[no_of_proc][no_of_res];
int Allocation_matrix[no_of_proc][no_of_res];
int Max_vector[no_of_res];
int Available_vector[no_of_res];
int mark_vector[no_of_res];
int F_seq[no_of_proc];

for(int i=0;i<no_of_res;i++)
	{
	Available_vector[i]=0;
	mark_vector[i]=0;
	}   

	cout<<"\nEnter max number of instances for each resource\n";
	for(i=0;i<no_of_res;i++)
	{
		cin>>Max_vector[i];
	}

	cout<<"\nFill in the Claim matrix\n";
	for(i=0;i<no_of_proc;i++)
        {
	   for(j=0;j<no_of_res;j++)
	   {
		cin>>Claim_matrix[i][j];
           }
	}

	cout<<"\nFill in the Allocation matrix\n";
	for(i=0;i<no_of_proc;i++)
        {
	   for(j=0;j<no_of_res;j++)
	   {
		cin>>Allocation_matrix[i][j];
           }
	}

	cout<<"\nFill in the Available vector\n";
	for(i=0;i<no_of_res;i++)
	{
		cin>>Available_vector[i];
	}
    
   int Need_matrix[no_of_proc][no_of_res];
   
     for(i=0;i<no_of_proc;i++)
	{
	  for(j=0;j<no_of_res;j++)
	  {
		Need_matrix[i][j]=Claim_matrix[i][j]-Allocation_matrix[i][j];
	  }	
	}   
	





	do
	{
	   for(k=0;k<no_of_proc;k++)
	   {
	      for(i=0;i<no_of_proc;i++)
	      {
		  if(mark_vector[i]==0)
		  {
		    count=0;
		    for(j=0;j<no_of_res;j++)
		    {
		       if(Available_vector[j]>=Need_matrix[i][j])
		        count++;
		    }
	 
		    if(count==no_of_res)
		    {
		       cnt1++;
		       mark_vector[i]=1;
		       F_seq[cnt1-1]=i;
		       for(j=0;j<no_of_res;j++)
		       {
		           Available_vector[j]=Available_vector[j]+Allocation_matrix[i][j];
		       }
		       break;
		    }
		 }
	     }
	  }

	  if(cnt1!=no_of_proc)
	  {
	     cout<<"\nIT'S AN UNSAFE STATE";
	     break;
	  }
	}while(cnt1!=no_of_proc);

	if(cnt1==no_of_proc)
	{
	   cout<<"\nIT'S A SAFE STATE";
	   cout<<"\n The safe sequence is:-\n";

	   for(i=0;i<no_of_proc;i++)
	       cout<<"\t"<<F_seq[i]<<"\t";

	   cout<<"\n";

	   cout<<"\n The available matrix is now : ";

	   for(i=0;i<no_of_res;i++)
	       cout<<"\t"<<Available_vector[i]<<"\t";
	}
}



/*



	for(i=0;i<no_of_proc;i++)
	{
	  for(j=0;j<no_of_res;j++)
	  {	
		if(Need_matrix[i][j]>Available_Vector[j])
		   {
		   flag=1;
		   break;
		  }	
          }
	
          if(flag!=0)
	  {
		mark_vector[i]=1;
		for(k=0;k<no_of_res;k++)
		{
			Available_vector[i][k]+=Allocation_matrix[i][k];
			Allocation_matrix[i][k]=0;
		}	
	  }
	  else
            flag=0;
	
          	
	}  
}*/
