ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #15123[552.7] */
RegWrite(0x43, 1, 0x03);    /* #15124[552.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #15125[552.8] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #15126[552.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #15127[552.8] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #15128[552.8] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15129[552.8] */
{
 unsigned char uchRegs15130[]={
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
  RegWriteArray(R_ALL, 74, uchRegs15130);
}    /* #15130[552.8] */
RegWrite(0x43, 1, 0x03);    /* #15131[552.8] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #15132[552.8] */
RegWrite(R_CCAL, 3, 0x848888);    /* #15133[552.8] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15134[552.8] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15135[552.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #15136[552.8] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15137[552.8] */
RegWrite(0x34, 1, 0x63);    /* #15138[552.8] */
RegWrite(0x49, 1, 0x9E);    /* #15139[552.8] */
{
 unsigned char uchRegs15140[]={
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
   0x84 /*!!R_CCAL3!!*/, 0xEA /*!!R_LEN!!*/, 0x24 /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs15140);
}    /* #15140[552.8] */
RegWrite(R_CTL, 1, 0x39);    /* #15141[552.8] */
RegWrite(R_CTL, 1, 0x79);    /* #15142[552.8] */
RegWrite(R_CTL, 1, 0xF9);    /* #15143[552.8] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15144[552.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15145[552.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15146[552.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15147[553.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15148[553.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15149[553.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15150[553.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15151[553.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15152[553.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15153[553.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15154[553.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15155[553.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15156[553.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15157[553.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #15158[553.6] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x848888*/    /* #15159[553.6] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15160[553.6] */
ulVal2 = RegRead(R_LEN, 2); /*=0x24EA*/    /* #15161[553.6] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15162[553.6] */
{
 unsigned char uchRegs15163[]={
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
  RegWriteArray(R_ALL, 74, uchRegs15163);
}    /* #15163[553.6] */
RegWrite(0x43, 1, 0x03);    /* #15164[553.6] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15165[553.6] */
RegWrite(R_LMP, 1, 0x01);    /* #15166[553.6] */
RegWrite(R_LMP, 1, 0x01);    /* #15167[553.6] */
RegWrite(R_CTL, 1, 0x39);    /* #15168[553.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #15169[553.6] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15170[553.6] */
{
 unsigned char uchRegs15171[]={
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
   0x80 /*R_CCAL3*/, 0xEA /*!!R_LEN!!*/, 0x24 /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs15171);
}    /* #15171[553.6] */
RegWrite(0x34, 1, 0x03);    /* #15172[553.6] */
RegWrite(0x49, 1, 0x96);    /* #15173[553.6] */
RegWrite(R_CTL, 1, 0x79);    /* #15174[553.6] */
RegWrite(R_CTL, 1, 0xF9);    /* #15175[553.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15176[553.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #15177[553.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #15178[553.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0780*/    /* #15179[553.7] */
BulkRead(fh,3840);   /* #15180[553.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #15181[553.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #15182[553.7] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15183[553.7] */
RegWrite(R_LMP, 1, 0x01);    /* #15184[553.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #15185[553.7] */
RegWrite(R_LMP, 1, 0x01);    /* #15186[553.7] */
RegWrite(R_LMP, 1, 0x01);    /* #15187[553.7] */
RegWrite(R_CTL, 1, 0x39);    /* #15188[553.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #15189[553.7] */
RegWrite(R_CCAL, 3, 0x848888);    /* #15190[553.7] */
{
 unsigned char uchRegs15191[]={
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
   0x84 /*!!R_CCAL3!!*/, 0xEA /*R_LEN*/, 0x24 /*R_LENH*/,
   0x03 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*!!R_CSTAT!!*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs15191);
}    /* #15191[553.8] */
RegWrite(0x34, 1, 0x03);    /* #15192[553.8] */
RegWrite(0x49, 1, 0x96);    /* #15193[553.8] */
RegWrite(R_CTL, 1, 0x79);    /* #15194[553.8] */
RegWrite(R_CTL, 1, 0xF9);    /* #15195[553.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15196[553.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #15197[553.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #15198[553.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0048*/    /* #15199[553.9] */
BulkRead(fh,144);   /* #15200[553.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #15201[553.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #15202[553.9] */
RegWrite(R_CCAL, 3, 0x848888);    /* #15203[553.9] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15204[553.9] */
RegWrite(R_LMP, 1, 0x01);    /* #15205[553.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #15206[553.9] */
ulVal2 = RegRead(R_LEN, 2); /*=0x24EA*/    /* #15207[553.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #15208[554.0] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15209[554.0] */
RegWrite(0x34, 1, 0x63);    /* #15210[554.0] */
RegWrite(0x49, 1, 0x9E);    /* #15211[554.0] */
{
 unsigned char uchRegs15212[]={
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
   0x84 /*R_CCAL3*/, 0xEA /*R_LEN*/, 0x24 /*R_LENH*/,
   0x63 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x79 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs15212);
}    /* #15212[554.0] */
RegWrite(R_CTL, 1, 0x19);    /* #15213[554.0] */
RegWrite(R_CTL, 1, 0x59);    /* #15214[554.0] */
RegWrite(R_CTL, 1, 0xD9);    /* #15215[554.0] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15216[554.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15217[554.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #15218[554.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #15219[554.1] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15220[554.1] */
{
 unsigned char uchRegs15221[]={
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
  RegWriteArray(R_ALL, 74, uchRegs15221);
}    /* #15221[554.1] */
RegWrite(0x43, 1, 0x03);    /* #15222[554.1] */
RegWrite(R_CCAL, 3, 0x848888);    /* #15223[554.1] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15224[554.1] */
RegWrite(R_LMP, 1, 0x01);    /* #15225[554.1] */
RegWrite(R_LMP, 1, 0x01);    /* #15226[554.1] */
RegWrite(R_CTL, 1, 0x39);    /* #15227[554.1] */
RegWrite(0x34, 1, 0x63);    /* #15228[554.1] */
RegWrite(0x49, 1, 0x96);    /* #15229[554.1] */
{
 unsigned char uchRegs15230[]={
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
   0x84 /*!!R_CCAL3!!*/, 0xEA /*!!R_LEN!!*/, 0x24 /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x20 /*!!0x41!!*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs15230);
}    /* #15230[554.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #15231[554.2] */
RegWrite(R_CTL, 1, 0x39);    /* #15232[554.2] */
RegWrite(R_CTL, 1, 0x79);    /* #15233[554.2] */
RegWrite(R_CTL, 1, 0xF9);    /* #15234[554.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15235[554.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x149B*/    /* #15236[554.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15237[554.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xAF07*/    /* #15238[554.2] */
BulkRead(fh,32768);   /* #15239[554.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15240[554.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xBDC5*/    /* #15241[554.3] */
BulkRead(fh,32768);   /* #15242[554.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15243[554.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xE698*/    /* #15244[554.3] */
BulkRead(fh,32768);   /* #15245[554.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15246[554.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15247[554.4] */
BulkRead(fh,32768);   /* #15248[554.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15249[554.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15250[554.4] */
BulkRead(fh,32768);   /* #15251[554.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15252[554.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15253[554.5] */
BulkRead(fh,32768);   /* #15254[554.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15255[554.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15256[554.5] */
BulkRead(fh,32768);   /* #15257[554.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15258[554.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15259[554.6] */
BulkRead(fh,32768);   /* #15260[554.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15261[554.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15262[554.7] */
BulkRead(fh,32768);   /* #15263[554.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15264[554.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15265[554.7] */
BulkRead(fh,32768);   /* #15266[554.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15267[554.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15268[554.7] */
BulkRead(fh,32768);   /* #15269[554.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15270[554.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15271[554.8] */
BulkRead(fh,32768);   /* #15272[554.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15273[554.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15274[554.8] */
BulkRead(fh,32768);   /* #15275[554.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15276[554.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15277[554.9] */
BulkRead(fh,32768);   /* #15278[554.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15279[554.9] */
BulkRead(fh,32768);   /* #15281[555.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15282[555.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15283[555.0] */
BulkRead(fh,32768);   /* #15284[555.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15285[555.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15286[555.0] */
BulkRead(fh,32768);   /* #15287[555.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15288[555.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15289[555.1] */
BulkRead(fh,32768);   /* #15290[555.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15291[555.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15292[555.2] */
BulkRead(fh,32768);   /* #15293[555.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15294[555.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15295[555.2] */
BulkRead(fh,32768);   /* #15296[555.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15297[555.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15298[555.3] */
BulkRead(fh,32768);   /* #15299[555.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15300[555.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15301[555.3] */
BulkRead(fh,32768);   /* #15302[555.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15303[555.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15304[555.4] */
BulkRead(fh,32768);   /* #15305[555.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15306[555.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15307[555.4] */
BulkRead(fh,32768);   /* #15308[555.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15309[555.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15310[555.5] */
BulkRead(fh,32768);   /* #15311[555.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15312[555.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15313[555.5] */
BulkRead(fh,32768);   /* #15314[555.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15315[555.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15316[555.6] */
BulkRead(fh,32768);   /* #15317[555.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15318[555.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #15319[555.6] */
BulkRead(fh,32768);   /* #15320[555.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15321[555.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF008*/    /* #15322[555.7] */
BulkRead(fh,32768);   /* #15323[555.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15324[555.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB008*/    /* #15325[555.7] */
BulkRead(fh,32768);   /* #15326[555.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15327[555.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #15328[555.8] */
BulkRead(fh,32768);   /* #15329[555.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #15330[555.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #15331[555.8] */
BulkRead(fh,24592);   /* #15332[555.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #15333[555.9] */
RegWrite(0x43, 1, 0x03);    /* #15334[555.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #15335[555.9] */
{
 unsigned char uchRegs15336[]={
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
   0x84 /*R_CCAL3*/, 0xEA /*R_LEN*/, 0x24 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x80 /*!!0x41!!*/, 0x80 /*!!R_CSTAT!!*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x79 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs15336);
}    /* #15336[555.9] */
RegWrite(R_CTL, 1, 0x39);    /* #15337[555.9] */
RegWrite(R_CTL, 1, 0x79);    /* #15338[555.9] */
RegWrite(R_CTL, 1, 0xF9);    /* #15339[555.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15340[555.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15341[555.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15342[555.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15343[555.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #15344[555.9] */
RegWrite(R_CTL, 1, 0x39);    /* #15345[555.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #15346[555.9] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15347[555.9] */
RegWrite(0x34, 1, 0x63);    /* #15348[555.9] */
RegWrite(0x49, 1, 0x9E);    /* #15349[555.9] */
{
 unsigned char uchRegs15350[]={
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
   0x84 /*R_CCAL3*/, 0xEA /*R_LEN*/, 0x24 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*!!0x41!!*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs15350);
}    /* #15350[556.0] */
RegWrite(R_CTL, 1, 0x19);    /* #15351[556.0] */
RegWrite(R_CTL, 1, 0x59);    /* #15352[556.0] */
RegWrite(R_CTL, 1, 0xD9);    /* #15353[556.0] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15354[556.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15355[556.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15356[556.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15357[556.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15358[556.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15359[556.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15360[556.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15361[556.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #15362[556.8] */
RegWrite(R_LMP, 1, 0x01);    /* #15363[556.8] */
RegWrite(R_LMP, 1, 0x01);    /* #15364[556.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #15365[556.8] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15366[556.8] */
RegWrite(0x34, 1, 0x63);    /* #15367[556.8] */
RegWrite(0x49, 1, 0x9E);    /* #15368[556.8] */
{
 unsigned char uchRegs15369[]={
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
   0x84 /*R_CCAL3*/, 0xEA /*R_LEN*/, 0x24 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x59 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs15369);
}    /* #15369[556.8] */
RegWrite(R_CTL, 1, 0x19);    /* #15370[556.8] */
RegWrite(R_CTL, 1, 0x59);    /* #15371[556.9] */
RegWrite(R_CTL, 1, 0xD9);    /* #15372[556.9] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15373[556.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15374[556.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15375[557.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15376[557.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15377[557.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15378[557.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15379[557.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15380[557.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15381[557.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15382[557.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15383[557.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15384[557.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15385[557.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #15386[557.6] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15387[557.6] */
RegWrite(R_LMP, 1, 0x01);    /* #15388[557.6] */
RegWrite(R_LMP, 1, 0x01);    /* #15389[557.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #15390[557.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #15391[557.6] */
RegWrite(R_CTL, 1, 0x39);    /* #15392[557.6] */
RegWrite(0x34, 1, 0x63);    /* #15393[557.6] */
RegWrite(0x49, 1, 0x96);    /* #15394[557.7] */
RegWrite(0x43, 1, 0x07);    /* #15395[557.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #15396[557.7] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15397[557.7] */
RegWrite(0x34, 1, 0xC3);    /* #15398[557.7] */
RegWrite(0x49, 1, 0x9E);    /* #15399[557.7] */
{
 unsigned char uchRegs15400[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x40 /*0x04*/, 0x00 /*0x05*/, 0x38 /*!!R_STPS!!*/,
   0x06 /*!!R_STPSH!!*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
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
   0x84 /*R_CCAL3*/, 0xEA /*R_LEN*/, 0x24 /*R_LENH*/,
   0xC3 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x07 /*!!0x43!!*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs15400);
}    /* #15400[557.7] */
RegWrite(0x43, 1, 0x03);    /* #15401[557.7] */
RegWrite(R_STPS, 2, 0x0000);    /* #15402[557.7] */
RegWrite(0x0A, 2, 0x0638);    /* #15403[557.7] */
RegWrite(0x47, 2, 0xA000);    /* #15404[557.7] */
RegWrite(0x34, 1, 0xC3);    /* #15405[557.7] */
RegWrite(0x49, 1, 0x9E);    /* #15406[557.8] */
RegWrite(R_CTL, 1, 0x39);    /* #15407[557.8] */
RegWrite(R_CTL, 1, 0x79);    /* #15408[557.8] */
RegWrite(R_CTL, 1, 0xF9);    /* #15409[557.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0000*/    /* #15410[557.8] */
RegWrite(0x47, 2, 0xA000);    /* #15411[557.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0000*/    /* #15412[557.8] */
RegWrite(0x47, 2, 0x9800);    /* #15413[557.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0000*/    /* #15414[557.8] */
RegWrite(0x47, 2, 0x9000);    /* #15415[557.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0637*/    /* #15416[557.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0635*/    /* #15417[557.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0633*/    /* #15418[557.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0631*/    /* #15419[557.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x062E*/    /* #15420[557.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x062C*/    /* #15421[557.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x062A*/    /* #15422[557.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0628*/    /* #15423[557.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0626*/    /* #15424[557.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0624*/    /* #15425[557.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x060A*/    /* #15426[557.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0608*/    /* #15427[557.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0606*/    /* #15428[557.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0604*/    /* #15429[557.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0602*/    /* #15430[557.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0600*/    /* #15431[557.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x05FE*/    /* #15432[557.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x05FB*/    /* #15433[557.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x05F9*/    /* #15434[557.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x05F7*/    /* #15435[557.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x05F5*/    /* #15436[557.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x05F3*/    /* #15437[557.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x05F1*/    /* #15438[557.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x05EE*/    /* #15439[557.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x05EC*/    /* #15440[557.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x05EA*/    /* #15441[557.9] */
RegWrite(0x47, 2, 0x8800);    /* #15442[557.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x05E5*/    /* #15443[557.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x05E3*/    /* #15444[557.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x05E1*/    /* #15445[558.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x05DE*/    /* #15446[558.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x05DB*/    /* #15447[558.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x05D3*/    /* #15448[558.0] */
RegWrite(0x47, 2, 0x8000);    /* #15449[558.0] */
RegWrite(0x43, 1, 0x07);    /* #15450[558.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x05C5*/    /* #15451[558.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x05BE*/    /* #15452[558.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x05BA*/    /* #15453[558.0] */
RegWrite(0x47, 2, 0x7800);    /* #15454[558.0] */
RegWrite(0x43, 1, 0x07);    /* #15455[558.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x05AF*/    /* #15456[558.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x05AD*/    /* #15457[558.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x05A3*/    /* #15458[558.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x05A0*/    /* #15459[558.1] */
RegWrite(0x47, 2, 0x7000);    /* #15460[558.1] */
RegWrite(0x43, 1, 0x07);    /* #15461[558.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x0589*/    /* #15462[558.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x057B*/    /* #15463[558.1] */
RegWrite(0x47, 2, 0x6800);    /* #15464[558.1] */
RegWrite(0x43, 1, 0x07);    /* #15465[558.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x056A*/    /* #15466[558.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x055F*/    /* #15467[558.1] */
RegWrite(0x47, 2, 0x6000);    /* #15468[558.2] */
RegWrite(0x43, 1, 0x07);    /* #15469[558.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x054E*/    /* #15470[558.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0540*/    /* #15471[558.2] */
RegWrite(0x47, 2, 0x5800);    /* #15472[558.2] */
RegWrite(0x43, 1, 0x07);    /* #15473[558.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x052B*/    /* #15474[558.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0522*/    /* #15475[558.2] */
RegWrite(0x47, 2, 0x5000);    /* #15476[558.2] */
RegWrite(0x43, 1, 0x07);    /* #15477[558.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0511*/    /* #15478[558.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x050B*/    /* #15479[558.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0507*/    /* #15480[558.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x04F8*/    /* #15481[558.3] */
RegWrite(0x47, 2, 0x40C0);    /* #15482[558.3] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15483[558.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15484[558.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15485[558.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15486[558.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15487[558.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15488[558.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15489[558.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15490[558.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15491[558.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15492[558.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15493[558.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15494[558.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15495[559.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15496[559.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15497[559.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15498[559.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15499[559.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15500[559.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15501[559.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #15502[559.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #15503[559.3] */
RegWrite(0x43, 1, 0x03);    /* #15504[559.3] */
RegWrite(R_CTL, 1, 0x39);    /* #15505[559.3] */
RegWrite(0x34, 1, 0x03);    /* #15506[559.4] */
RegWrite(0x49, 1, 0x96);    /* #15507[559.4] */
{
 unsigned char uchRegs15508[]={
   0xAB /*!!0x01!!*/, 0x05 /*!!0x02!!*/, 0x3F /*0x03*/,
   0x58 /*!!0x04!!*/, 0xC2 /*!!0x05!!*/, 0x10 /*!!R_STPS!!*/,
   0x00 /*!!R_STPSH!!*/, 0xFF /*!!0x08!!*/, 0xFF /*!!0x09!!*/,
   0x66 /*!!0x0A!!*/, 0x02 /*!!0x0B!!*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x60 /*!!0x12!!*/,
   0x15 /*0x13*/, 0xA0 /*!!0x14!!*/, 0x2A /*0x15*/,
   0xE0 /*!!0x16!!*/, 0x3F /*!!0x17!!*/, 0x22 /*!!0x18!!*/,
   0x56 /*!!0x19!!*/, 0xFF /*0x1A*/, 0x0F /*!!0x1B!!*/,
   0x44 /*!!0x1C!!*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0xEA /*R_LEN*/, 0x24 /*R_LENH*/,
   0x03 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*!!0x43!!*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0x22 /*!!0x47!!*/, 0x56 /*!!0x48!!*/,
   0x96 /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs15508);
}    /* #15508[559.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #15509[559.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #15510[559.4] */
RegWrite(R_CTL, 1, 0x39);    /* #15511[559.5] */
RegWrite(R_CTL, 1, 0x79);    /* #15512[559.5] */
RegWrite(R_CTL, 1, 0xF9);    /* #15513[559.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15514[559.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #15515[559.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15516[559.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #15517[559.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15518[559.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #15519[559.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15520[559.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0E10*/    /* #15521[559.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15522[559.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2454*/    /* #15523[560.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15524[560.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x396C*/    /* #15525[560.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15526[560.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4C75*/    /* #15527[560.2] */
BulkRead(fh,32768);   /* #15528[560.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15529[560.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C94*/    /* #15530[560.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15531[560.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F54*/    /* #15532[560.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15533[560.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4340*/    /* #15534[560.4] */
BulkRead(fh,32768);   /* #15535[560.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15536[560.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x14D4*/    /* #15537[560.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15538[560.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2336*/    /* #15539[560.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15540[560.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x36D0*/    /* #15541[560.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15542[560.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5098*/    /* #15543[560.8] */
BulkRead(fh,32768);   /* #15544[560.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15545[560.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x222C*/    /* #15546[560.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15547[561.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3168*/    /* #15548[561.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15549[561.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x48D8*/    /* #15550[561.1] */
BulkRead(fh,32768);   /* #15551[561.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15552[561.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A6C*/    /* #15553[561.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15554[561.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E58*/    /* #15555[561.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15556[561.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4118*/    /* #15557[561.4] */
BulkRead(fh,32768);   /* #15558[561.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15559[561.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1504*/    /* #15560[561.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15561[561.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x27C4*/    /* #15562[561.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15563[561.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3958*/    /* #15564[561.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15565[561.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4E70*/    /* #15566[561.8] */
BulkRead(fh,32768);   /* #15567[561.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15568[561.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2130*/    /* #15569[561.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15570[561.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x336B*/    /* #15571[562.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15572[562.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4A34*/    /* #15573[562.1] */
BulkRead(fh,32768);   /* #15574[562.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15575[562.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B67*/    /* #15576[562.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15577[562.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B6C*/    /* #15578[562.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15579[562.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4F58*/    /* #15580[562.4] */
BulkRead(fh,32768);   /* #15581[562.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15582[562.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2218*/    /* #15583[562.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15584[562.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2CA4*/    /* #15585[562.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15586[562.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F64*/    /* #15587[562.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15588[562.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x547C*/    /* #15589[562.8] */
BulkRead(fh,32768);   /* #15590[562.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15591[562.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2868*/    /* #15592[562.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15593[563.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3D80*/    /* #15594[563.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15595[563.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5874*/    /* #15596[563.2] */
BulkRead(fh,32768);   /* #15597[563.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15598[563.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3CC8*/    /* #15599[563.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15600[563.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x51E0*/    /* #15601[563.4] */
BulkRead(fh,32768);   /* #15602[563.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15603[563.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x25CC*/    /* #15604[563.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15605[563.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x388C*/    /* #15606[563.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15607[563.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5380*/    /* #15608[563.7] */
BulkRead(fh,32768);   /* #15609[563.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15610[563.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x22BC*/    /* #15611[563.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15612[563.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x31F8*/    /* #15613[563.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15614[564.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x690C*/    /* #15615[564.1] */
BulkRead(fh,32768);   /* #15616[564.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15617[564.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3974*/    /* #15618[564.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15619[564.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4B08*/    /* #15620[564.3] */
BulkRead(fh,32768);   /* #15621[564.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15622[564.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A44*/    /* #15623[564.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15624[564.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30AA*/    /* #15625[565.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15626[565.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9424*/    /* #15627[565.0] */
BulkRead(fh,32768);   /* #15628[565.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15629[565.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5C58*/    /* #15630[565.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15631[565.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x648C*/    /* #15632[565.1] */
BulkRead(fh,32768);   /* #15633[565.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15634[565.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F18*/    /* #15635[565.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15636[565.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4430*/    /* #15637[565.2] */
BulkRead(fh,32768);   /* #15638[565.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15639[565.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x181C*/    /* #15640[565.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15641[565.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x262C*/    /* #15642[565.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15643[565.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3D9C*/    /* #15644[565.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15645[565.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x53E0*/    /* #15646[565.6] */
BulkRead(fh,32768);   /* #15647[565.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15648[566.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xA788*/    /* #15649[566.4] */
BulkRead(fh,32768);   /* #15650[566.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15651[566.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x70E8*/    /* #15652[566.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15653[566.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7B74*/    /* #15654[566.5] */
BulkRead(fh,32768);   /* #15655[566.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15656[566.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x508C*/    /* #15657[566.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15658[566.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5B18*/    /* #15659[566.6] */
BulkRead(fh,32768);   /* #15660[566.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15661[566.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3030*/    /* #15662[566.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15663[566.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x47A0*/    /* #15664[566.9] */
BulkRead(fh,32768);   /* #15665[566.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15666[566.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x16DC*/    /* #15667[567.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15668[567.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BF4*/    /* #15669[567.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15670[567.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4490*/    /* #15671[567.2] */
BulkRead(fh,32768);   /* #15672[567.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15673[567.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x14F8*/    /* #15674[567.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15675[567.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2C68*/    /* #15676[567.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15677[567.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F28*/    /* #15678[567.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15679[567.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x556C*/    /* #15680[567.6] */
BulkRead(fh,32768);   /* #15681[567.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15682[568.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x6AF8*/    /* #15683[568.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15684[568.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7584*/    /* #15685[568.0] */
BulkRead(fh,32768);   /* #15686[568.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15687[568.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4844*/    /* #15688[568.1] */
BulkRead(fh,32768);   /* #15689[568.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15690[568.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x18AC*/    /* #15691[568.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15692[568.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2338*/    /* #15693[568.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15694[568.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BD4*/    /* #15695[568.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15696[568.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5218*/    /* #15697[568.5] */
BulkRead(fh,32768);   /* #15698[568.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15699[568.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2280*/    /* #15700[568.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15701[568.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5610*/    /* #15702[568.8] */
BulkRead(fh,32768);   /* #15703[568.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15704[568.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2420*/    /* #15705[569.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15706[569.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x416C*/    /* #15707[569.1] */
BulkRead(fh,32768);   /* #15708[569.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15709[569.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x142C*/    /* #15710[569.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15711[569.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2169*/    /* #15712[569.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15713[569.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x34FC*/    /* #15714[569.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15715[569.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4E49*/    /* #15716[569.4] */
BulkRead(fh,32768);   /* #15717[569.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15718[569.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E00*/    /* #15719[569.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15720[569.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #15721[569.9] */
BulkRead(fh,32768);   /* #15722[569.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15723[570.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x383C*/    /* #15724[570.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15725[570.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x42C8*/    /* #15726[570.0] */
BulkRead(fh,32768);   /* #15727[570.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15728[570.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x16B4*/    /* #15729[570.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15730[570.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2AA0*/    /* #15731[570.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15732[570.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x6E98*/    /* #15733[570.7] */
BulkRead(fh,32768);   /* #15734[570.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #15735[570.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E98*/    /* #15736[570.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E98*/    /* #15737[570.8] */
BulkRead(fh,23856);   /* #15738[570.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #15739[570.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #15740[570.9] */
RegWrite(0x43, 1, 0x03);    /* #15741[570.9] */
RegWrite(0x43, 1, 0x03);    /* #15742[571.0] */
RegWrite(R_CTL, 1, 0x39);    /* #15743[571.0] */
{
 unsigned char uchRegs15744[]={
   0x00 /*!!0x01!!*/, 0x00 /*!!0x02!!*/, 0x00 /*!!0x03!!*/,
   0x00 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0x00 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!0x0A!!*/, 0x00 /*!!0x0B!!*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x60 /*0x12*/,
   0x15 /*0x13*/, 0xA0 /*0x14*/, 0x2A /*0x15*/,
   0xE0 /*0x16*/, 0x3F /*0x17*/, 0x22 /*0x18*/,
   0x56 /*0x19*/, 0xFF /*0x1A*/, 0x0F /*0x1B*/,
   0x44 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0xEA /*R_LEN*/, 0x24 /*R_LENH*/,
   0x03 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x80 /*!!0x41!!*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0x22 /*0x47*/, 0x56 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs15744);
}    /* #15744[571.0] */
RegWrite(R_CTL, 1, 0x39);    /* #15745[571.0] */
RegWrite(R_CTL, 1, 0x79);    /* #15746[571.0] */
RegWrite(R_CTL, 1, 0xF9);    /* #15747[571.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15748[571.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #15749[571.3] */
RegWrite(R_CTL, 1, 0x39);    /* #15750[571.3] */
RegWrite(0x43, 1, 0x07);    /* #15751[571.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #15752[571.3] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15753[571.3] */
RegWrite(0x34, 1, 0xC3);    /* #15754[571.3] */
RegWrite(0x49, 1, 0x9E);    /* #15755[571.4] */
{
 unsigned char uchRegs15756[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*!!0x03!!*/,
   0x40 /*!!0x04!!*/, 0x00 /*0x05*/, 0xAE /*!!R_STPS!!*/,
   0x08 /*!!R_STPSH!!*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
   0x00 /*0x0A*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*!!0x12!!*/,
   0x15 /*0x13*/, 0x80 /*!!0x14!!*/, 0x2A /*0x15*/,
   0xC0 /*!!0x16!!*/, 0x40 /*!!0x17!!*/, 0xC0 /*!!0x18!!*/,
   0x40 /*!!0x19!!*/, 0xFF /*0x1A*/, 0x01 /*!!0x1B!!*/,
   0x88 /*!!0x1C!!*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0xEA /*R_LEN*/, 0x24 /*R_LENH*/,
   0xC3 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*!!0x41!!*/, 0x80 /*R_CSTAT*/,
   0x07 /*!!0x43!!*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*!!0x47!!*/, 0x40 /*!!0x48!!*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs15756);
}    /* #15756[571.4] */
RegWrite(0x43, 1, 0x03);    /* #15757[571.4] */
RegWrite(R_STPS, 2, 0x0000);    /* #15758[571.4] */
RegWrite(0x0A, 2, 0x08AE);    /* #15759[571.5] */
RegWrite(0x47, 2, 0xA000);    /* #15760[571.5] */
RegWrite(0x34, 1, 0xC3);    /* #15761[571.5] */
RegWrite(0x49, 1, 0x9E);    /* #15762[571.5] */
RegWrite(R_CTL, 1, 0x19);    /* #15763[571.5] */
RegWrite(R_CTL, 1, 0x59);    /* #15764[571.6] */
RegWrite(R_CTL, 1, 0xD9);    /* #15765[571.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0000*/    /* #15766[571.6] */
RegWrite(0x47, 2, 0xA000);    /* #15767[571.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x08A3*/    /* #15768[571.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x089A*/    /* #15769[571.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x0890*/    /* #15770[571.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x0883*/    /* #15771[571.7] */
RegWrite(0x47, 2, 0x9800);    /* #15772[571.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x086A*/    /* #15773[571.8] */
RegWrite(0x47, 2, 0x9000);    /* #15774[571.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0855*/    /* #15775[571.8] */
RegWrite(0x47, 2, 0x8800);    /* #15776[571.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0839*/    /* #15777[571.8] */
RegWrite(0x47, 2, 0x8000);    /* #15778[571.8] */
RegWrite(0x43, 1, 0x07);    /* #15779[571.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x081C*/    /* #15780[571.9] */
RegWrite(0x47, 2, 0x7800);    /* #15781[571.9] */
RegWrite(0x43, 1, 0x07);    /* #15782[571.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x07F6*/    /* #15783[572.1] */
RegWrite(0x47, 2, 0x7000);    /* #15784[572.2] */
RegWrite(0x43, 1, 0x07);    /* #15785[572.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0748*/    /* #15786[572.2] */
RegWrite(0x47, 2, 0x6800);    /* #15787[572.2] */
RegWrite(0x43, 1, 0x07);    /* #15788[572.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x071D*/    /* #15789[572.3] */
RegWrite(0x47, 2, 0x6000);    /* #15790[572.3] */
RegWrite(0x43, 1, 0x07);    /* #15791[572.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x06E0*/    /* #15792[572.4] */
RegWrite(0x47, 2, 0x5800);    /* #15793[572.4] */
RegWrite(0x43, 1, 0x07);    /* #15794[572.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x06AE*/    /* #15795[572.4] */
RegWrite(0x47, 2, 0x5000);    /* #15796[572.4] */
RegWrite(0x43, 1, 0x07);    /* #15797[572.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x067B*/    /* #15798[572.5] */
RegWrite(0x47, 2, 0x40C0);    /* #15799[572.5] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15800[572.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15801[572.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15802[573.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15803[573.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15804[573.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15805[573.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15806[573.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15807[573.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15808[573.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15809[573.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #15810[573.9] */
RegWrite(0x43, 1, 0x03);    /* #15811[573.9] */
RegWrite(R_CTL, 1, 0x39);    /* #15812[573.9] */
ulVal1 = RegRead(0x43, 1); /*=0x03*/    /* #15813[675.1] */
ulVal1 = RegRead(0x43, 1); /*=0x03*/    /* #15814[676.1] */
ulVal1 = RegRead(0x43, 1); /*=0x03*/    /* #15815[677.1] */
ulVal1 = RegRead(0x43, 1); /*=0x03*/    /* #15816[678.1] */
ulVal1 = RegRead(0x43, 1); /*=0x03*/    /* #15817[679.0] */
ulVal1 = RegRead(0x43, 1); /*=0x03*/    /* #15818[680.0] */
ulVal1 = RegRead(0x43, 1); /*=0x03*/    /* #15819[681.0] */
ulVal1 = RegRead(0x43, 1); /*=0x03*/    /* #15820[681.9] */
ulVal1 = RegRead(0x43, 1); /*=0x03*/    /* #15821[682.9] */
ulVal1 = RegRead(0x43, 1); /*=0x03*/    /* #15822[683.8] */
ulVal1 = RegRead(0x43, 1); /*=0x03*/    /* #15823[684.8] */
ulVal1 = RegRead(0x43, 1); /*=0x03*/    /* #15824[685.8] */
ulVal1 = RegRead(0x43, 1); /*=0x03*/    /* #15825[686.7] */
ulVal1 = RegRead(0x43, 1); /*=0x03*/    /* #15826[687.7] */
ulVal1 = RegRead(0x43, 1); /*=0x03*/    /* #15827[688.7] */
