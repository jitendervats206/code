// MAX AND MIN IN AN ARRAY

// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//   int arr[]={45,9,3,1,7,95,3,984,156};
//   int x=INT_MIN;
//   int y=INT_MAX;

//    for(int i=0;i<sizeof(arr)/4;i++){              
//      if(arr[i]>x)
//       x=arr[i];
//      else if(arr[i]<y)
//       y=arr[i];
//     }

//     cout<<"MAXIMUM : "<<x<<endl;
//     cout<<"MINIMUM : "<<y<<endl;
// }



// REVERSING AN ARRAY BY SWAPPING

// #include<iostream>
// using namespace std;
// int main()
// {
//   int arr[]={9,3,1,7,95,3,984,156};

//    for(int i=0,j=(sizeof(arr)/4)-1;i<(sizeof(arr)/4)/2;i++,j--)             
//     swap(arr[i],arr[j]); 
//    for(int i=0;i<(sizeof(arr)/4);i++)
//     cout<<arr[i]<<" ";
// }



//MAXIMUM SUBARRY SUM   (BRUTE FORCE APPROACH)
                                                                                                      
// #include<iostream>
// using namespace std;
// int main()
// {
//   int arr[]={-2,1,-3,4,-1,2,1,-5,4};
//   int s=0,sum=0,x=0;

//    for(int i=0;i<(sizeof(arr)/4);i++){   
//     sum=0;         
//      for(int j=i;j<(sizeof(arr)/4);j++){
//       s=sum+arr[j];
//       sum=s;
//       x=max(x,sum);
//      }
//     }

//     cout<<"MAXIMUM IS : "<<x<<endl;
// }

//MAXIMUM SUBARRY SUM (KADANE APPROACH)
                                                                                                      
// #include<iostream>
// using namespace std;
// int main()
// {
//   int arr[]={-2,1,-3,4,-1,2,1,-5,4};
//   int sum=0,mx=arr[0];

//    for(int i=0;i<(sizeof(arr)/4);i++){   
//      sum=sum+arr[i];
//      mx=max(sum,mx);
//      if(sum<0)
//      sum=0;        
//     }
//     cout<<"MAXIMUM IS: "<<mx<<endl;
// }



//DUPLICATE ARRAY  (BRUTE FORCE APPROACH)    

// #include<iostream>
// using namespace std;
// int main()
// {
//   int arr[]={4,3,2,7,2,3,1};

//    for(int i=0;i<(sizeof(arr)/4);i++) 
//     for(int j=i+1;j<(sizeof(arr)/4);j++){
//       if(arr[i]==arr[j])
//        cout<<arr[j]<<" ";
//     }    
// }


//DUPLICATE ARRAY  (without extra space)    

// #include<iostream>
// using namespace std;
// int main()
// {
//   int arr[]={2,3,1,2,3};
//   int x;

//    for(int i=0;i<(sizeof(arr)/4);i++){
//      x=(abs(arr[i])-1);                                 
//     if(arr[x]>=0)
//      arr[x]=arr[x]*-1;
//     else
//      cout<<abs(arr[i])<<" ";  
//    }   
// }


//CHOCLATE PROBLEM

// #include<iostream>
// #include<vector>
// #include<climits>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   vector<int>arr={3,4,1,9,56,7,9,12};
//   int x=5,diff=INT_MAX;

//    //1,3,4,7,9,9,12,56
//    sort(arr.begin(),arr.end());
//    for(int i=0;i<=(arr.size())-x;i++)
//      diff=min(diff,arr[i+(x-1)]-arr[i]); 
   
//    cout<<diff; 
// }



//SEARCH IN ROTATED SORTED ARRRAY USING BINARY SEARCH

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {               //0,1,2,3,4,5,6,7,8,9,10
//   vector<int>arr={3,4,5,6,7,0,1,2};
//   bool flag=false;
//   int target=7,st=0,ed=arr.size()-1,mid;
//   while(st<=ed){
//     mid=(st+ed)/2;
//     if(target==arr[mid]){
//      cout<<mid;
//      flag=true;
//      break;
//     }
//     if(arr[st]<arr[mid]){
//       if(target>=arr[st] and target<=arr[mid])
//        ed=mid-1;
//       else
//        st=mid+1;
//     }
//     else{
//       if(target>=arr[st] and target<=arr[ed])
//         st=mid+1;
//       else
//         ed=mid-1;
//     }
//   }  
//   if(flag==false)
//    cout<<-1;

// }



//BEST TIME TO BUY AND SELL STOCK

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={7,15,5,3,6,4};
//     int b=arr[0],s=0;
//     for(int i=1;i<sizeof(arr)/4;i++){
//      s=max(s,arr[i]-b);
//      b=min(b,arr[i]);
//     }

//     cout<<s;
// }



//REPEATING AND MISSING IN ARRAY

// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>arr={4,3,2,1,2,3,6};

//     cout<<"repeating :";
//     for(int i=0;i<arr.size();i++){
//       int x=abs(arr[i])-1;
//       if(arr[x]<0)
//        cout<<abs(arr[i])<<" ";
//       else
//        arr[x]=arr[x]*-1;
//     }

//     cout<<endl<<"missing :";
//     for(int i=0;i<arr.size();i++)
//      if(arr[i]>0)
//       cout<<i+1<<" ";

// }



//K SMALLEST AND LARGEST NO. 

// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>arr={6,8,2,10,5,7,4,3};
//     int k=3;
//     priority_queue<int,vector<int>,greater<int>>mn;
//     priority_queue<int>mx;

//     for(int i=0;i<k;i++){
//      mn.push(arr[i]);
//      mx.push(arr[i]);
//     }

//     for(int i=k;i<arr.size();i++){
//      if(arr[i]>mn.top()){
//       mn.pop();
//       mn.push(arr[i]);
//      }
//      else if(arr[i]<mx.top()){
//       mx.pop();
//       mx.push(arr[i]);
//      }
//     }
    
//     cout<<"max : "<<mn.top()<<endl;
//     cout<<"min : "<<mx.top();

// }



//TOTAL RAIN WATER COLLECTION

// #include<iostream>
// using namespace std;
// int main()
// {           
//     int arr[]={4,2,0,6,2,5,2,3};
//     int x=0,y=0,w=0,m;
    
//     for(int i=0;i<sizeof(arr)/4;i++)
//      if(arr[i]>arr[y])
//       y=i;
     
//     for(int i=0;i<=y;i++){
//       m=min(x,arr[y]);
//       if(m>arr[i])
//        w=w+(m-arr[i]);
//       x=max(x,arr[i]);
//     }
//     x=y;
//     y=0;
//     for(int i=(sizeof(arr)/4)-1;i>x;i--){
//       m=min(arr[x],y);
//       if(m>arr[i])
//        w=w+(m-arr[i]);
//       y=max(y,arr[i]);
//     }
//     cout<<w;

// }



// MAXIMUM PRODUCT SUBARRAY

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>arr={2,3,-4,5,3,0,5,6};
//     int product=1,mx=arr[0];

//     for(int i=0;i<arr.size();i++){
//       product=product*arr[i];
//       mx=max(product,mx);
//       if(arr[i]<=0)
//        product=1;
//     }
//    cout<<mx;
// }



//PRODUCT OF ARRAY EXCEPT SELF (without division)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={3,6,1,5,4};
//     int l[sizeof(arr)/4];
//     int r[sizeof(arr)/4];
    
//     for(int i=0;i<sizeof(arr)/4;i++){
//       if(i==0)
//        l[i]=1;
//       else
//        l[i]=arr[i-1]*l[i-1];
//     }

//     for(int i=(sizeof(arr)/4)-1;i>=0;i--){
//       if(i==(sizeof(arr)/4)-1)
//        r[i]=1;
//       else
//        r[i]=arr[i+1]*r[i+1];
//     }

//     cout<<"array except self :";
//     for(int i=0;i<sizeof(arr)/4;i++)
//      cout<<l[i]*r[i]<<" ";

// }



//PRODUCT OF ARRAY EXCEPT SELF (optimal)

//#include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//   int arr[]={1,2,3,4};
//   vector<int>v(sizeof(arr)/4,1);
//   int r=1;
  
//   for(int i=1;i<v.size();i++)
//     v[i]=v[i-1]*arr[i-1];
  
//   for(int i=v.size()-2;i>=0;i--){
//     r=r*arr[i+1];
//     v[i]=v[i]*r;
//   }
   
//   for(int i=0;i<v.size();i++)
//    cout<<v[i]<<" ";
  
// }



//MINIMUM IN ROTATED SORTED ARRAY

// #include<iostream>
// #include<climits>
// using namespace std; //////////
// int main()
// {
//     int arr[]={3,6,1,5,4};
//     int min=INT_MAX;

//     for(int i=0;i<sizeof(arr)/4;i++)
//       if(arr[i]<min)
//        min=arr[i];
    
//     cout<<min;
    
// }



//2 SUM

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={0,1,4,8,10,45};
//     int start=0,end=(sizeof(arr)/4)-1;
//     int s=11;

//      while(start<end){
//       if(arr[start]+arr[end]>s)
//        end--;
//       else if(arr[start]+arr[end]<s)
//        start++;
//       else{
//        cout<<arr[start]<<","<<arr[end];
//        break;}
//      }
// }



//3 SUM

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,4,6,8,10,45};
//     int start,end,s;
//     int target=24;

//     for(int i=0;i<(sizeof(arr)/4)-2;i++){
//      start=i++;
//      end=(sizeof(arr)/4)-1;
//      s=target-arr[i];

//      while(start<end){
//       if(arr[start]+arr[end]>s)
//        end--;
//       else if(arr[start]+arr[end]<s)
//        start++;
//       else{
//        cout<<arr[i]<<","<<arr[start]<<","<<arr[end];
//        break;}
//      }
    
//     }

// }



//CONTAINER WITH MOST WATER

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[]={1,8,6,2,5,4,8,3,7};
//     int w=(sizeof(arr)/4)-1;
//     int s=0,e=(sizeof(arr)/4)-1;
//     int mx=0;

//     while(s<e){
//      mx=max(mx,min(arr[s],arr[e])*w);
//      if(arr[s]<arr[e])
//       s++;
//      else
//       e--; 
//      w--;
//     }
//     cout<<mx;
// }



//MERGE INTERVALS

// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<vector<int>> arr={{1,3},{2,6},{8,10},{8,9},{9,11},{15,18},{2,4},{16,17}};
//     sort(arr.begin(),arr.end());

//      //{1,3, 2,4 ,2,6 ,8,9, 8,10 ,9,11 ,15,18, 16,17}
//      int x=arr[0][0];
//      int y=arr[0][1];

//      for(int i=1;i<arr.size();i++){
//       if(arr[i][0]<=y and arr[i][1]>y)
//         y=arr[i][1];
//       else{
//         cout<<"["<<x<<","<<y<<"] ";
//         x=arr[i][0];
//         y=arr[i][1];
//       }
//      }
// }



//MIN ZERO SUM SUBARRYS (O(n^2))

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>v={6,4,-5,1,8,3,2,-10,-4,0,4,-9};
//     vector<int>v1;
//     int total=0,sum=0,min=0;

//     for(int i=0;i<v.size();i++){
//      for(int j=i;j<v.size();j++){
//       v1.push_back(v[j]);
//       sum=sum+v[j];
//       if(sum==0){
//         total++;
//         if(v1.size()<min)
//         min=v1.size();
//         if(min==0)
//         min=v1.size(); 
//         for(int k=0;k<v1.size();k++)
//          cout<<v1[k]<<" ";
//         cout<<endl;
//       }
//      }
//     v1.clear();
//     sum=0;
//     }
//     cout<<"total : "<<total<<endl<<"min : "<<min;
// }


//ZERO SUM SUBARRYS   O(n)

// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>v={6,-1,-3,4,-2,2,4,6,-12,-7};
//     unordered_map<int,int>m;
//     int total=0,sum=0;

//     for(int i=0;i<v.size();i++){
//       sum=sum+v[i];
//      if(sum==0)
//       total++;
//      if(m[sum]>0){
//       total=total+m[sum];
//       m[sum]++;
//      }
//      else
//       m[sum]=1;
//     }
//     cout<<total;
// }



// SUBARRAY SUM GIVEN k

// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>v={2,1,7,-4,2,1,3,4,-15,2,-3,6};
//     unordered_map<int,int>m;
//     int total=0,sum=0,k=6;

//     for(int i=0;i<v.size();i++){
//       sum=sum+v[i];
//       if(sum==k)
//        total++;
//       if(m[sum-k]>0){
//        total++;
//        m[sum]++;
//       }
//       else  
//        m[sum]=1;
//     }
//     cout<<total; 
// }



// SUBSTRING WITH NON REPEATING CHARCTERS

// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<char>v={'a','b','c','d','e','c','b','e','a','d','f'};
//     unordered_map<int,int>m;
//     int mx=0,x=0,start=0,end=0;

//      while(end<v.size()){
//       if(m[v[end]]>0){
//        if(v[start]==v[end])
//        m[v[end]]=0;
//        m[v[start]]=0;
//        start++;
//        x--;
//       }
//       else{
//        m[v[end]]=1;
//        x++;
//        end++;
//        mx=max(x,mx);  
//       }    
//     }
//     cout<<mx;   
// }



//MINIMUM DISTINCT SUBARRAY

// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
// #include<climits>
// using namespace std;
// int main()
// {
//     vector<char>v={'a','a','b','b','b','c','b','b','a','c'};
//     unordered_map<int,int>m;
//     unordered_map<int,int>c;
//     int mn=INT_MAX,x=0,start=0,end=0,c1=0,l=0;

//     for(int i=0;i<v.size();i++){
//       if(c[v[i]]>0);
//       else{ 
//        c1++;
//        c[v[i]]=1;
//       }
//     }

//     while(end<=v.size()){
//       if(x!=c1){
//        if(m[v[end]]>0){
//         m[v[end]]++;
//         l++;
//         end++;
//        }
//        else{
//         m[v[end]]=1;
//         x++;
//         l++;
//         end++;
//        }
//       }
//       else if(x==c1){
//        m[v[start]]--;
//        if(m[v[start]]==0)
//         x--;
//        start++;
//        mn=min(l,mn);
//        l--;
//       }  
//     }
//    cout<<mn;
// }



// SUBARRAY PRODUCT LESS THAN K    O(N^2)

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>v={2,5,10,8,100,1000,5,15};
//     vector<int>v1;
//     int total=0,sum=1;

//     for(int i=0;i<v.size();i++){
//       sum=sum*v[i];
//       v1.push_back(v[i]);
//       if(sum<999)
//       for(int k=0;k<v1.size();k++)
//         cout<<v1[k]<<" ";
//         cout<<endl;
//      for(int j=i+1;j<v.size();j++){
//       sum=sum*v[j];
//       if(sum<999){
//         total++;
//         v1.push_back(v[j]);
//         for(int k=0;k<v1.size();k++)
//          cout<<v1[k]<<" ";
//         cout<<endl;
//       }
//       else 
//        break;
//      }
//     v1.clear();
//     sum=1;
//     }
//     cout<<"total :"<<total<<endl;
// }



//SUBARRAYS PRODUCT LESS THAN K  O(n)

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>v={2,5,10,8,100,1000,5,15};
//     int total=0,pro=1,start=0,end=0,l=0,k=999;

//      while(end<v.size()){
//       if(pro<k)
//        pro=pro*v[end];
//       if(pro<k){
//        l++;
//        total=total+l;
//        end++;
//       }
//       else{
//         pro=pro/v[start];
//         l--;
//         start++;
//         if(pro<k){
//          l++;
//          total=total+l;
//          end++;
//         }
//       }        
//     }
//     cout<<"total : "<<total<<endl;
// }



//MINIMUM SUBARRAY SUM GREATOR THAN K

// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main()
// {
//     vector<int>v={1,5,45,7,10,19};
//     int mn=INT_MAX,sum=0,start=0,end=0,k=51,l=0;

//      while(end<v.size()){
//       if(sum<=k){
//        sum=sum+v[end];
//        end++;
//        l++;
//       }
//       else if(sum>k){
//        mn=min(mn,l);
//        sum=sum-v[start];
//        start++;
//        l--;
//       }
//      }
//     cout<<"min : "<<mn<<endl;
// }



// MAX SUBARRAY WITH ATMOST K TIMES EACH ELEMENT  O(N)

// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
// #include<climits>
// using namespace std;
// int main()
// {
//     vector<int>v={1,2,3,1,2,3,3,4,1,2};
//     unordered_map<int,int>m;
//     int mx=INT_MIN,x=0,start=0,end=0,l=0,k=2,u;
//     bool flag=false;

//     while(start<=end){
//       if(m[v[end]]<k and end!=v.size() and flag==false){
//         if(m[v[end]]==0)
//         x++;
//        u=x;
//        m[v[end]]++;
//        l++;
//        end++;
//       }
//       else if(start!=end){
//        mx=max(mx,l);
//        if(m[v[start]]==0)
//         x--;
//        if(m[v[end]]==k)
//         u--;
//        m[v[start]]--;
//        start++;
//        l--;
//        flag=true;
//        if(u==0)
//         flag=false;
//       }
//       else
//        break;
//     }

//     cout<<mx;  

// }



// SORT 0,1 AND 2 WITHOUT SORT ALGO

// #include<iostream>
// using namespace std;
// int main()
// {
//   int arr[]={1,1,2,0,0,1,2,2,1,2};
//   int low=0,mid=0,high=(sizeof(arr)/4)-1;

//    for(int i=0;i<(sizeof(arr)/4);i++){
//     if(arr[mid]==0){
//      swap(arr[low],arr[mid]);
//      low++;
//      mid++;
//     }
//     else if(arr[mid]==1)
//      mid++;
//     else if(arr[mid]==2){
//      swap(arr[mid],arr[high]);
//      high--;
//     }
//    }

//    for(int i=0;i<(sizeof(arr)/4);i++)
//     cout<<arr[i]<<" ";

// }



//SORT BINARY ARRAYS WITHOUT ALGO

// #include<iostream>
// using namespace std;
// int main()
// {
//   int arr[]={1,1,0,0,1,1,0};
//   int low=0,high=(sizeof(arr)/4)-1;

//   while(low<high){
//     if(arr[low]==1){
//      swap(arr[low],arr[high]);
//      high--;
//     }
//     else if(arr[low]==0)
//      low++;
    
//   }

//   for(int i=0;i<(sizeof(arr)/4);i++)
//    cout<<arr[i]<<" ";

// }



//MOVE ALL NEGATIVE ELEMENT ASIDE USING 3 POINTER

// #include<iostream>
// using namespace std;
// int main()
// {
//   int arr[]={-12,11,-13,-5,6,-7,5};
//   int low=0,mid=0,high=(sizeof(arr)/4)-1;

//    while(mid<high){
//     if(arr[mid]<0 and low==mid){
//      low++;
//      mid++;
//     }
//     else if(arr[mid]>0 and arr[high]<0){
//      swap(arr[mid],arr[high]);
//      high--;
//      mid++;
//      low++;
//     }
//     else if(arr[mid]>0 and arr[high]>0){
//      mid++;
//     }
//     else if(arr[mid]<0 and arr[high]>0 and arr[low]>0){
//      swap(arr[mid],arr[low]);
//      mid++;
//      low++;
//     }
//     else
//      break;
//    }

//    for(int i=0;i<(sizeof(arr)/4);i++)
//     cout<<arr[i]<<" ";

// }



//MOVING ALL NEGATIVE ELEMENT ASIDE USING 2 POINTER

// #include<iostream>
// using namespace std;
// int main()
// {
//   int arr[]={-12,11,-13,-5,6,-7,5};
//   int low=0,high=(sizeof(arr)/4)-1;

//   while(low<high){
//     if(arr[low]>0){
//      swap(arr[low],arr[high]);
//      high--;
//     }
//     else if(arr[low]<0)
//      low++;
    
//   }

//   for(int i=0;i<(sizeof(arr)/4);i++)
//    cout<<arr[i]<<" ";

// }



//UNION AND INTERSECTION OF SORTED REPEATED ELEMENTS

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a,b,arr[]={1,1,2,3,4,21},brr[]={1,2,2,3,4,11,21};
//     unordered_map<int,int>m;
//     unordered_map<int,int>m1;
//     int c=max(sizeof(arr)/4,sizeof(brr)/4);
//     int start=0,end=0;

//     cout<<"union : ";
//     while(start<sizeof(arr)/4 or end<sizeof(brr)/4){
//      if(arr[start]<brr[end] and start<sizeof(arr)/4 and end<sizeof(brr)/4 and m[arr[start]]==0){
//       cout<<arr[start]<<" ";
//       m[arr[start]]++;
//       start++;}
//      else if(arr[start]<brr[end] and start<sizeof(arr)/4 and end<sizeof(brr)/4 and m[arr[start]]>0)
//      start++;
//      else if(arr[start]>brr[end] and start<sizeof(arr)/4 and end<sizeof(brr)/4 and m[brr[end]]==0){
//       cout<<brr[end]<<" ";
//       m[brr[end]]++;
//       end++;}
//      else if(arr[start]>brr[end] and start<sizeof(arr)/4 and end<sizeof(brr)/4 and m[brr[end]]>0)
//       end++;
//      else if(arr[start]<brr[end] and start<sizeof(arr)/4 and end<sizeof(brr)/4 and m[brr[end]]>0)
//       end++;
//      else if(arr[start]==brr[end] and start<sizeof(arr)/4 and end<sizeof(brr)/4 and m[brr[end]]==0 and m[arr[start]]==0){
//       cout<<brr[end]<<" ";
//       m[brr[end]]++;
//       m[arr[start]]++;
//       m1[brr[end]]++;
//       m1[arr[start]]++;
//       end++;
//       start++;}
//      else if(arr[start]==brr[end] and start<sizeof(arr)/4 and end<sizeof(brr)/4 and m[brr[end]]>0 and m[arr[start]]>0){
//       start++;
//       end++;
//      }
//      else if(end>=sizeof(brr)/4){
//       cout<<arr[start]<<" ";
//       m[arr[start]]++;
//       start++;
//      }
//      else if(start>=sizeof(arr)/4){
//       cout<<brr[end]<<" ";
//       m[brr[end]]++;
//       end++;
//      }
//      else
//       break;
//     }

