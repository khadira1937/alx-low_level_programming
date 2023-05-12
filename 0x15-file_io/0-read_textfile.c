#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- ecrire le fichier texte et imprimer le on STDOUT.
 * @filename: le fichier texte pour la lecture.
 * @letters: le nombre de lettre pour lecriture.
 * Return: w- le nombre reel de bit lit et printer.
 *        0 lorsque le nom fichier et null.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	t = read(fd, bf, letters);
	w = write(STDOUT_FILENO, bf, t);

	free(bf);
	close(fd);
	return (w);
}
