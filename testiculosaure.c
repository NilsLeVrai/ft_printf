/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testiculosaure.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:25:48 by niabraha          #+#    #+#             */
/*   Updated: 2023/12/05 17:06:42 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void loadingScreen() {
    int i;
    const char loaderChars[] = {'|', '/', '-', '\\'};

    printf("  Compiling: ");

    for (i = 0; i < 20; ++i) {
        printf("%c ", loaderChars[i % 4]);
        fflush(stdout);
        usleep(300000);
        printf("\b\b");
    }
}

int main()
{
	printf("\n\n\n");

	printf("\033[0;94m"); // Rouge
    printf(" /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\\n");

    printf("\033[0;36m"); // Vert
    printf("( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )\n");

    printf("\033[0;37m"); // Jaune
    printf(" > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ < \n");

    printf("\033[0;94m"); // Bleu
    printf(" /\\_/\\                                                                               /\\_/\\\n");

    printf("\033[0;36m"); // Magenta
    printf("( o.o )                                                                             ( o.o )\n");

    printf("\033[0;37m"); // Cyan
    printf(" > ^ <                                                                               > ^ <\n");

    printf("\033[0;94m"); // Blanc
    printf(" /\\_/\\   __        __         _                                       _              /\\_/\\\n");

    printf("\033[0;36m"); // Rouge vif
    printf("( o.o )  \\ \\      / /   ___  | |   ___    ___    _ __ ___     ___    | |_    ___    ( o.o )\n");

    printf("\033[0;37m"); // Vert vif
    printf(" > ^ <    \\ \\ /\\ / /   / _ \\ | |  / __|  / _ \\  | '_ ` _ \\   / _ \\   | __|  / _ \\    > ^ < \n");

    printf("\033[0;94m"); // Jaune vif
    printf(" /\\_/\\     \\ V  V /   |  __/ | | | (__  | (_) | | | | | | | |  __/   | |_  | (_) |   /\\_/\\ \n");

    printf("\033[0;36m"); // Bleu vif
    printf("( o.o )     \\_/\\_/     \\___| |_|  \\___|  \\___/  |_| |_| |_|  \\___|    \\__|  \\___/   ( o.o )\n");

    printf("\033[0;37m"); // Magenta vif
    printf(" > ^ <                                                                               > ^ < \n");

    printf("\033[0;94m"); // Cyan vif
    printf(" /\\_/\\    _____   _____   ____    _____           _                  _               /\\_/\\\n");

    printf("\033[0;36m"); // Blanc brillant
    printf("( o.o )  |_   _| | ____| / ___|  |_   _|         (_)   ___   _   _  | |   ___       ( o.o )\n");

    printf("\033[0;37m"); // Jaune
    printf(" > ^ <     | |   |  _|   \\___ \\    | |    _____  | |  / __| | | | | | |  / _ \\       > ^ < \n");

    printf("\033[0;94m"); // Magenta
    printf(" /\\_/\\     | |   | |___   ___) |   | |   |_____| | | | (__  | |_| | | | |  __/       /\\_/\\\n");

    printf("\033[0;36m"); // Cyan
    printf("( o.o )    |_|   |_____| |____/    |_|           |_|  \\___|  \\__,_| |_|  \\___|      ( o.o )\n");

    printf("\033[0;37m"); // Blanc
    printf(" > ^ <                                                                               > ^ < \n");

    printf("\033[0;94m"); // Rouge vif
    printf(" /\\_/\\                                                                               /\\_/\\ \n");

    printf("\033[0;36m"); // Vert vif
    printf("( o.o )                                                                             ( o.o )\n");

    printf("\033[0;37m"); // Jaune vif
    printf(" > ^ <                                                                               > ^ < \n");

    printf("\033[0;94m");
    printf(" /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\  /\\_/\\ \n");

	printf("\033[0;36m");
    printf("( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )\n");

    printf("\033[0;37m");
    printf(" > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ < \n\n\n");

	loadingScreen();

	int res1, res2;

	printf("\n\n\n");
	printf("\033[0;37m");
	printf("\t\t╔══════════════════════════════════════════════╗\n");
	printf("\t\t║                                              ║\n");
	printf("\t\t║                  testing %%c                  ║\n");
	printf("\t\t║                                              ║\n");
	printf("\t\t╚══════════════════════════════════════════════╝\n");
	printf("\033[0;37m");
	printf("\n\n\n");

	char a = 'b';
	printf("Test 1:\n\n");
	res1 = printf("%c\n", a);
	res2 = ft_printf("%c\n", a);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char b = '\x7';
	printf("Test 2:\n\n");
	res1 = printf("%c\n", b);
	res2 = ft_printf("%c\n", b);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char c = ' ';
	printf("Test 3:\n\n");
	res1 = printf("%c\n", c);
	res2 = ft_printf("%c\n", c);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char d = '\t';
	printf("Test 4:\n\n");
	res1 = printf("%c\n", d);
	res2 = ft_printf("%c\n", d);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);
 // 9
	char e = 9;
	printf("Test 5:\n\n");
	res1 = printf("%c\n", e);
	res2 = ft_printf("%c\n", e);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);
 	// \t
	char f = 150;
	printf("Test 6:\n\n");
	res1 = printf("%c\n", f);
	res2 = ft_printf("%c\n", f);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char g = '=';
	printf("Test 7:\n\n");
	res1 = printf("%c\n", g);
	res2 = ft_printf("%c\n", g);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char h = '\0';
	printf("Test 8:\n\n");
	res1 = printf("%c\n", h);
	res2 = ft_printf("%c\n", h);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char i = 'M';
	printf("Test 9:\n\n");
	res1 = printf("%c\n", i);
	res2 = ft_printf("%c\n", i);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char j = '"';
	printf("Test 10:\n\n");
	res1 = printf("%c\n", j);
	res2 = ft_printf("%c\n", j);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");

	loadingScreen();

	printf("\n\n\n");

	printf("\t\t╔══════════════════════════════════════════════╗\n");
	printf("\t\t║                                              ║\n");
	printf("\t\t║                  testing %%s                  ║\n");
	printf("\t\t║                                              ║\n");
	printf("\t\t╚══════════════════════════════════════════════╝\n");

	printf("\n\n\n");

	char *str1 = "ou7%%256";
	printf("Test 1:\n\n");
	res1 = printf("%s\n", str1);
	res2 = ft_printf("%s\n", str1);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str2 = "/**/131551";
	printf("Test 2:\n\n");
	res1 = printf("%s\n", str2);
	res2 = ft_printf("%s\n", str2);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

  	char *str3 = "";
	printf("Test 3:\n\n");
	res1 = printf("%s\n", str3);
	res2 = ft_printf("%s\n", str3);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str4 = " ";
	printf("Test 4:\n\n");
	res1 = printf("%s\n", str4);
	res2 = ft_printf("%s\n", str4);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str5 = "\0";
	printf("Test 5:\n\n");
	res1 = printf("%s\n", str5);
	res2 = ft_printf("%s\n", str5);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str6 = "\\0";
	printf("Test 6:\n\n");
	res1 = printf("%s\n", str6);
	res2 = ft_printf("%s\n", str6);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str7 = "qwrqotqtiqtnqmtQTQTQT48/-@%%&()";
	printf("Test 7:\n\n");
	res1 = printf("%s\n", str7);
	res2 = ft_printf("%s\n", str7);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str8 = "blob";
	printf("Test 8:\n\n");
	res1 = printf("%s\n", str8);
	res2 = ft_printf("%s\n", str8);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str9 = "inr	ro		rrn	rn";
	printf("Test 9:\n\n");
	res1 = printf("%s\n", str9);
	res2 = ft_printf("%s\n", str9);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str10 = "inr	r\0o	\0	rrn	rn";
	printf("Test 10:\n\n");
	res1 = printf("%s\n", str10);
	res2 = ft_printf("%s\n", str10);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str11 = "\0**131551";
	printf("Test 11:\n\n");
	res1 = printf("%s\n", str11);
	res2 = ft_printf("%s\n", str11);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str12 = "**131551\0";
	printf("Test 12:\n\n");
	res1 = printf("%s\n", str12);
	res2 = ft_printf("%s\n", str12);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str13 = "La gadji c'est un paqueta";
	printf("Test 13:\n\n");
	res1 = printf("%s\n", str13);
	res2 = ft_printf("%s\n", str13);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str14 = "%%";
	printf("Test 14:\n\n");
	res1 = printf("%s\n", str14);
	res2 = ft_printf("%s\n", str14);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str15 = "Yo la team!";
	printf("Test 15:\n\n");
	res1 = printf("%s\n", str15);
	res2 = ft_printf("%s\n", str15);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str16 = "\t";
	printf("Test 16:\n\n");
	res1 = printf("%s\n", str16);
	res2 = ft_printf("%s\n", str16);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str17 = "		 \t \n";
	printf("Test 17:\n\n");
	res1 = printf("%s\n", str17);
	res2 = ft_printf("%s\n", str17);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str18 = "";
	printf("Test 18:\n\n");
	res1 = printf("%s\n", str18);
	res2 = ft_printf("%s\n", str18);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str19 = "═";
	printf("Test 19:\n\n");
	res1 = printf("%s\n", str19);
	res2 = ft_printf("%s\n", str19);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str20 = "════════════";
	printf("Test 20:\n\n");
	res1 = printf("%s\n", str20);
	res2 = ft_printf("%s\n", str20);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str21 = "rm -rf ><'";
	printf("Test 21:\n\n");
	res1 = printf("%s\n", str21);
	res2 = ft_printf("%s\n", str21);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str22 = "'";
	printf("Test 22:\n\n");
	res1 = printf("%s\n", str22);
	res2 = ft_printf("%s\n", str22);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

	char *str23 = "\"";
	printf("Test 23:\n\n");
	res1 = printf("%s\n", str23);
	res2 = ft_printf("%s\n", str23);
	printf("\n");
	printf("Result: %s\n\n", res1 == res2  ? "🆒" : "🤡");
	usleep(300000);

}
