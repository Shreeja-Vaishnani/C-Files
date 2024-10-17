#include<stdio.h>
void main()
{
    char note1[100],note2[100], copy[100],ccnote1[100],fullnote[100],rev_note[100],cnote2[100];
    int choice,length=0,i,f,j;

    printf("Simple Note-taking Application\n");


    // Input first note from the user
    printf("Enter your first note: ");
    gets(note1);





    // Menu for operations
    while (1)
    {
        printf("\nChoose an operation:\n");
        printf("1. Calculate length of note\n");
        printf("2. Reverse note\n");
        printf("3. Compare two notes\n");
        printf("4. Copy note\n");
        printf("5. Concatenate two notes\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

            case 1:
                for(i=0;note1[i]!='\0';i++)
                {
                        length++;
                }
                printf("The length of the note is: %d\n", length);
                break;


            case 2:

                for(i=length-1,j=0 ; i>=0 ; i--,j++)
                {
                    rev_note[j]=note1[i];
                }
                rev_note[j]='\0';
                printf("\nThe revers notes is :");
                puts(rev_note);
                break;


            case 3:
                printf("\nEnter the second note to compare: ");
               scanf("%s",&note2);
                for(i=0;note1[i]!='\0' || note2[i]!='\0';i++)
                {

                    if (note1!=note2 || note1[i]!='\0' || note2[i]!='\0')
                    {
                        f=1;
                        break;
                    }

                }
                 if(f==0)
                    {
                        printf("\n \"%s\" and \"%s\" are same\n",note1,note2);
                    }
                    else
                    {
                        printf("\n \"%s\" and \"%s\" are not  same\n",note1,note2);
                    }
                break;

            case 4:
                for(i=0;note1[i]!=0;i++)
                {
                    copy[i]=note1[i];

                }
                copy[i]='\0';

                printf("The copied note is: %s\n", copy);

                break;

           case 5:
                printf("Enter the second note to concatenate: ");
                scanf("%s",&cnote2);

                for(i=0;note1[i]!='\0';i++)
                {
                    fullnote[i]=note1[i];
                }
                fullnote[i]=' ';
                for(j=0;cnote2[j]!='\0';j++)
                {
                    fullnote[i+j+1]=cnote2[j];
                }
                fullnote[i+j+1]=' ';

                printf("The concatenated note is: %s\n",fullnote);

                break;

            case 6:
                printf("Exiting the application.\n");
                printf("----------------------------------------\n");
                printf("My name is Shreeja Vaishnani.\nMy Id is 24CE138");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
                printf("----------------------------------------\n");
                printf("My name is Shreeja Vaishnani.\nMy Id is 24CE138");

        }
    }
}