//    cout<<endl<<"intersection : ";
//    for(int i=0;i<c;i++){
//     if(sizeof(arr)/4<sizeof(brr)/4)
//      if(m1[brr[i]]>0 and brr[i]!=brr[i-1])
//     cout<<brr[i]<<" ";
//     else if((sizeof(arr)/4>sizeof(brr)/4))
//      if(m1[arr[i]]>0 and arr[i]!=arr[i-1])
//     cout<<arr[i]<<" ";
//    }

// }     




//CYCLIC ROTAION OF ARRAY K TIMES (ANTI-CLOCKWISE)

// #include<iostream>
// using namespace std;

// int main()
// {
//   int arr[]={1,2,3,4,5,6,7,8,9,10};
//   int x,k=3;

//   for(int i=0;i<k;i++){
//    x=arr[(sizeof(arr)/4)-1];
//    for(int j=(sizeof(arr)/4)-1;j>=0;j--){
//     if(j==0)
//      arr[j]=x;
//     else
//      arr[j]=arr[j-1];
//    }
//   }

//   for(int i=0;i<sizeof(arr)/4;i++)
//    cout<<arr[i]<<" ";

// }



//LARGEST PRODUCT OF CONTIGOUS SUBARRAY

// #include<iostream>
// using namespace std;

// int main()
// {
//   int arr[]={-2,1,-3,4,2,-2,1,-5,4};
//   int pro=1,mx=arr[0];

//   for(int i=0;i<sizeof(arr)/4;i++){
//    pro=pro*arr[i];
//    mx=max(pro,mx);
//    if(pro<0)
//     pro=1;
    
//   }
//   cout<<mx;
// }



//MINIMUM STEPS TO REACH END OF ARRAY

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//   vector<int>v={1,3,5,8,9,2,6,7,6,8,9};
//   int jump=0,mx=0,x,l;
//   int i=0;   

//   while(i<v.size()){
//     jump++;
//     x=0;
//     mx=0;
//     int j=i+1;
//     while(x<v[i]){
//       x++; 
//       if(v[j]>=mx){
//         mx=v[j];
//         l=j;
//       }
//       j++;
//     }
//     i=l;
//     if(i>=v.size()-1)
//      break;
  
//   }
//   cout<<jump;

// }




//MERGE TWO SORTED ARRAYS WITHOUT EXTRA SPACE

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int arr1[]={1,3,5,7};
//   int arr2[]={0,2,6,8,9};
//   int start=(sizeof(arr1)/4)-1;
//   int end=0;

//   while(start>=0 and end<sizeof(arr2)/4){
//     if(arr1[start]>arr2[end]){
//       swap(arr1[start],arr2[end]);
//       start--;
//       end++;
//     }
//     else 
//      break;
     
//   }
   
//   sort(arr1,arr1+sizeof(arr1)/4);
//   sort(arr2,arr2+sizeof(arr2)/4);

//   for(int i=0;i<sizeof(arr1)/4;i++)
//    cout<<arr1[i]<<" ";
//    cout<<endl;

//   for(int j=0;j<sizeof(arr2)/4;j++)
//    cout<<arr2[j]<<" ";

// }



// COUNT INVERSION WITHOUT MERGE SORT

// #include<iostream>
// using namespace std;
// int main()
// {
//   int arr[]={3,5,6,9,1,2,7,8};
//   int inversion=0;

//   for(int i=0;i<sizeof(arr)/4;i++)
//     for(int j=0;j<i;j++)
//      if(arr[j]>arr[i]){
//       cout<<"["<<arr[j]<<","<<arr[i]<<"]";
//       inversion++;
//       cout<<",";
//     }
//   cout<<endl<<"inversion : "<<inversion;

// }



//REARRANGE ALTERNATE +VES AND -VES

// #include<iostream>
// using namespace std;
// int main()
// {
//    int arr[]={3,1,-2,-5,2,-4};
//    for(int i=0;i<sizeof(arr)/4;i++){
//      if(i%2==0 and arr[i]<0)
//       for(int j=i+1;j<sizeof(arr)/4;j++){
//        if(arr[j]>0){
//        swap(arr[i],arr[j]);
//        break;}
//       }
//      else if(i%2!=0 and arr[i]>0)
//       for(int j=i+1;j<sizeof(arr)/4;j++){
//        if(arr[j]<0){
//        swap(arr[i],arr[j]);
//        break;}
//       }
//     }

//   for(int i=0;i<sizeof(arr)/4;i++)
//     cout<<arr[i]<<" ";
  
// }



//LONGEST CONSECUTIVE SUBARRAY  

// #include<iostream>
// #include<bits/stdc++.h>
// #include<climits>
// using namespace std;

// int main()
// {
//   int arr[]={1,9,3,10,4,20,2};
//   int x=INT_MAX,s=INT_MIN,l=0,r=1;
//   unordered_map<int,int>m;
  
//   for(int i=0;i<sizeof(arr)/4;i++)
//    m[arr[i]]++;
  
//   for(int i=0;i<sizeof(arr)/4;i++){
//     if(m[arr[i]-1]==0){
//       x=arr[i]+1;
//       while(m[x]>0){
//         r++;
//         x++;
//       }
//       l=max(l,r);
//       r=1;
//     }
   
//   }
//   cout<<l;

// }




//WHETHER AN ARRAY IS SUBSET OF ANOTHER ARRAY

// #include<iostream>
// #include<bits/stdc++.h>
// #include<climits>
// using namespace std;

// int main()
// {
//   int arr[]={1,9,3,40,4,20,2};
//   int arr1[]={1,2,40};
//   unordered_map<int,int>m;

//   for(int i=0;i<sizeof(arr)/4;i++)
//    m[arr[i]]++;
  
//   for(int i=0;i<sizeof(arr1)/4;i++){
//     if(m[arr1[i]]==0){
//      cout<<"no";
//      break;
//     }
//     else if(i==(sizeof(arr1)/4)-1)
//      cout<<"yes";
//   }

// }




