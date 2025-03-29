#include <stdio.h>
#chem verchacrel
int main ()
{
    int arr[10] = {1, 4, 3, 6, 5, 7, 9, 8, 10};
    int copy = 0;
    int newarr[10] = {};
    for (int i = 0; i < 10; ++i){
        for (int g = i + 1; g < 10; ++g){
                if (arr[i] > arr[g]){
                       copy = arr[i];
                       arr[i] = arr[g];
                       arr[g] = copy;
                    }
            }
                newarr[i] = arr[i];
    }

    //for (int i = 0; i < 10; ++i){
      //      if (newarr[i] + arr[i + 1] == )
       // }

}
