// #include<iostream>
// using namespace std;

// int main()
// {
//     int x=0;
//     int arr[]={8,97,123,58,48,70,89};    //sum of array elements
//     int s =sizeof(arr)/4;
//     for(int i=0; i<s;i++)
//     x= x + arr[i];
//     cout<<x<<endl;
//     cout<<"array size is : "<<s;
// }               


// #include<iostream>
// using namespace std;

// int main()
// {
//     int x=1;
//     int arr[]={8,97,12,89,45,23};    //product of array elements
//     int s =sizeof(arr)/4;            //size of array
//     for(int i=0; i<s;i++)
//     x= x * arr[i];
//     cout<<x<<endl;
//     cout<<"array size is : "<<s;
// }  


// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=0,b=87;
//     int arr[]={3,45,67,1,87,56};    //min and max of array elements
//      for(int i=0; i<=5;i++)
//      {
//         if(arr[i]>a)
//          a=arr[i];
//         if(arr[i]<b)
//          b=arr[i];
//      }
//     cout<<a<<endl<<b;
// }                


// #include<iostream>
// using namespace std;

// int main()
// {
//     int x,y=0,arr[5]={2,3,7,6,9};
//     cin>>x;                           //givn no. is smal or great by how many elements of arr
//     for(int i=0;i<=4;i++)
//     if(arr[i]<x)
//     {
//     cout<<arr[i]<<" "; 
//     y++;
//     }
//     cout<<endl<<y;
// } 


// #include<iostream>
// using namespace std;

// int main()
// {                                //sq. of indexs upto givn no. 
//     int x;
//     cin>>x;
//     int arr[x];
    
//     for(int i=0;i<x;i++)
//     arr[i]=i*i;
//     for(int j=0;j<x;j++)
//     cout<<arr[j]<<" ";  
// } 


// #include<iostream>
// using namespace std;

// int main()
// {
//     int x=0,y=0,arr[5]={3,6,3,89,76};
//     for(int i=0;i<=4;i++)
//     {
//     if(0==i%2)
//      x=x+arr[i];                             //diff b/w sum of even index vs odd index
//     if(0!=i%2)
//      y=y+arr[i];
//     }
//     if(x>y)
//     {
//     cout<<"even :"<<x<<" "<<"odd :"<<y<<endl; 
//     cout<<x-y;
//     }
//     else
//     {
//     cout<<"odd :"<<y<<" "<<" even :"<<x<<endl;  
//     cout<<y-x;
//     }  
// } 


// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=90,b=90;
//     int arr[6]={3,45,76,1,56,90};    // 2nd minimum of array elements
//     for(int i=0; i<6;i++)           //make small change for 2nd max of array elements
//     {
//         if(arr[i]<a)
//         a=arr[i];
   
//     }
//     for(int j=0;j<=5;j++)
//     {
//         if(arr[j]==a)
//         continue;
//         if(arr[j]<b)
//         b=arr[j];  
//     }
//     cout<<b;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//    int j=5,brr[6],arr[6]={63,42,57,48,7,88};  //coping elements of arr in revrse ordr in another arr
//    for(int i=0;i<=5;i++,j--)
//      brr[j]=arr[i];
//    for(int j=0;j<=5;j++)
//    {
//      cout<<brr[j]<<" ";
//    }
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//   int x=0,arr[]={0,1,2,3,4,5,6,7,8};    //swapping of array elements for reverse order
//   int y=sizeof(arr)/4;
//   cout<<y<<endl;
//   int j=y-1;
//    for(int i=0;i<y/2;i++,j--)
//    {
//      if(i<j)
//      {
//      x=arr[i];
//      arr[i]=arr[j];
//      arr[j]=x;
//      }
//    }
//    for(int i=0;i<y;i++)
//    cout<<arr[i]<<" ";
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//   int arr[]={0,1,2,2,1,0};
//   int j=sizeof(arr)/4;
//   int x=j-1;
//   bool flag=false;

//    for(int i=0; i<j; i++)
//    cout<<arr[i]<<" ";
//    cout<<endl;                           //is array pallindrome???                                           
//    for(int k=0; k<=x; k++, x--)           
//     {
//      if(arr[x]!=arr[k])
//      {
//      flag=true;
//      break;
//      }
//     }
//     if(flag==true)
//     cout<<"it is not pallindrome";
//     else
//     cout<<"it is pallindrome";
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//   int arr[2][2]={24,37,53,26};    // 2d arrays

//   for(int i=0;i<2;i++)
//   {
//     for(int k=0;k<2;k++)
//     cout<<arr[i][k]<<" ";
//     cout<<endl;
//   }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//   int arr[2][3]={4,5,8,3,9,2};
//   int brr[2][3]={1,9,4,7,2,6};
//   int crr[2][3];

//   for(int i=0;i<2;i++)
//    for(int k=0;k<3;k++)
//       crr[i][k]=arr[i][k]+brr[i][k];          //sum of two  2d arry
 
