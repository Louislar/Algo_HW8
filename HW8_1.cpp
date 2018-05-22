#include<iostream>

using namespace std;


int main()
{
    int output[8];
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
        for(int j=4;j<=6;j++)
        {
            int temp=0;
            cin>>temp;
            w[i][j]=temp;
            w[j][i]=temp;
        }

    }
    for(int i=4;i<=6;i++)
    {
        for(int j=7;j<=9;j++)
        {
            int temp=0;
            cin>>temp;
            w[i][j]=temp;
            w[j][i]=temp;
        }

    }
    for(int i=7;i<=9;i++)
    {
        int j=10;
        int temp=0;
        cin>>temp;
        w[i][j]=temp;
        w[j][i]=temp;
    }
    /*for(int i=0;i<=0;i++)
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
    }*/
    //input end
    //test input
    /*cout<<endl;
    for(int i=0;i<11;i++)
    {
        for(int j=0;j<11;j++)
            cout<<w[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;*/

    {//first time start

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
    /*int sum=0;
    for(int i=0+1;i<5;i++)
    {
        if(i!=1) cout<<endl;
        sum+=w[path[i-1]][path[i]];
        cout<<path[i]<<" "<<sum;
    }
    //output
    cout<<"\n"<<path[4]<<" "<<d[0];*/

    output[6]=path[4];
    output[7]=d[0];
    }// first time end




    //initial
    d[9]=0;
    d[8]=0;
    d[7]=0;
    for(int i=0;i<7;i++)
    {
        d[i]=100000;
        next[i]=0;
    }

    /**********************second time************/
    {
    //algorithm start



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

    int path[4];
    path[0]=0;
    path[10]=10;
    for(int i=1;i<=4;i++)
    {
        path[i]=next[path[i-1]];
    }

    // test
    /*cout<<"min cost: "<<d[0]<<endl;

    cout<<"path: \n";*/
    /*int sum=0;
    for(int i=0+1;i<5;i++)
    {
        if(i!=1) cout<<endl;
        sum+=w[path[i-1]][path[i]];
        cout<<path[i]<<" "<<sum;
    }
    //output
    cout<<"\n"<<path[3]<<" "<<d[0];*/

        output[4]=path[3];
        output[5]=d[0];
    }
    /*********************second time end********/



    //initial
    d[6]=0;
    d[5]=0;
    d[4]=0;
    for(int i=0;i<4;i++)
    {
        d[i]=100000;
        next[i]=0;
    }


    /**********************third time start****/
    {
            //algorithm start

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

    int path[3];
    path[0]=0;
    path[10]=10;
    for(int i=1;i<=3;i++)
    {
        path[i]=next[path[i-1]];
    }

    // test
    /*cout<<"min cost: "<<d[0]<<endl;

    cout<<"path: \n";*/
    /*int sum=0;
    for(int i=0+1;i<5;i++)
    {
        if(i!=1) cout<<endl;
        sum+=w[path[i-1]][path[i]];
        cout<<path[i]<<" "<<sum;
    }
    //output
    cout<<"\n"<<path[2]<<" "<<d[0];*/

        output[2]=path[2];
        output[3]=d[0];
    }
    /**********************third time end****/








        //initial
    d[3]=0;
    d[2]=0;
    d[1]=0;
    for(int i=0;i<1;i++)
    {
        d[i]=100000;
        next[i]=0;
    }






    /*********************fourth time start*******/
    {
                    //algorithm start

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

    int path[2];
    path[0]=0;
    path[10]=10;
    for(int i=1;i<=2;i++)
    {
        path[i]=next[path[i-1]];
    }

    // test
    /*cout<<"min cost: "<<d[0]<<endl;

    cout<<"path: \n";*/
    /*int sum=0;
    for(int i=0+1;i<5;i++)
    {
        if(i!=1) cout<<endl;
        sum+=w[path[i-1]][path[i]];
        cout<<path[i]<<" "<<sum;
    }
    //output
    cout<<"\n"<<path[1]<<" "<<d[0];*/

        output[0]=path[1];
        output[1]=d[0];
    }
    /*********************fourth time end******/

    cout<<output[0]<<" "<<output[1]<<endl;
    cout<<output[2]<<" "<<output[3]<<endl;
    cout<<output[4]<<" "<<output[5]<<endl;
    cout<<output[6]<<" "<<output[7];
}
