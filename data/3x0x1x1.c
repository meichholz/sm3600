ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #3757[511.9] */
RegWrite(0x43, 1, 0x03);    /* #3758[511.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3759[511.9] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #3760[511.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3761[511.9] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #3762[511.9] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #3763[511.9] */
{
 unsigned char uchRegs3764[]={
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
  RegWriteArray(R_ALL, 74, uchRegs3764);
}    /* #3764[511.9] */
RegWrite(0x43, 1, 0x03);    /* #3765[511.9] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #3766[511.9] */
RegWrite(R_CCAL, 3, 0x848888);    /* #3767[511.9] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #3768[512.0] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #3769[512.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3770[512.0] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #3771[512.0] */
RegWrite(0x34, 1, 0x63);    /* #3772[512.0] */
RegWrite(0x49, 1, 0x9E);    /* #3773[512.0] */
{
 unsigned char uchRegs3774[]={
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
  RegWriteArray(R_ALL, 74, uchRegs3774);
}    /* #3774[512.0] */
RegWrite(R_CTL, 1, 0x39);    /* #3775[512.0] */
RegWrite(R_CTL, 1, 0x79);    /* #3776[512.0] */
RegWrite(R_CTL, 1, 0xF9);    /* #3777[512.0] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #3778[512.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3779[512.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3780[512.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3781[512.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3782[512.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3783[512.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3784[512.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3785[512.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3786[512.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3787[512.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3788[512.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3789[512.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #3790[512.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #3791[512.7] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x848888*/    /* #3792[512.7] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #3793[512.7] */
ulVal2 = RegRead(R_LEN, 2); /*=0x2D0B*/    /* #3794[512.7] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #3795[512.7] */
{
 unsigned char uchRegs3796[]={
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
  RegWriteArray(R_ALL, 74, uchRegs3796);
}    /* #3796[512.7] */
RegWrite(0x43, 1, 0x03);    /* #3797[512.7] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #3798[512.7] */
RegWrite(R_LMP, 1, 0x01);    /* #3799[512.7] */
RegWrite(R_LMP, 1, 0x01);    /* #3800[512.7] */
RegWrite(R_CTL, 1, 0x39);    /* #3801[512.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3802[512.7] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #3803[512.7] */
{
 unsigned char uchRegs3804[]={
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
  RegWriteArray(R_ALL, 74, uchRegs3804);
}    /* #3804[512.7] */
RegWrite(0x34, 1, 0x03);    /* #3805[512.8] */
RegWrite(0x49, 1, 0x96);    /* #3806[512.8] */
RegWrite(R_CTL, 1, 0x79);    /* #3807[512.8] */
RegWrite(R_CTL, 1, 0xF9);    /* #3808[512.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3809[512.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #3810[512.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #3811[512.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0780*/    /* #3812[512.8] */
BulkRead(fh,3840);   /* #3813[512.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #3814[512.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #3815[512.8] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #3816[512.9] */
RegWrite(R_LMP, 1, 0x01);    /* #3817[512.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #3818[512.9] */
RegWrite(R_LMP, 1, 0x01);    /* #3819[512.9] */
RegWrite(R_LMP, 1, 0x01);    /* #3820[512.9] */
RegWrite(R_CTL, 1, 0x39);    /* #3821[512.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3822[512.9] */
RegWrite(R_CCAL, 3, 0x848888);    /* #3823[512.9] */
{
 unsigned char uchRegs3824[]={
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
  RegWriteArray(R_ALL, 74, uchRegs3824);
}    /* #3824[512.9] */
RegWrite(0x34, 1, 0x03);    /* #3825[512.9] */
RegWrite(0x49, 1, 0x96);    /* #3826[512.9] */
RegWrite(R_CTL, 1, 0x79);    /* #3827[512.9] */
RegWrite(R_CTL, 1, 0xF9);    /* #3828[512.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3829[512.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #3830[513.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #3831[513.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0048*/    /* #3832[513.0] */
BulkRead(fh,144);   /* #3833[513.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #3834[513.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #3835[513.0] */
RegWrite(R_CCAL, 3, 0x848888);    /* #3836[513.0] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #3837[513.0] */
RegWrite(R_LMP, 1, 0x01);    /* #3838[513.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #3839[513.1] */
ulVal2 = RegRead(R_LEN, 2); /*=0x2D0B*/    /* #3840[513.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #3841[513.1] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #3842[513.1] */
RegWrite(0x34, 1, 0x63);    /* #3843[513.1] */
RegWrite(0x49, 1, 0x9E);    /* #3844[513.1] */
{
 unsigned char uchRegs3845[]={
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
  RegWriteArray(R_ALL, 74, uchRegs3845);
}    /* #3845[513.1] */
RegWrite(R_CTL, 1, 0x19);    /* #3846[513.1] */
RegWrite(R_CTL, 1, 0x59);    /* #3847[513.1] */
RegWrite(R_CTL, 1, 0xD9);    /* #3848[513.1] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #3849[513.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3850[513.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #3851[513.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #3852[513.2] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #3853[513.2] */
{
 unsigned char uchRegs3854[]={
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
  RegWriteArray(R_ALL, 74, uchRegs3854);
}    /* #3854[513.2] */
RegWrite(0x43, 1, 0x03);    /* #3855[513.2] */
RegWrite(R_CCAL, 3, 0x848888);    /* #3856[513.2] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #3857[513.2] */
RegWrite(R_LMP, 1, 0x01);    /* #3858[513.3] */
RegWrite(R_LMP, 1, 0x01);    /* #3859[513.3] */
RegWrite(R_CTL, 1, 0x39);    /* #3860[513.3] */
RegWrite(0x34, 1, 0x63);    /* #3861[513.3] */
RegWrite(0x49, 1, 0x96);    /* #3862[513.3] */
{
 unsigned char uchRegs3863[]={
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
  RegWriteArray(R_ALL, 74, uchRegs3863);
}    /* #3863[513.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3864[513.3] */
RegWrite(R_CTL, 1, 0x39);    /* #3865[513.3] */
RegWrite(R_CTL, 1, 0x79);    /* #3866[513.3] */
RegWrite(R_CTL, 1, 0xF9);    /* #3867[513.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3868[513.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x04A5*/    /* #3869[513.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3870[513.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x95B1*/    /* #3871[513.4] */
BulkRead(fh,32768);   /* #3872[513.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3873[513.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xAF10*/    /* #3874[513.4] */
BulkRead(fh,32768);   /* #3875[513.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3876[513.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xE698*/    /* #3877[513.4] */
BulkRead(fh,32768);   /* #3878[513.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3879[513.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFB01*/    /* #3880[513.5] */
BulkRead(fh,32768);   /* #3881[513.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3882[513.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3883[513.6] */
BulkRead(fh,32768);   /* #3884[513.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3885[513.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3886[513.6] */
BulkRead(fh,32768);   /* #3887[513.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3888[513.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3889[513.7] */
BulkRead(fh,32768);   /* #3890[513.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3891[513.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3892[513.7] */
BulkRead(fh,32768);   /* #3893[513.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3894[513.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3895[513.8] */
BulkRead(fh,32768);   /* #3896[513.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3897[513.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3898[513.8] */
BulkRead(fh,32768);   /* #3899[513.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3900[513.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3901[513.9] */
BulkRead(fh,32768);   /* #3902[513.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3903[513.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3904[513.9] */
BulkRead(fh,32768);   /* #3905[514.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3906[514.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3907[514.0] */
BulkRead(fh,32768);   /* #3908[514.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3909[514.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3910[514.0] */
BulkRead(fh,32768);   /* #3911[514.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3912[514.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3913[514.1] */
BulkRead(fh,32768);   /* #3914[514.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3915[514.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3916[514.1] */
BulkRead(fh,32768);   /* #3917[514.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3918[514.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3919[514.2] */
BulkRead(fh,32768);   /* #3920[514.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3921[514.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3922[514.2] */
BulkRead(fh,32768);   /* #3923[514.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3924[514.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3925[514.3] */
BulkRead(fh,32768);   /* #3926[514.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3927[514.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3928[514.4] */
BulkRead(fh,32768);   /* #3929[514.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3930[514.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3931[514.4] */
BulkRead(fh,32768);   /* #3932[514.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3933[514.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3934[514.4] */
BulkRead(fh,32768);   /* #3935[514.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3936[514.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3937[514.5] */
BulkRead(fh,32768);   /* #3938[514.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3939[514.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3940[514.5] */
BulkRead(fh,32768);   /* #3941[514.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3942[514.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3943[514.6] */
BulkRead(fh,32768);   /* #3944[514.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3945[514.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3946[514.6] */
BulkRead(fh,32768);   /* #3947[514.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3948[514.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3949[514.7] */
BulkRead(fh,32768);   /* #3950[514.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3951[514.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #3952[514.8] */
BulkRead(fh,32768);   /* #3953[514.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3954[514.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF008*/    /* #3955[514.8] */
BulkRead(fh,32768);   /* #3956[514.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3957[514.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB008*/    /* #3958[514.9] */
BulkRead(fh,32768);   /* #3959[514.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3960[514.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #3961[514.9] */
BulkRead(fh,32768);   /* #3962[514.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #3963[514.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #3964[514.9] */
BulkRead(fh,24592);   /* #3965[515.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #3966[515.0] */
RegWrite(0x43, 1, 0x03);    /* #3967[515.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #3968[515.0] */
{
 unsigned char uchRegs3969[]={
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
  RegWriteArray(R_ALL, 74, uchRegs3969);
}    /* #3969[515.0] */
RegWrite(R_CTL, 1, 0x39);    /* #3970[515.0] */
RegWrite(R_CTL, 1, 0x79);    /* #3971[515.0] */
RegWrite(R_CTL, 1, 0xF9);    /* #3972[515.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3973[515.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3974[515.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3975[515.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3976[515.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #3977[515.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #3978[515.0] */
RegWrite(R_CTL, 1, 0x39);    /* #3979[515.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #3980[515.1] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #3981[515.1] */
RegWrite(0x34, 1, 0x63);    /* #3982[515.1] */
RegWrite(0x49, 1, 0x9E);    /* #3983[515.1] */
{
 unsigned char uchRegs3984[]={
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
  RegWriteArray(R_ALL, 74, uchRegs3984);
}    /* #3984[515.1] */
RegWrite(R_CTL, 1, 0x19);    /* #3985[515.1] */
RegWrite(R_CTL, 1, 0x59);    /* #3986[515.1] */
RegWrite(R_CTL, 1, 0xD9);    /* #3987[515.1] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #3988[515.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3989[515.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3990[515.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3991[515.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3992[515.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3993[515.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3994[515.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #3995[515.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #3996[515.9] */
RegWrite(R_LMP, 1, 0x01);    /* #3997[515.9] */
RegWrite(R_LMP, 1, 0x01);    /* #3998[515.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #3999[515.9] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4000[515.9] */
RegWrite(0x34, 1, 0x63);    /* #4001[516.0] */
RegWrite(0x49, 1, 0x9E);    /* #4002[516.0] */
{
 unsigned char uchRegs4003[]={
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
  RegWriteArray(R_ALL, 74, uchRegs4003);
}    /* #4003[516.0] */
RegWrite(R_CTL, 1, 0x19);    /* #4004[516.0] */
RegWrite(R_CTL, 1, 0x59);    /* #4005[516.0] */
RegWrite(R_CTL, 1, 0xD9);    /* #4006[516.0] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4007[516.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4008[516.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4009[516.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4010[516.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4011[516.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4012[516.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4013[516.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4014[516.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4015[516.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4016[516.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4017[516.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4018[516.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4019[516.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #4020[516.7] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4021[516.7] */
RegWrite(R_LMP, 1, 0x01);    /* #4022[516.7] */
RegWrite(R_LMP, 1, 0x01);    /* #4023[516.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #4024[516.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #4025[516.7] */
RegWrite(R_CTL, 1, 0x39);    /* #4026[516.7] */
RegWrite(0x34, 1, 0x63);    /* #4027[516.8] */
RegWrite(0x49, 1, 0x96);    /* #4028[516.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4029[516.8] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4030[516.8] */
RegWrite(0x34, 1, 0x63);    /* #4031[516.8] */
RegWrite(0x49, 1, 0x9E);    /* #4032[516.8] */
{
 unsigned char uchRegs4033[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x40 /*0x04*/, 0x00 /*0x05*/, 0x92 /*!!R_STPS!!*/,
   0x01 /*!!R_STPSH!!*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
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
  RegWriteArray(R_ALL, 74, uchRegs4033);
}    /* #4033[516.8] */
RegWrite(R_CTL, 1, 0x39);    /* #4034[516.8] */
RegWrite(R_CTL, 1, 0x79);    /* #4035[516.8] */
RegWrite(R_CTL, 1, 0xF9);    /* #4036[516.8] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4037[516.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4038[516.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4039[517.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4040[517.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4041[517.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4042[517.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4043[517.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4044[517.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4045[517.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4046[517.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4047[517.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4048[517.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4049[517.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4050[517.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4051[517.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4052[517.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4053[517.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4054[517.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4055[517.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4056[517.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4057[518.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #4058[518.0] */
RegWrite(0x43, 1, 0x03);    /* #4059[518.0] */
RegWrite(R_CTL, 1, 0x39);    /* #4060[518.0] */
RegWrite(0x34, 1, 0x03);    /* #4061[518.0] */
RegWrite(0x49, 1, 0x96);    /* #4062[518.0] */
{
 unsigned char uchRegs4063[]={
   0xF4 /*!!0x01!!*/, 0x07 /*!!0x02!!*/, 0x2A /*!!0x03!!*/,
   0x58 /*!!0x04!!*/, 0x42 /*!!0x05!!*/, 0x06 /*!!R_STPS!!*/,
   0x00 /*!!R_STPSH!!*/, 0x6A /*!!0x08!!*/, 0x6A /*!!0x09!!*/,
   0x66 /*!!0x0A!!*/, 0x02 /*!!0x0B!!*/, 0x6D /*0x0C*/,
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
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x2D /*R_LENH*/,
   0x03 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0x20 /*!!0x47!!*/, 0x56 /*!!0x48!!*/,
   0x96 /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs4063);
}    /* #4063[518.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4064[518.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4065[518.1] */
RegWrite(R_CTL, 1, 0x39);    /* #4066[518.1] */
RegWrite(R_CTL, 1, 0x79);    /* #4067[518.1] */
RegWrite(R_CTL, 1, 0xF9);    /* #4068[518.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4069[518.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #4070[518.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4071[518.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x01C2*/    /* #4072[518.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4073[518.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0708*/    /* #4074[518.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4075[518.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0D43*/    /* #4076[518.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4077[518.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1518*/    /* #4078[518.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4079[518.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A5E*/    /* #4080[518.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4081[518.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1FA4*/    /* #4082[518.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4083[519.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x23BE*/    /* #4084[519.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4085[519.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x286E*/    /* #4086[519.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4087[519.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BF2*/    /* #4088[519.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4089[519.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3138*/    /* #4090[519.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4091[519.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x360D*/    /* #4092[519.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4093[519.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3A02*/    /* #4094[519.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4095[519.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x410A*/    /* #4096[519.6] */
BulkRead(fh,32768);   /* #4097[519.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4098[519.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x048E*/    /* #4099[519.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4100[519.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0650*/    /* #4101[519.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4102[519.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0CC2*/    /* #4103[519.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4104[519.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x10DC*/    /* #4105[520.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4106[520.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1622*/    /* #4107[520.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4108[520.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B68*/    /* #4109[520.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4110[520.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20AE*/    /* #4111[520.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4112[520.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x25F4*/    /* #4113[520.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4114[520.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B3A*/    /* #4115[520.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4116[520.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3080*/    /* #4117[520.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4118[520.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x35C6*/    /* #4119[520.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4120[520.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x394A*/    /* #4121[520.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4122[520.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E90*/    /* #4123[520.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4124[520.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x43D6*/    /* #4125[520.9] */
BulkRead(fh,32768);   /* #4126[520.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4127[521.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x075A*/    /* #4128[521.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4129[521.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0ADE*/    /* #4130[521.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4131[521.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0E62*/    /* #4132[521.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4133[521.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x156A*/    /* #4134[521.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4135[521.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B46*/    /* #4136[521.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4137[521.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1FF6*/    /* #4138[521.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4139[521.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x253C*/    /* #4140[521.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4141[521.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A01*/    /* #4142[521.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4143[521.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E06*/    /* #4144[521.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4145[521.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x334C*/    /* #4146[521.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4147[521.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3892*/    /* #4148[522.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4149[522.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3DD8*/    /* #4150[522.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4151[522.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x431E*/    /* #4152[522.2] */
BulkRead(fh,32768);   /* #4153[522.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4154[522.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0738*/    /* #4155[522.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4156[522.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0A26*/    /* #4157[522.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4158[522.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x112E*/    /* #4159[522.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4160[522.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x17A0*/    /* #4161[522.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4162[522.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D7C*/    /* #4163[522.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4164[522.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2196*/    /* #4165[522.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4166[522.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2808*/    /* #4167[522.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4168[523.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2CB8*/    /* #4169[523.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4170[523.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30D2*/    /* #4171[523.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4172[523.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3618*/    /* #4173[523.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4174[523.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B5E*/    /* #4175[523.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4176[523.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40A4*/    /* #4177[523.4] */
BulkRead(fh,32768);   /* #4178[523.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4179[523.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0618*/    /* #4180[523.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4181[523.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x08FA*/    /* #4182[523.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4183[523.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0EB4*/    /* #4184[523.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4185[523.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13FA*/    /* #4186[523.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4187[523.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19D6*/    /* #4188[523.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4189[524.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1FB2*/    /* #4190[524.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4191[524.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x23CC*/    /* #4192[524.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4193[524.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A3E*/    /* #4194[524.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4195[524.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E58*/    /* #4196[524.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4197[524.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3434*/    /* #4198[524.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4199[524.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3AA6*/    /* #4200[524.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4201[524.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E2A*/    /* #4202[524.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4203[524.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4406*/    /* #4204[524.7] */
BulkRead(fh,32768);   /* #4205[524.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4206[524.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x08B6*/    /* #4207[524.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4208[524.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0C3A*/    /* #4209[525.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4210[525.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1180*/    /* #4211[525.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4212[525.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1716*/    /* #4213[525.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4214[525.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1DCE*/    /* #4215[525.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4216[525.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2152*/    /* #4217[525.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4218[525.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2698*/    /* #4219[525.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4220[525.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2DA0*/    /* #4221[525.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4222[525.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x32E6*/    /* #4223[525.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4224[525.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x382C*/    /* #4225[525.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4226[525.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3CDC*/    /* #4227[525.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4228[526.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x42B8*/    /* #4229[526.0] */
BulkRead(fh,32768);   /* #4230[526.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4231[526.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0768*/    /* #4232[526.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4233[526.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x09C0*/    /* #4234[526.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4235[526.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0F06*/    /* #4236[526.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4237[526.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x144C*/    /* #4238[526.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4239[526.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x18FC*/    /* #4240[526.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4241[526.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D16*/    /* #4242[526.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4243[526.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x225C*/    /* #4244[526.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4245[526.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x27A2*/    /* #4246[526.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4247[526.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2CE8*/    /* #4248[526.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4249[526.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x322E*/    /* #4250[527.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4251[527.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x380A*/    /* #4252[527.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4253[527.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E7C*/    /* #4254[527.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4255[527.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4296*/    /* #4256[527.3] */
BulkRead(fh,32768);   /* #4257[527.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4258[527.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0746*/    /* #4259[527.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4260[527.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0ACA*/    /* #4261[527.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4262[527.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1010*/    /* #4263[527.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4264[527.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1718*/    /* #4265[527.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4266[527.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D8A*/    /* #4267[527.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4268[527.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2366*/    /* #4269[528.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4270[528.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2701*/    /* #4271[528.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4272[528.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D5C*/    /* #4273[528.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4274[528.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3338*/    /* #4275[528.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4276[528.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x387E*/    /* #4277[528.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4278[528.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3D2E*/    /* #4279[528.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4280[528.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x430A*/    /* #4281[528.5] */
BulkRead(fh,32768);   /* #4282[528.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4283[528.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0724*/    /* #4284[528.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4285[528.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0BD4*/    /* #4286[528.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4287[528.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x111A*/    /* #4288[528.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4289[528.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1534*/    /* #4290[529.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4291[529.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19E4*/    /* #4292[529.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #4293[529.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1BA6*/    /* #4294[529.1] */
BulkRead(fh,14156);   /* #4295[529.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #4296[529.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #4297[529.2] */
RegWrite(0x43, 1, 0x03);    /* #4298[529.2] */
RegWrite(0x43, 1, 0x03);    /* #4299[529.2] */
RegWrite(R_CTL, 1, 0x39);    /* #4300[529.2] */
{
 unsigned char uchRegs4301[]={
   0x00 /*!!0x01!!*/, 0x00 /*!!0x02!!*/, 0x00 /*!!0x03!!*/,
   0x00 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0x00 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!0x0A!!*/, 0x00 /*!!0x0B!!*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x60 /*0x12*/,
   0x15 /*0x13*/, 0xA0 /*0x14*/, 0x2A /*0x15*/,
   0xE0 /*0x16*/, 0x3F /*0x17*/, 0x20 /*0x18*/,
   0x56 /*0x19*/, 0xFF /*0x1A*/, 0x0F /*0x1B*/,
   0x44 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
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
   0x39 /*R_CTL*/, 0x20 /*0x47*/, 0x56 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs4301);
}    /* #4301[529.2] */
RegWrite(R_CTL, 1, 0x39);    /* #4302[529.2] */
RegWrite(R_CTL, 1, 0x79);    /* #4303[529.3] */
RegWrite(R_CTL, 1, 0xF9);    /* #4304[529.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4305[529.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4306[529.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #4307[529.3] */
RegWrite(R_CTL, 1, 0x39);    /* #4308[529.3] */
RegWrite(0x43, 1, 0x07);    /* #4309[529.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4310[529.4] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4311[529.4] */
RegWrite(0x34, 1, 0xC3);    /* #4312[529.4] */
RegWrite(0x49, 1, 0x9E);    /* #4313[529.5] */
{
 unsigned char uchRegs4314[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*!!0x03!!*/,
   0x40 /*!!0x04!!*/, 0x00 /*0x05*/, 0xFE /*!!R_STPS!!*/,
   0x03 /*!!R_STPSH!!*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
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
   0x84 /*R_CCAL3*/, 0x0B /*R_LEN*/, 0x2D /*R_LENH*/,
   0xC3 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*!!0x41!!*/, 0x80 /*R_CSTAT*/,
   0x07 /*!!0x43!!*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*!!0x47!!*/, 0x40 /*!!0x48!!*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs4314);
}    /* #4314[529.5] */
RegWrite(0x43, 1, 0x03);    /* #4315[529.5] */
RegWrite(R_STPS, 2, 0x0000);    /* #4316[529.5] */
RegWrite(0x0A, 2, 0x03FE);    /* #4317[529.5] */
RegWrite(0x47, 2, 0xA000);    /* #4318[529.6] */
RegWrite(0x34, 1, 0xC3);    /* #4319[529.6] */
RegWrite(0x49, 1, 0x9E);    /* #4320[529.6] */
RegWrite(R_CTL, 1, 0x19);    /* #4321[529.6] */
RegWrite(R_CTL, 1, 0x59);    /* #4322[529.6] */
RegWrite(R_CTL, 1, 0xD9);    /* #4323[529.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x03FC*/    /* #4324[529.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x03EB*/    /* #4325[529.7] */
RegWrite(0x47, 2, 0xA000);    /* #4326[529.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x03D9*/    /* #4327[529.8] */
RegWrite(0x47, 2, 0x9800);    /* #4328[529.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x03C4*/    /* #4329[529.8] */
RegWrite(0x47, 2, 0x9000);    /* #4330[529.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x03B0*/    /* #4331[529.9] */
RegWrite(0x47, 2, 0x8800);    /* #4332[529.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0392*/    /* #4333[529.9] */
RegWrite(0x47, 2, 0x8000);    /* #4334[529.9] */
RegWrite(0x43, 1, 0x07);    /* #4335[529.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x036F*/    /* #4336[530.0] */
RegWrite(0x47, 2, 0x7800);    /* #4337[530.0] */
RegWrite(0x43, 1, 0x07);    /* #4338[530.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x033D*/    /* #4339[530.0] */
RegWrite(0x47, 2, 0x7000);    /* #4340[530.0] */
RegWrite(0x43, 1, 0x07);    /* #4341[530.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x0316*/    /* #4342[530.1] */
RegWrite(0x47, 2, 0x6800);    /* #4343[530.1] */
RegWrite(0x43, 1, 0x07);    /* #4344[530.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x02DE*/    /* #4345[530.2] */
RegWrite(0x47, 2, 0x6000);    /* #4346[530.2] */
RegWrite(0x43, 1, 0x07);    /* #4347[530.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x0287*/    /* #4348[530.3] */
RegWrite(0x47, 2, 0x5800);    /* #4349[530.3] */
RegWrite(0x43, 1, 0x07);    /* #4350[530.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x0255*/    /* #4351[530.4] */
RegWrite(0x47, 2, 0x5000);    /* #4352[530.4] */
RegWrite(0x43, 1, 0x07);    /* #4353[530.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x020E*/    /* #4354[530.4] */
RegWrite(0x47, 2, 0x40C0);    /* #4355[530.4] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #4356[530.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4357[530.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4358[530.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4359[530.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #4360[530.8] */
RegWrite(0x43, 1, 0x03);    /* #4361[530.8] */
RegWrite(R_CTL, 1, 0x39);    /* #4362[530.9] */
