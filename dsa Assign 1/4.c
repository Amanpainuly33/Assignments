snode *removeDuplicates(snode *head)
{
    snode *current = head, *prev = NULL;
    while (current != NULL)
    {
        snode *runner = current;
        while (runner->next != NULL)
        {
            if (runner->next->info == current->info)
            {
                snode *dup = runner->next;
                runner->next = runner->next->next;
                free(dup);
            }
            else
                runner = runner->next;
        }
        current = current->next;
    }
    return head;
}
