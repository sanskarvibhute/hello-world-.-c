#include <stdio.h>
int main()
{ // this program is for time table of week
    printf("ECL -ENGINEERING CHEMISTRY LAB \n"
           "AEM -ADVANCED ENGINEERING MATHEMATICS \n"
           "ICN-INTRODUCTION TO COMPUTER NETWORK \n"
           "CEA-CO-CURRICULAR AND EXTRA CURRICULAR ACTIVITIES \n"
           "DTL-DESIGN THINKING WITH IDEA LAB \n");
    printf("KS-INDIAN KNOWLEDGE SYSTEM \n"
           "MENT - MENTORING BATCH \n"
           "RWD - RESPONSIVE WEB DESIGN \n"
           "PUC - PROGRAMMING USING C \n"
           "EC - ENGINEERING CHEMISTRY \n\n\n");

    int day_no;
    printf("enter day_no then i will display respective time table\n");
    scanf("%d", &day_no);
    switch (day_no)
    {
    case 1:
        printf("monday\n hence today is your lectures of \t 1.AEM \t 2.DTL \t 3.CEA \t 5.MENT \n & practicl of 4.RWD ");
        break;
    case 2:
        printf("tuesday\n hence today is your lectures of \t 2.ICN \t 3.PUC \t 4.EC \t 5.RWD \n & practicl of 1.PUC ");
        break;
    case 3:
        printf("wednesday\n hence today is your lectures of \t 1.PUC \t 2.EC \t 3.IKS \t 4.AEM \t 5.ICN \t 6.PUC \n & NO practicl ");
        break;
    case 4:
        printf("thrusday\n hence today is your lectures of \t 1.PUC \t 2.PUC \t 3.AEM \t 4.IKS \n & practicl of 5.DTL");
        break;
    case 5:
        printf("friday\n hence today is your lectures of \t 1.ICN \t 2.EC \t 4.AEM  \n & practicl of 3.DTL");
        break;
    case 6:
        printf("saturday\n NO LECTURE NO PRACTICAL ENJOY YOUR DAY");
        break;
    case 7:
        printf("sunday\n NO LECTURE NO PRACTICAL ENJOY YOUR DAY");
        break;
    default:
        printf("input must be between 1-7\n");
    }
    return 0;
}
