#include<iostream>

using namespace std;

int main()
{
    for(int i=1;i<=9;i++)
    {
    	cout<<"q"<<i<<"                   = models.DecimalField(max_digits=20,decimal_places=8,null=True,blank=True)"<<endl;
    }
    for(int i=10;i<=99;i++)
    {
    	cout<<"q"<<i<<"                  = models.DecimalField(max_digits=20,decimal_places=8,null=True,blank=True)"<<endl;
    }
    for(int i=100;i<=300;i++)
    {
    	cout<<"q"<<i<<"                 = models.DecimalField(max_digits=20,decimal_places=8,null=True,blank=True)"<<endl;
    }

    return 0;

}
