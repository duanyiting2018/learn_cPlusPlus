#include <cstdio>
#include <windows.h>
#include <cstdlib>
#include <conio.h>

void init();
void print();
void updateWithInput();
void updateWithoutInput();

int P11 = 1,P12 = 1,P21 = 1,P22 = 1;
bool isOver = false;

int main()
{
    system("color f0");
    char isNext;
    init();
begin:
    isOver = false;
    while(isOver != true){
        print();
        updateWithInput();
        updateWithoutInput();
    }
    printf("再玩一局？[Y/N]:e");
    scanf("%c",&isNext);
    if(isNext == true) goto begin;
    else return 0;
}

void init(){
    printf("欢迎来到\"碰鸡蛋\"小游戏\n");
    printf("游戏规则:\n");
    printf("最开始，每个人的鸡蛋都是1和1，可以通过碰别人的鸡蛋增加自己鸡蛋的数值\
            数值将更新为你鸡蛋原有的数值加上别人鸡蛋的数值\n");
    printf("如果数值刚好为10，鸡蛋收回，率先收回两个鸡蛋的胜利！\n");
    printf("输入1 1则代表用你手中的1号鸡蛋碰别人的1号鸡蛋\n");
    system("pause");
    printf("游戏即将开始...");
    Sleep(3000);
    system("cls");
}

void updateWithInput(){
    int self,other;
    printf("P1输入：");
    scanf("%d %d",&self,&other);
    if(self == 1){
        if(other == 1 && P11 != 0) P11 += P21;
        if(other == 2 && P11 != 0) P11 += P22;
    }
    else if (self == 2){
        if(other == 1 && P12 != 0) P12 += P21;
        if(other == 2 && P12 != 0) P12 += P22;
    }
    else{
        printf("输入无效，请下一位玩家输入！\n");
    }
    
    printf("P2输入：");
    scanf("%d %d",&self,&other);
    if(self == 1){
        if(other == 1 && P21 != 0) P21 += P11;
        if(other == 2 && P21 != 0) P21 += P12;
    }
    else if (self == 2){
        if(other == 1 && P22 != 0) P22 += P11;
        if(other == 2 && P22 != 0) P22 += P12;
    }
    else{
        printf("输入无效，请下一位玩家输入！\n");
    }
}

void updateWithoutInput(){
    P11 %= 10;
    P12 %= 10;
    P21 %= 10;
    P22 %= 10;
    if(P11 == 0 && P12 == 0){
        isOver = true;
        printf("\aP1获胜\n");
    }
    if(P21 == 0 && P22 == 0){
        isOver = true;
        printf("\aP2获胜\n");
    }
}

void print(){
    printf("------------------------------\n");
    printf("P1:  %d               %d      \nP2:  %d               %d      \n------------------------------\n",P11,P12,P21,P22);
}