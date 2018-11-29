/*************************************************************************
	> File Name: red_black_tree.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月29日 星期四 17时39分35秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
typedef struct Tree{
    int key, color;
    struct Tree *lchild, *rchild;
}Tree;
Tree *NIL;

void init_nil() {
    NIL = (Tree *)malloc(sizeof(Tree));
    NIL->key = 0;
    NIL->color = 1;
    NIL->lchild = NIL->rchild = NIL;
}

Tree* get_node(int key) {
    Tree *p = (Tree *)malloc(sizeof(Tree));
    p->key = key;
    p->color = 0;
    p->lchild = p->rchild = NIL;
    return p;
}









int main() {
    
    
    return 0;
}
