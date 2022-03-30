#include <stdio.h>
int auth(int ic[3][2],int id, int pin){
    int floor = 0;
    for(int i = 0; i<3; i++){
        if(id == ic[i][0] && pin == ic[i][1]){
            floor = 1;
        }
    }
    return floor;
}
int main(){
    int ic[3][2] = {{444,444},{555,555},{333,321}};
    int id,pin;
    printf("Enter ID Number: ");
    scanf("%d",&id);
    printf("Enter PIN: ");
    scanf("%d",&pin);
    if(auth(ic,id,pin)){
        printf("You have successfully logged in\nID#:%d",id);
    } else {
        printf("Invalid ID/PIN!");
    }
    return 0;
}