//    for(int i=0;i<2;i++)                
//    {
//     for(int k=0;k<3;k++)
//       cout<<crr[i][k]<<" ";
//       cout<<endl;
//    }
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int y=0,arr[3][5]={{20,67,48,56},{85,45,77,56},{45,78,61,69}};
//     for(int i=0;i<3;i++)
//      for(int j=0;j<5;j++)    // greater no. of all arry elements
//       if(arr[i][j]>y)
//       y=arr[i][j];           // y=y+arr[i][j]; for sum of all elements
//     cout<<y;
// } 


// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     string str="jitender";
//     cout<<str<<endl;              //operators in string
//     cout<<str.length()<<endl;
//     cout<<str<<endl;
//     str.pop_back();
//     cout<<str<<endl;
//     str.push_back('d');
//     cout<<str<<endl;
//     str.append(" vats");
//     cout<<str<<endl;
//     cout<<str.length();
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int x,y=0,z=0,arr[]={1,2,3,4,5,6};
//     cin>>x;
//     bool flag=false;
//     for(int i=0;i<6;i++)
//     {
//      if(x==arr[i])
//      {
//       flag=true;                                //given element present in arry or not???
//       y++;
//       z=i;
//       break;
//      }
//     }
//     if(flag==true)
//     cout<<"yes,"<<endl<<"at the position : "<<z;
//     else
//     cout<<"nope";
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//   int x=14,a=0,b=0,arr[]={42,7,26,10,40,7,87,95,50,46,5,4,24};
//   bool flag=false;

//   for(int i=0;i<sizeof(arr)/4;i++)            //doublet in arry element
//    for(int j=i+1;j<sizeof(arr)/4;j++)
//     if(arr[i]+arr[j]==x)
//     {
//     flag=true;
//     a=i;
//     b=j;
//     cout<<"yes,at index elements "<<a<<" and "<<b<<endl;
//     }
//     if(flag==true);
//    // cout<<"yes,at index elements "<<a<<" and "<<b<<endl;
//     else
//      cout<<"no such index value";
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//   int arr[]={1,2,3,5};
//   int y=sizeof(arr)/4;
//   int j=y-1;

//   for(int i=0;i<y;i++)                     //reversing through swap operater
//    cout<<arr[i]<<" ";
//    cout<<endl;

//   for(int i=0;i<y/2;i++,j--)
//    swap(arr[i],arr[j]);
  
//   for(int i=0;i<y;i++)
//    cout<<arr[i]<<" ";
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//   int arr[]={1,2,3,4,5,6,7,8};            //swaping niebhouring elements
//   int k,y=sizeof(arr)/4;
//   cout<<y<<endl;

//   for(int i=0;i<y;i++)
//    cout<<arr[i]<<" ";
//    cout<<endl;

//    for(int i=0;i<y;i=i+2,k=k+2)
//   {
//    k=i+1;
//    swap(arr[i],arr[k]);
//   }
//   for(int i=0;i<y;i++)
//    cout<<arr[i]<<" ";
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[]={7,2,3,2,3,7,5,6,9}; 
//     int a=sizeof(arr)/4;
//     bool flag=true;

//     for(int i=0;i<a;i++)                 //unique value in array    """  HARDDDEST  """
//      for(int j=0;j<a;j++)
//     {
//       if(i==j)
//        continue;
//       else if(arr[i]==arr[j])
//        break;
//       else if(arr[i]!=arr[j] and j==a-1)
//       {
//       /////////// ////////// cout<<"has unique value "<<arr[i]<<" at index "<<i<<endl;
//         flag=false;
//       }
//       else if(i==a-1)                  
//        if(arr[i]!=arr[j] and j==a-2)
//       {
//      //////////// /////////// //cout<<"has unique value "<<arr[i]<<" at index "<<i<<endl;
//         flag=false;
//       }
//     } 
//      if(flag==false)
//       cout<<"has unique value ";
//      else
//      cout<<"no unique values";   
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//   int a,b,c,arr[]={56,28,19,39,54,89,19,49,16,23,32,51,49};

