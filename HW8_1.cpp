#include<iostream>

using namespace std;

class pSet
{
public:
    pSet(int a, int b)
    {

    }

    int p[100];
    int pLength;
};

int main()
{
    int d[11]={0};
    int next[11]={0};
    for(int i=0;i<10;i++) d[i]=100000; // 100000==inf
    int w[11][11];
    for(int i=0;i<11;i++)
        for(int j=0;j<11;j++)
            w[i][j]=0;
    //input
    for(int i=0;i<=0;i++)
    {
        for(int j=1;j<=3;j++)
        {
            int temp=0;
            cin>>temp;
            w[i][j]=temp;
            w[j][i]=temp;
        }
    }
    for(int i=1;i<=3;i++)
    {
        if(i==1||i==3){
        for(int j=6;j>=4;j--)
        {
            int temp=0;
            cin>>temp;
            w[i][j]=temp;
            w[j][i]=temp;
        }
        }
        if(i==2){
            for(int j=4;j<=6;j++)
            {
                int temp=0;
                cin>>temp;
                w[i][j]=temp;
                w[j][i]=temp;
            }
        }

    }
    for(int i=4;i<=6;i++)
    {
        if(i!=5){
        for(int j=7;j<=9;j++)
        {
            int temp=0;
            cin>>temp;
            w[i][j]=temp;
            w[j][i]=temp;
        }
        }
        if(i==5){
            for(int j=9;j>=7;j--)
            {
                int temp=0;
                cin>>temp;
                w[i][j]=temp;
                w[j][i]=temp;
            }
        }
    }
    for(int i=9;i>=7;i--)
    {
        int j=10;
        int temp=0;
        cin>>temp;
        w[i][j]=temp;
        w[j][i]=temp;
    }
    //test
    /*cout<<endl;
    for(int i=0;i<11;i++)
    {
        for(int j=0;j<11;j++)
            cout<<w[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;*/

    //algorithm start
    for(int x=7;x<=9;x++)
    {
        int y=10;
        if(d[x]>w[x][y]+d[y])
        {
            d[x]=w[x][y]+d[y];
            next[x]=y;
        }
    }

    for(int x=4;x<=6;x++)
    {
        for(int y=7;y<=9;y++)
        {
            if(d[x]>w[x][y]+d[y])
            {
                d[x]=w[x][y]+d[y];
                next[x]=y;
            }
        }
    }

    for(int x=1;x<=3;x++)
    {
        for(int y=4;y<=6;y++)
        {
            if(d[x]>w[x][y]+d[y])
            {
                d[x]=w[x][y]+d[y];
                next[x]=y;
            }
        }
    }

    for(int x=0;x<=0;x++)
    {
        for(int y=1;y<=3;y++)
        {
            if(d[x]>w[x][y]+d[y])
            {
                d[x]=w[x][y]+d[y];
                next[x]=y;
            }
        }

    }

    int path[5];
    path[0]=0;
    path[10]=10;
    for(int i=1;i<=4;i++)
    {
        path[i]=next[path[i-1]];
    }

    // test
    /*cout<<"min cost: "<<d[0]<<endl;

    cout<<"path: \n";*/
    int sum=0;
    int pre=0;
    for(int i=0+1;i<5;i++)
    {
        if(i!=1) cout<<endl;
        sum+=w[path[i-1]][path[i]];
        cout<<path[i]<<" "<<sum;
    }
}
