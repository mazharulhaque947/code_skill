// Sereja and Dima.cpp

    #include<stdio.h>
    int main()
    {

        int i,j,k,l,m,n,o,a[1020],s,d;
        scanf("%d",&n);
        for(i=0;i<n;i++){

            scanf("%d",&a[i]);
        }
        o=0;
        m=n;
        s=0;
        d=0;
        for(i=0;i<n;i++){

          if(a[o]>a[m-1]){k=a[o]; o=o+1; }
           else{ k=a[m-1]; m=m-1;}
            if(i%2==0){s=s+k;}
            else{ d=d+k;}
        }

        printf("%d %d",s,d);
        return 0;
    }
