#include<stdio.h>
struct login
{
    char fname[30];
    char lname[30];
    char username[30];
    char password[20];
};
int main ()
{
    int option;
    printf("\n----------------------------------------------------------------------------------------\n");
    printf("|                                     STUDENT LOGIN                                     |       \n" );
    printf("-----------------------------------------------------------------------------------------     \n" );
    printf("Press '1' to Register\nPress '2' to Login\n\n");
    scanf("%d",&option);
    if(option == 1)
        {system("CLS");
        registration();
        }
    else if(option == 2)
        {system("CLS");
            login();
        }
}
login()
{
    char username[30],password[20];
    FILE *log;
    log = fopen("login.txt","r");
    struct login l;
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        exit(1);
    }
    printf("\nPlease Enter your login user name and password:\n\n");
    printf("Username:  ");
    scanf("%s",&username);
    printf("\nPassword: ");
    printf("\n");
  scanf("%s",&password);

    while(fread(&l,sizeof(l),1,log))
        {
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
            {printf("\nSuccessful Login\n");
             system("CLS");
             enrollment();}
        else
            {printf("\nIncorrect Login Details\nPlease enter the correct name & password\n");}
        }
fclose(log);
}
 registration()
{ char firstname[15];
   FILE *log;
    log=fopen("login.txt","w");
    struct login l;
    printf("\n\nWelcome to your PUC Enrollment. We need to enter some details for registration.\n\n");
    printf("\nEnter First Name:\n");
    scanf("%s",l.fname);
    printf("\nEnter Surname:\n");
    scanf("%s",l.lname);

    printf("Thank you.\nNow please choose a username and password as credentials for system login.\nEnsure the username is no more than 30 characters long.\nEnsure your password is at least 8 characters long and contains lowercase, uppercase, numerical and special character values.\n");

    printf("\nEnter Username:\n");
    scanf("%s",l.username);
    printf("\nEnter Password:\n");
    scanf("%s",l.password);
    fwrite(&l,sizeof(l),1,log);
    fclose(log);
    printf("\nConfirming details...\n...\nWelcome, %s!\n\n",firstname);
    printf("\nRegistration Successful!\n");
    printf("Press any key to continue...");
    getchar();
    system("CLS");
    login();
}
enrollment()
{int ans,back;
    printf("\n\t\t****************Welcome PUC Course Enrollment*****************");
    printf("\n----------------------------------------------------------------------------------------\n");
    printf("|                                     STUDENT ENROLLMENT                                |       \n" );
    printf("-----------------------------------------------------------------------------------------     \n" );
    printf("\n\n\n1.Course module\n\n2.Enroll course\n\n3.Student Report Card\n\n4.Back to Main Menu");
    printf("\n\n\nSelect Option(1/2/3/4)?>");
    scanf("%d",&ans);
    if(ans==1)
    {system("CLS");
    printf("-----------------~~~~~~~~~~~~(NEW ENROLLMENT)~~~~~~~~~~~~~ ------------------- ");
    printf("\n\nCOURSE MODULE:\n\n\n");
    printf(" CODE   |           COURSE NAME                      |CREDIT|         \n\n");
    printf("CSE_103 |DESCRETE MATHEMATICS                        |  3   |                   \n\n");
    printf("CSE_111 |STRUCTURED PROGRAMMING LANGUAGE             |  2   |                     \n\n");
    printf("CSE_112 |STRUCTURED PROGRAMMING LANGUAGE LABORATORY  |  2   |  \n\n");
    printf("EEE_211 |ELECTRONICS 1                               |  3   |                    \n\n");
    printf("EEE_212 |ELECTRONICS 1 LABORATORY                    | 1.5  |                  \n\n");
    printf("MAT_107 |ENGINEERING MATHEMATICS 2                   |  3   | \n\n");
    printf("PHY_103 |ENGINEERING PHYSICS2                        |  3   |                  \n\n");
    printf("ENG_103 |DEVELOPING ENGLISH SKILL                    |  2   |                \n\n");
     printf("|BACK=press 0|>");
    scanf("%d",&back);
  if(back==0)
   {system("CLS");
    enrollment();}
     }
  if(ans==2)
{int course,n,dm,des,sp,spl,em_2,ep_2,elc,elc_lab,DM,DES,SP,SPL,EM_2,EP_2,ELC,ELC_LAB,sum,enroll=0,back;
    system("CLS");
    printf("COURSE MODULE\n");
    printf("1)DESCRETE MATHEMATICS");
     printf("\n2)STRUCTURED PROGRAMMING LANGUAGE" );
    printf("\n3)STRUCTURED PROGRAMMING LANGUAGE LABORATORY" );
     printf("\n4)ELECTRONICS 1" );
    printf("\n5)ELECTRONICS 1 LAB" );
    printf("\n6)ENGINEERING MATHEMATICS 2" );
     printf("\n7)ENGINEERING PHYSICS2" );
    printf("\n8)DEVELOPING ENGLISH SKILL\n" );
    printf("-----------------------------------------------------------------------------------------     \n" );
    printf("How many course do you want to enroll:");
    scanf("%d",&n);
    printf("Course Enrolled:\n\n");
while(n--)
    {scanf("%d", &course);
    switch (course)
    {
    case 1:if(course==1)
       {   DM =(2100*3);
           printf("CSE_103 |DESCRETE MATHEMATICS                        |  3   |                   \t=%dtaka\n\n",DM);
      enroll++;}
       else{ DM=0;}
    case 2:if(course==2)
        {   SP=(2100*2);
            printf("CSE_111 |STRUCTURED PROGRAMMING LANGUAGE             |  2   |              \t\t=%dtaka\n\n",SP);
           enroll++; }
            else{ SP=0;}
    case 3:if(course==3)
    {    SPL=(2100*2);
        printf("CSE_112 |STRUCTURED PROGRAMMING LANGUAGE LABORATORY  |  2   |    \t\t\t=%dtaka\n\n",SPL);
       enroll++; }
           else{SPL=0;}
       case 4:if(course==4)
       {ELC=(2100*3);
       printf("EEE_211 |ELECTRONICS 1                               |  3   |                    \t=%dtaka\n\n",ELC);
        enroll++; }
           else{ELC=0;}
         case 5:if(course==5)
        {ELC_LAB=(int)(2100*1.5);
          printf("EEE_212 |ELECTRONICS 1 LABORATORY                    | 1.5  |      \t\t\t=%dtaka\n\n",ELC_LAB);
         enroll++; }
         else{  ELC_LAB=0;}
   case 6:if(course==6)
        {EM_2=(2100*3);
        printf("MAT_107 |ENGINEERING MATHEMATICS 2                   |  3   |     \t\t\t=%dtaka\n\n",EM_2);
         enroll++; }
         else{ EM_2=0;}
          case 7:if(course==7)
        {EP_2 =(2100*3);
         printf("PHY_103 |ENGINEERING PHYSICS2                        |  3   |                 \t\t=%dtaka\n\n",EP_2);
        enroll++;}
         else{  EP_2=0;}
          case 8:if(course==8)
        {DES=(2100*2);
         printf("ENG_103 |DEVELOPING ENGLISH SKILL                    |  2   |                \t\t=%dtaka\n\n",DES);
        enroll++; }
         else{  DES=0;}
    }
    }
    sum=(DM+SP+SPL+ELC+ELC_LAB+EM_2+EP_2+DES);
    printf("-----------------------------------------------------------------------------------------     \n" );
    printf("|Your Total Course Fees is|==\t\t\t\t\t\t\t\t%d/= Taka.", sum);
    printf("\nCourse enrolled:%d",enroll);
    printf("\nCourse dropped:%d",8-enroll);
    printf("\n\n\t\t****Course Enrolled Successfully!!!****");
    printf("\n|BACK=press 0|>");
    scanf("%d",&back);
    if(back==0)
   {system("CLS");
    enrollment();}
    }
     if(ans==4)
     {system("CLS");
     return main();
     }
}






