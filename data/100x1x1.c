ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #14480[483.9] */
RegWrite(0x43, 1, 0x03);    /* #14481[483.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #14482[483.9] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #14483[483.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #14484[483.9] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #14485[483.9] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14486[483.9] */
{
 unsigned char uchRegs14487[]={
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
  RegWriteArray(R_ALL, 74, uchRegs14487);
}    /* #14487[484.0] */
RegWrite(0x43, 1, 0x03);    /* #14488[484.0] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #14489[484.0] */
RegWrite(R_CCAL, 3, 0x848888);    /* #14490[484.0] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14491[484.0] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14492[484.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #14493[484.0] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14494[484.0] */
RegWrite(0x34, 1, 0x63);    /* #14495[484.0] */
RegWrite(0x49, 1, 0x9E);    /* #14496[484.0] */
{
 unsigned char uchRegs14497[]={
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
  RegWriteArray(R_ALL, 74, uchRegs14497);
}    /* #14497[484.0] */
RegWrite(R_CTL, 1, 0x39);    /* #14498[484.0] */
RegWrite(R_CTL, 1, 0x79);    /* #14499[484.0] */
RegWrite(R_CTL, 1, 0xF9);    /* #14500[484.0] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14501[484.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14502[484.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14503[484.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14504[484.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14505[484.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14506[484.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14507[484.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14508[484.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14509[484.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14510[484.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14511[484.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14512[484.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14513[484.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14514[484.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #14515[484.8] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x848888*/    /* #14516[484.8] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14517[484.8] */
ulVal2 = RegRead(R_LEN, 2); /*=0x24EA*/    /* #14518[484.8] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14519[484.8] */
{
 unsigned char uchRegs14520[]={
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
  RegWriteArray(R_ALL, 74, uchRegs14520);
}    /* #14520[484.8] */
RegWrite(0x43, 1, 0x03);    /* #14521[484.8] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14522[484.8] */
RegWrite(R_LMP, 1, 0x01);    /* #14523[484.8] */
RegWrite(R_LMP, 1, 0x01);    /* #14524[484.9] */
RegWrite(R_CTL, 1, 0x39);    /* #14525[484.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #14526[484.9] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14527[484.9] */
{
 unsigned char uchRegs14528[]={
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
  RegWriteArray(R_ALL, 74, uchRegs14528);
}    /* #14528[484.9] */
RegWrite(0x34, 1, 0x03);    /* #14529[484.9] */
RegWrite(0x49, 1, 0x96);    /* #14530[484.9] */
RegWrite(R_CTL, 1, 0x79);    /* #14531[484.9] */
RegWrite(R_CTL, 1, 0xF9);    /* #14532[484.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14533[484.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #14534[485.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #14535[485.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0780*/    /* #14536[485.0] */
BulkRead(fh,3840);   /* #14537[485.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #14538[485.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #14539[485.0] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14540[485.0] */
RegWrite(R_LMP, 1, 0x01);    /* #14541[485.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #14542[485.1] */
RegWrite(R_LMP, 1, 0x01);    /* #14543[485.1] */
RegWrite(R_LMP, 1, 0x01);    /* #14544[485.1] */
RegWrite(R_CTL, 1, 0x39);    /* #14545[485.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #14546[485.1] */
RegWrite(R_CCAL, 3, 0x848888);    /* #14547[485.1] */
{
 unsigned char uchRegs14548[]={
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
  RegWriteArray(R_ALL, 74, uchRegs14548);
}    /* #14548[485.1] */
RegWrite(0x34, 1, 0x03);    /* #14549[485.1] */
RegWrite(0x49, 1, 0x96);    /* #14550[485.1] */
RegWrite(R_CTL, 1, 0x79);    /* #14551[485.1] */
RegWrite(R_CTL, 1, 0xF9);    /* #14552[485.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14553[485.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #14554[485.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #14555[485.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0048*/    /* #14556[485.2] */
BulkRead(fh,144);   /* #14557[485.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #14558[485.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #14559[485.2] */
RegWrite(R_CCAL, 3, 0x848888);    /* #14560[485.2] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14561[485.2] */
RegWrite(R_LMP, 1, 0x01);    /* #14562[485.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #14563[485.2] */
ulVal2 = RegRead(R_LEN, 2); /*=0x24EA*/    /* #14564[485.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #14565[485.2] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14566[485.2] */
RegWrite(0x34, 1, 0x63);    /* #14567[485.2] */
RegWrite(0x49, 1, 0x9E);    /* #14568[485.2] */
{
 unsigned char uchRegs14569[]={
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
  RegWriteArray(R_ALL, 74, uchRegs14569);
}    /* #14569[485.2] */
RegWrite(R_CTL, 1, 0x19);    /* #14570[485.3] */
RegWrite(R_CTL, 1, 0x59);    /* #14571[485.3] */
RegWrite(R_CTL, 1, 0xD9);    /* #14572[485.3] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14573[485.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14574[485.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #14575[485.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #14576[485.4] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14577[485.4] */
{
 unsigned char uchRegs14578[]={
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
  RegWriteArray(R_ALL, 74, uchRegs14578);
}    /* #14578[485.4] */
RegWrite(0x43, 1, 0x03);    /* #14579[485.4] */
RegWrite(R_CCAL, 3, 0x848888);    /* #14580[485.4] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14581[485.4] */
RegWrite(R_LMP, 1, 0x01);    /* #14582[485.4] */
RegWrite(R_LMP, 1, 0x01);    /* #14583[485.4] */
RegWrite(R_CTL, 1, 0x39);    /* #14584[485.4] */
RegWrite(0x34, 1, 0x63);    /* #14585[485.4] */
RegWrite(0x49, 1, 0x96);    /* #14586[485.4] */
{
 unsigned char uchRegs14587[]={
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
  RegWriteArray(R_ALL, 74, uchRegs14587);
}    /* #14587[485.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #14588[485.5] */
RegWrite(R_CTL, 1, 0x39);    /* #14589[485.5] */
RegWrite(R_CTL, 1, 0x79);    /* #14590[485.5] */
RegWrite(R_CTL, 1, 0xF9);    /* #14591[485.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14592[485.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BC4*/    /* #14593[485.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14594[485.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB34C*/    /* #14595[485.6] */
BulkRead(fh,32768);   /* #14596[485.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14597[485.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xEAD4*/    /* #14598[485.6] */
BulkRead(fh,32768);   /* #14599[485.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14600[485.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFA06*/    /* #14601[485.6] */
BulkRead(fh,32768);   /* #14602[485.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14603[485.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14604[485.7] */
BulkRead(fh,32768);   /* #14605[485.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14606[485.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14607[485.7] */
BulkRead(fh,32768);   /* #14608[485.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14609[485.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14610[485.8] */
BulkRead(fh,32768);   /* #14611[485.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14612[485.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14613[485.8] */
BulkRead(fh,32768);   /* #14614[485.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14615[485.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14616[485.9] */
BulkRead(fh,32768);   /* #14617[485.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14618[485.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14619[485.9] */
BulkRead(fh,32768);   /* #14620[486.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14621[486.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14622[486.0] */
BulkRead(fh,32768);   /* #14623[486.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14624[486.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14625[486.0] */
BulkRead(fh,32768);   /* #14626[486.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14627[486.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14628[486.1] */
BulkRead(fh,32768);   /* #14629[486.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14630[486.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14631[486.1] */
BulkRead(fh,32768);   /* #14632[486.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14633[486.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14634[486.2] */
BulkRead(fh,32768);   /* #14635[486.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14636[486.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14637[486.2] */
BulkRead(fh,32768);   /* #14638[486.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14639[486.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14640[486.3] */
BulkRead(fh,32768);   /* #14641[486.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14642[486.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14643[486.3] */
BulkRead(fh,32768);   /* #14644[486.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14645[486.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14646[486.4] */
BulkRead(fh,32768);   /* #14647[486.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14648[486.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14649[486.5] */
BulkRead(fh,32768);   /* #14650[486.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14651[486.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14652[486.5] */
BulkRead(fh,32768);   /* #14653[486.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14654[486.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14655[486.6] */
BulkRead(fh,32768);   /* #14656[486.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14657[486.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14658[486.6] */
BulkRead(fh,32768);   /* #14659[486.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14660[486.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14661[486.6] */
BulkRead(fh,32768);   /* #14662[486.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14663[486.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14664[486.7] */
BulkRead(fh,32768);   /* #14665[486.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14666[486.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14667[486.7] */
BulkRead(fh,32768);   /* #14668[486.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14669[486.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14670[486.8] */
BulkRead(fh,32768);   /* #14671[486.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14672[486.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14673[486.8] */
BulkRead(fh,32768);   /* #14674[486.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14675[486.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #14676[486.9] */
BulkRead(fh,32768);   /* #14677[486.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14678[486.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF008*/    /* #14679[487.0] */
BulkRead(fh,32768);   /* #14680[487.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14681[487.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB008*/    /* #14682[487.0] */
BulkRead(fh,32768);   /* #14683[487.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14684[487.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #14685[487.1] */
BulkRead(fh,32768);   /* #14686[487.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #14687[487.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #14688[487.1] */
BulkRead(fh,24592);   /* #14689[487.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #14690[487.1] */
RegWrite(0x43, 1, 0x03);    /* #14691[487.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #14692[487.1] */
{
 unsigned char uchRegs14693[]={
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
  RegWriteArray(R_ALL, 74, uchRegs14693);
}    /* #14693[487.1] */
RegWrite(R_CTL, 1, 0x39);    /* #14694[487.1] */
RegWrite(R_CTL, 1, 0x79);    /* #14695[487.2] */
RegWrite(R_CTL, 1, 0xF9);    /* #14696[487.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14697[487.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14698[487.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14699[487.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14700[487.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14701[487.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #14702[487.2] */
RegWrite(R_CTL, 1, 0x39);    /* #14703[487.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #14704[487.2] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14705[487.2] */
RegWrite(0x34, 1, 0x63);    /* #14706[487.2] */
RegWrite(0x49, 1, 0x9E);    /* #14707[487.2] */
{
 unsigned char uchRegs14708[]={
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
  RegWriteArray(R_ALL, 74, uchRegs14708);
}    /* #14708[487.2] */
RegWrite(R_CTL, 1, 0x19);    /* #14709[487.2] */
RegWrite(R_CTL, 1, 0x59);    /* #14710[487.2] */
RegWrite(R_CTL, 1, 0xD9);    /* #14711[487.2] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14712[487.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14713[487.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14714[487.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14715[487.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14716[487.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14717[487.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14718[487.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14719[487.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #14720[488.1] */
RegWrite(R_LMP, 1, 0x01);    /* #14721[488.1] */
RegWrite(R_LMP, 1, 0x01);    /* #14722[488.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #14723[488.1] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14724[488.1] */
RegWrite(0x34, 1, 0x63);    /* #14725[488.2] */
RegWrite(0x49, 1, 0x9E);    /* #14726[488.2] */
{
 unsigned char uchRegs14727[]={
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
  RegWriteArray(R_ALL, 74, uchRegs14727);
}    /* #14727[488.2] */
RegWrite(R_CTL, 1, 0x19);    /* #14728[488.2] */
RegWrite(R_CTL, 1, 0x59);    /* #14729[488.2] */
RegWrite(R_CTL, 1, 0xD9);    /* #14730[488.2] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14731[488.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14732[488.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14733[488.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14734[488.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14735[488.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14736[488.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14737[488.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14738[488.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14739[488.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14740[488.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14741[488.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14742[488.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #14743[488.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #14744[488.9] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14745[488.9] */
RegWrite(R_LMP, 1, 0x01);    /* #14746[488.9] */
RegWrite(R_LMP, 1, 0x01);    /* #14747[488.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #14748[488.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #14749[488.9] */
RegWrite(R_CTL, 1, 0x39);    /* #14750[488.9] */
RegWrite(0x34, 1, 0x63);    /* #14751[488.9] */
RegWrite(0x49, 1, 0x96);    /* #14752[488.9] */
RegWrite(0x43, 1, 0x07);    /* #14753[489.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #14754[489.0] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14755[489.0] */
RegWrite(0x34, 1, 0xC3);    /* #14756[489.0] */
RegWrite(0x49, 1, 0x9E);    /* #14757[489.0] */
{
 unsigned char uchRegs14758[]={
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
  RegWriteArray(R_ALL, 74, uchRegs14758);
}    /* #14758[489.0] */
RegWrite(0x43, 1, 0x03);    /* #14759[489.0] */
RegWrite(R_STPS, 2, 0x0000);    /* #14760[489.0] */
RegWrite(0x0A, 2, 0x0638);    /* #14761[489.1] */
RegWrite(0x47, 2, 0xA000);    /* #14762[489.1] */
RegWrite(0x34, 1, 0xC3);    /* #14763[489.1] */
RegWrite(0x49, 1, 0x9E);    /* #14764[489.1] */
RegWrite(R_CTL, 1, 0x39);    /* #14765[489.1] */
RegWrite(R_CTL, 1, 0x79);    /* #14766[489.1] */
RegWrite(R_CTL, 1, 0xF9);    /* #14767[489.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x0638*/    /* #14768[489.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x0636*/    /* #14769[489.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x062E*/    /* #14770[489.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x062C*/    /* #14771[489.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x0625*/    /* #14772[489.1] */
RegWrite(0x47, 2, 0xA000);    /* #14773[489.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0620*/    /* #14774[489.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x061C*/    /* #14775[489.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x061A*/    /* #14776[489.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0612*/    /* #14777[489.2] */
RegWrite(0x47, 2, 0x9800);    /* #14778[489.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0608*/    /* #14779[489.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0606*/    /* #14780[489.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x05FD*/    /* #14781[489.2] */
RegWrite(0x47, 2, 0x9000);    /* #14782[489.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x05F8*/    /* #14783[489.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x05F6*/    /* #14784[489.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x05F4*/    /* #14785[489.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x05F2*/    /* #14786[489.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x05F0*/    /* #14787[489.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x05EE*/    /* #14788[489.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05EC*/    /* #14789[489.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05EA*/    /* #14790[489.3] */
RegWrite(0x47, 2, 0x8800);    /* #14791[489.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05E5*/    /* #14792[489.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05E3*/    /* #14793[489.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05E0*/    /* #14794[489.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05DE*/    /* #14795[489.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05DC*/    /* #14796[489.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05DA*/    /* #14797[489.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05D7*/    /* #14798[489.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05D3*/    /* #14799[489.3] */
RegWrite(0x47, 2, 0x8000);    /* #14800[489.3] */
RegWrite(0x43, 1, 0x07);    /* #14801[489.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05CC*/    /* #14802[489.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05C9*/    /* #14803[489.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05C6*/    /* #14804[489.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05C3*/    /* #14805[489.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05C0*/    /* #14806[489.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05BE*/    /* #14807[489.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05BB*/    /* #14808[489.3] */
RegWrite(0x47, 2, 0x7800);    /* #14809[489.3] */
RegWrite(0x43, 1, 0x07);    /* #14810[489.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05B3*/    /* #14811[489.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x05B0*/    /* #14812[489.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x05AC*/    /* #14813[489.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x05A9*/    /* #14814[489.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x05A7*/    /* #14815[489.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x05A4*/    /* #14816[489.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x05A1*/    /* #14817[489.4] */
RegWrite(0x47, 2, 0x7000);    /* #14818[489.4] */
RegWrite(0x43, 1, 0x07);    /* #14819[489.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0599*/    /* #14820[489.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0596*/    /* #14821[489.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0593*/    /* #14822[489.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0590*/    /* #14823[489.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0587*/    /* #14824[489.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0584*/    /* #14825[489.4] */
RegWrite(0x47, 2, 0x6800);    /* #14826[489.4] */
RegWrite(0x43, 1, 0x07);    /* #14827[489.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x056B*/    /* #14828[489.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0568*/    /* #14829[489.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x055D*/    /* #14830[489.5] */
RegWrite(0x47, 2, 0x6000);    /* #14831[489.5] */
RegWrite(0x43, 1, 0x07);    /* #14832[489.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x054D*/    /* #14833[489.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0549*/    /* #14834[489.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x053D*/    /* #14835[489.5] */
RegWrite(0x47, 2, 0x5800);    /* #14836[489.5] */
RegWrite(0x43, 1, 0x07);    /* #14837[489.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0528*/    /* #14838[489.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x051C*/    /* #14839[489.6] */
RegWrite(0x47, 2, 0x5000);    /* #14840[489.6] */
RegWrite(0x43, 1, 0x07);    /* #14841[489.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x04F8*/    /* #14842[489.6] */
RegWrite(0x47, 2, 0x40C0);    /* #14843[489.6] */
RegWrite(R_LEN, 2, 0x24EA);    /* #14844[489.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14845[489.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14846[489.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14847[489.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14848[489.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14849[489.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14850[490.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14851[490.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14852[490.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14853[490.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14854[490.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14855[490.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14856[490.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14857[490.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14858[490.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14859[490.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14860[490.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14861[490.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #14862[490.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #14863[490.6] */
RegWrite(0x43, 1, 0x03);    /* #14864[490.6] */
RegWrite(R_CTL, 1, 0x39);    /* #14865[490.7] */
RegWrite(0x34, 1, 0x03);    /* #14866[490.7] */
RegWrite(0x49, 1, 0x96);    /* #14867[490.7] */
{
 unsigned char uchRegs14868[]={
   0xAB /*!!0x01!!*/, 0x05 /*!!0x02!!*/, 0x24 /*!!0x03!!*/,
   0x58 /*!!0x04!!*/, 0x02 /*!!0x05!!*/, 0x10 /*!!R_STPS!!*/,
   0x00 /*!!R_STPSH!!*/, 0x64 /*!!0x08!!*/, 0x92 /*!!0x09!!*/,
   0x66 /*!!0x0A!!*/, 0x02 /*!!0x0B!!*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC2 /*!!0x16!!*/, 0x40 /*0x17*/, 0xC2 /*!!0x18!!*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
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
   0x39 /*R_CTL*/, 0xC2 /*!!0x47!!*/, 0x40 /*0x48*/,
   0x96 /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs14868);
}    /* #14868[490.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #14869[490.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #14870[490.8] */
RegWrite(R_CTL, 1, 0x39);    /* #14871[490.8] */
RegWrite(R_CTL, 1, 0x79);    /* #14872[490.8] */
RegWrite(R_CTL, 1, 0xF9);    /* #14873[490.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14874[490.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #14875[491.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14876[491.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #14877[491.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14878[491.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x00C8*/    /* #14879[491.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14880[491.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0384*/    /* #14881[491.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14882[491.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0708*/    /* #14883[491.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14884[491.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0A8C*/    /* #14885[491.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14886[491.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0DAC*/    /* #14887[491.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14888[491.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1068*/    /* #14889[491.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14890[491.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1388*/    /* #14891[491.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14892[491.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1644*/    /* #14893[491.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14894[491.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1900*/    /* #14895[492.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14896[492.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1BBC*/    /* #14897[492.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14898[492.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F40*/    /* #14899[492.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14900[492.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x22C4*/    /* #14901[492.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14902[492.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2580*/    /* #14903[492.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14904[492.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2904*/    /* #14905[492.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14906[492.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2AF8*/    /* #14907[492.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14908[492.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E7C*/    /* #14909[492.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14910[492.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3200*/    /* #14911[492.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14912[492.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x34BC*/    /* #14913[492.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14914[492.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3778*/    /* #14915[493.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14916[493.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3A34*/    /* #14917[493.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14918[493.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C8C*/    /* #14919[493.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14920[493.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F48*/    /* #14921[493.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14922[493.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4330*/    /* #14923[493.3] */
BulkRead(fh,32768);   /* #14924[493.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14925[493.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x05EC*/    /* #14926[493.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14927[493.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0718*/    /* #14928[493.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14929[493.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x09D4*/    /* #14930[493.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14931[493.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0D58*/    /* #14932[493.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14933[493.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x10DC*/    /* #14934[493.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14935[493.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1398*/    /* #14936[494.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14937[494.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x16B8*/    /* #14938[494.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14939[494.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19D8*/    /* #14940[494.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14941[494.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C94*/    /* #14942[494.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14943[494.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1FB4*/    /* #14944[494.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14945[494.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2338*/    /* #14946[494.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14947[494.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x25F4*/    /* #14948[494.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14949[494.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2914*/    /* #14950[494.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14951[494.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2C34*/    /* #14952[494.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14953[494.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F54*/    /* #14954[494.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14955[494.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3274*/    /* #14956[495.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14957[495.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3594*/    /* #14958[495.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14959[495.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3850*/    /* #14960[495.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14961[495.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BD4*/    /* #14962[495.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14963[495.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3EF4*/    /* #14964[495.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14965[495.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4214*/    /* #14966[495.5] */
BulkRead(fh,32768);   /* #14967[495.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14968[495.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x046C*/    /* #14969[495.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14970[495.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x078C*/    /* #14971[495.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14972[495.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0AAC*/    /* #14973[495.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14974[495.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0D68*/    /* #14975[495.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14976[495.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x10EC*/    /* #14977[496.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14978[496.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13A8*/    /* #14979[496.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14980[496.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1600*/    /* #14981[496.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14982[496.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1984*/    /* #14983[496.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14984[496.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1CA4*/    /* #14985[496.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14986[496.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F60*/    /* #14987[496.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14988[496.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2280*/    /* #14989[496.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14990[496.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2604*/    /* #14991[496.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14992[496.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x285C*/    /* #14993[496.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14994[496.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B18*/    /* #14995[496.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14996[496.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E84*/    /* #14997[497.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #14998[497.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30F4*/    /* #14999[497.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15000[497.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3478*/    /* #15001[497.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15002[497.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x36D0*/    /* #15003[497.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15004[497.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x398C*/    /* #15005[497.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15006[497.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C48*/    /* #15007[497.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15008[497.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F04*/    /* #15009[497.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15010[497.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4288*/    /* #15011[497.6] */
BulkRead(fh,32768);   /* #15012[497.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15013[497.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x04E0*/    /* #15014[497.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15015[497.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x06D4*/    /* #15016[497.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15017[497.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0A58*/    /* #15018[498.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15019[498.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0DDC*/    /* #15020[498.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15021[498.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1034*/    /* #15022[498.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15023[498.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x12F0*/    /* #15024[498.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15025[498.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x15AC*/    /* #15026[498.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15027[498.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1868*/    /* #15028[498.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15029[498.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C50*/    /* #15030[498.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15031[498.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1FD4*/    /* #15032[498.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15033[498.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x222C*/    /* #15034[498.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15035[498.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x254C*/    /* #15036[498.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15037[498.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2808*/    /* #15038[499.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15039[499.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B28*/    /* #15040[499.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15041[499.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2DE4*/    /* #15042[499.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #15043[499.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x303C*/    /* #15044[499.2] */
BulkRead(fh,24696);   /* #15045[499.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #15046[499.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #15047[499.3] */
RegWrite(0x43, 1, 0x03);    /* #15048[499.3] */
RegWrite(0x43, 1, 0x03);    /* #15049[499.3] */
RegWrite(R_CTL, 1, 0x39);    /* #15050[499.4] */
{
 unsigned char uchRegs15051[]={
   0x00 /*!!0x01!!*/, 0x00 /*!!0x02!!*/, 0x00 /*!!0x03!!*/,
   0x00 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0x00 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!0x0A!!*/, 0x00 /*!!0x0B!!*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC2 /*0x16*/, 0x40 /*0x17*/, 0xC2 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
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
   0x39 /*R_CTL*/, 0xC2 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs15051);
}    /* #15051[499.4] */
RegWrite(R_CTL, 1, 0x39);    /* #15052[499.4] */
RegWrite(R_CTL, 1, 0x79);    /* #15053[499.4] */
RegWrite(R_CTL, 1, 0xF9);    /* #15054[499.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #15055[499.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #15056[499.5] */
RegWrite(R_CTL, 1, 0x39);    /* #15057[499.5] */
RegWrite(0x43, 1, 0x07);    /* #15058[499.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #15059[499.5] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15060[499.5] */
RegWrite(0x34, 1, 0xC3);    /* #15061[499.5] */
RegWrite(0x49, 1, 0x9E);    /* #15062[499.6] */
{
 unsigned char uchRegs15063[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*!!0x03!!*/,
   0x40 /*!!0x04!!*/, 0x00 /*0x05*/, 0xAE /*!!R_STPS!!*/,
   0x08 /*!!R_STPSH!!*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
   0x00 /*0x0A*/, 0x00 /*0x0B*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*0x12*/,
   0x15 /*0x13*/, 0x80 /*0x14*/, 0x2A /*0x15*/,
   0xC0 /*!!0x16!!*/, 0x40 /*0x17*/, 0xC0 /*!!0x18!!*/,
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
   0x01 /*0x40*/, 0x00 /*!!0x41!!*/, 0x80 /*R_CSTAT*/,
   0x07 /*!!0x43!!*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*!!0x47!!*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs15063);
}    /* #15063[499.6] */
RegWrite(0x43, 1, 0x03);    /* #15064[499.6] */
RegWrite(R_STPS, 2, 0x0000);    /* #15065[499.6] */
RegWrite(0x0A, 2, 0x08AE);    /* #15066[499.7] */
RegWrite(0x47, 2, 0xA000);    /* #15067[499.7] */
RegWrite(0x34, 1, 0xC3);    /* #15068[499.7] */
RegWrite(0x49, 1, 0x9E);    /* #15069[499.7] */
RegWrite(R_CTL, 1, 0x19);    /* #15070[499.7] */
RegWrite(R_CTL, 1, 0x59);    /* #15071[499.8] */
RegWrite(R_CTL, 1, 0xD9);    /* #15072[499.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0000*/    /* #15073[499.8] */
RegWrite(0x47, 2, 0xA000);    /* #15074[499.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x08A3*/    /* #15075[499.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x089A*/    /* #15076[499.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0887*/    /* #15077[499.9] */
RegWrite(0x47, 2, 0x9800);    /* #15078[499.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0874*/    /* #15079[499.9] */
RegWrite(0x47, 2, 0x9000);    /* #15080[499.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0857*/    /* #15081[500.0] */
RegWrite(0x47, 2, 0x8800);    /* #15082[500.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0844*/    /* #15083[500.0] */
RegWrite(0x47, 2, 0x8000);    /* #15084[500.0] */
RegWrite(0x43, 1, 0x07);    /* #15085[500.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x081C*/    /* #15086[500.1] */
RegWrite(0x47, 2, 0x7800);    /* #15087[500.1] */
RegWrite(0x43, 1, 0x07);    /* #15088[500.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x07F6*/    /* #15089[500.1] */
RegWrite(0x47, 2, 0x7000);    /* #15090[500.1] */
RegWrite(0x43, 1, 0x07);    /* #15091[500.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x07CE*/    /* #15092[500.2] */
RegWrite(0x47, 2, 0x6800);    /* #15093[500.2] */
RegWrite(0x43, 1, 0x07);    /* #15094[500.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x07A4*/    /* #15095[500.3] */
RegWrite(0x47, 2, 0x6000);    /* #15096[500.3] */
RegWrite(0x43, 1, 0x07);    /* #15097[500.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x0766*/    /* #15098[500.3] */
RegWrite(0x47, 2, 0x5800);    /* #15099[500.3] */
RegWrite(0x43, 1, 0x07);    /* #15100[500.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0716*/    /* #15101[500.4] */
RegWrite(0x47, 2, 0x5000);    /* #15102[500.4] */
RegWrite(0x43, 1, 0x07);    /* #15103[500.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x06D7*/    /* #15104[500.5] */
RegWrite(0x47, 2, 0x40C0);    /* #15105[500.5] */
RegWrite(R_LEN, 2, 0x24EA);    /* #15106[500.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15107[500.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15108[500.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15109[500.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15110[501.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15111[501.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15112[501.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15113[501.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15114[501.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15115[501.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15116[501.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15117[501.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15118[501.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #15119[502.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #15120[502.0] */
RegWrite(0x43, 1, 0x03);    /* #15121[502.0] */
RegWrite(R_CTL, 1, 0x39);    /* #15122[502.0] */
