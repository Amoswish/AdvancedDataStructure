#include<bits/stdc++.h>
using namespace std;
void Qsort(int a[], int low, int high)
{
    int length = sizeof(a) / sizeof(a[0]);
    if(low >= high)
    {
        return;
    }
    int first = low;
    int last = high;
    int key = a[first];/*用字表的第一个记录作为枢轴*/

    while(first < last)
    {
        while(first < last && a[last] >= key)
        {
            last--;
        }
        a[first] = a[last];/*将比第一个小的移到低端*/
        while(first < last && a[first] <= key)
        {
            first++;
        }
        a[last] = a[first];
/*将比第一个大的移到高端*/
    }
    a[first] = key;/*枢轴记录到位*/
    if( (first-1)>(length/2)){
        Qsort(a, low, first-1);
    }
    else{
        Qsort(a, first+1, high);
    }
}
int main()
{
    int a[] = {1,2,3,2,2,2,5,4,2};
    int length =  sizeof(a) / sizeof(a[0]);
    Qsort(a, 0, length - 1);
    int times = 0;
    for(int i = 0;i<length;i++){
        if(a[i] == a[length/2]){
            times++;
        }
    }
    if(times>(length/2)){
        cout << a[length/2] << " ";
    }
    else{
        cout<<"没有这样的元素";
    }
    return 0;
}

