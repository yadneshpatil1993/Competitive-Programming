long long int power(long long int x, long long int n, long long int d)
{
    if(n==0)return 1;
    long long int p = (power(x,n/2,d)%d+d)%d;
    if(n%2==0)return ((p*p)%d+d)%d;
    else return (((((p*p)%d+d)%d)*((x%d+d)%d))%d+d)%d;
}
