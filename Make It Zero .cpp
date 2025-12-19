#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,j,k,l,t,n;
    cin>>t;
    while(t--){

        cin>>n;
        k=1;
        for(i=0;i<n;i++){ cin>>a[i]; if(a[0]!=a[i]){k=0;} }
        if(k==1){

            if(a[0]==0){ cout<<0<<"\n"; }
            else{

                   if(n%2==0){
                    cout<<"1\n1 "<<n<<"\n"; }

                    else{  cout<<"4\n1 "<<n-1<<"\n1 "<<n-1<<"\n"<<n-1<<" "<<n<<"\n"<<n-1<<" "<<n<<"\n"; }
            }


        }
        else{ if(n%2==0) { cout<<"2\n1 "<<n<<"\n1 "<<n<<"\n"; }
          else{  cout<<"4\n1 "<<n-1<<"\n1 "<<n-1<<"\n"<<n-1<<" "<<n<<"\n"<<n-1<<" "<<n<<"\n"; }

        }


    }

    return 0;
}
