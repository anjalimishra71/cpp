#include<stdio.h>
int main(){
   int num,n;
   printf("enter len");
   scanf("%d",&n);
   int a[n];
   printf("enter your searching number");
   scanf("%d",&num);
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
int mid;
int low=0;
int high=n-1;
   for(int i=0;i<n;i++){
       mid=(low+high)/2;
       if(num==a[mid]){
        printf("number is match");
        break;
       } 
       else if(num>a[mid]){
        low=mid+1;
       }
       else{
        high=mid-1;
       }
   }

    return 0;
}