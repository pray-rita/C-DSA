#include<bits\stdc++.h>
using namespace std;
int main()
{   
    stack <int>s1;
	int x,y,i,num;
	char a[20];
	gets(a);
	while(a[i]!='\0')
	{
		if (a[i]>=48&&a[i]<=57)
		{
			num=a[i]-'0';
	        s1.push(num);
		}    
		else if(a[i]=='+')
		{
			x=s1.top();
		    s1.pop();
		    y=s1.top();
		    s1.pop();
		    s1.push(x+y);
		}
		else if(a[i]=='-')
		{
			x=s1.top();
		    s1.pop();
		    y=s1.top();
		    s1.pop();
		    s1.push(y-x);
		}
        else if(a[i]=='*')
        {
        	x=s1.top();
		    s1.pop();
		    y=s1.top();
		    s1.pop();
		    s1.push(x*y);
		}
		else if(a[i]=='/')
		{
			x=s1.top();
		    s1.pop();
		    y=s1.top();
		    s1.pop();
		    s1.push(y/x);
		}
		else
		{
			printf("invalid input");
		}
		i++;	
	}
	int re=s1.top();
	printf("%d",re);	
}

