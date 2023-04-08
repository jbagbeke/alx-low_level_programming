#include "main.h"

/**
 *
 *
 *
 *
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{

    int hoo;
    int writing;

    if (filename == NULL)
    {
        return (-1);
    }

    hoo = open(filename, O_RDWR | O_APPEND | O_EXCL);
    if (hoo == -1)
    {
        close(hoo);
        return (-1);
    }

    if (text_content != NULL)
    {
        writing = write(hoo, text_content, strlen(text_content));
        if (writing == -1)
        {
            close (hoo);
            return (-1);
        }
    }

    close(hoo);
    return (writing);
}
