#include <stdio.h>

int listsize;
int largestnum;
int smallestnum;
int numlst[] = {12, 34, 3, 95, 11, 84,};

void largestn(){
    largestnum = numlst[0];
    for(int i = 0; i < listsize; i++) {
        if(numlst[i] > largestnum) {
            largestnum = numlst[i];
        }
    }
        printf("The Largest Number Is: %d\n", largestnum);

}

void smallestn(){
    smallestnum = numlst[0];
    for(int i = 0; i < listsize; i++) {
        if(smallestnum > numlst[i]){
            smallestnum = numlst[i];
        }
    }
        printf("The Smallest Number Is: %d", smallestnum);
}

int main(){
    listsize = sizeof(numlst) / sizeof(numlst[0]);
    largestn();
    smallestn();

    return 0;
}