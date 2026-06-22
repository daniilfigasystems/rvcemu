#ifndef _RVCPU_
#define _RVCPU_

#define RV_REGS_COUNT 33 /* Registers count */
#define RV_FREGS_COUNT 33 /* Floating point registers count */
#define RV_CREGS_COUNT 4096 /* CSR Registers count */

#define RV_REG_PC 0x20 /* PC Register number in array */
#define RV_FREG_FSR 0x20 /* FP Status register number in array */

#define GPR(x) state->regs[x]
#define FPR(x) state->fregs[x]
#define CSR(x) state->cregs[x]

struct rvstate
{
    unsigned long regs[RV_REGS_COUNT]; /* CPU GP Registers */
    double fregs[RV_FREGS_COUNT]; /* CPU FP Registers */
    unsigned long cregs[RV_CREGS_COUNT]; /* CPU CSR Registers */
};

#endif /* !_RVCPU_! */