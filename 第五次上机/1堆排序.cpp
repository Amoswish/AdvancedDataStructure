#include<bits/stdc++.h>
using namespace std;
void adjustHeap(int data[],int heapbegin, int heaplength)//heapfirst为堆的开始位置
{
    int tempfather=data[heapbegin];//保存父节点
    for (int leftchild=heapbegin*2+1;leftchild<heaplength;leftchild=leftchild*2+1)
    {
        //如果右边值大于左边值，指向右边
        int rightchild = leftchild+1;
        int maxchild = leftchild;
        if (rightchild<heaplength && data[leftchild]< data[rightchild])
        {
            maxchild = rightchild;//指向右孩子
        }
        //如果子节点大于父节点，将子节点值赋给父节点,并以新的子节点作为父节点（不用进行交换）
        if (data[maxchild]>tempfather)
        {
            data[heapbegin]=data[maxchild];
            heapbegin=maxchild;
        }
        else
            break;
    }
        //put the value in the final position
    data[heapbegin]=tempfather;
}
void Heapsort(int data[],int length){
    //调整堆
    for(int i = length/2-1;i>=0;i--){//从最后一个非叶子结点开始
        adjustHeap(data,i,length);
    }
    //调换
    for(int j=length-1;j>0;j--){
        int temp = data[j];
        data[j] = data[0];
        data[0] = temp;
        adjustHeap(data,0,j);
    }
}
int main()
{
    int data[] = {4,5,1,6,2,7,3,8};
    int length = sizeof(data)/sizeof(data[0]);
    Heapsort(data,length);
    int k = 0;
    cin>>k;
    for(int i =0;i<k;i++){
        cout<<data[i]<<" ";
    }
}
