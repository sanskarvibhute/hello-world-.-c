/* if you qualified for those subject then you can got credits which given in front  of it
mathematics and science both  - 45
science - 15
 mathematics - 15
create a  code using if , if else ,else in c programing language
 */
#include <stdio.h>
int main()
{
    int math_qualified, science_qualified;
    int credits = 0;

    // Get user input for subject qualification
    printf("Did you qualify for Mathematics? (1 for Yes, 0 for No): ");
    scanf("%d", &math_qualified);

    printf("Did you qualify for Science? (1 for Yes, 0 for No): ");
    scanf("%d", &science_qualified);

    // Calculate credits using if-else statements
    if (math_qualified && science_qualified)
    {
        credits = 45; // Qualified for both subjects
    }
    else if (science_qualified)
    {
        credits = 15; // Qualified for only Science
    }
    else if (math_qualified)
    {
        credits = 15; // Qualified for only Mathematics
    }
    else
    {
        credits = 0; // Didn't qualify for any subject
    }

    // Display results
    printf("Total credits earned: %d\n", credits);

    return 0;
}

#include <stdio.h>

int main()
{
    int mathematics, science;
    int credits = 0;

    // Input whether the user qualifies for Mathematics and Science
    printf("Did you qualify for Mathematics? (1 for Yes, 0 for No): ");
    scanf("%d", &mathematics);

    printf("Did you qualify for Science? (1 for Yes, 0 for No): ");
    scanf("%d", &science);

    // Calculate credits based on the input
    if (mathematics == 1 && science == 1)
    {
        credits = 45;
    }
    else if (mathematics == 1)
    {
        credits = 15;
    }
    else if (science == 1)
    {
        credits = 15;
    }
    else
    {
        credits = 0;
    }

    // Output the assigned credits
    printf("You have earned %d credits.\n", credits);

    return 0;
}
