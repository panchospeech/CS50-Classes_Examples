#include <cs50.h>
#include <stdio.h>
#include <string.h>

//this create an struct type called person composed by a name and number
typedef struct
{
    string name;
    string number;
    //you can also add another element of this person string address;
}
person;

int main(void)
{
    //create an array inside the structure type called person
    person people[2];

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-949-468-2750";

    // This is the original version but its bad designed so we need to create a type structure to replace it
    //string names[] = {"Carter", "David"};
    //string numbers[] = {"+1-617-495-1000", "+1-949-468-2750"};

    string name = get_string("Name: ");
    for (int i = 0; i < 2; i++)
    {
        //so also this has to change

        if(strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
        //if(strcmp(names[i], name) == 0)
        //{
            //printf("Found %s\n", numbers[i]);
            //return 0;
        //}
    }
    printf("Not found\n");
    return 1;
}