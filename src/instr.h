#ifndef _RVINSTR_
#define _RVINSTR_

union rvrtype
{
    unsigned char opcode;
    unsigned char rd;
    unsigned char funct3;
    unsigned char rs1;
    unsigned char rs2;
    unsigned char funct7;
};

union rvitype
{
    unsigned char opcode;
    unsigned char rd;
    unsigned char funct3;
    unsigned char rs1;
    unsigned short imm;
};

union rvstype
{
    unsigned char opcode;
    unsigned char imm;
    unsigned char funct3;
    unsigned char rs1;
    unsigned char rs2;
    unsigned char imm;
};

union rvbtype
{
    unsigned char opcode;
    unsigned char imm11;
    unsigned char imm4;
    unsigned char funct3;
    unsigned char rs1;
    unsigned char rs2;
    unsigned char imm10;
    unsigned char imm12;
};

union rvutype
{
    unsigned char opcode;
    unsigned char rd;
    unsigned int imm;
};

union rvjtype
{
    unsigned char opcode;
    unsigned char rd;
    unsigned char imm19;
    unsigned char imm11;
    unsigned short imm10;
    unsigned char imm20;
};

#endif /* !_RVINSTR_! */