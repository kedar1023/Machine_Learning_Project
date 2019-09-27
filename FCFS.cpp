#include<bits/stdc++.h>
using namespace std;

int main()
{
    int bt[1000],n,ct[1000],tat[1000],wt[1000];
    cout<<"\t\t\tFirst Come First Serve"<<endl;
    cout<<"Enter the no. of process you want to insert"<<endl;
    cout<<"N=";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cout<<"Burst Time["<<i+1<<"]=";
        cin>>bt[i];
    }
    float t=0,sum=0;
    for(int i=0;i<n;i++)
    {
        t=t+bt[i];
        ct[i]=t;
        
        tat[i]=ct[i]-0;
        wt[i]=tat[i]-bt[i];
        sum+=wt[i];
    }
    cout<<"Arrival\t Burst\tCompletion\tTaT\tWaiting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<0<<"\t"<<bt[i]<<"\t"<<ct[i]<<"\t\t"<<tat[i]<<"\t"<<wt[i]<<endl;
    }
    cout<<"Average waiting time is :"<<sum/n<<endl;
    return 0;
}
