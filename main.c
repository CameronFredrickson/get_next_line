/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 19:02:15 by cfredric          #+#    #+#             */
/*   Updated: 2016/10/27 19:03:37 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/*
** 1 lines 8 chars without Line Feed (gnl7_1.c)
*/

int				main(void)
{
	char		*line;
	int			fd;
	int			ret;
	int			count_lines;
	char		*filename;
	int			errors;

	filename = "gnl7_1.txt";
	fd = open(filename, O_RDONLY);
	if (fd > 2)
	{
		count_lines = 0;
		errors = 0;
		line = NULL;
		while ((ret = get_next_line(fd, &line)) > 0)
		{
			if (count_lines == 0 && strcmp(line, "12345678") != 0)
				errors++;
			count_lines++;
			if (count_lines > 50)
				break ;
		}
		close(fd);
		if (count_lines != 1)
			printf("-> must have returned '1' once instead of %d time(s)\n", count_lines);
		if (errors > 0)
			printf("-> must have read \"12345678\" instead of \"%s\"\n", line);
		if (count_lines == 1 && errors == 0)
			printf("OK\n");
	}
	else
		printf("An error occured while opening file %s\n", filename);
	return (0);
}

/*
** gnl1_2.c
** 2 lines with 8 chars with Line Feed
*/

// int				main(void)
// {
// 	char		*line;
// 	int			fd;
// 	int			ret;
// 	int			count_lines;
// 	char		*filename;
// 	int			errors;

// 	filename = "gnl1_2.txt";
// 	fd = open(filename, O_RDONLY);
// 	if (fd > 2)
// 	{
// 		count_lines = 0;
// 		errors = 0;
// 		line = NULL;
// 		while ((ret = get_next_line(fd, &line)) > 0)
// 		{
// 			if (count_lines == 0 && strcmp(line, "1234567") != 0)
// 				errors++;
// 			if (count_lines == 1 && strcmp(line, "abcdefg") != 0)
// 				errors++;
// 			count_lines++;
// 			if (count_lines > 50)
// 				break ;
// 		}
// 		close(fd);
// 		if (count_lines != 2)
// 			printf("-> must have returned '1' twice instead of %d time(s)\n", count_lines);
// 		if (errors > 0)
// 			printf("-> must have read \"1234567\" and \"abcdefg\"\n");
// 		if (count_lines == 2 && errors == 0)
// 			printf("OK\n");
// 	}
// 	else
// 		printf("An error occured while opening file %s\n", filename);
// 	return (0);
// }

/*
** 14_test_few_lines_4
*/

// int		main(int argc, char **argv)
// {
// 	char 	*line = 0;
// 	char	*ex = 0;
// 	int		fd;
// 	int		status;
// 	int		i;

// 	(void)argc;
// 	if ((fd = open(argv[1], O_RDONLY, S_IREAD)) && fd != -1)
// 	{
// 		printf("opened file\n");
// 	}
// 	else
// 	{
// 		printf("trouble opening file\n");
// 		return (1);
// 	}
// 	i = 0;
// 	status = get_next_line(fd, &line);
// 	ex = "abcd";
// 	if (strcmp(line, "abcd") != 0)
// 		printf("test %d: call = %d, the line = %d,%d,%d,%d, your line = %d,%d,%d,%d,\n", i, status, ex[0], ex[1], ex[2], ex[3], line[0], line[1], line[2], line[3]);
// 	i++;
// 	status = get_next_line(fd, &line);
// 	ex = "efgh";
// 	if (strcmp(line, "efgh") != 0)
// 		printf("test %d: call = %d, the line = %d,%d,%d,%d, your line = %d,%d,%d,%d,\n", i, status, ex[0], ex[1], ex[2], ex[3], line[0], line[1], line[2], line[3]);
// 	i++;
// 	status = get_next_line(fd, &line);
// 	ex = "ijkl";
// 	if (strcmp(line, "ijkl") != 0)
// 		printf("test %d: call = %d, the line = %d,%d,%d,%d, your line = %d,%d,%d,%d,\n", i, status, ex[0], ex[1], ex[2], ex[3], line[0], line[1], line[2], line[3]);
// 	i++;
// 	status = get_next_line(fd, &line);
// 	ex = "mnop";
// 	if (strcmp(line, "mnop") != 0)
// 		printf("test %d: call = %d, the line = %d,%d,%d,%d, your line = %d,%d,%d,%d,\n", i, status, ex[0], ex[1], ex[2], ex[3], line[0], line[1], line[2], line[3]);
// 	i++;
// 	ex = "qrst";
// 	status = get_next_line(fd, &line);
// 	if (strcmp(line, "qrst") != 0)
// 		printf("test %d: call = %d, the line = %d,%d,%d,%d, your line = %d,%d,%d,%d,\n", i, status, ex[0], ex[1], ex[2], ex[3], line[0], line[1], line[2], line[3]);
// 	i++;
// 	ex = "uvwx";
// 	status = get_next_line(fd, &line);
// 	if (strcmp(line, "uvwx") != 0)
// 		printf("test %d: call = %d, the line = %d,%d,%d,%d, your line = %d,%d,%d,%d,\n", i, status, ex[0], ex[1], ex[2], ex[3], line[0], line[1], line[2], line[3]);
// 	i++;
// 	ex = "yzab";
// 	status = get_next_line(fd, &line);
// 	if (strcmp(line, "yzab") != 0)
// 		printf("test %d: call = %d, the line = %d,%d,%d,%d, your line = %d,%d,%d,%d,\n", i, status, ex[0], ex[1], ex[2], ex[3], line[0], line[1], line[2], line[3]);
// 	i++;
// 	return (0);
// }

