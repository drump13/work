#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int is_n_integer(int n,char* str);


void test1();


int main(){
  test1();

}

/*
param n   :n桁
param str :判定文字列
return n桁の整数なら0、n桁じゃ無い整数なら2、整数じゃないなら1を返す
 */
int is_n_integer(int n,char* str){
  int len = strlen(str);
  int i;
  for(i = 0; i < len; i++){
    if(!(str[i] >= '0' && str[i] <= '9')){
      return 1;
    }
  }
  return (len == n)? 0 : 2;

}



void test1(){
  while(1){
    char str[100];
    scanf("%s",str);
    if(strcmp(str,"end")==0){return;}
    int flag = is_n_integer(5,str);
    printf("flag is %d\n",flag);
  }
}


