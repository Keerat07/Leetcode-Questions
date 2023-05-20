#include<iostream>
using namespace std;
int CrossSum(int arr[],int low,int mid,int high,int&start,int&end){
    int leftsum=INT16_MIN;
    int maxleft=mid,maxright=mid+1;
    int sum=0;
    for(int i=mid;i>=low;i--){
        sum=sum+arr[i];
        if(sum>leftsum){
            leftsum=sum;
            maxleft=i;
        }
    }
    int rightsum=INT16_MIN;
    sum=0;
    for(int i=mid+1;i<=high;i++){
        sum+=arr[i];
        if(sum>rightsum){
            rightsum=sum;
            maxright=i;
        }
    }
    start=maxleft;
    end=maxright;
    return leftsum+rightsum;
}

int maximumSum(int arr[],int left,int right,int &start,int &end){
    if(right==left){
        start=end=left;
        return arr[left];
    }
    int leftlow,lefthigh,leftsum;
    int rightlow,righthigh,rightsum;
    int crossleft,crossright,crosssum;
    int mid=(left+right)/2;
    leftsum=maximumSum(arr,left,mid,leftlow,lefthigh);
    rightsum=maximumSum(arr,mid+1,right,rightlow,righthigh);
    crosssum=CrossSum(arr,left,mid,right,crossleft,crossright);
    if(leftsum>=rightsum && leftsum>=crosssum){
        start=leftlow;
        end=lefthigh;
        return leftsum;
    }
    else if(rightsum>=leftsum && rightsum>=crosssum){
        start=rightlow;
        end=righthigh;
        return rightsum;
    }
    else{
        start=crossleft;
        end=crossright;
        return crosssum;
    }
}
int main(){
    int arr[]={3,5,-7,5,-4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int si,ei,sum;
    sum=maximumSum(arr,0,n-1,si,ei);
    cout<<sum<<endl<<si<<endl<<ei;
}
