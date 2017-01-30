/* 
 * p50 programing project 03
 * input ISBN -> output brake down ISBN
 */

 #include <stdio.h>

 int main(void)
 {
     int prefix, groupId, pubCode, itemNo, chkDigit;

     printf("Enter ISBN: ");
     scanf("%d-%d-%d-%d-%d", &prefix, &groupId, &pubCode, &itemNo, &chkDigit);

     printf("GSI prifix: %d\n", prefix);
     printf("Group identifier: %d\n", groupId);
     printf("Publisher code: %d\n", pubCode);
     printf("Item number: %d\n", itemNo);
     printf("Check digit: %d\n", chkDigit);

     return 0;
 }