/*
** 01_test_simple.spec.c
*/

// int		main(int argc, char **argv)
// {
// 	char 	*line = 0;
// 	char	*ex = 0;
// 	int		fd;
// 	int		status;
// 	int		i;

// 	(void)argc;
// 	if ((fd = open(argv[1], O_RDONLY, S_IREAD)) && fd != -1)
// 	{
// 		printf("opened file\n");
// 	}
// 	else
// 	{
// 		printf("trouble opening file\n");
// 		return (1);
// 	}
// 	i = 0;
// 	status = 0;
// 	write(1, "1\n", 2);
// 	status = get_next_line(fd, &line);
// 	write(1, "1\n", 2);
// 	ex = "aaa";
// 	if (strcmp(line, "aaa") != 0)
// 		printf("test %d: call = %d, the line = %d,%d,%d,%d, your line = %d,%d,%d,%d,\n", i, status, ex[0], ex[1], ex[2], ex[3], line[0], line[1], line[2], line[3]);
// 	i++;
// 		get_next_line(fd, &line);
// 	ex = "bbb";
// 	if (strcmp(line, "bbb") != 0)
// 		printf("test %d: call = %d, the line = %d,%d,%d,%d, your line = %d,%d,%d,%d,\n", i, status, ex[0], ex[1], ex[2], ex[3], line[0], line[1], line[2], line[3]);
// 	i++;
// 		get_next_line(fd, &line);
// 	ex = "ccc";
// 	if (strcmp(line, "ccc") != 0)
// 		printf("test %d: call = %d, the line = %d,%d,%d,%d, your line = %d,%d,%d,%d,\n", i, status, ex[0], ex[1], ex[2], ex[3], line[0], line[1], line[2], line[3]);
// 	i++;
// 		get_next_line(fd, &line);
// 	ex = "ddd";
// 	if (strcmp(line, "ddd") != 0)
// 		printf("test %d: call = %d, the line = %d,%d,%d,%d, your line = %d,%d,%d,%d,\n", i, status, ex[0], ex[1], ex[2], ex[3], line[0], line[1], line[2], line[3]);
// 	i++;
// 	// should return -1, but line should remain "ddd"
// 	// 	get_next_line(fd, &line);
// 	// if (strcmp(line, "ddd") != 0)
// 	// 	printf("test %d: call = %d, the line = %d,%d,%d,%d, your line = %d,%d,%d,%d,\n", i, status, ex[0], ex[1], ex[2], ex[3], line[0], line[1], line[2], line[3]);
// 	// i++;
// 	// return (0);
// // printf("test %d: line = %s,\n", i, line);
// }

/*
** OFFICIAL TEST: complete functionality
 
** 1. get first line from a file. : 1
 
** 2. get all lines from a file. : 1
 
** 3. use a bad file, program should return -1. : 1
 
** 4. read from more than one file, then come back to the 
** first file read. : 1
 
*/

/*
** MULTI-FILE TEST
*/


// int		main(int argc, char **argv)
// {
// 	int		fd1;
// 	int		fd2;
// 	int		fd3;
// 	char	**line;
// 	char	*b = 0;
	
// 	line = &b;
// 	argc = 0;
	
// 	printf("===================== MULTI-FILE TEST =======================\n");
// 	if ((fd1 = open(argv[1], O_RDONLY, S_IREAD)) && fd1 != -1)
// 	{
// 		printf("call: %d\n", get_next_line(fd1, line));
// 	}
// 	else
// 	{
// 		printf("trouble opening file\n");
// 		return (1);
// 	}
// 	printf("%s\n", *line);
// 	printf("=====finished test 1=====\n");

