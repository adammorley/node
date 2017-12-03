#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#include "node.h"

int main(void) {
    node* n0 = node_new(5);
    assert(sizeof(node) == sizeof(n0->l) + sizeof(n0->r) + sizeof(n0->d));
    assert(n0->d == 5);
    assert(n0->r == NULL);
    assert(n0->l == NULL);

    node* n1 = node_new(6);
    n0->r = n1;
    n1->l = n0;
    assert(n0->r == n1);
    assert(n1->l == n0);
    assert(n0->r->d == 6);
    assert(n1->l->d == 5);

    node* n2 = node_new(7);
    n1->r = n2;
    n2->l = n1;
    assert(n1->r == n2);
    assert(n2->l == n1);
    assert(n1->r->d == 7);
    assert(n2->l->d == 6);
    free(n0);
    free(n1);
    free(n2);
}
