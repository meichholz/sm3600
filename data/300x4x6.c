ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #12587[333.2] */
RegWrite(0x43, 1, 0x03);    /* #12588[333.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #12589[333.2] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #12590[333.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #12591[333.2] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #12592[333.2] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12593[333.2] */
{
 unsigned char uchRegs12594[]={
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
  RegWriteArray(R_ALL, 74, uchRegs12594);
}    /* #12594[333.2] */
RegWrite(0x43, 1, 0x03);    /* #12595[333.2] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #12596[333.3] */
RegWrite(R_CCAL, 3, 0x848888);    /* #12597[333.3] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12598[333.3] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12599[333.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #12600[333.3] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12601[333.3] */
RegWrite(0x34, 1, 0x63);    /* #12602[333.3] */
RegWrite(0x49, 1, 0x9E);    /* #12603[333.3] */
{
 unsigned char uchRegs12604[]={
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
  RegWriteArray(R_ALL, 74, uchRegs12604);
}    /* #12604[333.3] */
RegWrite(R_CTL, 1, 0x39);    /* #12605[333.3] */
RegWrite(R_CTL, 1, 0x79);    /* #12606[333.3] */
RegWrite(R_CTL, 1, 0xF9);    /* #12607[333.3] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12608[333.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12609[333.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12610[333.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12611[333.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12612[333.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12613[333.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12614[333.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12615[333.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12616[333.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12617[333.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12618[333.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12619[333.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12620[334.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12621[334.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #12622[334.0] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x848888*/    /* #12623[334.0] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12624[334.0] */
ulVal2 = RegRead(R_LEN, 2); /*=0x24EA*/    /* #12625[334.1] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12626[334.1] */
{
 unsigned char uchRegs12627[]={
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
  RegWriteArray(R_ALL, 74, uchRegs12627);
}    /* #12627[334.1] */
RegWrite(0x43, 1, 0x03);    /* #12628[334.1] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12629[334.1] */
RegWrite(R_LMP, 1, 0x01);    /* #12630[334.1] */
RegWrite(R_LMP, 1, 0x01);    /* #12631[334.1] */
RegWrite(R_CTL, 1, 0x39);    /* #12632[334.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #12633[334.1] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12634[334.1] */
{
 unsigned char uchRegs12635[]={
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
  RegWriteArray(R_ALL, 74, uchRegs12635);
}    /* #12635[334.1] */
RegWrite(0x34, 1, 0x03);    /* #12636[334.1] */
RegWrite(0x49, 1, 0x96);    /* #12637[334.2] */
RegWrite(R_CTL, 1, 0x79);    /* #12638[334.2] */
RegWrite(R_CTL, 1, 0xF9);    /* #12639[334.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12640[334.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #12641[334.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #12642[334.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0780*/    /* #12643[334.2] */
BulkRead(fh,3840);   /* #12644[334.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #12645[334.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #12646[334.3] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12647[334.3] */
RegWrite(R_LMP, 1, 0x01);    /* #12648[334.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #12649[334.3] */
RegWrite(R_LMP, 1, 0x01);    /* #12650[334.3] */
RegWrite(R_LMP, 1, 0x01);    /* #12651[334.3] */
RegWrite(R_CTL, 1, 0x39);    /* #12652[334.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #12653[334.3] */
RegWrite(R_CCAL, 3, 0x848888);    /* #12654[334.3] */
{
 unsigned char uchRegs12655[]={
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
  RegWriteArray(R_ALL, 74, uchRegs12655);
}    /* #12655[334.3] */
RegWrite(0x34, 1, 0x03);    /* #12656[334.3] */
RegWrite(0x49, 1, 0x96);    /* #12657[334.3] */
RegWrite(R_CTL, 1, 0x79);    /* #12658[334.3] */
RegWrite(R_CTL, 1, 0xF9);    /* #12659[334.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12660[334.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #12661[334.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #12662[334.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0048*/    /* #12663[334.4] */
BulkRead(fh,144);   /* #12664[334.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #12665[334.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #12666[334.4] */
RegWrite(R_CCAL, 3, 0x848888);    /* #12667[334.4] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12668[334.4] */
RegWrite(R_LMP, 1, 0x01);    /* #12669[334.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #12670[334.4] */
ulVal2 = RegRead(R_LEN, 2); /*=0x24EA*/    /* #12671[334.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #12672[334.4] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12673[334.4] */
RegWrite(0x34, 1, 0x63);    /* #12674[334.5] */
RegWrite(0x49, 1, 0x9E);    /* #12675[334.5] */
{
 unsigned char uchRegs12676[]={
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
  RegWriteArray(R_ALL, 74, uchRegs12676);
}    /* #12676[334.5] */
RegWrite(R_CTL, 1, 0x19);    /* #12677[334.5] */
RegWrite(R_CTL, 1, 0x59);    /* #12678[334.5] */
RegWrite(R_CTL, 1, 0xD9);    /* #12679[334.5] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12680[334.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12681[334.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #12682[334.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #12683[334.6] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12684[334.6] */
{
 unsigned char uchRegs12685[]={
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
  RegWriteArray(R_ALL, 74, uchRegs12685);
}    /* #12685[334.7] */
RegWrite(0x43, 1, 0x03);    /* #12686[334.7] */
RegWrite(R_CCAL, 3, 0x848888);    /* #12687[334.7] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12688[334.7] */
RegWrite(R_LMP, 1, 0x01);    /* #12689[334.7] */
RegWrite(R_LMP, 1, 0x01);    /* #12690[334.7] */
RegWrite(R_CTL, 1, 0x39);    /* #12691[334.7] */
RegWrite(0x34, 1, 0x63);    /* #12692[334.7] */
RegWrite(0x49, 1, 0x96);    /* #12693[334.7] */
{
 unsigned char uchRegs12694[]={
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
  RegWriteArray(R_ALL, 74, uchRegs12694);
}    /* #12694[334.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #12695[334.7] */
RegWrite(R_CTL, 1, 0x39);    /* #12696[334.7] */
RegWrite(R_CTL, 1, 0x79);    /* #12697[334.7] */
RegWrite(R_CTL, 1, 0xF9);    /* #12698[334.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12699[334.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0C18*/    /* #12700[334.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12701[334.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9876*/    /* #12702[334.8] */
BulkRead(fh,32768);   /* #12703[334.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12704[334.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xAF10*/    /* #12705[334.8] */
BulkRead(fh,32768);   /* #12706[334.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12707[334.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xE698*/    /* #12708[334.9] */
BulkRead(fh,32768);   /* #12709[334.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12710[334.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12711[335.0] */
BulkRead(fh,32768);   /* #12712[335.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12713[335.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12714[335.0] */
BulkRead(fh,32768);   /* #12715[335.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12716[335.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12717[335.1] */
BulkRead(fh,32768);   /* #12718[335.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12719[335.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12720[335.2] */
BulkRead(fh,32768);   /* #12721[335.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12722[335.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12723[335.2] */
BulkRead(fh,32768);   /* #12724[335.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12725[335.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12726[335.3] */
BulkRead(fh,32768);   /* #12727[335.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12728[335.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12729[335.3] */
BulkRead(fh,32768);   /* #12730[335.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12731[335.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12732[335.4] */
BulkRead(fh,32768);   /* #12733[335.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12734[335.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12735[335.4] */
BulkRead(fh,32768);   /* #12736[335.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12737[335.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12738[335.5] */
BulkRead(fh,32768);   /* #12739[335.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12740[335.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12741[335.6] */
BulkRead(fh,32768);   /* #12742[335.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12743[335.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12744[335.6] */
BulkRead(fh,32768);   /* #12745[335.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12746[335.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12747[335.7] */
BulkRead(fh,32768);   /* #12748[335.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12749[335.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12750[335.7] */
BulkRead(fh,32768);   /* #12751[335.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12752[335.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12753[335.8] */
BulkRead(fh,32768);   /* #12754[335.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12755[335.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12756[335.8] */
BulkRead(fh,32768);   /* #12757[335.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12758[335.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12759[335.9] */
BulkRead(fh,32768);   /* #12760[335.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12761[335.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12762[335.9] */
BulkRead(fh,32768);   /* #12763[336.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12764[336.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12765[336.0] */
BulkRead(fh,32768);   /* #12766[336.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12767[336.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12768[336.0] */
BulkRead(fh,32768);   /* #12769[336.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12770[336.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12771[336.1] */
BulkRead(fh,32768);   /* #12772[336.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12773[336.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #12774[336.2] */
BulkRead(fh,32768);   /* #12775[336.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12776[336.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFCBC*/    /* #12777[336.2] */
BulkRead(fh,32768);   /* #12778[336.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12779[336.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xBCBC*/    /* #12780[336.3] */
BulkRead(fh,32768);   /* #12781[336.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12782[336.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xC402*/    /* #12783[336.3] */
BulkRead(fh,32768);   /* #12784[336.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12785[336.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF008*/    /* #12786[336.4] */
BulkRead(fh,32768);   /* #12787[336.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #12788[336.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB008*/    /* #12789[336.4] */
BulkRead(fh,32768);   /* #12790[336.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #12791[336.5] */
BulkRead(fh,32768);   /* #12792[336.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #12793[336.5] */
BulkRead(fh,24592);   /* #12794[336.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #12795[336.5] */
RegWrite(0x43, 1, 0x03);    /* #12796[336.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #12797[336.6] */
{
 unsigned char uchRegs12798[]={
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
  RegWriteArray(R_ALL, 74, uchRegs12798);
}    /* #12798[336.6] */
RegWrite(R_CTL, 1, 0x39);    /* #12799[336.6] */
RegWrite(R_CTL, 1, 0x79);    /* #12800[336.6] */
RegWrite(R_CTL, 1, 0xF9);    /* #12801[336.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12802[336.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12803[336.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #12804[336.6] */
RegWrite(R_CTL, 1, 0x39);    /* #12805[336.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #12806[336.6] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12807[336.7] */
RegWrite(0x34, 1, 0x63);    /* #12808[336.7] */
RegWrite(0x49, 1, 0x9E);    /* #12809[336.7] */
{
 unsigned char uchRegs12810[]={
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
  RegWriteArray(R_ALL, 74, uchRegs12810);
}    /* #12810[336.7] */
RegWrite(R_CTL, 1, 0x19);    /* #12811[336.7] */
RegWrite(R_CTL, 1, 0x59);    /* #12812[336.7] */
RegWrite(R_CTL, 1, 0xD9);    /* #12813[336.7] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12814[336.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12815[336.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12816[336.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12817[336.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12818[336.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12819[337.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12820[337.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12821[337.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12822[337.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #12823[337.5] */
RegWrite(R_LMP, 1, 0x01);    /* #12824[337.5] */
RegWrite(R_LMP, 1, 0x01);    /* #12825[337.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #12826[337.6] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12827[337.6] */
RegWrite(0x34, 1, 0x63);    /* #12828[337.6] */
RegWrite(0x49, 1, 0x9E);    /* #12829[337.6] */
{
 unsigned char uchRegs12830[]={
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
  RegWriteArray(R_ALL, 74, uchRegs12830);
}    /* #12830[337.6] */
RegWrite(R_CTL, 1, 0x19);    /* #12831[337.6] */
RegWrite(R_CTL, 1, 0x59);    /* #12832[337.6] */
RegWrite(R_CTL, 1, 0xD9);    /* #12833[337.6] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12834[337.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12835[337.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12836[337.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12837[337.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12838[337.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12839[337.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12840[338.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12841[338.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12842[338.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12843[338.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12844[338.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12845[338.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #12846[338.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #12847[338.3] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12848[338.4] */
RegWrite(R_LMP, 1, 0x01);    /* #12849[338.4] */
RegWrite(R_LMP, 1, 0x01);    /* #12850[338.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #12851[338.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #12852[338.4] */
RegWrite(R_CTL, 1, 0x39);    /* #12853[338.4] */
RegWrite(0x34, 1, 0x63);    /* #12854[338.4] */
RegWrite(0x49, 1, 0x96);    /* #12855[338.4] */
RegWrite(0x43, 1, 0x07);    /* #12856[338.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #12857[338.4] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12858[338.4] */
RegWrite(0x34, 1, 0xC3);    /* #12859[338.4] */
RegWrite(0x49, 1, 0x9E);    /* #12860[338.4] */
{
 unsigned char uchRegs12861[]={
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
  RegWriteArray(R_ALL, 74, uchRegs12861);
}    /* #12861[338.4] */
RegWrite(0x43, 1, 0x03);    /* #12862[338.4] */
RegWrite(R_STPS, 2, 0x0000);    /* #12863[338.4] */
RegWrite(0x0A, 2, 0x0638);    /* #12864[338.5] */
RegWrite(0x47, 2, 0xA000);    /* #12865[338.5] */
RegWrite(0x34, 1, 0xC3);    /* #12866[338.5] */
RegWrite(0x49, 1, 0x9E);    /* #12867[338.5] */
RegWrite(R_CTL, 1, 0x39);    /* #12868[338.5] */
RegWrite(R_CTL, 1, 0x79);    /* #12869[338.5] */
RegWrite(R_CTL, 1, 0xF9);    /* #12870[338.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0637*/    /* #12871[338.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0635*/    /* #12872[338.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0633*/    /* #12873[338.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0632*/    /* #12874[338.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x062F*/    /* #12875[338.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x062D*/    /* #12876[338.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x062B*/    /* #12877[338.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x062A*/    /* #12878[338.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0627*/    /* #12879[338.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0625*/    /* #12880[338.5] */
RegWrite(0x47, 2, 0xA000);    /* #12881[338.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0621*/    /* #12882[338.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x061F*/    /* #12883[338.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x061C*/    /* #12884[338.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x061B*/    /* #12885[338.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0619*/    /* #12886[338.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0617*/    /* #12887[338.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0614*/    /* #12888[338.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0613*/    /* #12889[338.6] */
RegWrite(0x47, 2, 0x9800);    /* #12890[338.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x060F*/    /* #12891[338.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x060D*/    /* #12892[338.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x060B*/    /* #12893[338.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0608*/    /* #12894[338.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0606*/    /* #12895[338.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0604*/    /* #12896[338.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0602*/    /* #12897[338.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0600*/    /* #12898[338.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x05F6*/    /* #12899[338.6] */
RegWrite(0x47, 2, 0x9000);    /* #12900[338.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x05EC*/    /* #12901[338.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x05EA*/    /* #12902[338.6] */
RegWrite(0x47, 2, 0x8800);    /* #12903[338.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x05DF*/    /* #12904[338.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x05D6*/    /* #12905[338.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x05D4*/    /* #12906[338.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x05CB*/    /* #12907[338.7] */
RegWrite(0x47, 2, 0x8000);    /* #12908[338.7] */
RegWrite(0x43, 1, 0x07);    /* #12909[338.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x0599*/    /* #12910[338.8] */
RegWrite(0x47, 2, 0x7800);    /* #12911[338.8] */
RegWrite(0x43, 1, 0x07);    /* #12912[338.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x058A*/    /* #12913[338.8] */
RegWrite(0x47, 2, 0x7000);    /* #12914[338.8] */
RegWrite(0x43, 1, 0x07);    /* #12915[338.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x057C*/    /* #12916[338.8] */
RegWrite(0x47, 2, 0x6800);    /* #12917[338.8] */
RegWrite(0x43, 1, 0x07);    /* #12918[338.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0563*/    /* #12919[338.8] */
RegWrite(0x47, 2, 0x6000);    /* #12920[338.8] */
RegWrite(0x43, 1, 0x07);    /* #12921[338.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0553*/    /* #12922[338.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x054F*/    /* #12923[338.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0544*/    /* #12924[338.9] */
RegWrite(0x47, 2, 0x5800);    /* #12925[338.9] */
RegWrite(0x43, 1, 0x07);    /* #12926[338.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0521*/    /* #12927[338.9] */
RegWrite(0x47, 2, 0x5000);    /* #12928[338.9] */
RegWrite(0x43, 1, 0x07);    /* #12929[338.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0513*/    /* #12930[338.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x050F*/    /* #12931[338.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x050C*/    /* #12932[338.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0507*/    /* #12933[338.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0503*/    /* #12934[338.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0500*/    /* #12935[339.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x04FC*/    /* #12936[339.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x04F7*/    /* #12937[339.0] */
RegWrite(0x47, 2, 0x40C0);    /* #12938[339.0] */
RegWrite(R_LEN, 2, 0x24EA);    /* #12939[339.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12940[339.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12941[339.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12942[339.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12943[339.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12944[339.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12945[339.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12946[339.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12947[339.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12948[339.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12949[339.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12950[339.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12951[339.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12952[339.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12953[339.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12954[339.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12955[339.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12956[339.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12957[340.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #12958[340.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #12959[340.0] */
RegWrite(0x43, 1, 0x03);    /* #12960[340.0] */
RegWrite(R_CTL, 1, 0x39);    /* #12961[340.1] */
RegWrite(0x34, 1, 0x03);    /* #12962[340.1] */
RegWrite(0x49, 1, 0x96);    /* #12963[340.1] */
{
 unsigned char uchRegs12964[]={
   0xAB /*!!0x01!!*/, 0x05 /*!!0x02!!*/, 0x2A /*!!0x03!!*/,
   0x60 /*!!0x04!!*/, 0x49 /*!!0x05!!*/, 0x10 /*!!R_STPS!!*/,
   0x00 /*!!R_STPSH!!*/, 0x6A /*!!0x08!!*/, 0x6A /*!!0x09!!*/,
   0x1E /*!!0x0A!!*/, 0x0E /*!!0x0B!!*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x60 /*!!0x12!!*/,
   0x15 /*0x13*/, 0xA0 /*!!0x14!!*/, 0x2A /*0x15*/,
   0xE0 /*!!0x16!!*/, 0x3F /*!!0x17!!*/, 0x20 /*!!0x18!!*/,
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
   0x39 /*R_CTL*/, 0x20 /*!!0x47!!*/, 0x56 /*!!0x48!!*/,
   0x96 /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs12964);
}    /* #12964[340.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #12965[340.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #12966[340.2] */
RegWrite(R_CTL, 1, 0x39);    /* #12967[340.2] */
RegWrite(R_CTL, 1, 0x79);    /* #12968[340.2] */
RegWrite(R_CTL, 1, 0xF9);    /* #12969[340.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12970[340.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #12971[340.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12972[340.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #12973[340.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12974[340.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #12975[340.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12976[340.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x12C0*/    /* #12977[340.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12978[340.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A30*/    /* #12979[340.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12980[340.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F48*/    /* #12981[340.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12982[340.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5460*/    /* #12983[340.9] */
BulkRead(fh,32768);   /* #12984[340.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12985[341.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2270*/    /* #12986[341.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12987[341.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3788*/    /* #12988[341.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12989[341.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4CA0*/    /* #12990[341.2] */
BulkRead(fh,32768);   /* #12991[341.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12992[341.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1AB0*/    /* #12993[341.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12994[341.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2FC8*/    /* #12995[341.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12996[341.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x44E0*/    /* #12997[341.5] */
BulkRead(fh,32768);   /* #12998[341.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #12999[341.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19F8*/    /* #13000[341.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13001[341.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F10*/    /* #13002[341.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13003[341.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4428*/    /* #13004[341.7] */
BulkRead(fh,32768);   /* #13005[341.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13006[341.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1238*/    /* #13007[341.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13008[341.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2750*/    /* #13009[342.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13010[342.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C68*/    /* #13011[342.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13012[342.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4FFE*/    /* #13013[342.2] */
BulkRead(fh,32768);   /* #13014[342.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13015[342.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F90*/    /* #13016[342.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13017[342.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x34A8*/    /* #13018[342.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13019[342.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4956*/    /* #13020[342.4] */
BulkRead(fh,32768);   /* #13021[342.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13022[342.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1895*/    /* #13023[342.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13024[342.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x303E*/    /* #13025[342.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13026[342.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x462F*/    /* #13027[342.7] */
BulkRead(fh,32768);   /* #13028[342.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13029[342.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1718*/    /* #13030[342.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13031[342.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2C30*/    /* #13032[343.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13033[343.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4148*/    /* #13034[343.0] */
BulkRead(fh,32768);   /* #13035[343.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13036[343.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x103E*/    /* #13037[343.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13038[343.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2470*/    /* #13039[343.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13040[343.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3988*/    /* #13041[343.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13042[343.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4EA0*/    /* #13043[343.4] */
BulkRead(fh,32768);   /* #13044[343.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13045[343.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x213F*/    /* #13046[343.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13047[343.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x31C8*/    /* #13048[343.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13049[343.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x47E6*/    /* #13050[343.7] */
BulkRead(fh,32768);   /* #13051[343.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13052[343.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1BF8*/    /* #13053[343.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13054[343.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A08*/    /* #13055[343.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13056[344.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F20*/    /* #13057[344.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13058[344.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5B40*/    /* #13059[344.1] */
BulkRead(fh,32768);   /* #13060[344.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13061[344.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2DAD*/    /* #13062[344.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13063[344.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E68*/    /* #13064[344.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13065[344.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x6190*/    /* #13066[344.5] */
BulkRead(fh,32768);   /* #13067[344.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13068[344.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x36A8*/    /* #13069[344.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13070[344.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4BC0*/    /* #13071[344.7] */
BulkRead(fh,32768);   /* #13072[344.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13073[344.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20D8*/    /* #13074[344.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13075[344.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x35F0*/    /* #13076[344.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13077[345.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4B08*/    /* #13078[345.0] */
BulkRead(fh,32768);   /* #13079[345.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13080[345.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1918*/    /* #13081[345.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13082[345.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x32E0*/    /* #13083[345.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13084[345.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4348*/    /* #13085[345.3] */
BulkRead(fh,32768);   /* #13086[345.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13087[345.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1860*/    /* #13088[345.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13089[345.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2670*/    /* #13090[345.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13091[345.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40B0*/    /* #13092[345.6] */
BulkRead(fh,32768);   /* #13093[345.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13094[345.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x12F8*/    /* #13095[345.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13096[345.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2CC0*/    /* #13097[345.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13098[345.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F80*/    /* #13099[346.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13100[346.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x6500*/    /* #13101[346.1] */
BulkRead(fh,32768);   /* #13102[346.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13103[346.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3310*/    /* #13104[346.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13105[346.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4CD8*/    /* #13106[346.3] */
BulkRead(fh,32768);   /* #13107[346.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13108[346.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D40*/    /* #13109[346.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13110[346.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3708*/    /* #13111[346.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13112[346.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4E78*/    /* #13113[346.6] */
BulkRead(fh,32768);   /* #13114[346.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13115[346.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C88*/    /* #13116[346.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13117[346.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A98*/    /* #13118[346.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13119[346.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x38A8*/    /* #13120[346.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13121[346.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4DE1*/    /* #13122[346.9] */
BulkRead(fh,32768);   /* #13123[347.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13124[347.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2209*/    /* #13125[347.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13126[347.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4600*/    /* #13127[347.2] */
BulkRead(fh,32768);   /* #13128[347.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13129[347.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x18BD*/    /* #13130[347.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13131[347.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3030*/    /* #13132[347.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13133[347.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4248*/    /* #13134[347.5] */
BulkRead(fh,32768);   /* #13135[347.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13136[347.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1358*/    /* #13137[347.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13138[347.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x23C0*/    /* #13139[347.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13140[347.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3680*/    /* #13141[347.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13142[347.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4B98*/    /* #13143[347.9] */
BulkRead(fh,32768);   /* #13144[347.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13145[347.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20B0*/    /* #13146[348.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13147[348.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x35C8*/    /* #13148[348.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13149[348.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x51E8*/    /* #13150[348.2] */
BulkRead(fh,32768);   /* #13151[348.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13152[348.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x261F*/    /* #13153[348.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13154[348.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x368A*/    /* #13155[348.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13156[348.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4A28*/    /* #13157[348.5] */
BulkRead(fh,32768);   /* #13158[348.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13159[348.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F40*/    /* #13160[348.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13161[348.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3458*/    /* #13162[348.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13163[348.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4970*/    /* #13164[348.8] */
BulkRead(fh,32768);   /* #13165[348.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13166[348.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E88*/    /* #13167[349.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13168[349.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x33A0*/    /* #13169[349.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13170[349.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5920*/    /* #13171[349.2] */
BulkRead(fh,32768);   /* #13172[349.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13173[349.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BE0*/    /* #13174[349.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13175[349.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x39F0*/    /* #13176[349.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13177[349.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4F08*/    /* #13178[349.5] */
BulkRead(fh,32768);   /* #13179[349.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13180[349.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D18*/    /* #13181[349.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13182[349.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3488*/    /* #13183[349.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13184[349.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4E50*/    /* #13185[349.8] */
BulkRead(fh,32768);   /* #13186[349.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13187[349.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C60*/    /* #13188[349.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13189[349.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2CC8*/    /* #13190[350.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13191[350.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F88*/    /* #13192[350.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13193[350.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x56F8*/    /* #13194[350.2] */
BulkRead(fh,32768);   /* #13195[350.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13196[350.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x29B8*/    /* #13197[350.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13198[350.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3ED0*/    /* #13199[350.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13200[350.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x53E8*/    /* #13201[350.5] */
BulkRead(fh,32768);   /* #13202[350.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13203[350.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x21F8*/    /* #13204[350.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13205[350.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3968*/    /* #13206[350.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13207[350.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5A38*/    /* #13208[350.8] */
BulkRead(fh,32768);   /* #13209[350.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13210[350.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BA9*/    /* #13211[351.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13212[351.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5278*/    /* #13213[351.1] */
BulkRead(fh,32768);   /* #13214[351.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13215[351.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2790*/    /* #13216[351.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13217[351.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x37F8*/    /* #13218[351.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13219[351.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4D10*/    /* #13220[351.4] */
BulkRead(fh,32768);   /* #13221[351.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13222[351.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1FD0*/    /* #13223[351.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13224[351.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3290*/    /* #13225[351.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13226[351.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x42F8*/    /* #13227[351.7] */
BulkRead(fh,32768);   /* #13228[351.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13229[351.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1108*/    /* #13230[351.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13231[351.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x21A3*/    /* #13232[351.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13233[351.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3430*/    /* #13234[352.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13235[352.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4948*/    /* #13236[352.0] */
BulkRead(fh,32768);   /* #13237[352.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13238[352.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E60*/    /* #13239[352.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13240[352.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30EC*/    /* #13241[352.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13242[352.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4638*/    /* #13243[352.3] */
BulkRead(fh,32768);   /* #13244[352.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13245[352.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1448*/    /* #13246[352.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13247[352.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x24B0*/    /* #13248[352.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13249[352.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3DDE*/    /* #13250[352.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13251[352.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5710*/    /* #13252[352.7] */
BulkRead(fh,32768);   /* #13253[352.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13254[352.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B00*/    /* #13255[353.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13256[353.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4E28*/    /* #13257[353.0] */
BulkRead(fh,32768);   /* #13258[353.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13259[353.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20E8*/    /* #13260[353.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13261[353.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3858*/    /* #13262[353.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13263[353.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5B80*/    /* #13264[353.4] */
BulkRead(fh,32768);   /* #13265[353.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13266[353.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BE8*/    /* #13267[353.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13268[353.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3EA8*/    /* #13269[353.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13270[353.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x53C0*/    /* #13271[353.7] */
BulkRead(fh,32768);   /* #13272[353.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13273[353.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x21D0*/    /* #13274[353.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13275[353.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x34CB*/    /* #13276[353.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13277[353.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4C00*/    /* #13278[353.9] */
BulkRead(fh,32768);   /* #13279[354.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13280[354.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2118*/    /* #13281[354.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13282[354.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3630*/    /* #13283[354.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13284[354.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4B48*/    /* #13285[354.3] */
BulkRead(fh,32768);   /* #13286[354.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13287[354.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1958*/    /* #13288[354.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13289[354.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E70*/    /* #13290[354.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13291[354.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4388*/    /* #13292[354.5] */
BulkRead(fh,32768);   /* #13293[354.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13294[354.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1648*/    /* #13295[354.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13296[354.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B60*/    /* #13297[354.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13298[354.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BC8*/    /* #13299[354.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13300[354.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x50E0*/    /* #13301[354.9] */
BulkRead(fh,32768);   /* #13302[355.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13303[355.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3408*/    /* #13304[355.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13305[355.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x48AF*/    /* #13306[355.2] */
BulkRead(fh,32768);   /* #13307[355.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13308[355.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1730*/    /* #13309[355.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13310[355.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3A58*/    /* #13311[355.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13312[355.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4F70*/    /* #13313[355.5] */
BulkRead(fh,32768);   /* #13314[355.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13315[355.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x308A*/    /* #13316[355.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13317[355.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40A8*/    /* #13318[355.8] */
BulkRead(fh,32768);   /* #13319[355.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13320[355.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x15C0*/    /* #13321[356.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13322[356.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2AD8*/    /* #13323[356.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13324[356.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x38E8*/    /* #13325[356.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13326[356.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4E00*/    /* #13327[356.2] */
BulkRead(fh,32768);   /* #13328[356.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13329[356.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C10*/    /* #13330[356.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13331[356.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3128*/    /* #13332[356.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13333[356.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4CC5*/    /* #13334[356.5] */
BulkRead(fh,32768);   /* #13335[356.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13336[356.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C04*/    /* #13337[356.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13338[356.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30C9*/    /* #13339[356.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13340[356.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4C90*/    /* #13341[356.8] */
BulkRead(fh,32768);   /* #13342[356.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13343[356.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1AA0*/    /* #13344[357.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13345[357.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2FB8*/    /* #13346[357.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13347[357.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x44D0*/    /* #13348[357.1] */
BulkRead(fh,32768);   /* #13349[357.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13350[357.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x12E0*/    /* #13351[357.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13352[357.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x383F*/    /* #13353[357.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13354[357.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4B20*/    /* #13355[357.5] */
BulkRead(fh,32768);   /* #13356[357.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13357[357.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2038*/    /* #13358[357.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13359[357.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3550*/    /* #13360[357.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13361[357.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4A68*/    /* #13362[357.8] */
BulkRead(fh,32768);   /* #13363[357.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13364[357.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D90*/    /* #13365[358.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13366[358.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x42A8*/    /* #13367[358.1] */
BulkRead(fh,32768);   /* #13368[358.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13369[358.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x17C0*/    /* #13370[358.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13371[358.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E38*/    /* #13372[358.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13373[358.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13380[358.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4138*/    /* #13381[358.7] */
BulkRead(fh,32768);   /* #13382[358.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13385[358.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x28C4*/    /* #13386[358.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13389[359.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x54F3*/    /* #13390[359.1] */
BulkRead(fh,32768);   /* #13391[359.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13394[359.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x38C0*/    /* #13395[359.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13406[359.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3048*/    /* #13407[359.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13420[360.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2ED8*/    /* #13421[360.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13422[360.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x43F0*/    /* #13423[360.6] */
BulkRead(fh,32768);   /* #13424[360.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13429[360.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x47E8*/    /* #13430[360.9] */
BulkRead(fh,32768);   /* #13431[361.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13443[361.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x41C8*/    /* #13444[361.6] */
BulkRead(fh,32768);   /* #13445[362.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D30*/    /* #13454[362.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13455[362.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13457[362.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4058*/    /* #13458[362.2] */
BulkRead(fh,32768);   /* #13459[362.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13464[362.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x46A8*/    /* #13465[362.5] */
BulkRead(fh,32768);   /* #13466[362.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1BC0*/    /* #13468[362.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13469[362.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13480[363.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4C40*/    /* #13481[363.2] */
BulkRead(fh,32768);   /* #13482[363.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13485[363.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3670*/    /* #13486[363.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E48*/    /* #13491[363.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13492[363.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x35B8*/    /* #13493[363.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13494[363.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13501[364.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5120*/    /* #13502[364.2] */
BulkRead(fh,32768);   /* #13503[364.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13506[364.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3448*/    /* #13507[364.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13508[364.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4459*/    /* #13509[364.4] */
BulkRead(fh,32768);   /* #13510[364.9] */
BulkRead(fh,32768);   /* #13519[364.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13520[365.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13534[365.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C50*/    /* #13535[366.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13545[366.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3EC0*/    /* #13546[366.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13561[366.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5612*/    /* #13562[366.8] */
BulkRead(fh,32768);   /* #13563[367.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13576[367.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1350*/    /* #13577[367.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13587[367.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4178*/    /* #13588[368.0] */
BulkRead(fh,32768);   /* #13589[368.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13601[368.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4EEE*/    /* #13602[368.7] */
BulkRead(fh,32768);   /* #13603[369.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13618[369.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x21C0*/    /* #13619[369.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13627[369.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F18*/    /* #13628[369.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C70*/    /* #13637[370.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13638[370.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x53B5*/    /* #13646[370.6] */
BulkRead(fh,32768);   /* #13647[370.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13660[371.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B80*/    /* #13661[371.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x38D8*/    /* #13670[371.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13671[371.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13683[372.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2958*/    /* #13684[372.4] */
BulkRead(fh,32768);   /* #13694[372.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13695[373.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4350*/    /* #13707[373.4] */
BulkRead(fh,32768);   /* #13708[373.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x48E8*/    /* #13721[374.0] */
BulkRead(fh,32768);   /* #13722[374.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13729[374.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4F38*/    /* #13730[374.4] */
BulkRead(fh,32768);   /* #13731[374.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13741[374.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x31A8*/    /* #13742[375.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13753[375.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2112*/    /* #13754[376.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x52A8*/    /* #13765[376.0] */
BulkRead(fh,32768);   /* #13766[376.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13774[376.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A01*/    /* #13775[376.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13783[376.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3460*/    /* #13784[376.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13797[377.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x39F8*/    /* #13798[377.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13806[378.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5C68*/    /* #13807[378.0] */
BulkRead(fh,32768);   /* #13808[378.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13820[378.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4CE8*/    /* #13821[378.5] */
BulkRead(fh,32768);   /* #13822[379.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13832[379.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F58*/    /* #13833[379.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13841[379.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3CB0*/    /* #13842[379.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13853[379.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D30*/    /* #13854[380.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13865[380.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x16A8*/    /* #13866[381.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13878[381.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4E30*/    /* #13879[381.1] */
BulkRead(fh,32768);   /* #13880[381.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1DE0*/    /* #13889[381.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13890[381.6] */
ulVal1 = RegRead(R_STAT, 1); /*=0x00*/    /* #13900[382.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A18*/    /* #13901[382.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13902[382.2] */
ulVal1 = RegRead(0xFFFFFFFF, 1); /*=0x00*/    /* #13911[382.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C88*/    /* #13912[382.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13913[382.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13923[383.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D08*/    /* #13924[383.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13927[383.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5030*/    /* #13928[383.3] */
BulkRead(fh,32768);   /* #13929[383.6] */
BulkRead(fh,32768);   /* #13934[383.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13935[383.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13937[383.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x39A8*/    /* #13938[384.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13944[384.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x38F0*/    /* #13945[384.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4958*/    /* #13947[384.3] */
BulkRead(fh,32768);   /* #13948[384.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13958[384.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2268*/    /* #13959[384.7] */
BulkRead(fh,32768);   /* #13971[385.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13972[385.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13981[385.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3558*/    /* #13982[385.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13990[386.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x50C0*/    /* #13991[386.2] */
BulkRead(fh,32768);   /* #13992[386.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #13995[386.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x41F8*/    /* #13996[386.5] */
BulkRead(fh,32768);   /* #13997[386.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14004[386.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4F50*/    /* #14005[386.8] */
BulkRead(fh,32768);   /* #14006[387.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14020[387.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x54E8*/    /* #14021[387.5] */
BulkRead(fh,32768);   /* #14022[387.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14027[387.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4D28*/    /* #14028[387.8] */
BulkRead(fh,32768);   /* #14029[388.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14041[388.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x52C0*/    /* #14042[388.5] */
BulkRead(fh,32768);   /* #14043[388.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14051[388.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x32FD*/    /* #14052[389.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14065[389.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x33C0*/    /* #14066[389.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2440*/    /* #14078[390.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14079[390.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14089[390.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E18*/    /* #14090[391.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3028*/    /* #14099[391.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14100[391.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14109[391.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5298*/    /* #14110[391.7] */
BulkRead(fh,32768);   /* #14111[392.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14123[392.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x55D8*/    /* #14124[392.3] */
BulkRead(fh,32768);   /* #14125[392.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14135[392.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4692*/    /* #14136[392.9] */
BulkRead(fh,32768);   /* #14137[393.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14147[393.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2670*/    /* #14148[393.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F80*/    /* #14157[393.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14158[393.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14172[394.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x6138*/    /* #14173[394.6] */
BulkRead(fh,32768);   /* #14174[395.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14182[395.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x37F0*/    /* #14183[395.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1808*/    /* #14195[395.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14196[395.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14205[396.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4180*/    /* #14206[396.0] */
BulkRead(fh,32768);   /* #14207[396.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14219[396.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4010*/    /* #14220[396.7] */
BulkRead(fh,32768);   /* #14221[397.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x6280*/    /* #14229[397.2] */
BulkRead(fh,32768);   /* #14230[397.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14243[397.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2611*/    /* #14244[398.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14250[398.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2058*/    /* #14251[398.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14259[398.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2DB0*/    /* #14260[398.6] */
BulkRead(fh,32768);   /* #14272[399.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14273[399.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2AD0*/    /* #14288[399.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14289[399.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14296[400.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3A80*/    /* #14297[400.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14308[400.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x21A0*/    /* #14309[400.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14319[401.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5928*/    /* #14320[401.3] */
BulkRead(fh,32768);   /* #14321[401.8] */
BulkRead(fh,32768);   /* #14333[401.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14334[402.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14341[402.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13C0*/    /* #14342[402.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3970*/    /* #14353[402.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14354[402.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14364[403.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2123*/    /* #14365[403.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #14378[404.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2178*/    /* #14379[404.0] */
BulkRead(fh,17136);   /* #14380[404.3] */
RegWrite(0x34, 1, 0xC3);    /* #14397[404.3] */
RegWrite(0x49, 1, 0x9E);    /* #14398[404.4] */
{
 unsigned char uchRegs14399[]={
   0x00 /*!!0x01!!*/, 0x00 /*!!0x02!!*/, 0x3F /*!!0x03!!*/,
   0x40 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0x66 /*!!R_STPS!!*/,
   0x14 /*!!R_STPSH!!*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!0x0A!!*/, 0x00 /*!!0x0B!!*/, 0x6D /*0x0C*/,
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
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x07 /*!!0x43!!*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*!!0x47!!*/, 0x40 /*!!0x48!!*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs14399);
}    /* #14399[404.8] */
RegWrite(0x43, 1, 0x07);    /* #14421[404.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x13C9*/    /* #14422[404.9] */
RegWrite(0x47, 2, 0x7800);    /* #14423[404.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x1313*/    /* #14434[405.1] */
RegWrite(0x47, 2, 0x5800);    /* #14435[405.1] */
RegWrite(0x43, 1, 0x07);    /* #14436[405.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14444[405.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14445[405.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14446[405.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14447[406.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14448[406.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14449[406.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14450[406.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14451[406.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14452[406.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14453[406.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14454[406.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14455[407.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14456[407.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14457[407.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14458[407.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14459[407.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14460[407.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14461[407.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14462[407.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14463[407.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14464[407.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14465[408.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14466[408.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14467[408.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14468[408.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14469[408.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14470[408.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14471[408.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14472[408.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14473[408.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14474[409.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14475[409.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14476[409.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #14477[409.2] */
RegWrite(0x43, 1, 0x03);    /* #14478[409.2] */
RegWrite(R_CTL, 1, 0x39);    /* #14479[409.2] */
