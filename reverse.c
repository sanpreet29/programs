#include<stdio.h>

void reverse(int n, int array[])
{

        int s = 0;
        int e = n-1;
        int flag = 0;
        while(s < e) {
                flag = array[s];
                array[s] = array[e];
                array[e] = flag;
                s++;
                e--;
        }
        for(int i = 0; i < n; i++)
        {
                printf("%d ", array[i]);
        }
}

int main(){

        int array[] = {1,2,3,4,5};
        int n = sizeof(array) / sizeof(array[0]);
        reverse(n,array);

        return 0;
}