//MEDIAN OF TWO SORTED ARRAYS

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int check(int x,int t,int y,int z){
//   if((y+z)%2==0 and (x==t or x==t+1))
//    return 1;
//   else if(x==t+1 and (y+z)%2!=0)
//    return 1; 
//   else
//    return 0;
// }

// int main()
// {
//   int arr1[]={2,4};
//   int arr2[]={1,3,4};
//   int x=0;
//   int start=0,end=0;
//   float sum=0;
//   int total=(sizeof(arr1)/4+sizeof(arr2)/4)/2;

//   for(int i=0;i<total+1;i++){   
//     if(arr1[start]<arr2[end]){
//      x++;
//      if((check(x,total,sizeof(arr1)/4,sizeof(arr2)/4)==1))
//       sum=sum+min(arr1[start],arr2[end]);
//      start++;
//     }
     
//     else if(arr1[start]>arr2[end]){
//      x++;
//      if((check(x,total,sizeof(arr1)/4,sizeof(arr2)/4)==1))
//       sum=sum+min(arr1[start],arr2[end]);
//      end++;
//     }

//     else if(arr1[start]==arr2[end]){
//      x++;
//      if((check(x,total,sizeof(arr1)/4,sizeof(arr2)/4)==1))
//       sum=sum+arr2[end];
//      x++;
//      if((check(x,total,sizeof(arr1)/4,sizeof(arr2)/4)==1))
//       sum=sum+arr2[end]; 
//      start++;
//      end++;
//     }

//   }
//   if((sizeof(arr1)/4+sizeof(arr2)/4)%2==0)
//    cout<<sum/2;
//   else
//    cout<<sum;
  
// }



//LINKED LIST

//ROTATION A LINKED LIST (iterative)

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x,node *&head){
//   node *temp=new node;
//   temp->data=x;
//   temp->next=head;
//   head=temp;
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<" ";
//     h=h->next;
//   }
// }

// int main()
// {
//     node *head,*t;
//     head=NULL;
//     int x,k;
//     cout<<"Enter length : ";
//     cin>>k;

//     for(int i=0;i<k;i++){
//       cin>>x;
//       input(x,head);
//     }
    
//     output(head);
//     node *c=head;
//     c=head;

//     while(c->next!=NULL)
//     c=c->next;
//     cout<<endl<<"enter no. of rotations : ";
//     cin>>k;
//     for(int i=0;i<k;i++){
//       t=head;
//       head=head->next;
//       c->next=t;
//       c=c->next;
//       t->next=NULL;
//     }
//     output(head);

// }



// REVERSE OF LINKED LIST USING EXTRA SPACE

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x,node *&head){
//   node *temp=new node;
//   temp->data=x;
//   temp->next=head;
//   head=temp;
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<" ";
//     h=h->next;
//   }
// }

// int main()
// {
//     node *head,*t;
//     head=NULL;
//     int x,k;
//     cout<<"Enter length : ";
//     cin>>k;

//     for(int i=0;i<k;i++){
//       cin>>x;
//       input(x,head);
//     }
//     output(head);

//     int arr[k];
//     node *c=head;
//     for(int i=0;i<k;i++){
//       arr[i]=c->data;
//       c=c->next;
//     }

//     c=head;
//     int j=k-1;
//     for(int i=0;i<k;i++){
//       c->data=arr[j];
//       c=c->next;
//       j--;
//     } 

//     cout<<endl;
//     output(head);
// }



//REVERSE AN LL S.C. 0(1)

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x,node *&head){
//   node *temp=new node;
//   temp->data=x;
//   temp->next=head;
//   head=temp;
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<" ";
//     h=h->next;
//   }
// }

// int main()
// {
//     node *head,*t,*c,*p;
//     head=NULL;
//     int x,k;
//     cout<<"Enter length : ";
//     cin>>k;

//     for(int i=0;i<k;i++){
//       cin>>x;
//       input(x,head);
//     }
//     output(head);
//     p=NULL;
//     c=head;
//     t=head;
//     while(t){
//       t=t->next;
//       c->next=p;
//       p=c;
//       head=c;
//       c=t;
//     }

//     cout<<endl;
//     output(head);
// }



// REVERSE OF LINKED LIST IN GROUP USING EXTRA SPACE 

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x,node *&head){
//   node *temp=new node;
//   temp->data=x;
//   temp->next=head;
//   head=temp;
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<" ";
//     h=h->next;
//   }
// }

// int main()
// {
//     node *head,*t;
//     head=NULL;
//     int x,k,l;
//     cout<<"Enter k: ";
//     cin>>k;
//     cout<<"Enter length: ";
//     cin>>l;

//     for(int i=0;i<l;i++){
//      cin>>x;
//      input(x,head);
//     }
//     output(head);

//     int arr[l];
//     node *c=head;
//     for(int i=0;i<l;i++){
//      arr[i]=c->data;
//      c=c->next;
//     }

//     c=head;
//     int j=1;
//     x=k;
//     int y=0;
//     for(int i=0;i<l;i++){
//      if(i==l-(l%k)){
//       k=l-(l%k);
//       y=0;
//       x=l;
//      }
//      c->data=arr[x-1];
//      c=c->next;
//      x--;
//      y++;
//      if(y==k){
//       y=0;
//       j++;
//       x=k*j;
//      }
//     }
//     cout<<endl;
//     output(head);

// }



//REVERSE AN LINK LIST IN GROUP WITHOUT EXTRA SPACE

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   head=NULL;
//   node *l=head; 
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void reverse(node*&head){
//   node *p=NULL;
//   node *c=head;
//   node *t=head;
//   while(t){
//    t=t->next;
//    c->next=p;
//    p=c;
//    head=c;
//    c=t;
//   }
// }

// void output(node *head){
//   node *h=head;
//   while(h!=NULL){
//    cout<<h->data<<"->";
//    h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//    node *head,*h,*h1,*h2,*t=NULL;
//    int k=5;
//    int arr[]={1,2,3,4,5,6,7,8};
//    input(arr,sizeof(arr)/4,head);
//    output(head);
//    h1=head;

//    while(h1){
//     for(int i=0;i<k-1 and h1->next;i++)
//      h1=h1->next;
//     h=h1;
//     h1=h1->next;
//     h->next=NULL;
//     node*m=head;
//     reverse(head);
//     h2->next=head;
//     if(t==NULL)
//      t=head;
//     h=head;
//     for(int i=0;i<k-1 and h->next;i++)
//      h=h->next;
//     h2=h;
//     h->next=h1;
//     head=h1;
//    }
//    output(t);

// }



//DETECT LOOP IN LL

// #include<iostream>
// #include<unordered_map>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x,node *&head){
//   node *temp=new node;
//   temp->data=x;
//   temp->next=head;
//   head=temp;
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<" ";
//     h=h->next;
//   }
// }

// int main()
// {
//     node *head,*t,*c,*h;
//     head=NULL;
//     bool flag=false;
//     int x,k;
//     int arr[]={1,2,3,4,5,6};

//     for(int i=0;i<sizeof(arr)/4;i++)
//      input(arr[i],head);
//     output(head);

//     t=head;
//     c=head;
//     for(int i=0;i<(sizeof(arr)/4)-1;i++){
//      if(i<2)
//       t=t->next;
//      c=c->next;
//     }

//     c->next=t;
//     c=head;
//     cout<<endl;
//     for(int i=0;i<10 and c!=NULL;i++){
//       cout<<c->data<<" ";
//       c=c->next;
//     }
//     cout<<endl;
//     c=head;
//     unordered_map<node*,int>m;
//     while(c!=NULL){
//       if(m[c]>1){
//        cout<<"loop";
//        flag=true;
//        break;
//       }
//       else{
//        c=c->next;
//        m[c]++;
//       }
//     }
//     if(flag==false)
//      cout<<"no loop";

// }



//DELETE LOOP IN LL

// #include<iostream>
// #include<unordered_map>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x,node *&head){
//   node *temp=new node;
//   temp->data=x;
//   temp->next=head;
//   head=temp;
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL ){
//     cout<<h->data<<" ";
//     h=h->next;
//   }
// }

// int main()
// {
//     node *head,*t,*c,*h;
//     head=NULL;
//     int x,k;
//     int arr[]={1,2,3,4,5,6,7};

//     for(int i=0;i<sizeof(arr)/4;i++)
//      input(arr[i],head);
  
//     t=head;
//     c=head;
//     for(int i=0;i<(sizeof(arr)/4)-1;i++){
//      if(i<2)
//       t=t->next;
//      c=c->next;
//     }

//     c->next=t;
//     c=head;
//     for(int i=0;i<10 and c!=NULL;i++){
//       cout<<c->data<<" ";
//       c=c->next;
//     }
//     c=head;
//     unordered_map<node *,int>m;
//     while(c!=NULL){
//       if(m[c->next]>1){
//        c->next=NULL;
//        break;
//       }
//       else{
//        m[c]++;
//        c=c->next;
      
//       }
//     }
//     cout<<endl;
//     output(head);
//     cout<<" loop removed";
     
// }



//REMOVE DUPLICATE IN SORTED LL

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x,node *&head){
//   node *temp=new node;
//   temp->data=x;
//   temp->next=head;
//   head=temp;
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<" ";
//     h=h->next;
//   }
// }

// int main()
// {
//     node *head,*t,*c,*h;
//     head=NULL;
//     int arr[]={1,1,2,2,3,8};
//     for(int i=0;i<sizeof(arr)/4;i++)
//      input(arr[i],head);
//     output(head);

//     h=head;    
//     while(h->next!=NULL){
//       if(h->data==h->next->data){
//        t=h->next->next;
//        delete h->next;
//        h->next=t;
//       }
//       else
//        h=h->next;
//     }
//     cout<<endl;
//     output(head);
     
// }



//REMOVE DUPLICATE IN UNSORTED LL

// #include<iostream>
// #include<unordered_map>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x,node *&head){
//   node *temp=new node;
//   temp->data=x;
//   temp->next=head;
//   head=temp;
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<" ";
//     h=h->next;
//   }
// }

// int main()
// {
//     node *head,*t,*c,*h;
//     unordered_map<int,int>m;
//     head=NULL;
//     int x,k;

//     int arr[]={5,2,2,4,3,6};
//     for(int i=0;i<sizeof(arr)/4;i++)
//      input(arr[i],head);
//     output(head);

//     cout<<endl;
//     h=head;
//     c=head;
//     m[h->data]++;
//     while(h->next){
//       if(m[h->next->data]>0)
//         h->next=h->next->next;
//       else if(m[h->next->data]==0){
//         m[h->next->data]=1;
//         h=h->next;
//       }
//     }
//     output(head);
     
// }



//CIRCULER LL BY SPLITTING LL FROM MID

// #include<iostream>
// #include<unordered_map>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x,node *&head){
//   node *temp=new node;
//   temp->data=x;
//   temp->next=head;
//   head=temp;
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<" ";
//     h=h->next;
//   }
// }

// int main()
// {
//     node *head,*t,*c,*h;
//     head=NULL;
    
//     int arr[]={5,2,7,9,1,8,3,4,6};
//     for(int i=0;i<sizeof(arr)/4;i++)
//      input(arr[i],head);
//     output(head);

//     node*s=head,*f=head; 
//     while(f->next && f->next->next){
//       s=s->next;
//       f=f->next->next;
//     }
    
//     if(f->next!=NULL)
//      f=f->next;
//     c=s->next;
//     f->next=c;
//     s->next=head;

//     cout<<endl;
//     t=head;
//     for(int i=0;i<10;i++){
//       cout<<t->data<<" ";
//       t=t->next;
//     }
//     cout<<endl;
//     t=c;
//     for(int i=0;i<10;i++){
//       cout<<t->data<<" ";
//       t=t->next;
//     } 

// }



//MOVE LAST ELEMENT IN FRONT OF LL

// #include<iostream>
// #include<unordered_map>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x,node *&head){
//   node *temp=new node;
//   temp->data=x;
//   temp->next=head;
//   head=temp;
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<" ";
//     h=h->next;
//   }
// }

// int main()
// {
//     node *head,*t,*c,*h;
//     head=NULL;
//     int x=0,k;

//     int arr[]={5,2,7,3,4};
//     for(int i=0;i<sizeof(arr)/4;i++)
//      input(arr[i],head);
//     output(head);

//     t=head;
//     h=head;
//     while(t->next->next!=NULL)
//       t=t->next;
    
//     cout<<endl;
//     h=t->next;
//     t->next=NULL;
//     h->next=head;
//     head=h;
//     output(head);   
// }



//ADD 1 TO GIVEN LINK LIST

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   node *l=NULL;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data;
//     h=h->next;
//   }
// }

// void reverse(node *&p,node *&c,node *&t,node *&head){
//   while(t!=NULL){
//     t=t->next;
//     c->next=p;
//     p=c;
//     head=c;
//     c=t;
//   }
// }

// int main()
// {
//     node *head,*t,*c;
//     node *m,*p,*h;
//     bool flag=false;
//     head=NULL;

//     int arr[]={9};
//     input(arr,sizeof(arr)/4,head);
//     output(head);
     
//     h=head;
//     while(h!=NULL){
//      if(h->next==NULL and h->data==9)
//       flag=true;
//       h=h->next;
//     }

//     p=NULL;
//     c=head;
//     t=head;
//     int carry=-1;
//     if(flag==true){
//      reverse(p,c,t,head);
//      h=head;
//      while(carry!=0){
//       if(h->data==9 and h->next!=NULL){
//         h->data=0;
//         carry=1;
//       }
//       else if(h->data==9 and h->next==NULL){
//         h->data=0;
//         carry=0;
//         m=new node;
//         m->data=1;
//         m->next=NULL;
//         h->next=m;
//         carry=0;
//       }
//       else{
//         h->data=h->data+carry;
//         carry=0;
//       }
//       h=h->next; 
//      }
//      p=NULL;
//      c=head;
//      t=head;
//      reverse(p,c,t,head);
//     }

//     h=head;
//     if(flag==false){
//       while(h->next!=NULL)
//        h=h->next;
//       h->data=h->data+1;
//     }
//     cout<<endl;
//     output(head);

// }



//ADD TWO NUMBER IN LL

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x,node *&head){
//   node *temp=new node;
//   temp->data=x;
//   temp->next=head;
//   head=temp;
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data;
//     h=h->next;
//   }
//   cout<<endl;
// }

// void reverse(node *&head){
//   node *p=NULL;
//   node *c=head;
//   node *t=head;
//   while(t!=NULL){
//     t=t->next;
//     c->next=p;
//     p=c;
//     head=c;
//     c=t;
//   } 
// }

// int main()
// {
//     node *head,*head1,*h,*h1;
//     head=NULL;
//     head1=NULL;

//     int arr[]={9,7,2,3,7,1,7,9,8,2};
//     int brr[]={4,2,9,7,1,5,6,4};

//     for(int i=0;i<sizeof(arr)/4;i++)
//      input(arr[i],head);
//     output(head);
//     for(int i=0;i<sizeof(brr)/4;i++)
//      input(brr[i],head1);
//     output(head1);

//     reverse(head);
//     reverse(head1);
//     h=head;
//     h1=head1;
//     node *h3,*head3,*l;
//     head3=NULL;
//     h3=NULL;
//     int sum;

//     while(h && h1){
//       h3=new node;
//       sum=h->data+h1->data;
//       h3->data=sum%10;
//       h3->next=head3;
//       head3=h3;
//       h=h->next;
//       h1=h1->next;
//       if(h!=NULL)
//        h->data=h->data+sum/10;
//       else if(h1!=NULL)
//        h1->data=h1->data+sum/10;
       
//     }
//     if(h==NULL && h1==NULL && sum/10!=0){
//       h3=new node;
//       h3->data=sum/10;
//       h3->next=head3;
//       head3=h3;
//     }
//     while(h){
//       h3=new node;
//       h3->data=h->data%10;
//       sum=h->data/10;
//       h3->next=head3;
//       head3=h3;
//       h=h->next;
//       if(h!=NULL)
//        h->data=h->data+sum;
//       else if(h==NULL and sum!=0){
//       h3=new node;
//       h3->data=1;
//       h3->next=head3;
//       head3=h3;
//       break;}
//     }
//     while(h1){
//       h3=new node;
//       h3->data=h1->data%10;
//       sum=h1->data/10;
//       h3->next=head3;
//       head3=h3;
//       h1=h1->next;
//       if(h1!=NULL)
//        h1->data=h1->data+sum;
//       else if(h1==NULL and sum!=0){
//       h3=new node;
//       h3->data=1;
//       h3->next=head3;
//       head3=h3;
//       break;}
//     }

//     output(head3);
// }



//SUBTRACT 2 NUMBER REPRESENT AS LL

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   head=NULL;
//   node *l=head;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void reverse(node *&head){
//   node *p=NULL;
//   node *c=head;
//   node *t=head;
//   while(t!=NULL){
//     t=t->next;
//     c->next=p;
//     p=c;
//     head=c;
//     c=t;
//   } 
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data;
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//     node *head=NULL,*head1,*head2,*h;
//     int arr[]={4,2,8};
//     int arr1[]={1,9,9};
     
//      input(arr,sizeof(arr)/4,head1);
//      output(head1); 
//      input(arr1,sizeof(arr1)/4,head2);
//      output(head2);
//      reverse(head1);
//      reverse(head2);
    
//      while(head1 and head2){
//       if(head1->data<head2->data){
//        head1->data=head1->data+10;
//        head1->next->data=head1->next->data-1;
//       }
//       node *q=new node;
//       q->data=head1->data-head2->data;
//       if(head==NULL){
//        head=q;
//        h=q;
//        h->next=NULL;
//       }
//       else{
//        h->next=q;
//        h=h->next;
//        h->next=NULL;
//       }
//       head1=head1->next;
//       head2=head2->next;
//     }
//     if(head2==NULL)
//      h->next=head1;
//     else if(head1==NULL)
//      h->next=head2;

//     reverse(head);
//     output(head);

// }



// INTERSECTION OF TWO SORTED LL

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   node *l=NULL;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//     node *head,*head1;
//     head=NULL;
//     head1=NULL;

//     int arr[]={1,2,5,6,9};
//     int brr[]={0,4,4,8};

//     input(arr,sizeof(arr)/4,head);
//     output(head);
//     input(brr,sizeof(brr)/4,head1);
//     output(head1);

//     node *h,*h1,*head3=NULL;
//     h=head;
//     h1=head1;
//     node *l=NULL;

//     while(h && h1){
//       if(h->data==h1->data){
//         node *t=new node;
//         t->data=h->data;
//         if(head3==NULL)
//          head3=t; 
//         else
//          l->next=t;
//         l=t;
//         l->next=NULL;
//         h=h->next;
//         h1=h1->next;
//       }
//       else if(h->data<h1->data)
//        h=h->next;
//       else 
//        h1=h1->next;
//     }
//     if(head3!=NULL)
//      output(head3);
//     else
//      cout<<-1;
// }



//INTERSECTION POINT OF TWO LL

// #include<iostream>
// #include<cmath>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   node *l=NULL;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//     node *head,*head1;
//     head=NULL;
//     head1=NULL;
//     int x=0,y=0;

//     int arr[]={1,2,5,7,9,15,19};
//     int brr[]={0,4,6,8,10};
//     input(arr,sizeof(arr)/4,head);
//     output(head);
//     input(brr,sizeof(brr)/4,head1);
//     output(head1);
//     node *h=head,*h1=head1;

//     for(int i=0;i<4;i++){
//       h=h->next;
//       h1=h1->next;
//     }

//     h1->next=h;
//     output(head1);
//     h=head;
//     h1=head1;
//     while(h){
//       x++;
//       h=h->next;
//     }
//     while(h1){
//       y++;
//       h1=h1->next;
//     }
    
//     h=head;
//     h1=head1;
//     for(int i=0;i<abs(x-y);i++){
//       if(x<y)
//        h1=h1->next;
//       else if(x>y)
//        h=h->next;
//     }

//     while(h && h1){
//       if(h==h1 and h!=NULL){
//         cout<<"inetsection point is : "<<h->data;
//         break;
//       }
//       else if(h==NULL and h1==NULL){
//        cout<<-1;
//        break;
//       }
//       h=h->next;
//       h1=h1->next;
//     }
// }




//MIDDLE OF AN LL (traditional approach)

// #include<iostream>
// #include<cmath>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   node *l=NULL;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//     node *head;
//     head=NULL;
//     int x=0;
//     int arr[]={1,2,5,7,9,10,4};

//     input(arr,sizeof(arr)/4,head);
//     output(head);

//     node *h=head;
//     while(h){
//       x++;
//       h=h->next;
//     }

//     if(x%2==0)
//      x=(x+2)/2;
//     else
//      x=(x+1)/2;
    
//     h=head;
//     for(int i=1;i<x;i++)
//      h=h->next;
//     cout<<h->data<<endl<<h;
// }

//OPTIMAL APPROACH (slow and fast pointer)

// #include<iostream>
// #include<cmath>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   node *l=NULL;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//     node *head;
//     head=NULL;
//     int arr[]={1,2,5,7,9,0,8};

//     input(arr,sizeof(arr)/4,head);
//     output(head);
    
//     node *s=head,*f=head;
//     while(f!=NULL and f->next!=NULL){
//       s=s->next;
//       f=f->next->next;
//     }
//     cout<<s->data<<endl<<s;
// }



//CHECK FOR CIRCULAR LINK LIST

// #include<iostream>
// #include<cmath>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   node *l=NULL;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//     node *head;
//     head=NULL;
//     bool flag=false;
//     int arr[]={1,2,5,7,9,8};

//     input(arr,sizeof(arr)/4,head);
//     output(head);
//     node*h=head;
//     while(h->next!=NULL)
//      h=h->next;
//     h->next=head;
//     h=head;
//     while(h){
//      if(h->next==head){
//        cout<<"circuler LL"<<endl;
//        h=head;
//        for(int i=0;i<10;i++){
//         cout<<h->data<<"->";
//         h=h->next;
//        }
//        break;
//      }
//      else if(h->next==NULL)
//       cout<<"no";
//      h=h->next;
//     }

// }



//SPLIT CIRCULER LINK LIST IN TWO HALVES CIRCULER LL

// #include<iostream>
// #include<cmath>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   node *l=NULL;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//     node *head;
//     head=NULL;
//     bool flag=false;
//     int arr[]={1,2,5,7,9,4,8};

//     input(arr,sizeof(arr)/4,head);
//     output(head);
    
//     node*h=head;
//     while(h->next!=NULL)
//      h=h->next;
    
//     h->next=head;
//     h=head;
//     for(int i=0;i<11;i++){
//       cout<<h->data<<"->";
//       h=h->next;
//     }
  
//     cout<<endl;
//     h=head;
//     int x=0;
//     while(h){
//       x++;
//       if(h->next==head)
//        break;
//       h=h->next;
//     }
    
//     h=head;
//     node *h1,*head1;
//     for(int i=1;i<x;i++){
//      if(i<(x+1)/2)
//       h=h->next;
//      else if(i==(x+1)/2){
//       head1=h->next;
//       h1=head1;}
//      else
//       h1=h1->next;
//     }

//     h->next=head;
//     h1->next=head1;
//     h=head;
//     h1=head1;
//     cout<<endl;
//     for(int i=0;i<7;i++){
//       cout<<h->data<<"->";
//       h=h->next;
//     } 
//     cout<<endl;  
//     for(int i=0;i<7;i++){
//       cout<<h1->data<<"->";
//       h1=h1->next;
//     }     

// }



//IS SINGLY LINK LIST PALLINDROME

// #include<iostream>
// #include<cmath>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   node *l=NULL;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// void reverse(node *&s){
//   node *p=NULL;
//   node *c=s;
//   node *n=s;
//   while(n!=NULL){
//     n=n->next;
//     c->next=p;
//     p=c;
//     s=c;
//     c=n;
//   }
// }

// int main()
// {
//    node *head;
//    head=NULL;
//    int arr[]={1,2,3,2,1};

//    input(arr,sizeof(arr)/4,head);
//    output(head);
//    node *f=head;
//    node *s=head;

//    while(f!=NULL and f->next!=NULL){
//      s=s->next;
//      f=f->next->next;
//    }
  
//    reverse(s);
//    node *s1=s,*h=head;
//    s1=s;
//    h=head;

//    while(h){
//     if(s1->data!=h->data){
//      cout<<"not pallindrome";
//      break;
//     }
//     else if(s1->next==NULL and s1->data==h->data)
//      cout<<"pallindrome";
//     s1=s1->next;
//     h=h->next;
//    }
// }



//REVERSE AN DOUBLY LL

// #include<iostream>
// #include<cmath>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
//   node *pre;
// };

// void input(int x[],int y,node *&head){
//   node *l=NULL;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL){
//     head=temp;
//     head->pre=l;
//    }
//    else{
//     l->next=temp;
//     temp->pre=l;
//    }
//    l=temp;
//    l->next=NULL;
//   }
// }

// void noutput(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// void poutput(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->pre;
//   }
//   cout<<endl;
// }

// int main()
// {
//    node *head;
//    head=NULL;
//    int arr[]={1,2,3,4,5,6};

//    input(arr,sizeof(arr)/4,head);
//    noutput(head);
//    node *head1=head;
//    for(int i=1;i<sizeof(arr)/4;i++)
//     head1=head1->next;

//    node*h1=head1;
//    poutput(h1);
   
//    node*p,*c,*t;
//    p=head1->pre;
//    c=p; 
//    t=head1;

//     h1=head1;
//     while(h1){
//       p=p->pre;
//       t->next=c;
//       c->pre=t;
//       c=p;
//       t=t->next;
//       if(p==NULL){
//        t->next=NULL;
//        break;
//       }
//     }
//     h1=head1;
//     noutput(h1);
    
// }



//PAIR SUM IN DOUBLY LL

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
//   node *pre;
// };

// void input(int x[],int y,node *&head){
//   node *l=NULL;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL){
//     head=temp;
//     head->pre=l;
//    }
//    else{
//     l->next=temp;
//     temp->pre=l;
//    }
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//    node *head;
//    head=NULL;
//    int arr[]={2,4,5,8,9,10};
//    input(arr,sizeof(arr)/4,head);
//    output(head);
//    node *head1=head;
//    while(head1->next!=NULL)
//     head1=head1->next;

//    node *l=head;
//    node *r=head1;
//    int k=12;
//    cout<<"k:"<<k<<endl;

//    while(l<r){
//     if(l->data+r->data==k){
//       cout<<l->data<<","<<r->data<<endl;
//       l=l->next;
//       r=r->pre;
//     }
//     else if(l->data+r->data<k)
//      l=l->next;
//     else
//      r=r->pre;  
//    }
 
// }



//SORT AN "K" SORTED DOUBLY LINK LIST

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
//   node *pre;
// };

// void input(int x[],int y,node *&head){
//   node *l=NULL;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL){
//     head=temp;
//     head->pre=l;
//    }
//    else{
//     l->next=temp;
//     temp->pre=l;
//    }
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//    node *head;
//    int k=2;
//    head=NULL;
//    int arr[]={3,2,1,5,6,4};
//    input(arr,sizeof(arr)/4,head);
//    output(head);
   
//    priority_queue<int,vector<int>,greater<int>>mn;
//    node *temp=head,*temp1=head;
//    for(int i=0;i<k+1;i++){
//     mn.push(temp1->data);
//     temp1=temp1->next;
//    } 

//    while(temp){
//     temp->data=mn.top();
//     mn.pop();
//     if(temp1!=NULL){
//      mn.push(temp1->data); 
//      temp1=temp1->next;
//     }
//     temp=temp->next;
//    }
//    output(head);

// }



//ROTATE AN DOUBLY LINK LIST "N" TIMES

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
//   node *pre;
// };

// void input(int x[],int y,node *&head){
//   node *l=NULL;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL){
//     head=temp;
//     head->pre=l;
//    }
//    else{
//     l->next=temp;
//     temp->pre=l;
//    }
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//    node *head;
//    int k=2;
//    head=NULL;
//    int arr[]={1,2,3,4,5};
//    input(arr,sizeof(arr)/4,head);
//    output(head);
//    node *h=head;
//    node *h1=head;
   
//    for(int i=0;i<k-1;i++)
//     h=h->next;

//    if(k!=0){
//    h->next->pre=NULL;
//    head=h->next;
//    h->next=NULL;
//    h=h1;
//    h1=head;
   
//    while(h1->next!=NULL)
//     h1=h1->next;
//    h1->next=h;
//    h->pre=h1;
//    h=head;
//    }
//    output(h);

// }



//ROTATE DOUBLY LL IN GROUP OF "K"  

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
//   node *pre;
// };

// void input(int x[],int y,node *&head){
//   node *l=NULL;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL){
//     head=temp;
//     head->pre=l;
//    }
//    else{
//     l->next=temp;
//     temp->pre=l;
//    }
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// void reverse(node *&h,node* &h1){
//   while(h!=h1 and h->pre!=h1){
//     swap(h->data,h1->data);
//     h=h->next;
//     h1=h1->pre;
//   }
// }

// int main()
// {
//    node *head;
//    int k=4;
//    head=NULL;
//    int arr[]={1,2,3,4,5,6,7,8,9,10};

//    input(arr,sizeof(arr)/4,head);
//    output(head);
//    node *h=head,*h1=head;
//    node *head1=NULL;

//    while(h){
//     for(int i=0;i<k-1 and h1->next!=NULL;i++)
//      h1=h1->next;
//     head1=h1->next;
//     reverse(h,h1);
//     h1=head1;
//     h=head1;
//    }
//    output(head);

// }



//MERGE AN 2 SORTED LINK LIST

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   node *l=NULL;
//   head=NULL;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//    node *head,*h1,*h2;
//    int arr[]={2,4,5,7,11,12};
//    int arr1[]={3,4,4,6,8,10,11};

//    input(arr,sizeof(arr)/4,h1);
//    output(h1);
//    input(arr1,sizeof(arr1)/4,h2);
//    output(h2);
  
//    node*tail=new node;
//    tail->data=0;
//    head=tail;
//    while(h1 && h2){
//     if(h1->data<=h2->data){
//       tail->next=h1;
//       tail=tail->next;
//       h1=h1->next;
//       tail->next=NULL;
//     }
//     else if(h1->data>=h2->data ){
//       tail->next=h2;
//       tail=tail->next;
//       h2=h2->next;
//       tail->next=NULL;
//     }
//    }

//    if(h1==NULL)
//     tail->next=h2;
//    else if(h2==NULL) 
//     tail->next=h1;
//    head=head->next;
//    output(head);

// }



//FLATTEN A LINK LIST  

// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next,*btm;  
// };

// void *input(vector<int>v,node *&h){
//   node *head=NULL;
//   for(int i=v.size()-1;i>=0;i--){
//     node *temp=new node();
//     temp->data=v[i];
//     temp->next=head;
//     head=temp;  
//   }
//   h=head;
// }

// void *input1(vector<int>v,node *&h){
//   node *head=NULL;
//   for(int i=v.size()-1;i>=0;i--){
//     node *temp=new node();
//     temp->data=v[i];
//     temp->btm=head;
//     head=temp;  
//   }
//   h=head;
// }

// void output(node *head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->btm;
//   }
// }

// int main()                                          
// {
//    node *head,*h1,*h;                     
//    node *h2,*h3,*h4,*h5;
//    vector<int>v,v1,v2,v3,v4,v5;
//    v={5,10,19,28,30};     
//    v1={7,8,30};      
//    v2={20,40};    
//    v3={22,50};          
//    v4={35,40,45}; 
//    v5={34,41};  

//    input(v,head);  
//    input1(v1,h1);
//    input1(v2,h2);  
//    input1(v3,h3);
//    input1(v4,h4);
//    input1(v5,h5);

//    h=head;
//    h->btm=h1;
//    h=h->next;       
//    h->btm=h2;
//    h=h->next;
//    h->btm=h3;
//    h=h->next;
//    h->btm=h4;
//    h=h->next;
//    h->btm=h5;

//    h=head;
//    node*u,*l;
//    while(h){
//     output(h);
//     h=h->next;
//     if(h!=NULL)
//     cout<<endl<<"|"<<endl;
//    }
//    node *y=head;
//    int x=0;
//    while(y){
//     x++;
//     y=y->next;
//    }

//    cout<<endl<<endl;
//    node*tail;
//    h=head;
//    l=head->next->next;
//    u=head->next;
   
//    for(int i=0;i<x-1;i++){
//     tail=new node;
//     tail->data=0;
//     h=head;
//     h->next=NULL;
//     u->next=NULL;

//     while(h && u){
//      if(h->data<=u->data){
//       tail->btm=h;
//       tail=tail->btm;
//       h=h->btm;
//       tail->btm=NULL;}
//      else{
//       tail->btm=u;
//       tail=tail->btm;
//       u=u->btm;
//       tail->btm=NULL;}
//     }
//     if(h==NULL)
//       tail->btm=u;
//     else 
//       tail->btm=h;
//     u=l;
//     if(l->next)
//      l=l->next;
//    }
//    output(head);

// }



//SORT 0,1 AND 2'S

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   head=NULL;
//   node *l=head;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//     node *head,*z,*o,*t;
//     int arr[]={1,1,2,0,0,1,2,2,1,2};
//     input(arr,sizeof(arr)/4,head);
//     output(head);     
//     node*zh=new node;
//     node*oh=new node;
//     node*th=new node;
//     zh->data=-1;
//     oh->data=-1;
//     th->data=-1;
//     z=zh;
//     o=oh;
//     t=th;

//     while(head){
//       if(head->data==0){
//        z->next=head;
//        head=head->next;
//        z=z->next;
//        z->next=NULL;}
//       else if(head->data==1){
//        o->next=head;
//        head=head->next;
//        o=o->next;
//        o->next=NULL;}
//       else{
//        t->next=head;
//        head=head->next;
//        t=t->next;
//        t->next=NULL;}  
//     }
//      head=zh->next;
//      z->next=oh->next;
//      o->next=th->next;
//      delete zh;
//      delete oh;
//      delete th;
//      output(head);

// }



//CLONE LINK LIST WITH RANDOM POINTER

// #include<iostream>
// #include<unordered_map>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
//   node *rdm;
// };

// void input(int x[],int y,node *&head){
//   head=NULL;
//   node *l=head;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->rdm=NULL;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
// }

// int main()
// {
//     node *head,*h;
//     unordered_map<node*,node*>m;
//     int arr[]={1,2,3,4,5};
//     input(arr,sizeof(arr)/4,head);
//     output(head);     
//     cout<<" original LL"<<endl;
//     h=head;
//     h->rdm=h->next->next;
//     h=h->next;
//     h->rdm=head;
//     h->next->next->next->rdm=h;
//     h=h->next;
//     h->rdm=h->next->next;
//     h->next->rdm=h;

//     h=head;
//     while(h!=NULL){
//      cout<<h->rdm->data<<"->";
//      h=h->next;
//     }

//     cout<<"  original rdm"<<endl;
//     h=head;
//     node*head1,*h1;
//     input(arr,sizeof(arr)/4,head1);
//     output(head1);
//     cout<<" clone LL"<<endl;
//     h1=head1;
//     while(h){
//       m[h]=h1;
//       h=h->next;
//       h1=h1->next;
//     }
//     h=head;
//     h1=head1;
//     while(h1){
//       h1->rdm=m[h->rdm];
//       h1=h1->next;
//       h=h->next;
//     }

//     h1=head1;
//     while(h1!=NULL){
//      cout<<h1->rdm->data<<"->";
//      h1=h1->next;
//     }
//     cout<<"  cloned rdm";
    
// }



//DELETE NODES HAVING GREATER VALUE ON RIGHT

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   head=NULL;
//   node *l=head;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//     node *head,*h,*u=new node;
//     int arr[]={12,15,10,11,5,6,2,3};
//     input(arr,sizeof(arr)/4,head);
//     output(head);     
//     h=head;
//     u->data=0;
//     u->next=h;
//     head=u;
//     while(h->next){
//      if(h->next->data>h->data){
//       u->next=h->next;
//       delete h;
//       h=u;
//      }
//      else
//       u=u->next;
//      h=h->next;
//     }
//     head=head->next;
//     output(head);
// }



//SEGREGATE EVEN AND ODDS of LL

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   head=NULL;
//   node *l=head;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//     node *head,*h;
//     int arr[]={17,15,8,9,2,4,6};
//     input(arr,sizeof(arr)/4,head);
//     output(head);     
//     h=head;
//     node *eh=new node;
//     eh->data=-1;
//     node *oh=new node;
//     oh->data=-1;
//     node *e=eh,*o=oh;

//     while(h){
//       if(h->data%2!=0){
//        o->next=h;
//        h=h->next;
//        o=o->next;
//        o->next=NULL;
//       }
//       else{
//        e->next=h;
//        h=h->next;
//        e=e->next;
//        e->next=NULL;
//       }
//     }
    
//     e->next=oh->next;
//     head=eh->next;
//     delete eh;
//     delete oh;
//     output(head);

// }



//DELETE NODE FROM THE END

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   head=NULL;
//   node *l=head;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//     node *head,*h;
//     int arr[]={1,2,3,4,5};
//     input(arr,sizeof(arr)/4,head);
//     output(head); 

//     h=head;
//     int k=4;
//     node *s=head,*f=head;
//     for(int i=0;i<k;i++)
//      f=f->next; 
//     if(f==NULL){
//      head=s->next;
//      delete s;
//     }
//     else
//      while(f->next){
//       s=s->next;
//       f=f->next;
//      }

//     node *d=s->next;
//     s->next=s->next->next;
//     delete d;    
//     output(head);

// }



//ZIG-ZAG LINKED LIST

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   head=NULL;
//   node *l=head;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//     node *head,*h1,*h2,*h3;
//     int arr[]={2,3,5,9,11,12,18};
//     input(arr,sizeof(arr)/4,head);
//     output(head);
//     h1=head;
//     h2=head->next;

//     while(h2 and h2->next){
//       h3=h2->next;
//       node*m=h3->next;
//       h1->next=h3;
//       h3->next=h2;
//       h2->next=m;
//       h1=h2;
//       if(m!=NULL){
//        h2=h2->next;
//        h3=h2->next;
//      }
//     }
//     output(head);
// }



//MERGE SORT IN LINK LIST

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   head=NULL;
//   node *l=head;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// node* mid(node *head){
//   node *f=head->next;
//   node *s=head;
//     while(f and f->next){
//       s=s->next;
//       f=f->next->next;
//     }
//     return s;
// }

// node *merge(node* &left,node *&right){
//    node*tail=new node;
//    tail->data=0;
//    node *head=tail;
//    while(left && right){
//     if(left->data<=right->data){
//       tail->next=left;
//       tail=tail->next;
//       left=left->next;
//       tail->next=NULL;
//     }
//     else if(left->data>=right->data ){
//       tail->next=right;
//       tail=tail->next;
//       right=right->next;
//       tail->next=NULL;
//     }
//    }
//    if(left==NULL)
//     tail->next=right;
//    else if(right==NULL) 
//     tail->next=left;
//    head=head->next;
   
// }

// node *mergesort(node *head){
//   if(head->next==NULL)
//    return head;
  
//   node *m=mid(head);
//   node *left=head;
//   node *right=m->next;
//   m->next=NULL;
//   left=mergesort(left);
//   right=mergesort(right);
//   node*u=merge(left,right);
//   return u;
// }

// int main()
// {
//   node *head,*h;
//   int arr[]={4,1,6,7,2,9,9,7};
//   input(arr,sizeof(arr)/4,head);
//   output(head);
//   node*i=mergesort(head);
//   output(i);

// }



//SORT AN K SORTED LINK LIST

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   head=NULL;
//   node *l=head;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//   node *head,*h1,*h2,*h3,*h4,*h5,*h6;
//   int arr1[]={3,7,11};
//   int arr2[]={4,10};
//   int arr3[]={2,8,13,19};
//   int arr4[]={5,9};
//   int arr5[]={1};
//   int arr6[]={6,12};
//   input(arr1,sizeof(arr1)/4,h1);
//   input(arr2,sizeof(arr2)/4,h2);
//   input(arr3,sizeof(arr3)/4,h3);
//   input(arr4,sizeof(arr4)/4,h4);
//   input(arr5,sizeof(arr5)/4,h5);
//   input(arr6,sizeof(arr6)/4,h6);
  
//   node *arr[]={h1,h2,h3,h4,h5,h6};
//   node *t1,*t2,*temp;
  
//   temp=new node;
//   head=temp;
//   t1=arr[0];

//   for(int i=1;i<sizeof(arr)/4;i++){
//     t2=arr[i];
//     temp->data=-1;
//     while(t1 and t2){
//      if(t1->data<=t2->data){
//       temp->next=t1;
//       t1=t1->next;
//       temp=temp->next;
//       temp->next=NULL;
//      }
//      else{
//       temp->next=t2;
//       t2=t2->next;
//       temp=temp->next;
//       temp->next=NULL;
//      }
//     }
//     if(t1==NULL)
//      temp->next=t2;
//     else
//      temp->next=t1;

//     t1=head->next;
//     delete head;
//     temp=new node;
//     head=temp;
//   }
//   head=t1;
//   output(head);

// }



//PARTITION LINK LIST AROUND GIVEN VALUE

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   head=NULL;
//   node *l=head;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//     node *head,*h,*h1,*h2,*h3;
//     int arr[]={1,7,3,4,3,8,1,9,3,1,8,9,4,6,7};
//     int x=6;
//     node*left=new node,*right=new node;
//     node*mid=new node;
//     input(arr,sizeof(arr)/4,head);
//     output(head);
//     left->data=-1;
//     right->data=-1;
//     mid->data=-1;
//     h1=left;
//     h2=right;
//     h3=mid;
//     h=head;

//     while(h){
//       if(h->data<x){
//         h1->next=h;
//         h1=h1->next;
//         h=h->next;
//         h1->next=NULL;
//       }
//       else if(h->data>x){
//         h2->next=h;
//         h2=h2->next;
//         h=h->next;
//         h2->next=NULL;
//       }
//       else{
//         h3->next=h;
//         h3=h3->next;
//         h=h->next;
//         h3->next=NULL;
//       }
//     }
//     h1->next=mid->next;
//     h3->next=right->next;
//     head=left->next;
//     output(head);
  
// }



//REVERSE SUBLIST IN LINK LIST

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   head=NULL;
//   node *l=head;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void reverse(node *&head){
//    node*p=NULL;
//    node*c=head;
//    node*n=head;
//    while(n){
//     n=n->next;
//     c->next=p;
//     p=c;
//     c=n;
//    }
//    head=p;
// }

// void output(node *head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//     node *head,*h;
//     int arr[]={1,2,3,4,5,6,7};
//     input(arr,sizeof(arr)/4,head);
//     output(head);
//     h=head;
//     node*h1=h->next->next;
//     for(int i=0;i<2;i++)
//      h1=h1->next;
//     node*n=h1->next;
//     h1->next=NULL;
//     node*m=h->next->next;
//     h->next->next=NULL;
//     reverse(m);
//     h=head;
//     while(h->next)
//      h=h->next;
//     h->next=m;
//     h=head;
//     while(h->next)
//      h=h->next;
//     h->next=n;
//     output(head);
    
//}



//REMOVE OCCURENCES == K IN LL

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   node *l=NULL;
//   head=NULL;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//    node *head;
//    int k=2;
//    int arr[]={2,2,1,8,2,6};
//    input(arr,sizeof(arr)/4,head);
//    output(head);
//    node*h=new node;
//    h->next=head;
//    head=h;
//    while(h->next){
//     if(h->next->data==k){
//       node*m=h->next;
//       h->next=m->next;
//       delete m;
//     }
//     else
//      h=h->next;
//    }
//    head=head->next;
//    output(head);

// }



//SWAP K NODE FROM START AND END

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   node *l=NULL;
//   head=NULL;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//    node *head;
//    int k=7;
//    int arr[]={5,10,8,2,9,3,7};
//    input(arr,sizeof(arr)/4,head);
//    output(head);
   
//    node*h=head;
//    for(int i=0;i<k-1;i++)
//     h=h->next;
   
//    node*f=head;
//    for(int i=0;i<k;i++)
//     f=f->next;
//    node*s=head;
//    if(f!=NULL)
//    while(f){
//     s=s->next;
//     f=f->next;
//    }
//    int x=h->data;
//    h->data=s->data;
//    s->data=x;
//    output(head);

// }



//REMOVE EVERY KTH NODE IN LL

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   node *l=NULL;
//   head=NULL;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
//   }
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//    node *head;
//    int k=4;
//    int arr[]={1,2,3,4,5,6,7,8,9,10};
//    input(arr,sizeof(arr)/4,head);
//    output(head);
   
//    int x=1;
//    node*h=head;
//    while(h and h->next){
//     x++;
//     if(x==k){
//       node*m=h->next;
//       h->next=m->next;
//       delete m;
//       x=1;
//     }
//     h=h->next;
//    }
//    output(head);

// }



//REVERSE ALTERNATE K NODE IN LL

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
// };

// void input(int x[],int y,node *&head){
//   head=NULL;
//   node *l=head;
//   for(int i=0;i<y;i++){
//    node *temp=new node;
//    temp->data=x[i];
//    if(head==NULL)
//     head=temp;
//    else
//     l->next=temp;
//    l=temp;
//    l->next=NULL;
   
//   }
// }

// void reverse(node *&head){
//   node *p=NULL;
//   node *c=head;
//   node *t=head;
//   while(t){
//     t=t->next;
//     c->next=p;
//     p=c;
//     c=t;
//   }
//   head=p;
// }

// void output(node *&head){
//   node *h=head;
//   while(h!=NULL){
//     cout<<h->data<<"->";
//     h=h->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//     node *head,*h,*h1,*h2,*h3=NULL;
//     int arr[]={1,2,3,4,5,6,7,9,8,9,10};
//     int k=3;
//     bool flag=true;
//     input(arr,sizeof(arr)/4,head);
//     output(head);
//     h=head;
//     h1=head;

//     head=NULL;
//     while(h){
//      if(flag==true){
//       for(int i=0;i<k-1 and h->next;i++)
//        h=h->next;
//       h2=h->next;
//       h->next=NULL;
//       node*m=h1;
//       reverse(h1);
//       if(h3!=NULL)
//        h3->next=h1;
//       if(head==NULL)
//        head=h1;
//       m->next=h2;
//       h=h2;
//       flag=false;
//      }
//      else{
//       flag=true;
//       h3=h2;
//       for(int i=0;i<k-1 and h3->next;i++)
//        h3=h3->next;
//       h1=h3->next;
//       h2=h1;
//       h=h1;
//      }
//     }
    
//     output(head);
// }













//STACK

//IMPLIMENT STACK THROUGH ARRAY FROM SCRATCH

// #include<iostream>
// using namespace std;
// class stack{
//   public:
//   int *arr;
//   int size;
//   int top;
// };

// void input(int s, stack &S){
//   S.size=s;
//   S.top=-1;                             
//   S.arr=new int[s];
// }
 
// void push(int v,stack &S){
//   if(S.top==S.size-1)
//    cout<<"stack overflow"<<endl;
//   else{
//    S.top++;
//    S.arr[S.top]=v;
//   }  
// }

// void peek(stack &S){
//   cout<<S.arr[S.top]<<endl;
// }

// void pop(stack &S){
//   if(S.top==-1)
//    cout<<"stack underflow"<<endl;
//   else
//    S.top--;
// }

// int main()
// {
//   stack S;
//   input(3,S);
//   push(101,S);
//   push(10,S);
//   push(15,S);
//   pop(S);
//   peek(S);
// }



//STACK FROM LL

//#include<iostream>
// using namespace std;
// class node{
//   public:
//    int size;
//    int data;
//    node *top;
//    node *next;

// };

// void input(node &ll){
//     ll.size=0;
//     ll.top=NULL;  
// }
 
// void push(int v,node &ll){
//     ll.size++;
//     node*temp=new node();
//     temp->data=v;
//     temp->next=ll.top;
//     ll.top=temp;
// }

// void peek(node &ll){
//     cout<<ll.top->data<<" ";
// }

// void pop(node &ll){
//     node *temp=ll.top;
//     ll.top=ll.top->next;
//     delete temp;
//     ll.size--;
// }

// int main()
// {
//     node l;
//     input(l);
//     push(4,l);
//     push(6,l);
//     push(9,l);
//     while(l.size>0){
//       peek(l);
//       pop(l);
//     }

// }



//REVERSE STRING USING STACK

// #include<iostream>
// using namespace std;
// class stack{
//   public:
//   char *arr;
//   int size;
//   int top;
// };

// void input(int s,stack &S){
//   S.size=s;
//   S.top=-1;                             
//   S.arr=new char[s];
// }
 
// void push(int v,stack &S){
//   if(S.top==S.size-1)
//    cout<<"stack overflow"<<endl;
//   else{
//    S.top++;
//    S.arr[S.top]=v;
//   }  
// }

// void peek(stack &S){
//   cout<<S.arr[S.top]<<endl;
// }

// void pop(stack &S){
//   if(S.top==-1)
//    cout<<"stack underflow"<<endl;
//   else
//    S.top--;
// }

// int main()
// {
//   char arr[]={'h','e','l','l','o'};
//   stack S;
//   input(sizeof(arr),S);
//   for(int i=0;i<sizeof(arr);i++){
//    cout<<arr[i];
//    push(arr[i],S);
//   }
//   cout<<endl;
//   for(int i=0;i<sizeof(arr);i++){
//     arr[i]=S.arr[S.top];
//     pop(S);
//   }
  
//   for(int i=0;i<sizeof(arr);i++)
//    cout<<arr[i];
// }



//INSERT AT BOTTOM OF STACK (adding 6 in last)

// #include<iostream>
// #include<vector>
// using namespace std;
// class stack{
//   public:
//   int *arr;
//   int size;
//   int top;
// };

// void input(int s,stack &S){
//   S.size=s;
//   S.top=-1;                             
//   S.arr=new int[s];
// }
 
// void push(int x,stack &S){
//   if(S.top==S.size-1)
//    cout<<"stack overflow"<<endl;
//   else{
//    S.top++;
//    S.arr[S.top]=x;
//   }  
// }

// void peek(stack &S){
//   cout<<S.arr[S.top]<<endl;
// }

// void pop(stack &S){
//   if(S.top==-1)
//    cout<<"stack underflow"<<endl;
//   else
//    S.top--;
// }

// int main()
// {
//   int arr[]={1,2,3,4,5};
//   stack S;
//   input((sizeof(arr)/4)+1,S);
//   vector<int>v;

//   for(int i=0;i<sizeof(arr)/4;i++)
//    push(arr[i],S);

//   for(int i=0;i<sizeof(arr)/4;i++){
//    v.push_back(S.arr[S.top]);
//    pop(S);  
//   }
//   push(6,S);
//   for(int i=0;i<sizeof(arr)/4;i++)
//    push(arr[i],S);

//   for(int i=S.top;i>=0;i--){
//     peek(S);
//     pop(S);
//   }
// }



//MAKE VECTOR BEAUTIFUL USING STACK

// #include<iostream>
// #include<vector>
// using namespace std;
// class stack{
//   public:
//   string *arr;
//   int size;
//   int top;
// };

// void input(int s,stack &S){
//   S.size=s;
//   S.top=-1;                             
//   S.arr=new string[s];
// }
 
// void push(string x,stack &S){
//   if(S.top==S.size-1)
//    cout<<"stack overflow"<<endl;
//   else{
//    S.top++;
//    S.arr[S.top]=x;
//   }  
// }

// void peek(stack &S){
//   cout<<S.arr[S.top]<<endl;
// }

// void pop(stack &S){
//   if(S.top==-1)
//    cout<<"stack underflow"<<endl;
//   else
//    S.top--;
// }

// int main()
// {
//    vector<string>v={"ab","ac","da","da","ac","db","ea"};
//    stack S;
//    input(v.size(),S);

//    for(int i=0;i<v.size();i++){
//     if(v[i]==S.arr[S.top])
//      pop(S);
//     else
//      push(v[i],S);
//    }

//    while(S.top>-1){
//      peek(S);
//      pop(S);
//    }
// }



//MINIMUM TO ADD MAKE PARENTHESIS VALID (only 1 type)

// #include<iostream>
// using namespace std;
// class stack{
//   public:
//   char *arr;
//   int size;
//   int top;
// };

// void input(int s,stack &S){
//   S.size=s;
//   S.top=-1;                             
//   S.arr=new char[s];
// }
 
// void push(char x,stack &S){
//   if(S.top==S.size-1)
//    cout<<"stack overflow"<<endl;
//   else{
//    S.top++;
//    S.arr[S.top]=x;
//   }  
// }

// void peek(stack &S){
//   cout<<S.arr[S.top]<<endl;
// }

// void pop(stack &S){
//   if(S.top==-1)
//    cout<<"stack underflow"<<endl;
//   else
//    S.top--;
// }

// int main()
// {
//   string str="((()))(";
//   stack S;
//   int y=0;
//   input(str.size(),S);
//   for(int i=0;i<str.size();i++){
//     if(str[i]=='(')
//      push(str[i],S);
//     else if(str[i]==')' and S.top!=-1)
//      pop(S);
//     else
//      y++;
//   }
//   cout<<S.top+1+y; 
// }



//MINIMUM TO ADD ALL PARENTHESIS VALID

// #include<iostream>
// using namespace std;
// class stack{
//   public:
//   char *arr;
//   int size;
//   int top;
// };

// void input(int s,stack &S){
//   S.size=s;
//   S.top=-1;                             
//   S.arr=new char[s];
// }
 
// void push(char x,stack &S){
//   if(S.top==S.size-1)
//    cout<<"stack overflow"<<endl;
//   else{
//    S.top++;
//    S.arr[S.top]=x;
//   }  
// }

// void peek(stack &S){
//   cout<<S.arr[S.top]<<endl;
// }

// void pop(stack &S){
//   if(S.top==-1)
//    cout<<"stack underflow"<<endl;
//   else
//    S.top--;
// }

// int main()
// {
//    string str=")()(}{}{}[[]";
//    stack S;
//    input(str.size(),S);
//    int x=0,a=0,b=0,c=0;
   
//    for(int i=0;i<str.size();i++){
//      if(str[i]=='(' or str[i]==')'){
//       if(a==0)
//        S.top=-1;
//       a++;
//       if(str[i]=='(')
//        push('(',S);
//       else if(str[i]==')' and S.arr[S.top]=='(')
//        pop(S);
//       else
//        x++;
//       if(str[i+1]!='(' and str[i+1]!=')'){
//          cout<<endl<<S.top+1<<" - )"<<endl;
//          cout<<x<<" - ("<<endl;
//          x=0;
//       }
//      }
//      else if(str[i]=='{' or str[i]=='}'){
//       if(b==0)
//        S.top=-1;
//       b++;
//       if(str[i]=='{')
//        push('{',S);
//       else if(str[i]=='}' and S.arr[S.top]=='{')
//        pop(S);
//       else
//        x++;
//       if(str[i+1]!='{' and str[i+1]!='}'){
//          cout<<endl<<S.top+1<<" - }"<<endl;
//          cout<<x<<" - {"<<endl;
//          x=0;
//       }
//      }
//      else if(str[i]=='[' or str[i]==']'){
//        if(c==0)
//        S.top=-1;
//       c++;
//       if(str[i]=='[')
//        push('[',S);
//       else if(str[i]==']' and S.arr[S.top]=='[')
//        pop(S);
//       else
//        x++;
//       if(str[i+1]!='[' and str[i+1]!=']'){
//          cout<<endl<<S.top+1<<" - ]"<<endl;
//          cout<<x<<" - ["<<endl;
//          x=0;
//       }
//      }
//    }
// }



//NUMBERING OF RESPECTIVE BRACKETS

// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//   string str="(aa(bdc))P(de)";
//   stack<int>s;
//   int count=0,a;

//   for(int i=0;i<str.size();i++){
//     if(str[i]=='('){
//       count++;
//       s.push(count);
//       cout<<count<<" ";
//     }
//     else if(str[i]==')'){
//       cout<<s.top()<<" ";
//       s.pop();
//     }
//   }
// }



//GET MINIMUM AT POP

// #include<iostream>
// using namespace std;
// class stack{
//   public:
//   int *arr;
//   int size;
//   int top;
// };

// void input(int s,stack &S){
//   S.size=s;
//   S.top=-1;                             
//   S.arr=new int[s];
// }
 
// void push(int x,stack &S){
//   if(S.top==S.size-1)
//    cout<<"stack overflow"<<endl;
//   else{
//    S.top++;
//    S.arr[S.top]=x;
//   }  
// }

// void peek(stack &S){
//   cout<<S.arr[S.top]<<endl;
// }

// void pop(stack &S){
//   if(S.top==-1)
//    cout<<"stack underflow"<<endl;
//   else
//    S.top--;
// }

// int main()
// {
//    int arr[]={8,4,3,7,2,6,7};
//    stack S,R;
//    input((sizeof(arr)/4),S);
//    input((sizeof(arr)/4),R);

//    push(arr[0],R);
//    for(int i=0;i<sizeof(arr)/4;i++){
//     if(arr[i]<R.arr[R.top] and i>0)
//      push(arr[i],R);
//      push(arr[i],S);
//    }
     
//    for(int i=0;i<sizeof(arr)/4;i++){
//     peek(R);
//     if(S.arr[S.top]==R.arr[R.top])
//      pop(R);
//     pop(S);
//    } 
// }



//NEXT BIGGER ELEMENT 

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// int main()
// {
//     int arr[]={8,6,4,7,4,9,10,8,12};
//     vector<int>v(sizeof(arr)/4,-1);
//     stack<int>s;
//     s.push(0);

//     for(int i=1;i<sizeof(arr)/4;i++){
//       if(arr[i]>arr[s.top()]){
//         while(!s.empty() and arr[s.top()]<arr[i]){
//         v[s.top()]=arr[i];
//         s.pop();}
//         s.push(i);
//       }
//       else
//         s.push(i); 
//     }
//     for(int i=0;i<v.size();i++)
//      cout<<v[i]<<" ";
    
// }



//NEXT GREATOR ELEMENT BY ROTATION 

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// int main()
// {
//     int arr[]={6,10,7,4,8,9,4};
//     vector<int>v1;
//     for(int j=0;j<2;j++)
//     for(int i=0;i<sizeof(arr)/4;i++)
//       v1.push_back(arr[i]);
    
//     vector<int>v(sizeof(arr)/4,-1);
//     stack<int>s;
//     s.push(0);

//     for(int i=1;i<v1.size();i++){
//       if(v1[i]>v1[s.top()]){
//         while(!s.empty() and v1[s.top()]<v1[i]){
//         v[s.top()]=v1[i];
//         s.pop();}
//         s.push(i);
//       }
//       else
//         s.push(i); 
//     }
//     for(int i=0;i<v.size();i++)
//      cout<<v[i]<<" ";
    
// }



//LARGEST RECTANGLE IN HISTOGRAM

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// int main()
// {       

//     vector<int>v={2,3,4,2,6,5,4,5,4};
//     vector<int>ans(v.size(),0);         
//     stack<int>s ;
//     s.push(0);

//     for(int i=1;i<v.size();i++){
//       while(!s.empty() and v[s.top()]>v[i]){
//        ans[s.top()]=ans[s.top()]+(i-s.top());
//        s.pop();}
//       s.push(i);
//     }
//     while(!s.empty()){
//       ans[s.top()]=ans[s.top()]+(v.size()-s.top());
//       s.pop();
//     }

//     s.push(v.size()-1);
    
//     for(int i=v.size()-2;i>=0;i--){
//       while(!s.empty() and v[s.top()]>v[i]){
//        ans[s.top()]=ans[s.top()]+(s.top()-i-1);
//        s.pop();}
//       s.push(i);
//     }
//     while(!s.empty()){
//      ans[s.top()]=ans[s.top()]+(s.top());
//      s.pop();
//     }

//     for(int i=0;i<ans.size();i++)
//      cout<<ans[i]<<" ";
//     cout<<endl;

//     int m=v[0]*ans[0];
//     for(int i=0;i<ans.size();i++)
//       m=max(m,v[i]*ans[i]);
//     cout<<m;
// }



//MATRIX LARGEST RECTANGLE

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// int main()
// {       
//     int arr[4][4]={0,1,1,0, 1,1,1,1 ,1,1,1,1, 1,1,0,1};
//     vector<int>v(sizeof(arr[0])/4,0);
//     vector<int>ans(v.size(),0);         
//     stack<int>s ;
//     int mx=0; 
    
//     for(int j=0;j<(sizeof(arr)/4)/(sizeof(arr[0])/4);j++){
//      for(int k=0;k<sizeof(arr[0])/4;k++){
//       if(arr[j][k]==0)
//       v[k]=0;
//       else
//       v[k]=v[k]+arr[j][k];
//      }

//     s.push(0);

//     for(int i=1;i<v.size();i++){
//       while(!s.empty() and v[s.top()]>v[i]){
//        ans[s.top()]=ans[s.top()]+(i-s.top());
//        s.pop();}
//       s.push(i);
//     }
//     while(!s.empty()){
//       ans[s.top()]=ans[s.top()]+(v.size()-s.top());
//       s.pop();
//     }
//     s.push(v.size()-1);
//     for(int i=v.size()-2;i>=0;i--){
//       while(!s.empty() and v[s.top()]>v[i]){
//        ans[s.top()]=ans[s.top()]+(s.top()-i-1);
//        s.pop();}
//       s.push(i);
//     }
//     while(!s.empty()){
//      ans[s.top()]=ans[s.top()]+(s.top());
//      s.pop();
//     }

//     int m=v[0]*ans[0];
//     for(int i=0;i<ans.size();i++)
//       m=max(m,v[i]*ans[i]);
//     mx=max(m,mx);
//     cout<<m<<endl;
//     for(int i=0;i<ans.size();i++)
//      ans[i]=0;
//     }

//    cout<<"   "<<mx;
// }



//CELEBRITI PROBLEM

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// int main()
// {
//   int arr[5][5]={0,1,0,1,1,  0,0,0,1,1 ,0,1,0,1,0, 0,0,0,0,0, 1,0,1,1,0};
//   stack<int>s;
//   int x,y;
//   x=(sizeof(arr[0])/4);
//   for(int i=0;i<x;i++){
//    for(int j=0;j<x;j++)
//     cout<<arr[i][j]<<" ";
//     cout<<endl;
//   }
//   for(int i=0;i<x;i++)
//    s.push(i);

//    x=s.top();
//    s.pop();

//   while(!s.empty()){
//     y=s.top();
//     s.pop();
//     if(arr[x][y]==1 and arr[y][x]==0)
//      x=y;
//     else if((arr[x][y]==(0 or 1) and arr[y][x]==(0 or 1)) and !s.empty()){
//       x=s.top();
//       s.pop();
//     }  
//   }

//   bool flag=true;
//   for(int i=0;i<sizeof(arr[0])/4;i++){
//     if(i!=x and arr[i][x]!=1)
//      flag=false;
//     if(arr[x][i]!=0 and i!=x)
//      flag=false;
//   }

//   if(flag==false)
//    cout<<-1;
//   else
//    cout<<x; 

// }



//PUSH,POP & MIN IN O(1)

// #include<iostream>
// #include<stack>
// using namespace std;

// void push(int y,stack<int> &s){
//     int min;
//     if(s.empty())
//      min=y;
//     else{
//      if(s.top()%100<y)
//       min=s.top()%100;
//      else
//       min=y;
//     }
//     s.push(y*100+min);
// }

// void pop(stack<int> &s){
//     s.pop();
// }

// void min(stack<int> &s){
//    cout<<s.top()%100<<endl;
// }

// void top(stack<int>&s){
//     cout<<s.top()/100<<endl;
// }

// int main()
// {
//     stack<int> s;
//     push(2,s);
//     push(10,s);
//     push(15,s);
//     push(9,s);
//     min(s);
//     top(s);
// }



//IMPLIMENT 2 STACK USING 1 ARRAY

// #include<iostream>
// using namespace std;
// class stack{
//   public:
//   int *arr;
//   int size;
//   int top;

// };

// void input(int s,stack &S){
//   S.size=s;
//   S.top=-1;                             
//   S.arr=new int[s];
// }

// void input1(int s,stack &S){
//   S.size=s;
//   S.top=s;                             
//   S.arr=new int[s];
// }
 
// void push(int x,stack &S,stack &S1){
//   if(S.top+1==S1.top)
//    cout<<"stack 1 overflow"<<endl;
//   else{
//    S.top++;
//    S.arr[S.top]=x;
//   }  
// }

// void peek(stack &S){
//   if(S.top==-1)
//    cout<<"stack 1 empty"<<endl;
//   else
//    cout<<S.arr[S.top]<<endl;
// }

// void pop(stack &S){
//   if(S.top==-1)
//    cout<<"stack 1 underflow"<<endl;
//   else{
//    cout<<"popped"<<endl;
//    S.top--;
///  }
// }

// void push1(int x,stack &S,stack &S1){
//   if(S1.top-1==S.top)
//    cout<<"stack 2 overflow"<<endl;
//   else{
//    S1.top--;
//    S1.arr[S1.top]=x;
//   }  
// }

// void pop1(stack &S){
//   if(S.top==S.size)
//    cout<<"stack 2 underflow"<<endl;
//   else{
//    S.top++;
//    cout<<"popped"<<endl;
//   }
// }

// void peek1(stack &S){
//   if(S.top==S.size)
//    cout<<"stack 2 empty"<<endl;
//   else
//    cout<<S.arr[S.top]<<endl;
// }

// int main()
// {
//    stack S;
//    stack S1;
//    int n=6;
//    input(n,S);
//    input1(n,S1);

//    push(1,S,S1);
//    push(2,S,S1);
//    push(3,S,S1);
//    push(4,S,S1);
//    push1(6,S,S1);
//    push1(5,S,S1);

//    pop(S);
//    pop1(S1);

//    peek(S);
//    peek1(S1);

// }                  



//MAXIMUM OF MINIMUM OF SLIDING WINDOW

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// int main()
// {           // 0,1, 2, 3, 4, 5, 6
//    int arr[]={10,20,15,50,10,70,30};
//    vector<int>v(sizeof(arr)/4,0);
//    stack<int>s;
//    int index,r;
//    s.push(0);
//    for(int i=1;i<v.size();i++){
//      while(!s.empty() and arr[s.top()]>arr[i]){
//        index=s.top();
//        s.pop();
//        if(!s.empty())
//         r=i-index+(index-s.top()-1);
//        else
//         r=i;
//        v[r-1]=max(v[r-1],arr[index]);
//      }
//      s.push(i);
//    }

//    while(!s.empty()){
//      index=s.top();
//      s.pop();
//      if(!s.empty())
//       r=(v.size()-1-index)+(v.size()-s.top()-1);
//      else
//       r=v.size();
//       v[r-1]=max(v[r-1],arr[index]);
//    }

//     for(int i=v.size()-2;i>=0;i--)
//      v[i]=max(v[i],v[i+1]);
     
//    for(int i=0;i<v.size();i++)
//     cout<<v[i]<<" ";
// }



//NSTACK IN ARRAY

// #include<iostream>
// #include<bits/stdc++.h>
// #include<stack>
// using namespace std;
// class node{
//    public:
//    int index;
//    node* next;
// };

// class nstack{
//    public:
//    int *arr;
//    node **top;
//    stack<int> s; 
// };

// void input(int a,int t,nstack &ns){
//   ns.arr=new int[a];
//   ns.top=new node*[t];
//   ns.s;

//   for(int i=0;i<t;i++)
//    ns.top[i]=NULL;
//   for(int i=0;i<a;i++)
//    ns.s.push(i);  

// }

// void push(int x,int s,nstack &ns){
//   s=s-1;
//   if(ns.s.empty())
//    cout<<"stack overflow"<<endl;
//   else{
//     int p=ns.s.top();
//     ns.s.pop();
//     ns.arr[p]=x;

//     node *temp=new node;
//     temp->index=p;
//     temp->next=ns.top[s];
//     ns.top[s]=temp;
//     cout<<"pushed"<<endl;
//   }
// }

// void pop(int s,nstack &ns){
//   s=s-1;
//   if(ns.top[s]==NULL)
//    cout<<"stack underflow"<<endl;
//   else{
//    ns.s.push(ns.top[s]->index);
//    ns.top[s]=ns.top[s]->next;
//    cout<<"popped"<<endl;
//   }
// }

// void peek(int s,nstack &ns){
//   s=s-1;
//   if(ns.top[s]!=NULL)
//    cout<<ns.arr[ns.top[s]->index]<<endl;
//   else
//    cout<<"stack underflow"<<endl;
// }
         
// int main()
// { 
//   nstack ns;
//   input(8,3,ns);
//   push(4,1,ns);
//   peek(1,ns);
//   pop(1,ns);
//   peek(1,ns);
  
// }



//DELETE MIDDLE ELEMENT OF STACK

// #include<iostream>
// #include<stack>
// using  namespace std;
// int main()
// {
//   stack<int>s;
//   for(int i=1;i<=6;i++)
//    s.push(i);
//   int x=s.size()/2;
//   for(int i=0;i<x;i++)
//    s.pop();
//   cout<<s.top();
// }



//INSERT AT BOTTOM OF STACK O(1)

// #include<iostream>
// #include<stack>
// using  namespace std;
// void insert(stack<int>&s){
//   if(s.size()==0){
//     s.push(0);
//     return ;
//   }
//   int x=s.top();
//   s.pop();
//   insert(s); 
//   s.push(x);  
// }

// int main()
// {
//   stack<int>s;
//   for(int i=1;i<=6;i++)
//    s.push(i);
//   insert(s);
//   while(!s.empty()){
//    cout<<s.top()<<" ";
//    s.pop();
//   }  

// }



//REVERSE STACK O(1)

// #include<iostream>
// #include<stack>
// using  namespace std;
// void insert(int x,stack<int>&s){
//   if(s.size()==0){
//     s.push(x);
//     return ;
//   }
//   int a=s.top();
//   s.pop();
//   insert(x,s); 
//   s.push(a); 
// }

// void reverse(stack<int>&s){
//   if(s.size()==0)
//     return;
//   int x=s.top();
//   s.pop();
//   reverse(s); 
//   insert(x,s); 
// }

// int main()
// {
//   stack<int>s;
//   for(int i=1;i<=6;i++)
//    s.push(i);
//   reverse(s);
//   while(!s.empty()){
//     cout<<s.top()<<" ";
//     s.pop();
//   }  
// }



//REDUNDANT BRACKET IN EXPRESSION

// #include<iostream>
// using namespace std;
// class stack{
//   public:
//    char *arr;
//    int top;
//    int size;
// };

// void input(int s,stack &S){
//    S.top=-1;
//    S.size=0;
//    S.arr=new char[s];

// }

// void push(char x,stack &S){
//   S.top++;
//   S.size++;
//   S.arr[S.top]=x;

// }

// void pop(stack &S){
//   S.top--;
//   S.size--;

// }

// int main()
// {
//   string str="((a))";
//   stack S;
//   input(str.size(),S);
//   for(int i=0;i<str.size();i++){
//    if(str[i]=='(' or str[i]=='+' or str[i]=='-' or str[i]=='/' or str[i]=='*' or str[i]=='%')
//     push(str[i],S);
//    else if(str[i]==')')
//     if(S.arr[S.top]!='('){
//      while(S.size!=0 and S.arr[S.top]!='(')
//       pop(S);
//       pop(S);
//     }
//   }

//   if(S.arr[S.top]=='(')
//    cout<<"yes";
//   else
//    cout<<"no";

// }



//SORT A STACK

// #include<iostream>
// #include<stack>
// using namespace std;
// void sort(int x,stack<int> &s){
//   if(s.empty() or s.top()>x){
//    s.push(x);
//    return;
//   }
//    int a=s.top();
//    s.pop();
//    sort(x,s);
//    s.push(a);
  
// }

// void reverse(stack<int> &s){
//   if(s.empty())
//    return;
//   int x=s.top();
//   s.pop();
//   reverse(s);
//   sort(x,s);
// }

// int main()
// {
//   stack<int>s;
//   s.push(9);
//   s.push(12);
//   s.push(10);
//   s.push(28);
//   reverse(s);

//   while(!s.empty()){
//     cout<<s.top()<<" ";
//     s.pop();
//   }
  
// }



//MERGE INTERVAL USING STACK

// #include<iostream>
// #include<vector>
// #include<stack>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<vector<int>> arr={{1,3},{2,6},{8,10},{8,9},{9,11},{15,18},{2,4},{16,17}};
//     stack<int>s;
//     sort(arr.begin(),arr.end());

//     //{1,3, 2,4 ,2,6 ,8,9, 8,10 ,9,11 ,15,18, 16,17}
//     s.push(arr[0][0]);
//     s.push(arr[0][1]);

//     for(int i=1;i<arr.size();i++){
//       if(s.top()>arr[i][0]){
//        s.pop();
//        s.push(arr[i][1]);
//       }
//       else{
//        s.push(arr[i][0]);
//        s.push(arr[i][1]);
//       }
//     }

//     while(!s.empty()){
//      cout<<"["<<s.top()<<",";
//      s.pop();
//      cout<<s.top()<<"],";
//      s.pop();
//     }

// }



//RANGE BOUNDED TOTAL CORRECT BRACKET SUBSEQUENCE

// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//    string str="())(())(())(";
//    stack<char>s;
//    int x=0;
//    int si=0;
//    int ei=11;

//    for(int i=si;i<=ei;i++){
//     if(str[i]=='(')
//      s.push('(');
//     else if(str[i]==')' and s.empty())
//      x=x;
//     else if(str[i]==')' and s.top()=='(' and !s.empty()){
//      s.pop();
//      x+=2;
//     }
//    } 
//     cout<<x;

// }



//FIND AND DELETE MID IN O(1)

// #include<iostream>
// using namespace std;
// class node{
//   public:
//    int data;
//    int size;
//    node *mid;
//    node *pre;
//    node *next;
//    node *head;

// };

// void input(node &ll){
//    ll.size=0;
//    ll.head=NULL;
//    ll.pre=NULL;
//    ll.mid=NULL;

// }

// void push(int x,node &ll){
//     ll.size++;
//     node *temp=new node();
//     temp->data=x;
//     temp->next=ll.head;
//     ll.head=temp;
//     if(ll.head->next!=NULL)
//     ll.head->next->pre=temp;
//     ll.head->pre=NULL;
  
//     if(ll.size==(1 or 2))
//      ll.mid=ll.head;

//     else if((ll.size)%2!=0)
//      ll.mid=ll.mid->pre;
//     cout<<"pushed"<<endl;
    
// }

// void pop(node &ll){
//    node *temp=ll.head;
//    ll.head=ll.head->next;
//    delete temp;
//    cout<<"popped"<<endl;
     
// }

// void middle(node &ll){
//     cout<<ll.mid->data<<endl;
// }

// void peek(node &ll){
//     cout<<ll.head->data<<endl;
// }

// void delete_m(node &ll){
//     node *temp=ll.mid;
//     temp->pre->next=temp->next;
//     temp->next->pre=temp->pre;
//     if(ll.size%2==0)
//      ll.mid=temp->pre;
//     else
//      ll.mid=temp->next;
//     ll.size--;
//     delete temp; 
//     cout<<"deleted"<<endl;
 
// }

// int main()
// {
//     node ll;
//     input(ll);
//     push(9,ll);
//     push(6,ll);
//     push(7,ll);
//     push(1,ll);
//     push(3,ll);
//     push(2,ll);
//     push(8,ll);
//     push(4,ll);
//     middle(ll);
//     delete_m(ll);
//     middle(ll);
//     delete_m(ll);
//     middle(ll);

// }



//SORT STACK USING ANOTHER STACK

// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//     stack<int>s;
//     stack<int>s1;
//     s.push(2);
//     s.push(4);
//     s.push(3);
//     s.push(1);
//     s.push(5);
    
//     while(!s.empty()){
//      int x=s.top();
//      s.pop();         
//      while(!s1.empty() and s1.top()>x){
//        s.push(s1.top());
//        s1.pop();
//      }
//      if(s1.empty() or s1.top()<x)
//       s1.push(x);
//     }
   
//     while(!s1.empty()){
//      s.push(s1.top());
//      s1.pop();
//     }
//     while(!s.empty()){
//      cout<<s.top()<<" ";
//      s.pop();
//     }
// }



//DESIGN BROWSING HISTORY

// #include<iostream>
// #include<stack>
// using namespace std;
// void back(int x,stack<string> &s,stack<string> &s1){
//     for(int i=0;i<x;i++){
//       if(s.size()==1)
//        break;
//       else{
//         s1.push(s.top());
//         s.pop();
//       }
//     }
//     cout<<s.top()<<endl;
// }

// void forward(int x,stack<string> &s,stack<string> &s1){
//     for(int i=0;i<x;i++){
//       if(s1.empty())
//        break;
//       else{
//         s.push(s1.top());
//         s1.pop();
//       }
//     }
//     cout<<s.top()<<endl;
// }

// int main()
// {
//     stack<string>s,s1;
//     s.push("geeks of geeks");

//     s.push("facebook");
//     s.push("google");
//     s.push("youtube.com");
//     s.push("linkedin.com");
//     s.push("amazon.com");
//     back(2,s,s1);
//     forward(1,s,s1);
    
// }



//STRING EXPRESSION IS VALID

// #include<iostream>
// #include<stack>
// using namespace std;
// void check(stack<char>&s,string &str){
//   bool flag=false;
//   char x;

//     for(int i=0;i<str.size();i++){
//       if(str[i]=='(' and !s.empty()){
//         x=s.top();
//         s.pop();
//         flag=true;
//       }
//       else if(str[i]==')')
//         flag=false;
//       else if(flag==true){
//         if((str[i]!='-' and x=='-' and str[i]!='+' and s.top()!='+' and s.top()!='-')){
//          s.push('-');     
//          s.push(str[i]);       
//       }
//       else if((str[i]!='-' and x=='+' and str[i]!='+' and s.top()!='+' and s.top()!='-')){
//         s.push('+');     
//         s.push(str[i]);       
//       }
//       else if((str[i]=='+' and x=='+') or (str[i]=='-' and x=='-'))
//         s.push('+');            
//       else if((str[i]=='-' and x=='+') or (str[i]=='+' and x=='-'))
//         s.push('-');            
//       else
//         s.push(str[i]);
//       }

//       else if(str[i]!='(' and str[i]!=')')
//         s.push(str[i]);
//     }

// }

// int main()
// {
//     string str1="(a+b)-(-c+d)+(k)";
//     string str2="a+b-(-c)-(d-k)";
//     stack<char>s1,s2;
//     char x;
//     bool flag=false;
//     check(s1,str1);
//     check(s2,str2);
    
//     while(!s1.empty()){
//       if(s1.top()!=s2.top()){
//        cout<<"no";
//        flag=true;
//        break;
//       }  
//      s1.pop();
//      s2.pop();
//     }

//     if(flag==false)
//      cout<<"yes";

// }



//STACK PERMUTATION

// #include<iostream>
// #include<stack>
// #include<vector>
// using namespace std;
// int main()
// {
//   stack<int>s;
//   vector<int>v;
//   bool flag=false;
//   int arr1[]={1,2,3};
//   int arr2[]={3,1,2};
//   int a=0,b=0;

//   for(int i=0;i<sizeof(arr1)/4+sizeof(arr2)/4;i++){
//     if(s.empty()){
//      s.push(arr1[b]);
//      b++;
//     } 
//     else if(!s.empty() and s.top()==arr2[a]){
//       v.push_back(s.top());
//       s.pop();
//       a++;
//     }
//     else{
//      s.push(arr1[b]);
//      b++;
//     }
//   }

//   for(int i=0;i<sizeof(arr2)/4;i++)
//     if(v[i]!=arr2[i]){
//       cout<<"no";
//       flag=true;
//       break;
//     }
    
//   if(flag==false) 
//     cout<<"yes";
    
// }



//NEXT SMALLER OF NEXT GREATOR ELEMENT

// #include<iostream>
// #include<stack>
// #include<vector>
// using  namespace std;
// int main()
// {
//     int arr[]={5,1,9,2,5,1,7};
//     vector<int>ans(sizeof(arr)/4,0);
//     vector<int>v(sizeof(arr)/4,0);
//     stack<int> s;

//     s.push(0);
//     for(int i=1;i<v.size();i++){
//         while(!s.empty() and arr[s.top()]>arr[i]){
//           v[s.top()]=arr[i];
//           s.pop();
//         }
//         s.push(i);
//     }
//     while(!s.empty())
//      s.pop();

//     s.push(0);
//     for(int i=1;i<v.size();i++){
//         while(!s.empty() and arr[s.top()]<arr[i]){
//           ans[s.top()]=v[i];
//           s.pop();
//         }
//         s.push(i);
//     }

//     for(int i=0;i<ans.size();i++){
//      if(ans[i]==0)
//      ans[i]=-1;
//      cout<<ans[i]<<" ";
//     }
   
// }



//STOCK SPAN PROBLEM

// #include<iostream>
// #include<stack>
// #include<vector>
// using namespace std;
// int main()
// {
//     int arr[]={100,80,60,70,60,75,85};
//     stack<pair<int,int>>s;
//     vector<int>v(sizeof(arr)/4,0);
//     pair<int,int>p;
//     int x=0;
    
//     s.push({arr[0],1}); 
//     v[0]=1;

//     for(int i=1;i<sizeof(arr)/4;i++){
//       p=s.top();
//         if(arr[i]>p.first){
//          while(arr[i]>p.first){
//           x=x+p.second;
//           s.pop();
//           p=s.top();
//          }
//          v[i]=x+1;
//          s.push({arr[i],v[i]});                                                                                
//          x=0;
//         }
//       else{
//         s.push({arr[i],1});
//         v[i]=1;
//       }

//     }

//     for(int i=0;i<v.size();i++)
//      cout<<v[i]<<" "; 
    
// }



//TOTAL SUBARRY WHOSE 1ST ELEMENT IS MINIMUM

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// int main()
// {
//     int arr[]={1,3,5,2};
//     vector<int>v(sizeof(arr)/4,0);
//     stack<int>s;
//     s.push(0);

//     for(int i=1;i<sizeof(arr)/4;i++){
//       if(arr[i]<arr[s.top()]){
//         while(!s.empty() and arr[s.top()]>arr[i]){
//         v[s.top()]=i-s.top();
//         s.pop();}
//         s.push(i);
//       }
//       else
//         s.push(i); 
//     }
//     while(!s.empty()){
//       v[s.top()]=(sizeof(arr)/4)-s.top();
//       s.pop();
//     }
//     int x=0;
//     for(int i=0;i<v.size();i++)
//      x=x+v[i];
//     cout<<x;    
// }



//INDEX NO. OF CLOSING BRACKET FOR GIVEN OPENING BRACKET

// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//   string str="[ABC[23]][89]";
//   stack<int>s;
//   int index=9;
//   for(int i=index;i<str.size();i++){
//     if(str[i]=='[')
//      s.push(str[i]);
//     else if(str[i]==']')
//      s.pop();
//     if(s.empty()){
//       cout<<index;
//       break;
//     }
//     index++;
//   }
// }



//STACK USING QUEUE

// #include<iostream>
// #include<queue>
// using namespace std;
// void push(int x,queue<int> &s){
//     s.push(x);
//     cout<<"pushed"<<endl;
    
// }

// void pop(queue<int> &s){
//     for(int i=0;i<s.size()-1;i++){
//       s.push(s.front());
//       s.pop();
//     }   
//     if(s.size()!=0){
//      s.pop();
//      cout<<"popped"<<endl;
//     }
//     else
//      cout<<"stack underflow"<<endl;
// }

// void top(queue<int>&s){
//     for(int i=0;i<s.size()-1;i++){
//       s.push(s.front());
//       s.pop();
//     }   
//     if(s.size()!=0){
//      cout<<s.front()<<endl;
//      s.pop();
//     }
//     else
//      cout<<"stack underflow"<<endl;

// }

// int main()
// {
//     queue<int>s;
//     push(1,s);
//     push(2,s);
//     push(3,s);
//     push(4,s);
//     push(5,s);
//     pop(s);
//     top(s);

// }



//STACK USING 2 QUEUE

// #include<iostream>
// #include<queue>
// using namespace std;
// class stack{
//   public:
//   queue<int>s1;
//   queue<int>s2;

//   void push(int x){
//     s1.push(x);
//     cout<<"pushed"<<endl;
    
//   }

//   void pop(){
    
//     while(s1.size()>1){
//       s2.push(s1.front());
//       s1.pop();
//     }  

//     if(s1.size()!=0){
//      s1.pop();
//      cout<<"popped"<<endl;
//      s1=s2;
//     }
//     else
//      cout<<"stack underflow"<<endl;

//   }

//   void top(){
//     while(s1.size()>1){
//       s2.push(s1.front());
//       s1.pop();
//     }   

//     if(s1.size()!=0){
//      cout<<s1.front()<<endl;
//      s2.push(s1.front());
//      s1.pop();
//      s1=s2;
//     }
//     else
//      cout<<"stack underflow"<<endl;

//   }

// };

// int main()
// {
//    stack s;
//     s.push(1);
//     s.push(2);
//     s.push(5);
//     s.top();
//     s.push(6);
//     s.pop();
//     s.push(6);
//     s.top();
//     s.push(7);
//     s.pop();
//     s.top();

//}





//QUEUE

//QUEUE USING ARRAY

// #include<iostream>
// using namespace std;
// class queue{
//   public:
//    int *arr;
//    int front;
//    int size;
//    int push;
// };

// void input(int s,queue &q){
//     q.size=s;
//     q.arr=new int[s];
//     q.front=0;
//     q.push=-1;
// }

// void push(int x,queue &q){
//    if(q.push+1==q.size and q.front==0)
//     cout<<"is full"<<endl;
//    else if(q.push+1==q.size and q.front!=0){
//     q.push=0;
//     q.arr[q.push]=x;
//     cout<<"pushed1"<<endl;
//    }
//    else{
//     q.push++;
//     q.arr[q.push]=x;
//     cout<<"pushed"<<endl;
//    }
// }

// void pop(queue &q){
//     if(q.push==-1)
//       cout<<"is empty"<<endl;
//     else if(q.front+1==q.size and q.push!=q.size-1){
//       cout<<"popped1"<<endl;
//       q.front=0;
//     }
//     else{
//       if(q.front==q.push){
//         q.front=0;
//         q.push=-1;
//         cout<<"popped"<<endl;
//       }
//       else{
//        q.front++;
//        cout<<"popped"<<endl;
//       }
//     }
// } 

// void front(queue &q){
//     if(q.push!=-1)
//      cout<<q.arr[q.front]<<endl;
//     else
//      cout<<"empty "<<endl;
// }


// int main()
// {
//     queue q;
//     input(5,q);
//     push(3,q);
//     push(5,q);
//     push(6,q);
//     push(7,q);
//     push(8,q);
//     pop(q);
//     push(9,q);
//     pop(q);
//     pop(q); pop(q); pop(q);
//     front(q);
  
// }



//QUEUE USING LINK LIST

// #include<iostream>
// using namespace std;
// class node{
//   public:
//    int data;
//    node *next; 
//    node *head;
//    node *rear;
// };

// void input(node &l){
//   l.rear=NULL;
//   l.head=NULL;
// }

// void push(int x,node &l){
//   if(l.rear==NULL){
//     l.head=new node();
//     l.head->data=x;
//     l.head->next=NULL;
//     l.rear=l.head;
//   }
//   else{
//     l.rear->next=new node();
//     l.rear->next->data=x;
//     l.rear=l.rear->next;
//     l.rear->next=NULL;
//   }
//   cout<<"pushed"<<endl;
// }

// void pop(node &l){
//   if(l.head!=NULL){
//   node*temp=l.head;
//   l.head=l.head->next;
//   delete temp;
//   cout<<"popped"<<endl;
//   }
//   else
//    cout<<"queue empty"<<endl;
// } 

// void front(node &l){
//   cout<<l.head->data<<endl;
// }

// int main()
// {
//    node l;
//    input(l);
//    push(5,l);
//    push(6,l);
//    front(l);
//    pop(l);
//    front(l);

// }



//QUEUE USING 2 STACK

// #include<iostream>
// #include<stack>
// using namespace std;
// void push(int x,stack<int>&s1){
//    s1.push(x);
//    cout<<"pushed"<<endl;
  
// }
// void pop(stack<int>&s1,stack<int> &s2){
//   if(s2.empty()){
//     while(!s1.empty()){
//         s2.push(s1.top());
//         s1.pop();
//     }
//     if(s2.empty())
//      cout<<"queue underflow"<<endl;
//     else
//      s2.pop();
//   }
//   else
//    s2.pop();
//    cout<<"popped"<<endl;
// }

// void front(stack<int>&s1,stack<int> &s2){
//    if(s2.empty()){
//     while(!s1.empty()){
//         s2.push(s1.top());
//         s1.pop();
//     }
//      if(s2.empty())
//       cout<<"queue underflow"<<endl;
//      else
//       cout<<s2.top()<<endl;
//     }
//    else
//     cout<<s2.top()<<endl;

// }

// int main()
// {
//     stack<int>s1,s2;
//     push(4,s1);
//     push(5,s1);
//     push(6,s1);
//     pop(s1,s2);
//     front(s1,s2);

// }



//TIME TO BUY TICKET  o(n) SPACE

// #include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//     queue<int>q;
//     int arr[]={1,5,2,3,7};
//     int k=2,time=0;
//     for(int i=0;i<sizeof(arr)/4;i++)
//      q.push(i);

//     while(arr[k]!=0){
//       arr[q.front()]--;
//       if(arr[q.front()]!=0)
//        q.push(q.front());
//       q.pop();
//       time++;
//       if(arr[k]==0)
//        break;

//     }
//     cout<<time;

// }


//TIME TO BUY TICKET o(1) SPACE

// #include<iostream>
// using namespace std;
// int main()
// {
//   int arr[]={1,5,2,3,7};
//   int time=0,k=2;     
//    for(int i=0;i<5;i++){
//      if(i<=k)                         
//       time=time+min(arr[i],arr[k]);  
//      else
//       time=time+min(arr[i],arr[k]-1);
//     }
//   cout<<time;
// }



//PRINT ELEMENT OF WINDOW SIZE K

// #include<iostream>
// #include<queue>
// using namespace std;
// void display(queue<int> &q){
//    for(int i=0;i<q.size();i++){
//      cout<<q.front()<<" ";
//      q.push(q.front());
//      q.pop();
//    }
//    cout<<endl;
// }

// int main()
// {
//     queue<int>q;
//     int arr[]={3,6,2,7,8,11};
//     int k=3;

//     for(int i=0;i<sizeof(arr)/4;i++){
//       if(q.size()!=k)
//        q.push(arr[i]);
//       if(q.size()==k){
//         display(q);
//         q.pop();
//       }
//     }  
// }



//FIRST NEGATIVE ELEMENT OF K SLIDING WINDOW

// #include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//     queue<int>q;
//     int arr[]={2,-3,-4,-2,7,-8,9,-10};
//     int k=3,x=k-1;

//     for(int i=0;i<k-1;i++)
//       if(arr[i]<0)
//        q.push(arr[i]);
    
//     for(int i=0;i<sizeof(arr)/4-(k-1);i++){
//       if(arr[x]<0)
//        q.push(arr[x]);
//       if(q.empty())
//        cout<<0<<" ";
//       else
//        cout<<q.front()<<" ";
//       if(arr[i]==q.front())
//        q.pop();
//        x++;
//     }
// }



//FIRST NON REPEATING CHARCTER OF STRING

// #include<iostream>
// #include<bits/stdc++.h>
// #include<queue>
// using namespace std;
// int main()
// {
//    string a="abcacdbd";
//    string b;
//    queue<char>q;
//    map<char,int>m; 

//    for(int i=0;i<a.size();i++){
//     m[a[i]]++;
//     q.push(a[i]);
//     if(m[a[i]]==1)
//      b.push_back(q.front());
//     else{
//      while(m[q.front()]>1)
//        q.pop();
//      if(q.empty())
//       b.push_back('#');
//      else
//       b.push_back(q.front());
//     }
//    }

//    for(int i=0;i<b.size();i++)
//     cout<<b[i]<<" "; 
    
// }



//DEQUEUE USING DLL

// #include<iostream>
// using namespace std;
// class node{
//   public:
//    int data;
//    node *pre;
//    node *next;
// };

// void input(node &deque){
//     deque.pre=NULL;
//     deque.next=NULL;
// }

// void push_front(int x,node &deque){
//     if(deque.pre==NULL){
//         node *temp=new node();
//         temp->data=x;
//         deque.pre=temp;
//         deque.next=temp;
//         deque.pre->pre=NULL;
//         deque.next->next=NULL;
//     }
//     else{
//         node *temp=new node();
//         temp->data=x;
//         temp->next=deque.pre;
//         deque.pre->pre=temp;
//         deque.pre=temp;
//     }
//     cout<<"pushed"<<endl;
// }

// void push_back(int x,node &deque){
//        if(deque.next==NULL){
//         node *temp=new node();
//         temp->data=x;
//         deque.pre=temp;
//         deque.next=temp;
//         deque.pre->pre=NULL;
//         deque.next->next=NULL;
//     }
//     else{
//         node *temp=new node();
//         temp->data=x;
//         temp->pre=deque.next;
//         deque.next->next=temp;
//         deque.next=temp;
//     }
//     cout<<"pushed"<<endl;
// }

// void pop_front(node &deque){
//     if(deque.pre==NULL)
//      cout<<"queue empty"<<endl;
//     else{
//         node *temp=deque.pre;
//         deque.pre=deque.pre->next;
//         delete temp;
//         cout<<"popped"<<endl;
//     }
//     if(deque.pre==NULL)
//      deque.next=NULL;
// }

// void pop_back(node &deque){
//     if(deque.pre==NULL)
//      cout<<"queue empty"<<endl;
//     else{
//         node *temp=deque.next;
//         deque.next=deque.next->pre;
//         delete temp;
//         cout<<"popped"<<endl;
//     }
//     if(deque.next==NULL)
//      deque.pre=NULL;
// }

// void front(node &deque){
//     if(deque.pre!=NULL)
//      cout<<deque.pre->data<<endl;
//     else
//      cout<<"queue empty"<<endl;
// }

// void back(node &deque){
//     if(deque.next!=NULL)
//      cout<<deque.next->data<<endl;
//     else
//      cout<<"queue empty"<<endl;
// }

// int main()
// {
//     node deque;
//     input(deque);
//     push_back(4,deque);
//     push_back(5,deque);  
//     push_back(6,deque);
//     pop_front(deque);
//     front(deque);
//     push_front(4,deque);
//     front(deque);
//     push_back(7,deque);
//     back(deque);

// }



//DEQUEUE USING ARR

// #include<iostream>
// using namespace std;
// class queue{
//     public:
//     int *arr;
//     int front;
//     int rear;
//     int size;

//     queue(){
//      rear=front=-1;
//      size=7;
//      arr=new int[size];
//     }

// };

// void push_front(int x,queue &dq){
//     if(dq.front==-1){
//         dq.front++;
//         dq.arr[dq.front]=x;
//         dq.rear++;
//         cout<<"pushed"<<endl;
//     }
//     else if((dq.rear+1==dq.front) or (dq.rear+1==dq.size and dq.front==0))
//      cout<<"dequeue full"<<endl;
//     else if(dq.front>dq.rear){
//         dq.front--;
//         dq.arr[dq.front]=x;
//     }
//     else if(dq.rear!=dq.size-1){
//         dq.front=dq.size-1;
//         dq.arr[dq.front]=x;
//     }
//     else{
//       dq.front++;
//       dq.arr[dq.front]=x;
//     }
// }

// void push_back(int x,queue &dq){
//     if(dq.rear==-1){
//         dq.rear++;
//         dq.arr[dq.rear]=x;
//         dq.front++;
//         cout<<"pushed"<<endl;
//     }
//     else if((dq.rear+1==dq.front) or (dq.rear+1==dq.size and dq.front==0))
//      cout<<"dequeue full"<<endl;
//     else if(dq.front>dq.rear){
//         dq.rear++;
//         dq.arr[dq.rear]=x;
//         cout<<"pushed"<<endl;
//     }
//     else if(dq.front!=0){
//         dq.rear=0;
//         dq.arr[dq.rear]=x;
//         cout<<"pushed"<<endl;
//     }
//     else{
//       dq.rear++;
//       dq.arr[dq.rear]=x;
//       cout<<"pushed"<<endl;
//     }
// }

// void pop_front(queue&dq){
//     if(dq.front==-1)
//      cout<<"qeueu empty"<<endl;
//     else if(dq.front==dq.size-1){
//      dq.front=0;
//      cout<<"popped"<<endl;
//     }
//     else{
//      if(dq.rear==dq.front)
//      dq.front=dq.rear=-1;
//      else
//       dq.front++;
//      cout<<"popped"<<endl;
//     }
    
// }

// void pop_back(queue&dq){
//     if(dq.rear==-1)
//      cout<<"qeueu empty"<<endl;
//     else if(dq.rear==0){
//      dq.rear=dq.size-1;
//      cout<<"popped"<<endl;
//     }
//     else{
//      if(dq.rear==dq.front)
//       dq.front=dq.rear=-1;
//      else
//       dq.rear--;
//      cout<<"popped"<<endl;
//     } 
    
// }

// void front(queue&dq){
//     if(dq.front==-1)
//      cout<<"queue empty"<<endl;
//     else
//      cout<<dq.arr[dq.front]<<endl;
// }

// void back(queue&dq){
//     if(dq.rear==-1)
//      cout<<"queue empty"<<endl;
//     else
//      cout<<dq.arr[dq.rear]<<endl;
// }


// int main()
// {
//     queue dq;
//     push_back(4,dq);
//     push_back(5,dq);
//     push_back(6,dq);
//     push_back(7,dq);
//     push_back(8,dq);
//     back(dq);
//     push_front(3,dq);
//     push_front(2,dq);
//     push_front(1,dq);
//     front(dq);
//     pop_front(dq);
//     front(dq);
//     pop_back(dq);
//     back(dq);

// }



//SLIDING WINDOW MAXIMUM WITH SIZE K
 
// #include<iostream>
// #include<deque>
// #include<vector>
// using namespace std;
// int main()
// {
//     int arr[]={1,3,-1,-3,5,3,6,7};
//     vector<int>v;
//     deque<int> dq;
//     int k=3;
    
//     for(int i=0;i<k-1;i++){
//       if(dq.empty())
//         dq.push_back(arr[i]);
//       else if(arr[i]>dq.front()){
//         dq.pop_back();
//         dq.push_back(arr[i]);
//       }
//     }

//     int x=k-1;
//     for(int i=0;x<sizeof(arr)/4;i++){
//       while(!dq.empty() and dq.back()<arr[x])
//         dq.pop_back();
//       dq.push_back(arr[x]);
//       v.push_back(dq.front());
//       if(arr[i]==dq.front())
//        dq.pop_front();
//       x++;
//     }

//     for(int i=0;i<v.size();i++)
//      cout<<v[i]<<" ";
   
// }



//MINIMUM CONSECUTIVE FLIP-FLOPS

// #include<iostream>
// #include<queue>
// #include<vector>
// using namespace std;
// int main()
// {            
//     int arr[]={1,0,1,1,0};
//     int flip=0,k=3;
//     queue<int> q;
//     int s=q.size();

//     for(int i=0;i<sizeof(arr)/4;i++){
//       if(s%2!=0)
//         arr[i]=!arr[i];
//       if(arr[i]==0 and i<=sizeof(arr)/4-k){
//         flip++;
//         arr[i]=!arr[i];
//         q.push(i+(k-1));
//       }
//       if(q.front()==i)
//        q.pop();
//       s=q.size();
//     }
  
//     for(int i=0;i<sizeof(arr)/4;i++)
//      cout<<arr[i]<<" ";
//     cout<<endl<<flip;
  
// }



//REVERSING FIRST K ELEMENT OF QUEUE

// #include<iostream>
// #include<queue>
// using namespace std;
// void reverse(queue<int>&q,int k,int x){
//     if(x==k)
//      return;
//     x++;
//     int a=q.front();
//     q.pop();
//     reverse(q,k,x);
//     q.push(a);

// }

// void output(queue<int> &q,int k){
//     int n=q.size()-k;
//     for(int i=0;i<n;i++){     
//       q.push(q.front());
//       q.pop();       
//     }
// }

// int main()
// {
//     queue<int>q;
//     int k,x=0;
//     for(int i=1;i<=5;i++)
//      q.push(i);
//     k=3;
//     reverse(q,k,x);
//     output(q,k);
//     while(!q.empty()){
//      cout<<q.front()<<" ";
//      q.pop();
//     }

// }



//GAS AND PETROL PUMP

// #include<iostream>
// using namespace std;
// int main()
// {
//    int gas[]={4,8,7,4,7,1};
//    int dist[]={6,6,3,4,5,1};
//    int ful=0,nful=0,start;

//    for(int i=0;i<sizeof(gas)/4;i++){
//       if(gas[i]<dist[i] and ful==0){
//        start=i;
//        nful=nful+(gas[i]-dist[i]);
//       }
//       else{
//        if(gas[i]-dist[i]<0){
//         ful=ful+gas[i]-dist[i];
//         if(ful<0){
//          nful=nful+ful;
//          ful=0;
//         }
//        }
//        else
//         ful=ful+(gas[i]-dist[i]);
//       }
//    }
//   // cout<<ful+nful<<endl;;
//    if(ful+nful<0)
//     cout<<-1;
//    else
//     cout<<start+1;

// }



//ROTTEN ORANGES

// #include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//    int arr[3][3]={0,1,2,   0,1,2,    2,1,1};
//    queue<pair<int,int>> q;
//    int m=sizeof(arr)/4;
//    int n=sizeof(arr[0])/4;
   
//    for(int i=0;i<m/n;i++)
//     for(int j=0;j<n;j++)
//      if(arr[i][j]==2)
//       q.push({i,j});
//    q.push({-1,-1});
//    int count=0;
//    while(!q.empty()){
//     int i=q.front().first;
//     int j=q.front().second;

//     if(i==-1 and j==-1 and q.size()==1)
//       break;  
//     else if(i==-1 and j==-1 and q.size()>1){
//       count++;
//       q.push({-1,-1});
//     }
//     else{
//       if(arr[i-1][j]==1 and (i-1)>=0){
//        arr[i-1][j]=2;
//        q.push({i-1,j});}
//       if(arr[i+1][j]==1 and (i+1)<m/n){
//        arr[i+1][j]=2;
//        q.push({i+1,j});}
//       if(arr[i][j-1]==1 and (j-1)>=0){
//        arr[i][j-1]=2;
//        q.push({i,j-1});}
//       if(arr[i][j+1]==1 and (j+1)<n){
//        arr[i][j+1]=2;
//        q.push({i,j+1});}
//     }
//       q.pop();
//    }
//    cout<<count<<endl;
//    for(int i=0;i<m/n;i++){
//     for(int j=0;j<n;j++)
//       cout<<arr[i][j]<<" ";
//       cout<<endl;
//    }

// }



//SUM OF MIN + MAX OF SLIDING WINDOW

// #include<iostream>
// #include<deque>
// #include<vector>
// using namespace std;
// int main()
// {
//    int arr[]={2,5,1,7,3,1,2};
//    vector<int>ans;
//    deque<int>q1;
//    deque<int>q2;
//    int k=3;
//    q1.push_front(arr[0]); //min
//    q2.push_back(arr[0]); //max

//    for(int i=0;i<k-1;i++){
//      if(arr[i]<q1.front()){
//       q1.pop_front();
//       q1.push_back(arr[i]);}
//      if(arr[i]>q2.front()){
//       q2.pop_front();
//       q2.push_back(arr[i]);}
//    }

   
//    int x=k-1;
//    for(int i=0;i<sizeof(arr)/4-(k-1);i++){
//      while(!q1.empty() and q1.front()>arr[x])
//       q1.pop_back();
//      q1.push_back(arr[x]);

//      while(!q2.empty() and q2.front()<arr[x])
//       q2.pop_back();
//      q2.push_back(arr[x]);
//      ans.push_back(q1.front()+q2.front());
//      if(arr[i]==q1.front())
//       q1.pop_front();
//      if(arr[i]==q2.front())
//       q2.pop_front();
//       x++;

//    }
   
//    x=0;
//    for(int i=0;i<ans.size();i++){
//     x=x+ans[i];
//     cout<<ans[i]<<" ";
//    }
//    cout<<endl<<x;


// }



//01 BINARY MATRIX

// #include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//    int arr[3][3]={0,1,1,  1,0,1,  1,1,1};
//    int m=sizeof(arr)/4;
//    int n=sizeof(arr[0])/4;
//    vector<vector<int>>v(m/n,vector<int>(n,0));
//    queue<pair<int,int>>q;


//     for(int i=0;i<m/n;i++){
//      for(int j=0;j<n;j++)
//       cout<<arr[i][j]<<" ";
//       cout<<endl;
//     }
   
//    for(int i=0;i<m/n;i++)
//     for(int j=0;j<n;j++)
//      if(arr[i][j]==0)
//       q.push({i,j});

//     while(!q.empty()){
//       int i=q.front().first;
//       int j=q.front().second;

//       if(arr[i-1][j]==1 and v[i-1][j]==0 and (i-1)>=0){
//        v[i-1][j]=v[i][j]+1;
//        q.push({i-1,j});}

//       if(arr[i+1][j]==1 and v[i+1][j]==0 and (i+1)<m/n){
//        v[i+1][j]=v[i][j]+1;
//        q.push({i+1,j});}

//       if(arr[i][j-1]==1  and v[i][j-1]==0 and (j-1)>=0){
//        v[i][j-1]=v[i][j]+1;
//        q.push({i,j-1});} 

//       if(arr[i][j+1]==1 and v[i][j+1]==0 and (j+1)<n){
//        v[i][j+1]=v[i][j]+1;
//        q.push({i,j+1});}
//        cout<<q.front().first<<q.front().second<<"  ";
//       q.pop();

//     }

//     cout<<endl<<endl;
//     for(int i=0;i<m/n;i++){
//      for(int j=0;j<n;j++)
//       cout<<v[i][j]<<" ";
//       cout<<endl;
//     }

// }




//RECURSION

//BINARY SEARCH

// #include<iostream>
// using namespace std;
// void bs(int arr[],int start,int end,int target){
//   int mid=start+(end-start)/2;
  
//   if(arr[mid]==target){
//    cout<<mid;
//    return;
//   }
//   if(start==end){
//     cout<<-1;
//     return;
//   }

//   if(target<arr[mid])
//    bs(arr,start,mid-1,target);
//   else
//    bs(arr,mid+1,end,target);
// }

// int main()
// {
//    int arr[]={1,5,9,12,17,19};
//    int target=1;
//    bs(arr,0,(sizeof(arr)/4)-1,target);

// }



//MERGE SORT

// #include<iostream>
// using namespace std;
// void merge(int arr[],int start,int mid,int end){
//   int index=0;
//   int left=start,right=mid+1;
//   int temp[end-start+1];

//   while(left<=mid and right<=end){
//     if(arr[left]<=arr[right]){
//       temp[index]=arr[left];
//       index++;
//       left++;
//     }
//     else{
//       temp[index]=arr[right];
//       right++;
//       index++;
//     }
//   }

//   while(left<=mid){
//     temp[index]=arr[left];
//     index++;
//     left++;
//   }
//   while(right<=end){
//     temp[index]=arr[right];
//     index++;
//     right++;
//   }

//   for(int i=0;i<sizeof(temp)/4;i++){
//     arr[start]=temp[i];
//     start++;
//   }
// }

// void divide(int arr[],int start,int end){
//   if(start==end)
//   return;

//   int mid=start+(end-start)/2;
//   divide(arr,start,mid);
//   divide(arr,mid+1,end);
//   merge(arr,start,mid,end);
// }

// int main()
// {
//   int arr[]={6,4,7,2,9,8,3,5,1};
//   int start,end;
  
//   start=0;
//   end=(sizeof(arr)/4)-1;
//   divide(arr,start,end);
//   for(int i=0;i<sizeof(arr)/4;i++)
//    cout<<arr[i]<<" ";

// }



//QUICK SORT

// #include<iostream>
// using namespace std;
// int partition(int arr[],int start,int end){
//     int pos=start;
//     for(int i=start;i<=end;i++)
//         if(arr[i]<=arr[end]){
//          swap(arr[i],arr[pos]);
//          pos++;
//         }
//     return pos-1;
// }

// void qs(int arr[],int start,int end){
//    if(start>=end)
//     return ;

//    int pivot=partition(arr,start,end);
//    qs(arr,start,pivot-1);
//    qs(arr,pivot+1,end);  
// }

// int main()
// {
//    int arr[]={5,2,4,9,3,7,8};
//    qs(arr,0,(sizeof(arr)/4)-1); 
//    for(int i=0;i<sizeof(arr)/4;i++)
//     cout<<arr[i]<<" ";
    
// }



//SUBSEQUENCE(SUBARRAY)

// #include<iostream>
// #include<vector>
// using namespace std;
// void sub(string str,vector<string> &v,string temp,int index,int n){
//   if(index==n){
//     v.push_back(temp);
//     return;
//   }

//   sub(str,v,temp,index+1,n);
//   temp.push_back(str[index]);
//   sub(str,v,temp,index+1,n);
//   temp.pop_back();
    
// }

// int main()
// {
//     string str="123"; 
//     string temp;
//     vector<string>v;
//     sub(str,v,temp,0,str.size());
//     for(int i=1;i<v.size();i++)
//      cout<<v[i]<<endl;
     
// }



//VALID PARENTHESIS PERMUTATION

// #include<iostream>
// #include<vector>
// using namespace std;
// void pr(vector<string> &v,string temp,int left,int right,int n){
//     if(left==n and right==n){
//       v.push_back(temp);
//       return;
//     }
    
//     if(left<n){
//      temp.push_back('(');
//      pr(v,temp,left+1,right,n);
//      temp.pop_back();
//     }
//     if(right<left){
//      temp.push_back(')');
//      pr(v,temp,left,right+1,n);
//      temp.pop_back();
//     }
    
// }

// int main()
// {
//     int size=3; 
//     string temp;
//     vector<string>v;
//     pr(v,temp,0,0,size);
//     for(int i=0;i<v.size();i++)
//      cout<<v[i]<<endl;
     
// }



//SUBSET SUM

// #include<iostream>
// #include<vector>
// using namespace std;
// void sub_sum(vector<int>s,vector<int> &v,int sum,int index,int n){
//   if(index==n){
//     v.push_back(sum);
//     return;
//   }

//   sub_sum(s,v,sum,index+1,n);
//   sum=sum+s[index];
//   sub_sum(s,v,sum,index+1,n);
//   sum=sum-s[index];
    
// }

// int main()
// {
//     int sum=0;
//     vector<int>s={1,2,3};
//     vector<int>v;
//     sub_sum(s,v,sum,0,s.size());
//     for(int i=0;i<v.size();i++)
//      cout<<v[i]<<endl;
     
// }



//TOTAL TARGET SUM (non-repeat)

// #include<iostream>
// #include<vector>
// using namespace std;
// void pr(vector<int> s,int index,int sum,int target,int &count){
//     if(index==s.size()){
//       return;
//     }
    
//     pr(s,index+1,sum,target,count);
//     sum=sum+s[index];
//     if(sum==target)
//       count++;
//     pr(s,index+1,sum,target,count);
//     sum=sum-s[index];   
// }

// int main()
// {
//     int target=8,count=0;
//     vector<int> s={2,5,6,1};
//     bool flag=false;
//     pr(s,0,0,target,count);
//     cout<<count;
// }



//TARGET SUM (repeatation)

// #include<iostream>
// #include<vector>
// using namespace std;
// void pr(vector<int> s,int index,int sum,int target,int &count){
//     if(index==s.size() or target<sum){
//       return;
//     }
    
//     pr(s,index+1,sum,target,count);
//     sum=sum+s[index];
//     if(sum==target)
//       count++;
//     pr(s,index,sum,target,count);
//     sum=sum-s[index];   
// }

// int main()
// {
//     int target=6,count=0;
//     vector<int> s={2,3,4};
//     pr(s,0,0,target,count);
//     cout<<count;
// }



//NO. OF PERMUTATIONS

// #include<iostream>
// #include<vector>
// using namespace std;
// void pr(string s,vector<string>&v,string str,int index,int n,vector<int>&temp){
//     if(n==0){
//       v.push_back(str);
//       return;
//     } 
    
//     for(int i=0;i<s.size();i++)
//       if(temp[i]==0){
//        temp[i]++;
//        str.push_back(s[i]);
//        pr(s,v,str,i,n-1,temp);
//        str.pop_back();
//        temp[i]--; 
//       }
// }

// int main()
// {
//     int target=0;
//     string str;
//     string s ="abc";
//     vector<int>temp(s.size(),0);
//     vector<string>v;
//     pr(s,v,str,0,temp.size(),temp);
//     for(int i=0;i<v.size();i++)
//      cout<<v[i]<<endl;
// }


#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left,*right;
};

void preorder(node *r){
    if(r==NULL)
     return;                                      // all coordinates of trees
    cout<<r->data<<" ";
    preorder(r->left);
    preorder(r->right);  
}

void inorder(node *r){
    if(r==NULL)
     return;
    inorder(r->left);
    cout<<r->data<<" ";
    inorder(r->right);
}

void postorder(node *r){
    if(r==NULL)
     return;
    postorder(r->left);
    postorder(r->right);
    cout<<r->data<<" ";
}

void output(queue<node*>q1){
    if(q1.empty())
     return;

    cout<<q1.front()->data<<" ";
    if(q1.front()->left!=NULL)
    q1.push(q1.front()->left);
     if(q1.front()->right!=NULL)
    q1.push(q1.front()->right);
    q1.pop();
    output(q1);
}

int sum(node *r){
    if(r==NULL)
    return 0;

    return (r->data+sum(r->left)+sum(r->right));
}

int big(node *r){

    if(r==NULL)
    return 0;

    return  max(r->data, max(big(r->left),big(r->right)));
}

int size(node *r){
    if(r==NULL)
    return 0;

    return (1+size(r->left)+size(r->right));
}

int leaf(node *r){
    if(r==NULL)
     return 0;
    
    if(r->left==NULL and r->right==NULL)
     return 1;

    return (leaf(r->left)+leaf(r->right));
}

int height(node *r){
    if(r==NULL)
     return 0;
      
    return 1+max(leaf(r->left),leaf(r->right));
}

int nonleaf(node *r){
    if(r==NULL)
     return 0;
    
    if(r->left==NULL and r->right==NULL)
     return 0;

    return (1+leaf(r->left),1+leaf(r->right));
}

int main()
{
    int x;
    queue<node *>q;
    node *root=new node;
    q.push(root);
    cout<<"Enter root value : ";
    cin>>x;
    root->data=x;

    while(!q.empty())
     {
        node *temp=q.front();
        cout<<"Enter value for "<<q.front()->data<<" left : ";
        cin>>x;
        if(x>=0){
         temp->left=new node;
         temp->left->data=x;
         q.push(temp->left);}
        else
        temp->left=NULL;
        cout<<"Enter value for "<<q.front()->data<<" right : ";
        q.pop();
        cin>>x;
        if(x>=0){
         temp->right=new node;
         temp->right->data=x;
         q.push(temp->right);}
        else
         temp->right=NULL;
     }
     
     cout<<"preorder : ";
     preorder(root);
     cout<<endl<<"inorder : ";
     inorder(root);
     cout<<endl<<"post order :";
     postorder(root);
     cout<<endl<<"size : ";
     cout<<size(root);
     cout<<endl<<"sum : ";
     cout<<sum(root);
    
     cout<<endl<<"leaf nodes : ";
     cout<<leaf(root);
     cout<<endl<<"nonleaf nodes : ";
     cout<<nonleaf(root);
     cout<<endl<<"output : ";
     q.push(root);
     output(q);
     cout<<endl<<"hieght : ";
     cout<<height(root);
     cout<<endl<<"big node : ";
     cout<<big(root);

}




// #include<iostream>
// #include<queue>
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *left,*right;
// };

// void output(queue<node*>&q){
//     if(q.empty())
//      return;

//     cout<<q.front()->data<<" ";
//     if(q.front()->left!=NULL)
//     q.push(q.front()->left);
//     if(q.front()->right!=NULL)
//     q.push(q.front()->right);
//     q.pop();
//     output(q);
// }


// void check(queue<node*>&q,queue<node*>&q1){
//     if((q.size()>q1.size()) or (q.size()<q1.size())){
//         cout<<"False1";
//         return;}

//     if((q.front()->data!=q1.front()->data)){
//         cout<<"False2";
//         return;}

//     if(q.front()->left!=NULL)
//      q.push(q.front()->left);                            // both trees are identical
//     if(q.front()->right!=NULL)
//     q.push(q.front()->right);
//      q.pop();
    
//     if(q1.front()->left!=NULL)
//      q1.push(q1.front()->left);
//     if(q1.front()->right!=NULL)
//      q1.push(q1.front()->right);
//      q1.pop();

//     if(q.size()==0 and q1.size()==0){
//      cout<<"True";
//      return;}

//     check(q,q1);
// }

// void input(queue<node*>&q){
//     int x;
//     while(!q.empty())
//      {
//         node *temp=q.front();
//         cout<<"Enter value for "<<q.front()->data<<" left : ";
//         cin>>x;
//         if(x>=0){
//          temp->left=new node;
//          temp->left->data=x;
//          q.push(temp->left);}
//         else
//         temp->left=NULL;
//         cout<<"Enter value for "<<q.front()->data<<" right : ";
//         q.pop();
//         cin>>x;
//         if(x>=0){
//          temp->right=new node;
//          temp->right->data=x;
//          q.push(temp->right);}
//         else
//          temp->right=NULL;
//      }

// }


// int main()
// {
//     int x;
//     queue<node *>q;
//     node *root=new node;
//     q.push(root);
//     cout<<"Enter root value : ";
//     cin>>x;
//     root->data=x;
//     input(q);
    
//      cout<<endl<<"output1 : ";
//      q.push(root);
//      output(q);

//     cout<<endl;
//     queue<node *>q1;
//     node*root1=new node;
//     q1.push(root1);
//     cout<<"Enter root value : ";
//     cin>>x;
//     root1->data=x;
//     input(q1);

//      cout<<endl<<"output2 : ";
//      q1.push(root1);
//      output(q1);

//     cout<<endl;
//     q1.push(root1);
//     q.push(root);

//     check(q,q1);
    
// }




// #include<iostream>
// #include<queue>
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *left,*right;
// };

// void output(queue<node*>&q){
//     if(q.empty())
//      return;

//     cout<<q.front()->data<<" ";                    // make mirror tree
//     if(q.front()->left!=NULL)
//     q.push(q.front()->left);
//     if(q.front()->right!=NULL)
//     q.push(q.front()->right);
//     q.pop();
//     output(q);

// }


// void check(queue<node*>&q,queue<node*>&q1){
//     node *temp=new node;
//     temp->data=q.front()->data;
//     temp->left=NULL;
//     temp->right=NULL;
//     q1.push(temp);

//    while(!q.empty()){ 
//     if(q.front()->left!=NULL){
//     q.push(q.front()->left); 
//     node *t=new node;
//     q1.front()->right=t;
//     t->data=q.front()->left->data;
//     t->right=NULL;
//     t->left=NULL;
//     q1.push(t);}
                            
//     if(q.front()->right!=NULL){
//     q.push(q.front()->right);
//     node *p=new node;
//     q1.front()->left=p;
//     p->data=q.front()->right->data;
//     p->left=NULL;
//     p->right=NULL;
//     q1.push(p);}

//     q.pop();
//     q1.pop();
//    }

//    q1.push(temp);
//    cout<<endl<<"tree 2: ";
//    output(q1);
   
// }

// void input(queue<node*>&q){
//     int x;
//     while(!q.empty())
//      {
//         node *temp=q.front();
//         cout<<"Enter value for "<<q.front()->data<<" left : ";
//         cin>>x;
//         if(x>=0){
//          temp->left=new node;
//          temp->left->data=x;
//          q.push(temp->left);}
//         else
//         temp->left=NULL;
//         cout<<"Enter value for "<<q.front()->data<<" right : ";
//         q.pop();
//         cin>>x;
//         if(x>=0){
//          temp->right=new node;
//          temp->right->data=x;
//          q.push(temp->right);}
//         else
//          temp->right=NULL;
//      }
// }

// int main()
// {
//     int x;
//     queue<node *>q;
//     node *root=new node;
//     q.push(root);
//     cout<<"Enter root value : ";
//     cin>>x;
//     root->data=x;
//     input(q);
    
//      cout<<endl<<"tree 1: ";
//      q.push(root);
//      output(q);

//      q.push(root); 
//      queue<node*>q1;
//      check(q,q1);
    
// }




// #include<iostream>
// #include<stack>
// #include<queue>
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *left,*right;
// };

// void output(queue<node*>&q){
//     if(q.empty())
//      return;

//     cout<<q.front()->data<<" ";                    
//     if(q.front()->left!=NULL)
//     q.push(q.front()->left);                            // level order travesal in spiral form
//      if(q.front()->right!=NULL)
//     q.push(q.front()->right);
//     q.pop();
//     output(q);
// }


// void output1(stack<node*>&q,stack<node*>&q1){
//     if(q.empty() and q1.empty())
//      return;

//     while(!q.empty()){
//     cout<<q.top()->data<<" ";
//     if(q.top()->right!=NULL)
//     q1.push(q.top()->right);
//     if(q.top()->left!=NULL)
//     q1.push(q.top()->left);    
//     q.pop();}

//     while(!q1.empty()){
//     cout<<q1.top()->data<<" "; 
//     if(q1.top()->left!=NULL)
//     q.push(q1.top()->left);
//     if(q1.top()->right!=NULL)
//     q.push(q1.top()->right);                  
//     q1.pop();}

//     output1(q,q1);
// }

// void input(queue<node*>&q){
//     int x;
//     while(!q.empty())
//      {
//         node *temp=q.front();
//         cout<<"Enter value for "<<q.front()->data<<" left : ";
//         cin>>x;
//         if(x>=0){
//          temp->left=new node;
//          temp->left->data=x;
//          q.push(temp->left);}
//         else
//         temp->left=NULL;
//         cout<<"Enter value for "<<q.front()->data<<" right : ";
//         q.pop();
//         cin>>x;
//         if(x>=0){
//          temp->right=new node;
//          temp->right->data=x;
//          q.push(temp->right);}
//         else
//          temp->right=NULL;
//      }
// }

// int main()
// {
//     int x;
//     queue<node*>q;
//     stack<node *>q1;
//     stack<node*>q2;
//     node *root=new node;
//     q.push(root);
//     cout<<"Enter root value : ";
//     cin>>x;
//     root->data=x;
//     input(q);
    
//     cout<<endl<<"type 1: ";
//     q.push(root);
//     output(q);
    
//     cout<<endl<<"Type 2: ";
//     q1.push(root);
//     output1(q1,q2);
    
// }





// #include<iostream>
// #include<stack>
// #include<queue>
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *left,*right;
// };

// void output(queue<node*>&q){
//     if(q.empty())
//      return;

//     cout<<q.front()->data<<" ";                    
//     if(q.front()->left!=NULL)
//     q.push(q.front()->left);                           
//      if(q.front()->right!=NULL)                         // cousins
//     q.push(q.front()->right);
//     q.pop();
//     output(q);
// }

// int check(queue<node*>&q,int r,int e){

//     while(!q.empty()){
//     if(q.front()->left!=NULL and q.front()->right!=NULL){
//     if(q.front()->left->data==r and q.front()->right->data==e)
//      return 0;
//     else if(q.front()->left->data==e and q.front()->right->data==r)
//      return 0;}
//     if(q.front()->left!=NULL)
//     q.push(q.front()->left);                           
//     if(q.front()->right!=NULL)
//     q.push(q.front()->right);
//     q.pop();
//     }

//     return 1;
// }

// int level(queue<node*>&q,int a,int b){
    
//     int j,k,y=0,n=1;
//     while(!q.empty()){
//     if(q.front()->data==a)
//      j=y;
//     if(q.front()->data==b)
//      k=y;
//     if(k==j)
//     return 1;
                
//     if(q.front()->left!=NULL)
//     q.push(q.front()->left);                           
//     if(q.front()->right!=NULL)
//     q.push(q.front()->right);
//     q.pop(); 
//     n--;
//     if(n==0){
//     y++;
//     n=q.size();}
//     }

//     return 0;
// }

// void input(queue<node*>&q){
//     int x;
//     while(!q.empty())
//      {
//         node *temp=q.front();
//         cout<<"Enter value for "<<q.front()->data<<" left : ";
//         cin>>x;
//         if(x>=0){
//          temp->left=new node;
//          temp->left->data=x;
//          q.push(temp->left);}
//         else
//         temp->left=NULL;
//         cout<<"Enter value for "<<q.front()->data<<" right : ";
//         q.pop();
//         cin>>x;
//         if(x>=0){
//          temp->right=new node;
//          temp->right->data=x;
//          q.push(temp->right);}
//         else
//          temp->right=NULL;
//      }
// }

// int main()
// {
//     int x,y;
//     queue<node*>q;
//     node *root=new node;
//     q.push(root);
//     cout<<"Enter root value : ";
//     cin>>x;
//     root->data=x;
//     input(q);
    
//     cout<<endl;
//     q.push(root);
//     output(q);

//     q.push(root);
//     y=level(q,4,6);
//     if(y==0)
//      cout<<endl<<"diffrent genrations";
//     else if(y==1){
//      q.push(root);
//      cout<<endl;
//      y=check(q,4,6);
//      if(y==1)
//       cout<<"cousins";
//      else
//       cout<<"same parent";
//     }
// }



// #include<iostream>
// #include<stack>
// #include<queue>
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *left,*right;
// };

// void output(queue<node*>e){
//     if(e.empty())
//      return;

//     cout<<e.front()->data<<" ";                    
//     if(e.front()->left!=NULL)
//     e.push(e.front()->left);                           
//      if(e.front()->right!=NULL)                          // left view tree
//     e.push(e.front()->right);
//     e.pop();
//     output(e);
// }

// void leftside(queue<node*>r){
//     int n=r.size();
//     cout<<r.front()->data<<" ";

//     while(!r.empty()){            
//     if(r.front()->left!=NULL)
//     r.push(r.front()->left);                           
//     if(r.front()->right!=NULL)                       
//     r.push(r.front()->right);
//     r.pop();
//     n--;
//     if(n==0){
//     cout<<r.front()->data<<" ";
//     n=r.size();}
//     }
//     r.pop();
// }

// void input(queue<node*>w){
//     int x;
//     while(!w.empty())
//      {
//         node *temp=w.front();
//         cout<<"Enter value for "<<w.front()->data<<" left : ";
//         cin>>x;
//         if(x>=0){
//          temp->left=new node;
//          temp->left->data=x;
//          w.push(temp->left);}
//         else
//         temp->left=NULL;
//         cout<<"Enter value for "<<w.front()->data<<" right : ";
//         w.pop();
//         cin>>x;
//         if(x>=0){
//          temp->right=new node;
//          temp->right->data=x;
//          w.push(temp->right);}
//         else
//          temp->right=NULL;
//      }
// }

// int main()
// {
//     int x,y;
//     queue<node*>q,q1,q3;
//     node *root=new node;
//     q.push(root);
//     cout<<"Enter root value : ";
//     cin>>x;
//     root->data=x;
//     input(q);
    
//     cout<<endl<<"Full : ";
//     q1.push(root);
//     output(q1);

//     cout<<endl<<"Left view :";
//     q3.push(root);
//     leftside(q3);

// }



// #include<iostream>
// #include<stack>
// #include<queue>
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *left,*right;
// };

// void output(queue<node*>e){
//     if(e.empty())
//      return;

//     cout<<e.front()->data<<" ";                    
//     if(e.front()->left!=NULL)
//     e.push(e.front()->left);                           
//      if(e.front()->right!=NULL)                          // right view tree
//     e.push(e.front()->right);
//     e.pop();
//     output(e);
// }

// void rightside(queue<node*>r){
//     int n=r.size();
//     cout<<r.front()->data<<" ";

//     while(!r.empty()){            
//     if(r.front()->left!=NULL)
//     r.push(r.front()->left);                           
//     if(r.front()->right!=NULL)                       
//     r.push(r.front()->right);
//     r.pop();
//     n--;
//     if(n==0)
//     n=r.size();
//     if(n==1)
//     cout<<r.front()->data<<" ";
//     }
//     r.pop();
// }

// void input(queue<node*>w){
//     int x;
//     while(!w.empty())
//      {
//         node *temp=w.front();
//         cout<<"Enter value for "<<w.front()->data<<" left : ";
//         cin>>x;
//         if(x>=0){
//          temp->left=new node;
//          temp->left->data=x;
//          w.push(temp->left);}
//         else
//         temp->left=NULL;
//         cout<<"Enter value for "<<w.front()->data<<" right : ";
//         w.pop();
//         cin>>x;
//         if(x>=0){
//          temp->right=new node;
//          temp->right->data=x;
//          w.push(temp->right);}
//         else
//          temp->right=NULL;
//      }
// }

// int main()
// {
//     int x,y;
//     queue<node*>q,q1,q3;
//     node *root=new node;
//     q.push(root);
//     cout<<"Enter root value : ";
//     cin>>x;
//     root->data=x;
//     input(q);
    
//     cout<<endl<<"Full : ";
//     q1.push(root);
//     output(q1);

//     cout<<endl<<"right view :";
//     q3.push(root);
//     rightside(q3);

// }




// #include<iostream>
// #include<stack>
// #include<queue>
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *left,*right;
// };

// void output(queue<node*>e){
//     if(e.empty())
//      return;

//     cout<<e.front()->data<<" ";                    
//     if(e.front()->left!=NULL)
//     e.push(e.front()->left);                           
//      if(e.front()->right!=NULL)                          // top view tree
//     e.push(e.front()->right);
//     e.pop();
//     output(e);
// }

// void topr(node*r2){
//     if(r2==NULL)
//      return;

//     cout<<r2->data<<" ";
//     topr(r2->right);
// }

// void topview(node*r,node*r1){

//     if(r==NULL)
//      return ;

//     topview(r->left,r1);
//     cout<<r->data<<" ";

//     if(r==r1)
//      topr(r1->right);
// }

// void input(queue<node*>w){
//     int x;
//     while(!w.empty())
//      {
//         node *temp=w.front();
//         cout<<"Enter value for "<<w.front()->data<<" left : ";
//         cin>>x;
//         if(x>=0){
//          temp->left=new node;
//          temp->left->data=x;
//          w.push(temp->left);}
//         else
//         temp->left=NULL;
//         cout<<"Enter value for "<<w.front()->data<<" right : ";
//         w.pop();
//         cin>>x;
//         if(x>=0){
//          temp->right=new node;
//          temp->right->data=x;
//          w.push(temp->right);}
//         else
//          temp->right=NULL;
//      }
// }

// int main()
// {
//     int x,y;
//     queue<node*>q,q1,q3;
//     node *root=new node;
//     q.push(root);
//     cout<<"Enter root value : ";
//     cin>>x;
//     root->data=x;
//     input(q);
    
//     cout<<endl<<"Full : ";
//     q1.push(root);
//     output(q1);

//     cout<<endl<<"top view :";
//     topview(root,root);

// }



// #include<iostream>
// #include<stack>
// #include<queue>
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *left,*right;
// };

// void output(queue<node*>e){
//     if(e.empty())
//      return;

//     cout<<e.front()->data<<" ";                    
//     if(e.front()->left!=NULL)
//     e.push(e.front()->left);                           
//      if(e.front()->right!=NULL)                          // pre, in , post travesal iterative
//     e.push(e.front()->right);
//     e.pop();
//     output(e);
// }

// void preorder(node* r){

//   stack<node*>s1;
//   s1.push(r);

//    while(!s1.empty()){
//     node*temp=s1.top();
//     cout<<temp->data<<" ";
//     s1.pop();
//     if(temp->right!=NULL)
//      s1.push(temp->right);
//     if(temp->left!=NULL)               //nlr
//      s1.push(temp->left);

//    }
// }

// void inorder(node* r){

//   stack<node*>s1;
//   node*temp=r;

//  while(!s1.empty() or temp!=NULL){
//    while(temp!=NULL){
//     s1.push(temp);                       // lnr
//     temp=temp->left;}
 
//     temp=s1.top();
//      cout<<temp->data<<" ";
//      s1.pop();
//     temp=temp->right;
//   }

// }

// void postorder(node* r){

//   stack<node*>s1;
//   vector<int>v;
//   s1.push(r);

//    while(!s1.empty()){
//     node*temp=s1.top();
//     v.push_back(temp->data);         //lrn
//     s1.pop();
//     if(temp->left!=NULL)
//      s1.push(temp->left);
//     if(temp->right!=NULL)
//      s1.push(temp->right);
//    }
//     for(int i=v.size()-1;i>=0;i--)
//      cout<<v[i]<<" ";
// }

// void input(queue<node*>w){
//     int x;
//     while(!w.empty())
//      {
//         node *temp=w.front();
//         cout<<"Enter value for "<<w.front()->data<<" left : ";
//         cin>>x;
//         if(x>=0){
//          temp->left=new node;
//          temp->left->data=x;
//          w.push(temp->left);}
//         else
//         temp->left=NULL;
//         cout<<"Enter value for "<<w.front()->data<<" right : ";
//         w.pop();
//         cin>>x;
//         if(x>=0){
//          temp->right=new node;
//          temp->right->data=x;
//          w.push(temp->right);}
//         else
//          temp->right=NULL;
//      }
// }

// int main()
// {
//     int x,y;
//     queue<node*>q,q1;
//     stack<node*>s;
//     node *root=new node;
//     q.push(root);
//     cout<<"Enter root value : ";
//     cin>>x;
//     root->data=x;
//     input(q);
    
//     cout<<endl<<"Full : ";
//     q1.push(root);
//     output(q1);

//     cout<<endl<<"pre order :";
//     preorder(root);

//     cout<<endl<<"post order :";
//     postorder(root);

//     cout<<endl<<"in order :";
//     inorder(root);
// }



// #include<iostream>
// #include<stack>
// #include<queue>
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *left,*right;
// };

// void output(queue<node*>e){
//     if(e.empty())
//      return;

//     cout<<e.front()->data<<" ";                    
//     if(e.front()->left!=NULL)
//     e.push(e.front()->left);                           
//      if(e.front()->right!=NULL)                          // construt tree through pre and in
//     e.push(e.front()->right);
//     e.pop();
//     output(e);
// }

// node *input(vector<int>&preorder,vector<int>&inorder,int start,int end,int &idx){

//   if(start>end)
//   return NULL;   
//   int i;
        
//    for(int j=start;j<=end;j++)
//     if(inorder[j]==preorder[idx]){
//     i=j;
//     break;
//     }

//   node* root=new node;
//   root->data=preorder[idx];   
//   idx++; 
//   root->left=input(preorder,inorder,start,i-1,idx);
//   root->right=input(preorder,inorder,i+1,end,idx);
        
//   return root;

// }

// node *input2(vector<int>&postorder,vector<int>&inorder,int instart,int inend,int pstart,int pend){
   
//    int i;
//    node* root1=new node;
//    root1->data=postorder[pend];
        
//    for(int j=instart;j<=inend;j++)
//     if(inorder[j]==postorder[pend]){
//     i=j;
//     break;
//     }

//    if(instart>inend)
//    return 0;

//   int l=i-instart;
//   int r=inend-i;
  
//   root1->left=input2(postorder,inorder,instart,i-1,pstart,pstart+l-1);
//   root1->right=input2(postorder,inorder,i+1,inend,pend-r,pend-1);
        
//   return root1;

// }

// int main()
// {
//     int start=0,index=0;
//     node* root;
//     node*root1;
//     queue<node *>q1,q2; 
//     vector<int>preorder={3,9,20,15,7};
//     vector<int>inorder={9,3,15,20,7};
//     int n=preorder.size()-1;
//     root=input(preorder,inorder,start,n,index);
    
//     cout<<"preorder : ";
//     q1.push(root);
//     output(q1);

//     int instart=0,inend,pstart=0,pend;
//     vector<int>postorder={9,15,7,20,3};
//     n=inorder.size()-1;

//     root1=input2(postorder,inorder,0,n,0,n);
//     cout<<endl<<"postorder : ";
//     q2.push(root1);
//     output(q2);

// }




// #include<iostream>
// #include<deque>
// #include<queue>
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *left,*right;
// };

// void output(queue<node*>e){

//     if(e.empty())
//      return;

//     cout<<e.front()->data<<" ";                    
//      if(e.front()->left!=NULL)
//     e.push(e.front()->left);                           
//      if(e.front()->right!=NULL)                          // diagnol traversal
//     e.push(e.front()->right);
//     e.pop();
//     output(e);

// }

// void diagnal(deque<node*>d2){

//    while(!d2.empty()){
//     node*temp=d2.back();
//     d2.pop_back();
//     cout<<temp->data<<" ";
//     if(temp->left!=NULL)
//      d2.push_front(temp->left);
//     if(temp->right!=NULL)
//      d2.push_back(temp->right);
//    }

// }


// void input(queue<node*>w){
//     int x;
//     while(!w.empty())
//      {
//       node *temp=w.front();
//       cout<<"Enter value for "<<w.front()->data<<" left : ";
//       cin>>x;
//       if(x>=0){
//       temp->left=new node;
//       temp->left->data=x;
//       w.push(temp->left);}
//       else
//       temp->left=NULL;
//       cout<<"Enter value for "<<w.front()->data<<" right : ";
//       w.pop();
//       cin>>x;
//       if(x>=0){
//       temp->right=new node;
//       temp->right->data=x;
//       w.push(temp->right);}
//       else
//       temp->right=NULL;

//     }
// }


// int main()
// {
//     int x,y;
//     queue<node*>q,q1;
//     node *root=new node;
//     q.push(root);
//     cout<<"Enter root value : ";
//     cin>>x;
//     root->data=x;
//     input(q);
//     cout<<endl<<"tree : ";
//     q1.push(root);
//     output(q1);

//     deque<node*>d;
//     cout<<endl<<"diagnal : ";
//     d.push_back(root);
//     diagnal(d);

// }




// #include<iostream>
// #include<deque>
// #include<queue>
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *left,*right;
// };

// void output(queue<node*>e){

//     if(e.empty())
//      return;

//     cout<<e.front()->data<<" ";                    
//      if(e.front()->left!=NULL)
//     e.push(e.front()->left);                           
//      if(e.front()->right!=NULL)                          // vertical traversal
//     e.push(e.front()->right);
//     e.pop();
//     output(e);

// }

// void vertical(node*r3,int &l,int &r){

//     int pos=0;
//     vector<vector<int>>positive(r);
//     vector<vector<int>>negative(l);
//     queue<node*>q;
//     q.push(r3);
//     queue<int>q1;
//     q1.push(pos);

//     while(!q.empty()){
//         node *temp=q.front();
//         pos=q1.front();
//         q.pop();
//         q1.pop();

//         if(pos>=0)
//         positive[pos].push_back(temp->data);
//         else
//         negative[abs(pos)].push_back(temp->data);

//         if(temp->left!=NULL){
//             q.push(temp->left);
//             q1.push(pos-1);
//          }

//          if(temp->right!=NULL){
//             q.push(temp->right);
//             q1.push(pos+1);
//          }
         
//     }

//     vector<int>v;
//     for(int i=negative.size()-1;i>=0;i--)
//      for(int j=0;j<negative[i].size();j++)
//       v.push_back(negative[i][j]);

//     for(int i=0;i<positive.size();i++)
//      for(int j=0;j<positive[i].size();j++)
//       v.push_back(positive[i][j]);

//      cout<<endl<<"Vertical order : ";
//      for(int k=0;k<v.size();k++)
//       cout<<v[k]<<" ";  

// }

// void check(node*r2){

//     node*r1=r2;
//     int l=0,r=0;
//     while(r1!=NULL){
//         r1=r1->left;
//         l++;
//     }
//     r1=r2;
//      while(r1!=NULL){
//         r1=r1->right;
//         r++;
//     }

//     vertical(r2,l,r);
// }


// void input(queue<node*>w){
//     int x;
//     while(!w.empty())
//      {
//       node *temp=w.front();
//       cout<<"Enter value for "<<w.front()->data<<" left : ";
//       cin>>x;
//       if(x>=0){
//       temp->left=new node;
//       temp->left->data=x;
//       w.push(temp->left);}
//       else
//       temp->left=NULL;
//       cout<<"Enter value for "<<w.front()->data<<" right : ";
//       w.pop();
//       cin>>x;
//       if(x>=0){
//       temp->right=new node;
//       temp->right->data=x;
//       w.push(temp->right);}
//       else
//       temp->right=NULL;

//     }
// }


// int main()
// {
//     int x,y;
//     queue<node*>q,q1;
//     node *root=new node;
//     q.push(root);
//     cout<<"Enter root value : ";
//     cin>>x;
//     root->data=x;
//     input(q);
//     cout<<endl<<"tree : ";
//     q1.push(root);
//     output(q1);

//     check(root);

// }



// #include<iostream>
// #include<queue>
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *left,*right;
// };

// void output(queue<node*>e){

//     if(e.empty())
//      return;

//     cout<<e.front()->data<<" ";                    
//      if(e.front()->left!=NULL)
//     e.push(e.front()->left);                           
//      if(e.front()->right!=NULL)                          // boundry traversal
//     e.push(e.front()->right);
//     e.pop();
//     output(e);

// }

// void left(node *r4){
    
//     if(r4->left==NULL and r4->right==NULL)
//      return ;

//     cout<<r4->data<<" ";
//     if(r4->left!=NULL)
//     left(r4->left);
//     else
//     left(r4->right);
// }

// void leaf(node *r5){
    
//     if(r5->left==NULL and r5->right==NULL){
//      cout<<r5->data<<" ";
//      return;}

//     leaf(r5->left);
//     leaf(r5->right);
// }

// void right(node*r2){

//     if(r2->left==NULL and r2->right==NULL)
//      return ;

  
//     if(r2->right!=NULL)
//     right(r2->right);
//     else
//     right(r2->left);
//     cout<<r2->data<<" ";
// }

// void boundry(node*r3){

//     cout<<r3->data<<" ";
//     left(r3->left); 
//     leaf(r3);
//     right(r3->right);
// }

// void input(queue<node*>w){
//     int x;
//     while(!w.empty())
//      {
//       node *temp=w.front();
//       cout<<"Enter value for "<<w.front()->data<<" left : ";
//       cin>>x;
//       if(x>=0){
//       temp->left=new node;
//       temp->left->data=x;
//       w.push(temp->left);}
//       else
//       temp->left=NULL;
//       cout<<"Enter value for "<<w.front()->data<<" right : ";
//       w.pop();
//       cin>>x;
//       if(x>=0){
//       temp->right=new node;
//       temp->right->data=x;
//       w.push(temp->right);}
//       else
//       temp->right=NULL;

//     }
// }

// int main()
// {
//     int x,y;
//     queue<node*>q,q1;
//     node *root=new node;
//     q.push(root);
//     cout<<"Enter root value : ";
//     cin>>x;
//     root->data=x;
//     input(q);

//     cout<<endl<<"tree : ";
//     q1.push(root);
//     output(q1);

//     cout<<endl<<"boundry : ";
//     boundry(root);

// }




// #include<iostream>
// #include<queue>
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *left,*right;
// };

// void output(queue<node*>e){

//     if(e.empty())
//      return;
 
//     cout<<e.front()->data<<" ";                    
//      if(e.front()->left!=NULL)
//     e.push(e.front()->left);                           
//      if(e.front()->right!=NULL)                           // inorder morris traversal 
//     e.push(e.front()->right);
//     e.pop();
//     output(e);

// }

// void route(node *r){

//      while(r!=NULL){
//         if(r->left==NULL){
//          cout<<r->data<<" ";
//          r=r->right;}
        
//         else{ 
//          node *curr=r->left;
//          while(curr->right!=NULL)
//           curr=curr->right;

//          curr->right=r;
//          node *temp=r;
//          r=r->left;
//          temp->left=NULL;
//         }
//      }

// }

// void input(queue<node*>w){
//     int x;
//     while(!w.empty())
//      {
//       node *temp=w.front();
//       cout<<"Enter value for "<<w.front()->data<<" left : ";
//       cin>>x;
//       if(x>=0){
//       temp->left=new node;
//       temp->left->data=x;
//       w.push(temp->left);}
//       else
//       temp->left=NULL;
//       cout<<"Enter value for "<<w.front()->data<<" right : ";
//       w.pop();
//       cin>>x;
//       if(x>=0){
//       temp->right=new node;
//       temp->right->data=x;
//       w.push(temp->right);}
//       else
//       temp->right=NULL;

//     }
// }

// int main()
// {
//     int x,y;
//     queue<node*>q,q1;
//     node *root=new node;
//     q.push(root);
//     cout<<"Enter root value : ";
//     cin>>x;
//     root->data=x;
//     input(q);

//     cout<<endl<<"tree : ";
//     q1.push(root);
//     output(q1);

//     cout<<endl<<"morris inorder : ";
//     route(root);

// }




// #include<iostream>
// #include<queue>
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *left,*right;
// };

// void output(queue<node*>e){

//     if(e.empty())
//      return;
 
//     cout<<e.front()->data<<" ";                    
//      if(e.front()->left!=NULL)
//     e.push(e.front()->left);                           
//      if(e.front()->right!=NULL)                           // flatten tree
//     e.push(e.front()->right);
//     e.pop();
//     output(e);

// }

// void route(node *r){
//     node*r1=r;
//      while(r!=NULL){
//         if(r->left==NULL){
//          r=r->right;}
        
//         else{ 
//          node *curr=r->left;
//          while(curr->right!=NULL)
//           curr=curr->right;

//          curr->right=r->right;
//          r->right=r->left;
//          r->left=NULL;
//          r=r->right;
//         }
//      }

//      queue<node*>q5;
//      q5.push(r1);
//      cout<<endl<<"flatten tree : ";
//      output(q5);

// }

// void input(queue<node*>w){
//     int x;
//     while(!w.empty())
//      {
//       node *temp=w.front();
//       cout<<"Enter value for "<<w.front()->data<<" left : ";
//       cin>>x;
//       if(x>=0){
//       temp->left=new node;
//       temp->left->data=x;
//       w.push(temp->left);}
//       else
//       temp->left=NULL;
//       cout<<"Enter value for "<<w.front()->data<<" right : ";
//       w.pop();
//       cin>>x;
//       if(x>=0){
//       temp->right=new node;
//       temp->right->data=x;
//       w.push(temp->right);}
//       else
//       temp->right=NULL;

//     }
// }

// int main()
// {
//     int x,y;
//     queue<node*>q,q1;
//     node *root=new node;
//     q.push(root);
//     cout<<"Enter root value : ";
//     cin>>x;
//     root->data=x;
//     input(q);

//     cout<<endl<<"tree : ";
//     q1.push(root);
//     output(q1);
//     route(root);

// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     string word="KL";
//     bool flag=false,flag1=false;
//     int x=0,r=0,c=0;

//     int arr[3][10]={'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G'
//     ,'H','J','K','L','m','m','Z','X','C','V','B','N','M','m','m'};

//     for(int i=0;i<3;i++)
//      for(int j=0;j<10;j++){
//       if(arr[i][j]==word[0]){
//         flag=true;
//         c=j;
//         r=i;}
//       else if(arr[i][j]==word[1] and flag==true){
//         cout<<abs(i-r)+abs(j-c);
//         flag1=true;
//         break;
//       }
//      }

//      if(flag1==false){
//      for(int i=0;i<3;i++)
//       for(int j=0;j<10;j++){
//        if(arr[i][j]==word[1]){
//         flag1=true;
//         c=j;
//         r=i;}
//        else if(arr[i][j]==word[0]){
//         cout<<abs(i-r)+abs(j-c);
//         break;
//       }
//      }
//     }      

// }
