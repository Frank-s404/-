#include<iostream>
using namespace std;

void fun1(double x)
{
    int j=0;
    int a[10000];//�������������
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
    int a[10000];//�������������
    double b[10000];//���������С��
    double m = x - int(x);//���С��
    int i = int(x);
    cout<<"�����뾫�ȣ�";
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

//����õ�����������



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
    cout<<"������һ��ʮ��������"<<endl;
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
