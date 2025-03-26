#include<stdio.h>
#include<string.h>

int main()
{
    char pass[] = "Collins@265";
    char req_pass[sizeof(pass)];

    printf("User: Collins Anderson\nEnter Password : ");
    fgets(req_pass, sizeof(req_pass), stdin);

    if( strcmp( req_pass, pass) == 0 )
    {
        printf("ACCESS GRANTED");
    }
    else
    {
        printf("WRONG PASSWORD");
    }

    return 0;
}