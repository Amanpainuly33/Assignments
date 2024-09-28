snode *deleteNthFromLast(snode *head, int n)
{
    snode *fast = head, *slow = head;
    for (int i = 0; i < n; i++)
        fast = fast->next;

    if (fast == NULL)
    {
        snode *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }

    snode *temp = slow->next;
    slow->next = slow->next->next;
    free(temp);

    return head;
}