// 	if ((fd2 = open(argv[2], O_RDONLY, S_IREAD)) && fd2 != -1)
// 	{
// 		printf("call: %d\n", get_next_line(fd2, line));
// 	}
// 	else
// 	{
// 		printf("trouble opening file\n");
// 		return (1);
// 	}
// 	printf("%s\n", *line);
// 	printf("=====finished test 2=====\n");

// 	if ((fd3 = open(argv[3], O_RDONLY, S_IREAD)) && fd3 != -1)
// 	{
// 		printf("call: %d\n", get_next_line(fd3, line));
// 	}
// 	else
// 	{
// 		printf("trouble opening file\n");
// 		return (1);
// 	}
// 	printf("%s\n", *line);
// 	printf("=====finished test 3=====\n");

// 	printf("call: %d\n", get_next_line(fd1, line));
// 	printf("%s\n", *line);
// 	printf("=====finished test 4=====\n");

// 	printf("call: %d\n", get_next_line(fd1, line));
// 	printf("%s\n", *line);
// 	printf("=====finished test 5=====\n");

// 	printf("call: %d\n", get_next_line(fd1, line));
// 	printf("%s\n", *line);
// 	printf("=====finished test 6=====\n");

// 	printf("call: %d\n", get_next_line(fd1, line));
// 	printf("%s\n", *line);
// 	printf("=====finished test 7=====\n");

// 	// should be nothing to read here, -1 should be returned
// 	printf("call: %d\n", get_next_line(fd1, line));
// 	printf("%s\n", *line);
// 	printf("=====finished test 8=====\n");
// 	printf("\n===================== END: MULTI-FILE TEST =======================\n");
// 	close(fd1);
// 	close(fd2);
// 	close(fd3);
// 	return (0);
// }

/*
** SINGLE FILE TEST
*/

//int		main(int argc, char **argv)
//{
//    int		fd1;
//	int		fd2;
//	int		fd3;
//    char	**line;
//    char	*b = 0;
//
//    line = &b;
//    argc = 0;
//	
//	printf("===================== SINGLE FILE TEST =======================\n");
//    if ((fd1 = open(argv[1], O_RDONLY, S_IREAD)) && fd1 != -1)
//        printf("call: %d\n", get_next_line(fd1, line));
//    else
//    {
//        printf("trouble opening file\n");
//        return (1);
//    }
//    printf("%s\n", *line);
//    
//    printf("call: %d\n", get_next_line(fd1, line));
//    printf("%s\n", *line);
//    
//    printf("call: %d\n", get_next_line(fd1, line));
//    printf("%s\n", *line);
//	
//	printf("call: %d\n", get_next_line(fd1, line));
//	printf("%s\n", *line);
//	
//	printf("call: %d\n", get_next_line(fd1, line));
//	printf("%s\n", *line);
//	
//    // should be nothing to read here, -1 should be returned
//    printf("call: %d\n", get_next_line(fd1, line));
//    printf("%s\n", *line);
//	
//	close(fd1);
//	printf("===================== END: SINGLE FILE TEST =======================\n");
//	return (0);
//}

/*
 ** UNIT TEST: store_file
 
 ** 1. file is stored correctly, and contents can be verified : 1
 ** 2. static variable saves node and pointer to corect place in the file : 1
 
 ** g main.c get_next_line.c libft/ft_strcpy.c libft/ft_strncat.c libft/ft_lstnew.c libft/ft_memalloc.c libft/ft_memcpy.c libft/ft_strlen.c libft/ft_strnew.c libft/ft_memset.c libft/ft_lstadd.c
 */

//int		main(int argc, char **argv)
//{
//    int		fd;
//    char	**line;
//    char	*b = 0;
//    
//    line = &b;
//    argc = 0;
//    if ((fd = open(argv[1], O_RDONLY, S_IREAD)) && fd != -1)
//    {
//        get_next_line(fd, line);
//        get_next_line(fd, line);
//    }
//    else
//        printf("trouble opening file\n");
//    return (0);
//}

/*
** TO DO

** figure out why BUF_SIZE = 10000000 does not work : 1
** 		1. currently limit stacksize is 8MB 10MB would exceed this limit
**		   forcing the program to terminate
**		2. typing ulimit (user limits command):
**		   ulimits -Ss will return a soft stack limit of 8192 KB
**		   ulimits -Hs will return a hard stack limit of 65532 KB
**		   therefore, the soft stack limit can be changed to 10000KB to
**		   accomadate a BUF_SIZE = 10000000
**		*. -a : All current limits are reported
**		*. -n : the maximum number of open file descriptors
**		*. -p : the pipe buffer size
**		*. -t : the maximum cpu time in seconds
**		*. -u : the maximum number of processes available to a single user

** read in the whole file and save contents in a linked list : 1

** return value 1 if a line has been read, 0 if there is nothing left to read,
** and -1 if an error has happened respectively : 1
*/

