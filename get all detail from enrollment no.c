#include<stdio.h>
int main(){
    int i, ad_year=0, collageCode, Roll;
    int En_roll[12];
    printf("Enter Enrollment No:");
    for(i=0;i<12;i++){
        scanf("%d",&En_roll[i]);
    }
    ad_year = En_roll[0]*10 + En_roll[1];
    printf("Admision Year:20%d",ad_year);

}

