snode *rotate(snode *head, int k)
{
    if (head == NULL || k == 0)
        return head;

    snode *current = head;
    int count = 1;
    while (count < k && current != NULL)
    {
        current = current->next;
        count++;
    }

    if (current == NULL)
        return head;

    snode *kthNode = current;
    while (current->next != NULL)
        current = current->next;

    current->next = head;
    head = kthNode->next;
    kthNode->next = NULL;

    return head;
}
