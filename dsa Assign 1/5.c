typedef struct dnode
{
    int info;
    struct dnode *prev, *next;
} dnode;

dnode *deleteAlternate(dnode *head)
{
    dnode *current = head;
    while (current != NULL && current->next != NULL)
    {
        dnode *nextNode = current->next;
        current->next = nextNode->next;
        if (nextNode->next != NULL)
            nextNode->next->prev = current;
        free(nextNode);
        current = current->next;
    }
    return head;
}
