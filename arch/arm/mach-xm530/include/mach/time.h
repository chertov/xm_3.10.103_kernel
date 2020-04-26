#ifndef ASM_XM_TIMER
#define ASM_XM_TIMER

#define CFG_TIMER01_VABASE		TIMER01_BASE
#define CFG_TIMER23_VABASE		TIMER23_BASE

#define CFG_TIMER_CONTROL		(CFG_TIMER_ENABLE | CFG_TIMER_PERIODIC\
					| CFG_TIMER_INTMASK | CFG_TIMER_32BIT)
#define CFG_TIMER_ONE_CONTROL		(CFG_TIMER_ENABLE | CFG_TIMER_INTMASK\
					| CFG_TIMER_32BIT | CFG_TIMER_ONESHOT)

#define CFG_TIMER_ENABLE		(1 << 7)
#define CFG_TIMER_PERIODIC		(1 << 6)
#define CFG_TIMER_INTMASK		(1 << 5)
#define CFG_TIMER_32BIT			(1 << 1)
#define CFG_TIMER_ONESHOT		(1 << 0)

#define CFG_TIMER_CLK 24000000

#define CFG_TIMER_INTNR			 TIMER01_IRQ

extern unsigned long long sched_clock(void);
#endif