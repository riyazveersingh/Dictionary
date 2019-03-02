#include<iostream>
#include<string.h>
using namespace std;
void sort(char ** person,int n)
{
  int i,j,flag;
  char *temp;
  for(i=0;i< n-1;i++)
  {
  	flag = 1;
  	for(j=0;j<(n-1-i);j++)
  	{
  		if(strcmp(person[j], person[j+1])>0)
  		{
  			flag =0;
  			temp = person[j];
  			person[j] = person[j+1];
  			person[j+1] = temp;
		  }
	  }
	  if(flag)
	    break;
	    
  }
}
int main()
{
	int i, n=0;
	char *person[100];
	char choice;
	do
	{
		person[n] = new char[40];
		cout<<"Enter Name";
		cin>> person[n++];
		cout <<"Enter another(y/n)?";
		cin >> choice;		
	} while(choice == 'y');
	  cout<<"Unsorted list:";
	  for(i=0;i<n;i++)
	  cout <<endl <<person[i];
	  sort(person,n);
	  cout<< endl<<"sorted list:";
	  for(i=0;i<n;i++)
	  cout<<endl <<person[i];
	  for(i=0; i< n;i++)
	   delete person[i];
	   return 0;
}
	  
	
	
	
	
	
	
	
	
	
	
	

