void printReverse(snode *head)
{
    if (head == NULL)
        return;
    printReverse(head->next);
    printf("%d ", head->info);
}
