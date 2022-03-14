void printArrow(int n, int left)
{
    if(left == 0)
    {
        for(int i=0; i <n; i++)
        {
            int k = i*2;
            while(k--)
            	cout << " ";
            for(int j=n-i;j >=1;j --)
                cout <<"*";
            cout <<endl;
        }
        for(int i=n-2;i>=0;i--)
        {
            int k= i*2;
            while(k--)
                cout <<" ";
            for(int j =1; j <=n-i;j++)
                cout <<"*";
            cout <<endl;
        }
    }
    else
    {
        for(int i=n; i >0; i--)
        {
            int k = i-1;
            while(k--)
            	cout << " ";
            for(int j=i;j >=1;j --)
            	cout <<'*';
            cout <<endl;
        }
        for(int i=1;i<n;i++)
        {
            int k=i;
            while(k--)
                cout <<" ";
            for(int j=0;j<=i;j++)
                cout<<"*";
            cout<<endl;
        }
    }
}
