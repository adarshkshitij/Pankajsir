// #include <iostream>
// using namespace std;
// int findsum(int a[],int size){
//     if(size==0)
//        return 0;
//     return a[0] + findsum(a+1,size-1);
// }
// int main()
// {
//     int a[]={12,3,45,67,9};
//     cout<<"The sum of array elements is  "<<findsum(a,5);

//     return 0;
// }

// SORTED OR not

// #include <iostream>
// using namespace std;
// bool Issorted (int a[],int size){
//     if(size==0 || size== 1)
//        return true;
//     if(a[0]>a[1])
//        return false;
//     return Issorted(a+1,size-1);
// }
// int main()
// {
//     int a[]={12,3,45,67,9};
//     if(Issorted(a,5)) 
//     cout<< "sorted"<< endl;
//     else
//     cout << "Not sorted"<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// bool Issorted(int a[],int size){
//     if(size==0 || size==1)
//        return true;
//     if(a[0]>a[1])
//        return false;
//     return Issorted(a+1,size-1);
// }
// int main()
// {
//     int a[]={12,30,45,67,90};
//     if(Issorted(a,5))
//       cout<<"sorted"<<endl;
//     else
//       cout<<"Not sorted"<<endl;

//     return 0;
// }

 // Q3 Given an array , reverse the content of the array 

// #include<iostream>
//  using namespace std;
//  void reverse(int a[],int size){
//     int temp;
// if(size == 0 || size == 1)
//     return;
// temp = a[0];
// a[0]= a[size-1];
// a[size -1]= temp;
// reverse(a+1, size-2);
// }
// int main()
// {
//     int a[]={10, 20, 30,40,50,60};
//     reverse(a,6);
//     for (int i= 0;i<6;i++)
//     cout<<a[i]<<" ";
//     return 0;
// }




// Q4 Remove a particula character from the string using the resucrsion 
//ip abxcbdx i want to remove the x form the code
// case i first character is 'x'
// case ii first character is not x
// first we havt to find the length of the input 
// agar pahla charactr x nahi hai then call the funtion 

