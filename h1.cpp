#include<iostream>
using namespace std;

void fun1(double x)
{
    int j=0;
    int a[10000];//保存二进制整数
    int i = int(x);
    while(i)
   {
    a[j]=i%2;
    i/=2;
    j++;

   }
   for(i=j-1;i>=0;i--)
    cout<<a[i];

    cout<<endl;
}

void fun2(double x)
{
    int j=0;
    int n;
    int a[10000];//保存二进制整数
    double b[10000];//保存二进制小数
    double m = x - int(x);//获得小数
    int i = int(x);
    cout<<"请输入精度：";
    cin>>n;
    if(i!=0){
        while(i)
       {
        a[j]=i%2;
        i/=2;
        j++;

       }
       for(i=j-1;i>=0;i--)
       {
           cout<<a[i];
       }
    }
    else
    {
        a[0] = 0;
        cout<<a[0];
    }

//上面得到二进制整数



    for(int s=0; s < n; s++)
    {
        m = m*2;
        if(m>=1)
        {
            b[s] = 1;
            m = m-1;
        }
        else
        {
            b[s] = 0;
        }
    }

    cout<<".";
    for(int k = 0;k < n;k++)
    {
        cout<<b[k];
    }

}

int isn(double x)
{
    if(x-int(x) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    double n;
    int x;
    cout<<"请输入一个十进制数："<<endl;
    cin>>n;
    x = isn(n);
    if (x == 1)
    {
        fun1(n);
    }
    else
    {
        fun2(n);
    }
    return 0;
}
