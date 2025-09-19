<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main()
{
 
   int m,n,t;
   cin>>t;
   for (int j=0;j<t;j++){
   std::string a,b,c;
   cin>>m;
   cin>>a;
   cin>>n;
   cin>>b;
   cin>>c;
   char A[m],B[n],C[n];
   strcpy(A,a.c_str());
   strcpy(B,b.c_str());
   strcpy(C,c.c_str());
   for (int i=0;i<n;i++)
   {
    if (C[i]=='D')
    {
        a+=B[i];
    }
    else
    {
        a.insert(0, 1,B[i]);
    }
   }
   cout<<a<<"\n";}
   return 0;
}
=======
#include<bits/stdc++.h>
using namespace std;
int main()
{
 
   int m,n,t;
   cin>>t;
   for (int j=0;j<t;j++){
   std::string a,b,c;
   cin>>m;
   cin>>a;
   cin>>n;
   cin>>b;
   cin>>c;
   char A[m],B[n],C[n];
   strcpy(A,a.c_str());
   strcpy(B,b.c_str());
   strcpy(C,c.c_str());
   for (int i=0;i<n;i++)
   {
    if (C[i]=='D')
    {
        a+=B[i];
    }
    else
    {
        a.insert(0, 1,B[i]);
    }
   }
   cout<<a<<"\n";}
   return 0;
}
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
 