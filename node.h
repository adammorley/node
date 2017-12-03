#ifndef NODE_H
#define NODE_H

/*
    l == previous
    r == next
    (yes, this is western-centric, but it
     makes the code extendable for trees)
*/
typedef struct node node;
struct node {
    node* l;
    node* r;
    long d;
};

/*
    creates and returns a node, returns ownership
*/
node* node_new(long d);

#endif //NODE_H
