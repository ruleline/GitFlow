/**
 * @file main.c
 * @brief System Entry.
 * @author ruleline (ruleline@outlook.com)
 * @since 2025-08-03
 *
 * @authors ruleline (ruleline@outlook.com)
 * @date 2025-08-03
 * @version 0.00.001
 *
 * @copyright ©2025 ruleline
 */

#include <stdio.h>

int main(void)
{
        static volatile int status;

        printf("Hello, World!\n");

        for (; status == 0;) {
                /* TODO */
        }
        return (0);
}
