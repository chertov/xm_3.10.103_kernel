#ifndef __XM_UNCOMPRESS_H__
#define __XM_UNCOMPRESS_H__
#include <linux/io.h>
#include <mach/platform.h>

#define AMBA_UART_DR   \
	(*(volatile unsigned char *)(UART0_BASE + 0x0))
#define AMBA_UART_LCRH \
	(*(volatile unsigned char *)(UART0_BASE + 0x2c))
#define AMBA_UART_CR   \
	(*(volatile unsigned char *)(UART0_BASE + 0x30))
#define AMBA_UART_FR   \
	(*(volatile unsigned char *)(UART0_BASE + 0x18))

/*
 * This does not append a newline
 */
static inline void putc(int c)
{
	while (AMBA_UART_FR & (1 << 5))
		barrier();

	AMBA_UART_DR = c;
}

static inline void flush(void)
{
	while (AMBA_UART_FR & (1 << 3))
		barrier();
}

/*
 * nothing to do
 */
#define arch_decomp_setup()
#define arch_decomp_wdog()

#endif