//   bool flag=false;
//   for(int i=0;i<sizeof(arr)/4;i++)
//    for(int j=i+1;j<sizeof(arr)/4;j++)
//    {
//     if(i==j)
//      continue;
//     else if(arr[i]==arr[j])            //duplicates in array
//     {
//      flag=true;
//      a=arr[i];
//      b=j;
//      c=i;
//      cout<<"duplicate value "<<a<<" at index values "<<c<<" and "<<b<<endl;
//     }
//    }
//    if(flag==false)
//    cout<<"no duplicate value";
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int x=0,y=0,a,b,arr[]={1,2,3,5,6},brr[]={1,2,3,4,5,6};
//     a=sizeof(arr)/4;
//     b=sizeof(brr)/4;
//     {
//     for(int i=0;i<a;i++)
//      for(int j=0;j<b;j++)
//       if(arr[i]==brr[j])                     //missing elements in another array without function
//        break;
//       else if (arr[i]!=brr[j] and j==b-1)
//       {
//        cout<<arr[i]<<" is not present in array brr"<<endl;
//        y++;
//       }
//     }
//     {
//     for(int i=0;i<b;i++)
//      for(int j=0;j<a;j++)
//       if(brr[i]==arr[j])
//        break;
//       else if (brr[i]!=arr[j] and j==a-1)
//       {
//        cout<<brr[i]<<" is not present in array arr"<<endl; 
//       x++;
//       }
//     }
//     if(x==0 and y==0)
//     cout<<"no duplicates";
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int x=0,y=0,z=0,arr[]={1,4,4,4,6,6,1};    //unique value of different type

//     for(int i=0;i<sizeof(arr)/4;i++)          //least optimal solution eveeeeeeer!!!!!!!!!
//     {
//       if(arr[i]==1)
//        x++;
//       else if(arr[i]==4)
//        y++;
//       else if(arr[i]==6)
//        z++;
//     }
//   if(x!=y and y!=z and z!=x)
//    cout<<"unique value";
//   else
//    cout<<"no unique value";    
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b,arr[]={1,2,3,11,4,6},brr[]={0,9,8,7,10,11};
//     a=sizeof(arr)/4;
//     b=sizeof(brr)/4;

//     bool flag=false;
//     for(int i=0;i<a;i++)                //intersection in array  """"almost same as union""""
//      for(int j=0;j<b;j++)
//       if(arr[i]==brr[j])
//       {
//        cout<<arr[i]<<"  ";
//         flag=true;
//       }
//      if(flag==true)
//       cout<<"has the common value";
//      else
//       cout<<"no common values";
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b,arr[]={1,2,3,4,5,6,7,8},brr[]={1,2,3,4,5,8};
//     a=sizeof(arr)/4;
//     b=sizeof(brr)/4;

//     bool flag=false;
//     for(int i=0;i<a;i++)                //union of array """" almost as intersection"""""
//      for(int j=0;j<b;j++)
//       if(arr[i]!=brr[j])
//       {
//        cout<<arr[i]<<" ";
//        flag=true;
//        break;
//       }
//      if(flag==true)
//       cout<<"is the common value";
//      else
//       cout<<"no common values";
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//   int x,arr[]={1,2,3,4,5,6,7};
//   cout<<"enter sum value : ";
//   cin>>x;
//   bool flag=false;
//   for(int i=0;i<sizeof(arr)/4;i++)
//    for(int j=i+1;j<sizeof(arr)/4;j++)
//    {
//     if(i==j)
//      continue;
//     else if(arr[i]+arr[j]==x)              //pair sum values
//     {
//     flag=true;
//      cout<<arr[i]<<" "<<arr[j]<<endl;
//     break;
//     }
//    }
//    if(flag==true)
//      cout<<"are the pair sums";
//    else
//      cout<<"no pair sum found";
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//   int x,a=0,b=0,c=0,arr[]={1,2,3,4,5,6,7,8,9};
//   cout<<"enter the triplet : ";
//   cin>>x;
//   bool flag=false;
//   int z=(sizeof(arr)/4);
//   if(0!=z%2)
//   z=z+1;

//    for(int i=0;i<z/2;i++)                 //triplet in array element
//     for(int j=1;j<z;j++)
//      for(int k=2;k<z;k++)
//       if(arr[i]+arr[j]+arr[k]==x and arr[i]!=arr[j] and arr[j]!=arr[k] and arr[k]!=arr[i])
//     {
//      if(arr[i]==a)
//       break;
//      else
//      {
//       flag=true;
//        a=arr[i];
//        b=arr[j];
//        c=arr[k];
//       cout<<"yes,the elements "<<a<<" and "<<b<<" and "<<c<<endl;
//      }
//     }
//     if(flag==false)
//      cout<<"no such elements";
// }


//#include<iostream>
// using namespace std;

// int main()
// {
//   int arr[]={1,1,0,1,0,0};                 //sorting binary arrays
  
//   for(int i=0;i<sizeof(arr)/4;i++)
//    for(int j=i+1;j<sizeof(arr)/4;j++)
//     if(arr[i]==1 and arr[j]==0)
//     swap(arr[i],arr[j]); 
//    for(int k=0;k<sizeof(arr)/4;k++)
//    cout<<arr[k]<<" ";
// }


#include<iostream>
using namespace std;

int main()
{

    int x=0,y=0,z=0;

    int arr[]={0,1,0,1,1,1};

    for(int i=0;i<sizeof(arr)/4;i++)
     {
        if(arr[i]==0)
         x++; 
        else if(arr[i]==1)
         y++;

         if(x==y)
          z=y;
     }

     cout<<z*2;






}
