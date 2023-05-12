#include "main.h"

/**
 * append_text_to_file - ajouter un text a la fin de fichier.
 * @filename: pour pointer sur le nom de fichier.
 * @text_content: c'est le string pour le ajouter a la fin de fichier.
 *
 * Return: si la fonction et echouer va le retourner - -1.
 *
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, ln);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
