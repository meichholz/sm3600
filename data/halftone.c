ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #4363[655.2] */
RegWrite(0x43, 1, 0x03);    /* #4364[655.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4365[655.2] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #4366[655.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4367[655.3] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #4368[655.3] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4369[655.3] */
{
 unsigned char uchRegs4370[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x10 /*0x04*/, 0xC0 /*0x05*/, 0x00 /*R_STPS*/,
   0x00 /*R_STPSH*/, 0xFF /*0x08*/, 0xFF /*0x09*/,
   0x20 /*0x0A*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0x29 /*R_LEN*/, 0x35 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs4370);
}    /* #4370[655.3] */
RegWrite(0x43, 1, 0x03);    /* #4371[655.3] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #4372[655.3] */
RegWrite(R_CCAL, 3, 0x848888);    /* #4373[655.3] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4374[655.3] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4375[655.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4376[655.3] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4377[655.3] */
RegWrite(0x34, 1, 0x63);    /* #4378[655.3] */
RegWrite(0x49, 1, 0x9E);    /* #4379[655.3] */
{
 unsigned char uchRegs4380[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x40 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0xC8 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!0x0A!!*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x88 /*!!R_CCAL!!*/, 0x88 /*!!R_CCAL2!!*/,
   0x84 /*!!R_CCAL3!!*/, 0x0B /*!!R_LEN!!*/, 0x2D /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs4380);
}    /* #4380[655.3] */
RegWrite(R_CTL, 1, 0x39);    /* #4381[655.3] */
RegWrite(R_CTL, 1, 0x79);    /* #4382[655.3] */
RegWrite(R_CTL, 1, 0xF9);    /* #4383[655.3] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4384[655.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4385[655.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4386[655.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4387[655.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4388[655.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4389[655.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4390[655.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4391[655.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4392[655.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4393[655.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4394[655.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4395[655.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4396[656.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4397[656.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #4398[656.0] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x848888*/    /* #4399[656.0] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4400[656.0] */
ulVal2 = RegRead(R_LEN, 2); /*=0x2D0B*/    /* #4401[656.0] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4402[656.0] */
{
 unsigned char uchRegs4403[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x10 /*!!0x04!!*/, 0xC0 /*!!0x05!!*/, 0x00 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0xFF /*!!0x08!!*/, 0xFF /*!!0x09!!*/,
   0x20 /*!!0x0A!!*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x80 /*!!R_CCAL!!*/, 0x80 /*!!R_CCAL2!!*/,
   0x80 /*!!R_CCAL3!!*/, 0x29 /*!!R_LEN!!*/, 0x35 /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs4403);
}    /* #4403[656.0] */
RegWrite(0x43, 1, 0x03);    /* #4404[656.0] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4405[656.0] */
RegWrite(R_LMP, 1, 0x01);    /* #4406[656.1] */
RegWrite(R_LMP, 1, 0x01);    /* #4407[656.1] */
RegWrite(R_CTL, 1, 0x39);    /* #4408[656.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4409[656.1] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4410[656.1] */
{
 unsigned char uchRegs4411[]={
   0x71 /*!!0x01!!*/, 0x03 /*!!0x02!!*/, 0x20 /*!!0x03!!*/,
   0x00 /*!!0x04!!*/, 0xCF /*!!0x05!!*/, 0x00 /*R_STPS*/,
   0x00 /*R_STPSH*/, 0xFF /*0x08*/, 0xFF /*0x09*/,
   0x02 /*!!0x0A!!*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0x0B /*!!R_LEN!!*/, 0x2D /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs4411);
}    /* #4411[656.1] */
RegWrite(0x34, 1, 0x03);    /* #4412[656.1] */
RegWrite(0x49, 1, 0x96);    /* #4413[656.1] */
RegWrite(R_CTL, 1, 0x79);    /* #4414[656.1] */
RegWrite(R_CTL, 1, 0xF9);    /* #4415[656.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4416[656.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #4417[656.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #4418[656.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0780*/    /* #4419[656.2] */
BulkRead(fh,3840);   /* #4420[656.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #4421[656.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #4422[656.2] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4423[656.2] */
RegWrite(R_LMP, 1, 0x01);    /* #4424[656.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #4425[656.3] */
RegWrite(R_LMP, 1, 0x01);    /* #4426[656.3] */
RegWrite(R_LMP, 1, 0x01);    /* #4427[656.3] */
RegWrite(R_CTL, 1, 0x39);    /* #4428[656.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4429[656.3] */
RegWrite(R_CCAL, 3, 0x848888);    /* #4430[656.3] */
{
 unsigned char uchRegs4431[]={
   0x19 /*!!0x01!!*/, 0x00 /*!!0x02!!*/, 0x3F /*!!0x03!!*/,
   0x18 /*!!0x04!!*/, 0xC0 /*!!0x05!!*/, 0x00 /*R_STPS*/,
   0x00 /*R_STPSH*/, 0xFF /*0x08*/, 0xFF /*0x09*/,
   0x02 /*0x0A*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x88 /*!!R_CCAL!!*/, 0x88 /*!!R_CCAL2!!*/,
   0x84 /*!!R_CCAL3!!*/, 0x0B /*R_LEN*/, 0x2D /*R_LENH*/,
   0x03 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*!!R_CSTAT!!*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs4431);
}    /* #4431[656.3] */
RegWrite(0x34, 1, 0x03);    /* #4432[656.3] */
RegWrite(0x49, 1, 0x96);    /* #4433[656.3] */
RegWrite(R_CTL, 1, 0x79);    /* #4434[656.3] */
RegWrite(R_CTL, 1, 0xF9);    /* #4435[656.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4436[656.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #4437[656.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #4438[656.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0048*/    /* #4439[656.4] */
BulkRead(fh,144);   /* #4440[656.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #4441[656.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #4442[656.4] */
RegWrite(R_CCAL, 3, 0x848888);    /* #4443[656.5] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4444[656.5] */
RegWrite(R_LMP, 1, 0x01);    /* #4445[656.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #4446[656.5] */
ulVal2 = RegRead(R_LEN, 2); /*=0x2D0B*/    /* #4447[656.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #4448[656.5] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4449[656.5] */
RegWrite(0x34, 1, 0x63);    /* #4450[656.5] */
RegWrite(0x49, 1, 0x9E);    /* #4451[656.5] */
{
 unsigned char uchRegs4452[]={
   0x00 /*!!0x01!!*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x40 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0x04 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!0x0A!!*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x2D /*R_LENH*/,
   0x63 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x79 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs4452);
}    /* #4452[656.5] */
RegWrite(R_CTL, 1, 0x19);    /* #4453[656.5] */
RegWrite(R_CTL, 1, 0x59);    /* #4454[656.5] */
RegWrite(R_CTL, 1, 0xD9);    /* #4455[656.5] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4456[656.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4457[656.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #4458[656.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #4459[656.6] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4460[656.6] */
{
 unsigned char uchRegs4461[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x10 /*!!0x04!!*/, 0xC0 /*!!0x05!!*/, 0x00 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0xFF /*!!0x08!!*/, 0xFF /*!!0x09!!*/,
   0x20 /*!!0x0A!!*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x80 /*!!R_CCAL!!*/, 0x80 /*!!R_CCAL2!!*/,
   0x80 /*!!R_CCAL3!!*/, 0x29 /*!!R_LEN!!*/, 0x35 /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*!!R_CSTAT!!*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs4461);
}    /* #4461[656.6] */
RegWrite(0x43, 1, 0x03);    /* #4462[656.6] */
RegWrite(R_CCAL, 3, 0x848888);    /* #4463[656.6] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4464[656.6] */
RegWrite(R_LMP, 1, 0x01);    /* #4465[656.6] */
RegWrite(R_LMP, 1, 0x01);    /* #4466[656.6] */
RegWrite(R_CTL, 1, 0x39);    /* #4467[656.6] */
RegWrite(0x34, 1, 0x63);    /* #4468[656.6] */
RegWrite(0x49, 1, 0x96);    /* #4469[656.6] */
{
 unsigned char uchRegs4470[]={
   0xFB /*!!0x01!!*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0xEC /*!!0x04!!*/, 0x93 /*!!0x05!!*/, 0x00 /*R_STPS*/,
   0x00 /*R_STPSH*/, 0xAA /*!!0x08!!*/, 0xAA /*!!0x09!!*/,
   0x44 /*!!0x0A!!*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x88 /*!!R_CCAL!!*/, 0x88 /*!!R_CCAL2!!*/,
   0x84 /*!!R_CCAL3!!*/, 0x0B /*!!R_LEN!!*/, 0x2D /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x20 /*!!0x41!!*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs4470);
}    /* #4470[656.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4471[656.6] */
RegWrite(R_CTL, 1, 0x39);    /* #4472[656.6] */
RegWrite(R_CTL, 1, 0x79);    /* #4473[656.6] */
RegWrite(R_CTL, 1, 0xF9);    /* #4474[656.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4475[656.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #4476[656.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4477[656.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB34C*/    /* #4478[656.7] */
BulkRead(fh,32768);   /* #4479[656.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4480[656.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xEAD4*/    /* #4481[656.8] */
BulkRead(fh,32768);   /* #4482[656.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4483[656.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4484[656.8] */
BulkRead(fh,32768);   /* #4485[656.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4486[656.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4487[656.9] */
BulkRead(fh,32768);   /* #4488[656.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4489[656.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4490[657.0] */
BulkRead(fh,32768);   /* #4491[657.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4492[657.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4493[657.0] */
BulkRead(fh,32768);   /* #4494[657.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4495[657.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4496[657.0] */
BulkRead(fh,32768);   /* #4497[657.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4498[657.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4499[657.1] */
BulkRead(fh,32768);   /* #4500[657.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4501[657.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4502[657.1] */
BulkRead(fh,32768);   /* #4503[657.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4504[657.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4505[657.2] */
BulkRead(fh,32768);   /* #4506[657.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4507[657.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4508[657.2] */
BulkRead(fh,32768);   /* #4509[657.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4510[657.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4511[657.3] */
BulkRead(fh,32768);   /* #4512[657.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4513[657.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4514[657.3] */
BulkRead(fh,32768);   /* #4515[657.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4516[657.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4517[657.4] */
BulkRead(fh,32768);   /* #4518[657.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4519[657.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4520[657.4] */
BulkRead(fh,32768);   /* #4521[657.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4522[657.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4523[657.5] */
BulkRead(fh,32768);   /* #4524[657.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4525[657.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4526[657.6] */
BulkRead(fh,32768);   /* #4527[657.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4528[657.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4529[657.6] */
BulkRead(fh,32768);   /* #4530[657.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4531[657.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4532[657.6] */
BulkRead(fh,32768);   /* #4533[657.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4534[657.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4535[657.7] */
BulkRead(fh,32768);   /* #4536[657.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4537[657.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4538[657.7] */
BulkRead(fh,32768);   /* #4539[657.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4540[657.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4541[657.8] */
BulkRead(fh,32768);   /* #4542[657.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4543[657.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4544[657.8] */
BulkRead(fh,32768);   /* #4545[657.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4546[657.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4547[657.9] */
BulkRead(fh,32768);   /* #4548[657.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4549[657.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4550[657.9] */
BulkRead(fh,32768);   /* #4551[658.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4552[658.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4553[658.0] */
BulkRead(fh,32768);   /* #4554[658.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4555[658.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4556[658.0] */
BulkRead(fh,32768);   /* #4557[658.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4558[658.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF444*/    /* #4559[658.1] */
BulkRead(fh,32768);   /* #4560[658.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4561[658.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB444*/    /* #4562[658.1] */
BulkRead(fh,32768);   /* #4563[658.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4564[658.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7444*/    /* #4565[658.2] */
BulkRead(fh,32768);   /* #4566[658.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4567[658.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3444*/    /* #4568[658.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #4569[658.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #4570[658.3] */
BulkRead(fh,32768);   /* #4571[658.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #4572[658.3] */
BulkRead(fh,24592);   /* #4573[658.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #4574[658.3] */
RegWrite(0x43, 1, 0x03);    /* #4575[658.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #4576[658.4] */
{
 unsigned char uchRegs4577[]={
   0x00 /*!!0x01!!*/, 0x00 /*0x02*/, 0x00 /*!!0x03!!*/,
   0x00 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0x00 /*R_STPS*/,
   0x00 /*R_STPSH*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!0x0A!!*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x2D /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x80 /*!!0x41!!*/, 0x80 /*!!R_CSTAT!!*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x79 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs4577);
}    /* #4577[658.4] */
RegWrite(R_CTL, 1, 0x39);    /* #4578[658.4] */
RegWrite(R_CTL, 1, 0x79);    /* #4579[658.4] */
RegWrite(R_CTL, 1, 0xF9);    /* #4580[658.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4581[658.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4582[658.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #4583[658.4] */
RegWrite(R_CTL, 1, 0x39);    /* #4584[658.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4585[658.4] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4586[658.4] */
RegWrite(0x34, 1, 0x63);    /* #4587[658.4] */
RegWrite(0x49, 1, 0x9E);    /* #4588[658.5] */
{
 unsigned char uchRegs4589[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*!!0x03!!*/,
   0x40 /*!!0x04!!*/, 0x00 /*0x05*/, 0x44 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
   0x00 /*0x0A*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x2D /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*!!0x41!!*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs4589);
}    /* #4589[658.5] */
RegWrite(R_CTL, 1, 0x19);    /* #4590[658.5] */
RegWrite(R_CTL, 1, 0x59);    /* #4591[658.5] */
RegWrite(R_CTL, 1, 0xD9);    /* #4592[658.5] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4593[658.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4594[658.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4595[658.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4596[658.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4597[658.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4598[658.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4599[658.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4600[658.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4601[658.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #4602[659.3] */
RegWrite(R_LMP, 1, 0x01);    /* #4603[659.3] */
RegWrite(R_LMP, 1, 0x01);    /* #4604[659.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #4605[659.3] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4606[659.3] */
RegWrite(0x34, 1, 0x63);    /* #4607[659.3] */
RegWrite(0x49, 1, 0x9E);    /* #4608[659.4] */
{
 unsigned char uchRegs4609[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x40 /*0x04*/, 0x00 /*0x05*/, 0xC8 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
   0x00 /*0x0A*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x2D /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x59 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs4609);
}    /* #4609[659.4] */
RegWrite(R_CTL, 1, 0x19);    /* #4610[659.4] */
RegWrite(R_CTL, 1, 0x59);    /* #4611[659.4] */
RegWrite(R_CTL, 1, 0xD9);    /* #4612[659.4] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4613[659.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4614[659.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4615[659.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4616[659.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4617[659.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4618[659.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4619[659.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4620[659.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4621[659.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4622[659.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4623[660.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4624[660.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4625[660.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #4626[660.1] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4627[660.1] */
RegWrite(R_LMP, 1, 0x01);    /* #4628[660.1] */
RegWrite(R_LMP, 1, 0x01);    /* #4629[660.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #4630[660.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #4631[660.1] */
RegWrite(R_CTL, 1, 0x39);    /* #4632[660.1] */
RegWrite(0x34, 1, 0x63);    /* #4633[660.2] */
RegWrite(0x49, 1, 0x96);    /* #4634[660.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4635[660.2] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4636[660.2] */
RegWrite(0x34, 1, 0x63);    /* #4637[660.2] */
RegWrite(0x49, 1, 0x9E);    /* #4638[660.2] */
{
 unsigned char uchRegs4639[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x40 /*0x04*/, 0x00 /*0x05*/, 0x59 /*!!R_STPS!!*/,
   0x02 /*!!R_STPSH!!*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
   0x00 /*0x0A*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*0x16*/, 0x40 /*0x17*/, 0xC0 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x2D /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs4639);
}    /* #4639[660.2] */
RegWrite(R_CTL, 1, 0x39);    /* #4640[660.2] */
RegWrite(R_CTL, 1, 0x79);    /* #4641[660.2] */
RegWrite(R_CTL, 1, 0xF9);    /* #4642[660.2] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4643[660.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4644[660.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4645[660.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4646[660.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4647[660.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4648[660.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4649[660.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4650[660.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4651[660.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4652[660.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4653[660.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4654[660.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4655[660.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4656[661.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4657[661.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4658[661.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4659[661.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4660[661.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4661[661.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4662[661.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4663[661.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4664[661.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4665[661.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4666[661.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4667[661.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4668[661.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4669[661.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4670[661.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4671[661.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #4672[661.8] */
RegWrite(0x43, 1, 0x03);    /* #4673[661.8] */
RegWrite(R_CTL, 1, 0x39);    /* #4674[661.9] */
RegWrite(0x34, 1, 0x03);    /* #4675[661.9] */
RegWrite(0x49, 1, 0x96);    /* #4676[661.9] */
{
 unsigned char uchRegs4677[]={
   0x8E /*!!0x01!!*/, 0x05 /*!!0x02!!*/, 0x2A /*!!0x03!!*/,
   0x60 /*!!0x04!!*/, 0x09 /*!!0x05!!*/, 0x06 /*!!R_STPS!!*/,
   0x00 /*!!R_STPSH!!*/, 0x00 /*0x08*/, 0x2A /*!!0x09!!*/,
   0x1E /*!!0x0A!!*/, 0x0E /*!!0x0B!!*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x40 /*!!0x14!!*/, 0x15 /*!!0x15!!*/,
   0x40 /*!!0x16!!*/, 0x15 /*!!0x17!!*/, 0x40 /*!!0x18!!*/,
   0x15 /*!!0x19!!*/, 0x07 /*!!0x1A!!*/, 0x00 /*!!0x1B!!*/,
   0x08 /*!!0x1C!!*/, 0x12 /*!!0x1D!!*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x2D /*R_LENH*/,
   0x03 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0x40 /*!!0x47!!*/, 0x15 /*!!0x48!!*/,
   0x96 /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs4677);
}    /* #4677[661.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4678[661.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4679[662.0] */
RegWrite(R_CTL, 1, 0x39);    /* #4680[662.0] */
RegWrite(R_CTL, 1, 0x79);    /* #4681[662.0] */
RegWrite(R_CTL, 1, 0xF9);    /* #4682[662.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4683[662.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0BB8*/    /* #4684[662.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4685[662.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2580*/    /* #4686[662.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4687[662.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F48*/    /* #4688[662.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4689[662.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x6270*/    /* #4690[662.4] */
BulkRead(fh,32768);   /* #4691[662.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4692[662.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3788*/    /* #4693[662.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4694[662.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4D11*/    /* #4695[662.6] */
BulkRead(fh,32768);   /* #4696[662.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4697[662.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2410*/    /* #4698[662.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4699[662.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B80*/    /* #4700[662.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4701[662.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x65B0*/    /* #4702[662.9] */
BulkRead(fh,32768);   /* #4703[662.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4704[663.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3D2B*/    /* #4705[663.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4706[663.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4680*/    /* #4707[663.0] */
BulkRead(fh,32768);   /* #4708[663.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4709[663.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2048*/    /* #4710[663.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4711[663.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E58*/    /* #4712[663.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4713[663.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4CD0*/    /* #4714[663.3] */
BulkRead(fh,32768);   /* #4715[663.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4716[663.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2698*/    /* #4717[663.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4718[663.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3250*/    /* #4719[663.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4720[663.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5320*/    /* #4721[663.5] */
BulkRead(fh,32768);   /* #4722[663.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4723[663.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A90*/    /* #4724[663.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4725[663.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x46C0*/    /* #4726[663.7] */
BulkRead(fh,32768);   /* #4727[663.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4728[663.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1BC8*/    /* #4729[663.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4730[663.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2C30*/    /* #4731[663.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4732[663.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4D00*/    /* #4733[664.0] */
BulkRead(fh,32768);   /* #4734[664.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4735[664.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2920*/    /* #4736[664.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4737[664.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4090*/    /* #4738[664.2] */
BulkRead(fh,32768);   /* #4739[664.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4740[664.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A58*/    /* #4741[664.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4742[664.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x31C8*/    /* #4743[664.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4744[664.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5040*/    /* #4745[664.5] */
BulkRead(fh,32768);   /* #4746[664.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4747[664.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2558*/    /* #4748[664.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4749[664.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2DD3*/    /* #4750[664.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4751[664.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4472*/    /* #4752[664.6] */
BulkRead(fh,32768);   /* #4753[664.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4754[664.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x18E8*/    /* #4755[664.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4756[664.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2950*/    /* #4757[664.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4758[664.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4318*/    /* #4759[664.9] */
BulkRead(fh,32768);   /* #4760[664.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4761[664.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1830*/    /* #4762[665.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4763[665.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2EEF*/    /* #4764[665.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4765[665.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4968*/    /* #4766[665.1] */
BulkRead(fh,32768);   /* #4767[665.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4768[665.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20D8*/    /* #4769[665.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4770[665.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x42B7*/    /* #4771[665.4] */
BulkRead(fh,32768);   /* #4772[665.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4773[665.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1CC6*/    /* #4774[665.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4775[665.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2980*/    /* #4776[665.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4777[665.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4B31*/    /* #4778[665.6] */
BulkRead(fh,32768);   /* #4779[665.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4780[665.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x21C0*/    /* #4781[665.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4782[665.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D78*/    /* #4783[665.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4784[665.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4BF0*/    /* #4785[665.9] */
BulkRead(fh,32768);   /* #4786[665.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4787[665.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2108*/    /* #4788[665.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4789[666.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2CC0*/    /* #4790[666.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4791[666.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4D90*/    /* #4792[666.1] */
BulkRead(fh,32768);   /* #4793[666.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4794[666.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x22EC*/    /* #4795[666.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4796[666.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30B8*/    /* #4797[666.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4798[666.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4A80*/    /* #4799[666.3] */
BulkRead(fh,32768);   /* #4800[666.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4801[666.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2448*/    /* #4802[666.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4803[666.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3000*/    /* #4804[666.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4805[666.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x49C8*/    /* #4806[666.6] */
BulkRead(fh,32768);   /* #4807[666.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4808[666.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2138*/    /* #4809[666.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4810[666.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F48*/    /* #4811[666.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4812[666.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4DC0*/    /* #4813[666.8] */
BulkRead(fh,32768);   /* #4814[666.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4815[666.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2080*/    /* #4816[666.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4817[667.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C6C*/    /* #4818[667.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4819[667.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5B18*/    /* #4820[667.1] */
BulkRead(fh,32768);   /* #4821[667.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4822[667.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x34E0*/    /* #4823[667.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4824[667.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4098*/    /* #4825[667.2] */
BulkRead(fh,32768);   /* #4826[667.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4827[667.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A60*/    /* #4828[667.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4829[667.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2AC8*/    /* #4830[667.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4831[667.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4B98*/    /* #4832[667.5] */
BulkRead(fh,32768);   /* #4833[667.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4834[667.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F77*/    /* #4835[667.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4836[667.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2EC0*/    /* #4837[667.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4838[667.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4F90*/    /* #4839[667.8] */
BulkRead(fh,32768);   /* #4840[667.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4841[667.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x27F0*/    /* #4842[667.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4843[667.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x39C0*/    /* #4844[668.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4845[668.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5838*/    /* #4846[668.0] */
BulkRead(fh,32768);   /* #4847[668.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4848[668.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2FA8*/    /* #4849[668.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4850[668.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x403F*/    /* #4851[668.2] */
BulkRead(fh,32768);   /* #4852[668.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4853[668.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19D8*/    /* #4854[668.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4855[668.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2590*/    /* #4856[668.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4857[668.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F58*/    /* #4858[668.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4859[668.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5DD0*/    /* #4860[668.5] */
BulkRead(fh,32768);   /* #4861[668.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4862[668.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x32E8*/    /* #4863[668.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4864[668.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x501A*/    /* #4865[668.7] */
BulkRead(fh,32768);   /* #4866[668.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4867[668.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2476*/    /* #4868[668.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4869[668.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x36A4*/    /* #4870[668.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4871[668.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x50A8*/    /* #4872[669.0] */
BulkRead(fh,32768);   /* #4873[669.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4874[669.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2CC8*/    /* #4875[669.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4876[669.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3DF1*/    /* #4877[669.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4878[669.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x56F8*/    /* #4879[669.2] */
BulkRead(fh,32768);   /* #4880[669.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4881[669.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x29B8*/    /* #4882[669.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4883[669.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3570*/    /* #4884[669.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4885[669.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4F38*/    /* #4886[669.4] */
BulkRead(fh,32768);   /* #4887[669.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4888[669.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2900*/    /* #4889[669.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4890[669.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3A87*/    /* #4891[669.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4892[669.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5A38*/    /* #4893[669.7] */
BulkRead(fh,32768);   /* #4894[669.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4895[669.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F50*/    /* #4896[669.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4897[669.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4468*/    /* #4898[669.8] */
BulkRead(fh,32768);   /* #4899[669.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4900[669.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1BD8*/    /* #4901[669.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4902[670.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2790*/    /* #4903[670.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4904[670.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4158*/    /* #4905[670.1] */
BulkRead(fh,32768);   /* #4906[670.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4907[670.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B20*/    /* #4908[670.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4909[670.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40A0*/    /* #4910[670.3] */
BulkRead(fh,32768);   /* #4911[670.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4912[670.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1360*/    /* #4913[670.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4914[670.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x206E*/    /* #4915[670.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4916[670.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3FE8*/    /* #4917[670.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4918[670.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5C6B*/    /* #4919[670.6] */
BulkRead(fh,32768);   /* #4920[670.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4921[670.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x37A5*/    /* #4922[670.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4923[670.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x43E0*/    /* #4924[670.8] */
BulkRead(fh,32768);   /* #4925[670.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4926[670.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1BD8*/    /* #4927[670.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4928[670.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BB8*/    /* #4929[671.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4930[671.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4580*/    /* #4931[671.1] */
BulkRead(fh,32768);   /* #4932[671.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4933[671.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F48*/    /* #4934[671.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4935[671.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2FB0*/    /* #4936[671.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4937[671.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5080*/    /* #4938[671.3] */
BulkRead(fh,32768);   /* #4939[671.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4940[671.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2598*/    /* #4941[671.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4942[671.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x382E*/    /* #4943[671.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4944[671.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4ECD*/    /* #4945[671.5] */
BulkRead(fh,32768);   /* #4946[671.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4947[671.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2288*/    /* #4948[671.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4949[671.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3548*/    /* #4950[671.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4951[671.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x53C0*/    /* #4952[671.8] */
BulkRead(fh,32768);   /* #4953[671.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4954[671.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x28D8*/    /* #4955[672.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4956[672.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x49A8*/    /* #4957[672.0] */
BulkRead(fh,32768);   /* #4958[672.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4959[672.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1EC0*/    /* #4960[672.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4961[672.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A78*/    /* #4962[672.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4963[672.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4698*/    /* #4964[672.2] */
BulkRead(fh,32768);   /* #4965[672.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4966[672.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1BB0*/    /* #4967[672.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4968[672.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2C18*/    /* #4969[672.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4970[672.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4C7F*/    /* #4971[672.5] */
BulkRead(fh,32768);   /* #4972[672.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4973[672.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2458*/    /* #4974[672.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4975[672.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3010*/    /* #4976[672.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4977[672.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x49D8*/    /* #4978[672.7] */
BulkRead(fh,32768);   /* #4979[672.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4980[672.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x23A0*/    /* #4981[672.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4982[672.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F58*/    /* #4983[672.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4984[672.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4920*/    /* #4985[672.9] */
BulkRead(fh,32768);   /* #4986[673.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4987[673.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x22E8*/    /* #4988[673.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4989[673.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30B7*/    /* #4990[673.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4991[673.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4868*/    /* #4992[673.2] */
BulkRead(fh,32768);   /* #4993[673.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4994[673.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2230*/    /* #4995[673.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4996[673.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40A8*/    /* #4997[673.4] */
BulkRead(fh,32768);   /* #4998[673.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4999[673.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1368*/    /* #5000[673.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5001[673.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2628*/    /* #5002[673.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5003[673.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x44A0*/    /* #5004[673.6] */
BulkRead(fh,32768);   /* #5005[673.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5006[673.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1760*/    /* #5007[673.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5008[673.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2318*/    /* #5009[673.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5010[673.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3CE0*/    /* #5011[673.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5012[673.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x56A8*/    /* #5013[673.9] */
BulkRead(fh,32768);   /* #5014[674.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5015[674.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3070*/    /* #5016[674.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5017[674.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4199*/    /* #5018[674.1] */
BulkRead(fh,32768);   /* #5019[674.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5020[674.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1BA7*/    /* #5021[674.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5022[674.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2823*/    /* #5023[674.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5024[674.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4728*/    /* #5025[674.3] */
BulkRead(fh,32768);   /* #5026[674.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5027[674.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E98*/    /* #5028[674.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5029[674.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2CA8*/    /* #5030[674.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5031[674.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x43E1*/    /* #5032[674.6] */
BulkRead(fh,32768);   /* #5033[674.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5034[674.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1480*/    /* #5035[674.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5036[674.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x25D0*/    /* #5037[674.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5038[674.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4360*/    /* #5039[674.8] */
BulkRead(fh,32768);   /* #5040[674.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5041[674.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1878*/    /* #5042[674.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5043[675.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x308C*/    /* #5044[675.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5045[675.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4A9B*/    /* #5046[675.1] */
BulkRead(fh,32768);   /* #5047[675.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5048[675.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1EC8*/    /* #5049[675.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5050[675.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F30*/    /* #5051[675.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5052[675.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4DA8*/    /* #5053[675.3] */
BulkRead(fh,32768);   /* #5054[675.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5055[675.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2770*/    /* #5056[675.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5057[675.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3EE0*/    /* #5058[675.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5059[675.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x6208*/    /* #5060[675.6] */
BulkRead(fh,32768);   /* #5061[675.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5062[675.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3720*/    /* #5063[675.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5064[675.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x432E*/    /* #5065[675.8] */
BulkRead(fh,32768);   /* #5066[675.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5067[675.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1CA0*/    /* #5068[675.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5069[675.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2AB0*/    /* #5070[676.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5071[676.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5030*/    /* #5072[676.0] */
BulkRead(fh,32768);   /* #5073[676.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5074[676.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2548*/    /* #5075[676.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5076[676.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x38FA*/    /* #5077[676.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5078[676.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5309*/    /* #5079[676.3] */
BulkRead(fh,32768);   /* #5080[676.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5081[676.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x26E8*/    /* #5082[676.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5083[676.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3867*/    /* #5084[676.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5085[676.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5118*/    /* #5086[676.5] */
BulkRead(fh,32768);   /* #5087[676.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5088[676.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2630*/    /* #5089[676.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5090[676.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4692*/    /* #5091[676.7] */
BulkRead(fh,32768);   /* #5092[676.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5093[676.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5095[676.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BF0*/    /* #5096[676.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5109[677.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B10*/    /* #5110[677.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5111[677.4] */
RegWrite(R_CTL, 1, 0x39);    /* #5129[677.9] */
{
 unsigned char uchRegs5130[]={
   0x00 /*!!0x01!!*/, 0x00 /*!!0x02!!*/, 0x00 /*!!0x03!!*/,
   0x00 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0x00 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*0x08*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!0x0A!!*/, 0x00 /*!!0x0B!!*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x40 /*0x14*/, 0x15 /*0x15*/,
   0x40 /*0x16*/, 0x15 /*0x17*/, 0x40 /*0x18*/,
   0x15 /*0x19*/, 0x07 /*0x1A*/, 0x00 /*0x1B*/,
   0x08 /*0x1C*/, 0x12 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x2D /*R_LENH*/,
   0x03 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x80 /*!!0x41!!*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0x40 /*0x47*/, 0x15 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs5130);
}    /* #5130[678.0] */
RegWrite(R_CTL, 1, 0x39);    /* #5131[678.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x1073*/    /* #5153[678.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x1068*/    /* #5154[678.5] */
RegWrite(0x47, 2, 0x6000);    /* #5175[679.0] */
RegWrite(0x43, 1, 0x07);    /* #5176[679.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5187[679.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5188[679.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5189[679.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5190[679.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5191[679.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5192[680.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5193[680.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5194[680.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5195[680.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5196[680.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5197[680.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5198[680.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5199[680.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5200[680.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5201[681.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5202[681.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5203[681.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5204[681.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5205[681.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5206[681.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5207[681.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5208[681.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5209[681.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5210[681.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5211[682.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5212[682.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5213[682.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5214[682.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #5215[682.3] */
RegWrite(0x43, 1, 0x03);    /* #5216[682.3] */
RegWrite(R_CTL, 1, 0x39);    /* #5217[682.3] */
