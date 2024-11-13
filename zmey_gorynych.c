//пример переполения переменной
//укаждого типа есть свои минимальные и максимльные значения
//проще всего продемонстрировать на без знаковом целом числе длинной 8 бит
//unsigned char
#include <stdio.h>

int main(){
    printf("fairy tale about serpent Gorynych\n");//выводим сообщение о чем сказка
    unsigned char hands = 1; //заодим переменную и инициализируем ее начальным значением голов 1 штука
    while(hands>0){ // пока голов больше 0 ведем бой
        printf("Ilya cut off %d heads of the snake\n", hands);//выводим информацию о том сколько сейчас голов было срубленно
        hands *= 2;//увеличиваем количество голов в двое
        printf("And there were more heads in the forest\n");
    }
    //печатаем мораль
    printf("And the serpent Gorynych died. Because a type value overflow occurred.\n");
    printf("Because if you decide to fight Ilya, use Python, there is no such crap with integers\n");
    //1 2 4 8 16 32 64 128 - возможные значния голов 
    //256 - уже не будте тк unsigned char вмещает себя только 255 как максимум происходит переполенрие
    //в дагном примере 256 станвоитьс 0 вот и сказке конец
    return 0;
}