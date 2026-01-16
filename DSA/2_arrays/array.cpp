// // // // // // #include<iostream>
// // // // // // #include <climits>
// // // // // // using namespace std;
// // // // // // int change(int num[],int size){
// // // // // //     for(int i=0;i<size;i++){
// // // // // //            num[i]=2*num[i];
// // // // // //     }
// // // // // // }
// // // // // // int main(){
// // // // // //     //storing value
// // // // // //     // int a[5]={};
// // // // // //     // for(int i=0;i<5;i++){
// // // // // //     //     cout<<"enter the marks"<<i+1<<":";
// // // // // //     //     cin>>a[i];
// // // // // //     // }
// // // // // //     // for(int i=0;i<5;i++){
// // // // // //     //     cout<<a[i]<<" at index "<<i<<endl;
// // // // // //     // }
// // // // // // //smallest value
// // // // // // //     int smallest=INT_MAX;
// // // // // // //     int num[5]={1,2,-1,23,-34};
// // // // // // //     for(int i=0;i<5;i++){
// // // // // // //         // if(num[i]<smallest){
// // // // // // //         //     smallest=num[i];
// // // // // // //using a function 
// // // // // // //         smallest=min(smallest,num[i]);

        
// // // // // // //     }    

// // // // // // //   cout<<smallest;  

    
// // // // // // // }
// // // // // // //largest value
// // // // // // // int largest=INT_MIN;
// // // // // // //     int num[5]={1,2,-1,23,-34};
// // // // // // //     for(int i=0;i<5;i++){
// // // // // // //         // if(num[i]>largest){
// // // // // // //         //     largest=num[i];
// // // // // // //         //using function
// // // // // // //          largest=max(largest,num[i]);
// // // // // // //         // }
        
// // // // // // //     }    

// // // // // // //   cout<<largest;  

// // // // // // //alternative method for largest and smallest value without using
// // // // // // //climits file

// // // // // // int num[]={1,2,3,4,155,5,6,61,62};
// // // // // // change(num,9);
// // // // // // for(int i=0 ;i<9;i++){
// // // // // //     cout<<num[i]<<endl;
// // // // // // }
// // // // // // }
// // // // // //reversing an array
// // // // // #include<iostream>
// // // // // #include<utility>
// // // // // using namespace std;
// // // // // int reverse(int arr[],int size){
// // // // //       int start=0,end=size-1;
// // // // //       while(start<end){
// // // // //         swap(arr[start],arr[end]);
// // // // //         start++;
// // // // //         end--;
// // // // //       }
// // // // // }
// // // // // int main(){
// // // // //     int arr[]={1,2,3,4,5,6,7,8,9,10};
// // // // //     reverse(arr,10);
// // // // //     for(int i=0;i<10;i++){
// // // // //         cout<<arr[i]<<" ";
// // // // //     }
// // // // // }
// // // // //question 
// // // // //wap to calculate suma nd product of all elements in arrays
// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){
// // // // int sum=0;
// // // // int product=1;
// // // // int arr[]={1,2,3,4,5,6,7,8,9};
// // // // for(int i=0;i<9;i++){
// // // //     sum=sum+arr[i];
// // // //     product=product*arr[i];
// // // //     }
// // // //     cout<<sum<<endl;
// // // //     cout<<product<<endl;
// // // // }
// // // //wap to swap max and min number in array
// // // #include<iostream>
// // // using namespace std;
// // // int max(int arr[],int size){
// // //     int largest=arr[0];
// // //     for(int i=0;i<size;i++){
// // //         if(largest<arr[i]){
// // //             largest=arr[i];
// // //         }
// // //     }
// // //     return largest;
   
// // // }
// // // int min(int arr[],int size){
// // //     int smallest=arr[0];
// // //     for(int i=0;i<size;i++){
// // //         if(smallest>arr[i]){
// // //             smallest=arr[i];
// // //         }
// // //     }
// // //     return smallest;
// // // }
// // // int swap(int x,int y){
// // //    cout<<"orignal values of "<<"max"<<x<<" "<<"min"<<y<<endl;
// // //    int temp;
// // //    temp=x;
// // //    x=y;
// // //    y=temp;
// // //    cout<<"values after swapping "<<"max "<<x<<" "<<"min "<<y<<endl;
// // // }
// // // int main(){
// // //     int arr[]={1,2,3,4,5,6,7,89};
// // //     int a=max(arr,8);
// // //     int b=min(arr,8);
// // //     swap(a,b);
    

// // // }
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int size=7;
// //     int arr[]={1,2,3,1,2,3,4};
// //     for(int i=0;i<size;i++){
// //         int flag=0;
// //         for(int j=0;j<size;j++){
// //             if(i!=j && arr[i]==arr[j]){
// //                 flag=1;
// //                 break; 
// //             }
// //         }
// //         if(flag==0){
// //             cout<<arr[i];
// //         }
// //     }
        

// // }
// //question 4
// //intersection of arrays
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={11,12,13,4,5,6,7,8,9};
//     int arr1[]={11,12,13,14,15,16,17,18,19};
//     for(int i=0;i<7;i++){
//         int count=0;
//         for(int j=0;j<7;j++){
//             if(arr[i]==arr1[j]){
//                 count=1;
//             }
//         }
//         if(count==1){
//             cout<<arr[i]<<endl;
//         }
        
        
//     }
// }