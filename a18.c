int arms(int);
void main()
{
int i,o,p=0,n,q,a;
scanf("%d %d",&n,&q);
if(n<=0||q<=0)
{
printf("Invalid");
exit(1);
}
for(o=n+1;o<q;o++)
{
 i=arms(o);
 if(i==1)
 {
 p++;
 if(p>1)
 printf(" %d",o);
 else
 printf("%d",o);
 }
}
}
int arms(int x)
{
  int t=0,t1,s,n=0,t2;
  s=x;
  while (s != 0)
    {
	s /= 10;
	++n;
    }
    s=x;
  while(s!=0)
  {
	t1= s%10;
	t += pow(t1, n);
	s /= 10;
  }
  if(x==t)
  return 1;
  else
  return 0;
}
