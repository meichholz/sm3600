ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #8999[035.7] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #9000[035.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #9001[035.8] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #9002[035.8] */
RegWrite(R_LEN, 2, 0x24E9);    /* #9003[035.8] */
{
 unsigned char uchRegs9004[]={
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
  RegWriteArray(R_ALL, 74, uchRegs9004);
}    /* #9004[035.8] */
RegWrite(0x43, 1, 0x03);    /* #9005[035.8] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #9006[035.8] */
RegWrite(R_CCAL, 3, 0x848888);    /* #9007[035.8] */
RegWrite(R_LEN, 2, 0x24E9);    /* #9008[035.8] */
RegWrite(R_LEN, 2, 0x24E9);    /* #9009[035.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #9010[035.8] */
RegWrite(R_LEN, 2, 0x24E9);    /* #9011[035.8] */
RegWrite(0x34, 1, 0x63);    /* #9012[035.8] */
RegWrite(0x49, 1, 0x9E);    /* #9013[035.8] */
{
 unsigned char uchRegs9014[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x40 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0x64 /*!!R_STPS!!*/,
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
   0x84 /*!!R_CCAL3!!*/, 0xE9 /*!!R_LEN!!*/, 0x24 /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs9014);
}    /* #9014[035.8] */
RegWrite(R_CTL, 1, 0x39);    /* #9015[035.8] */
RegWrite(R_CTL, 1, 0x79);    /* #9016[035.8] */
RegWrite(R_CTL, 1, 0xF9);    /* #9017[035.8] */
RegWrite(R_LEN, 2, 0x24E9);    /* #9018[035.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9019[035.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9020[035.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9021[036.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9022[036.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9023[036.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9024[036.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9025[036.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9026[036.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9027[036.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #9028[036.3] */
RegWrite(R_LMP, 1, 0x01);    /* #9029[036.3] */
RegWrite(R_LMP, 1, 0x01);    /* #9030[036.3] */
RegWrite(0x34, 1, 0x63);    /* #9031[036.3] */
RegWrite(0x49, 1, 0x96);    /* #9032[036.3] */
{
 unsigned char uchRegs9033[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0xEC /*!!0x04!!*/, 0x13 /*!!0x05!!*/, 0x26 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*0x08*/, 0x3F /*!!0x09!!*/,
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
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0xE9 /*R_LEN*/, 0x24 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x59 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs9033);
}    /* #9033[036.3] */
RegWrite(R_CTL, 1, 0x59);    /* #9034[036.4] */
RegWrite(R_CTL, 1, 0xD9);    /* #9035[036.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9036[036.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9037[036.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9038[036.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9039[036.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9040[036.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9041[036.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9042[036.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9043[036.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9044[036.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9045[036.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #9046[036.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #9047[036.7] */
BulkRead(fh,10200);   /* #9048[036.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9049[036.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #9050[036.8] */
RegWrite(R_CTL, 1, 0x59);    /* #9051[036.8] */
RegWrite(R_CTL, 1, 0xD9);    /* #9052[036.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9053[036.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9054[036.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9055[036.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9056[036.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9057[036.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9058[036.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9059[036.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9060[037.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9061[037.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9062[037.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9063[037.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9064[037.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #9065[037.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #9066[037.1] */
BulkRead(fh,10200);   /* #9067[037.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9068[037.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #9069[037.2] */
{
 unsigned char uchRegs9070[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0xEC /*0x04*/, 0x13 /*0x05*/, 0x03 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*0x08*/, 0x3F /*0x09*/,
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
   0x4E /*0x2E*/, 0x88 /*R_CCAL*/, 0x88 /*R_CCAL2*/,
   0x84 /*R_CCAL3*/, 0xE9 /*R_LEN*/, 0x24 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*!!R_CSTAT!!*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x59 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs9070);
}    /* #9070[037.2] */
RegWrite(0x34, 1, 0x63);    /* #9071[037.2] */
RegWrite(0x49, 1, 0x96);    /* #9072[037.2] */
RegWrite(R_CTL, 1, 0x59);    /* #9073[037.2] */
RegWrite(R_CTL, 1, 0xD9);    /* #9074[037.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9075[037.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9076[037.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #9077[037.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #9078[037.3] */
BulkRead(fh,10200);   /* #9079[037.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9080[037.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #9081[037.3] */
RegWrite(R_CTL, 1, 0x59);    /* #9082[037.3] */
RegWrite(R_CTL, 1, 0xD9);    /* #9083[037.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9084[037.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9085[037.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9086[037.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #9087[037.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #9088[037.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #9089[037.4] */
BulkRead(fh,10200);   /* #9090[037.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9091[037.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #9092[037.5] */
RegWrite(R_CTL, 1, 0x59);    /* #9093[037.5] */
RegWrite(R_CTL, 1, 0xD9);    /* #9094[037.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9095[037.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9096[037.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #9097[037.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #9098[037.6] */
BulkRead(fh,10200);   /* #9099[037.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9100[037.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #9101[037.6] */
RegWrite(R_CTL, 1, 0x59);    /* #9102[037.6] */
RegWrite(R_CTL, 1, 0xD9);    /* #9103[037.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9104[037.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9105[037.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #9106[037.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13EC*/    /* #9107[037.7] */
BulkRead(fh,10200);   /* #9108[037.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9109[037.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #9110[037.8] */
RegWrite(0x34, 1, 0x63);    /* #9111[037.8] */
RegWrite(0x49, 1, 0x96);    /* #9112[037.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #9113[037.8] */
RegWrite(R_LEN, 2, 0x24E9);    /* #9114[037.8] */
RegWrite(0x34, 1, 0x63);    /* #9115[037.8] */
RegWrite(0x49, 1, 0x9E);    /* #9116[037.8] */
{
 unsigned char uchRegs9117[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x40 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0xC8 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*0x08*/, 0x00 /*!!0x09!!*/,
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
   0x84 /*R_CCAL3*/, 0xE9 /*R_LEN*/, 0x24 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x79 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs9117);
}    /* #9117[037.8] */
RegWrite(R_CTL, 1, 0x39);    /* #9118[037.8] */
RegWrite(R_CTL, 1, 0x79);    /* #9119[037.8] */
RegWrite(R_CTL, 1, 0xF9);    /* #9120[037.8] */
RegWrite(R_LEN, 2, 0x24E9);    /* #9121[037.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9122[037.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9123[037.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9124[038.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9125[038.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9126[038.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9127[038.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9128[038.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9129[038.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9130[038.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9131[038.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9132[038.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9133[038.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9134[038.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #9135[038.5] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x848888*/    /* #9136[038.6] */
RegWrite(R_LEN, 2, 0x24E9);    /* #9137[038.6] */
ulVal2 = RegRead(R_LEN, 2); /*=0x24E9*/    /* #9138[038.6] */
RegWrite(R_LEN, 2, 0x24E9);    /* #9139[038.6] */
{
 unsigned char uchRegs9140[]={
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
  RegWriteArray(R_ALL, 74, uchRegs9140);
}    /* #9140[038.6] */
RegWrite(0x43, 1, 0x03);    /* #9141[038.6] */
RegWrite(R_LEN, 2, 0x24E9);    /* #9142[038.6] */
RegWrite(R_LMP, 1, 0x01);    /* #9143[038.6] */
RegWrite(R_LMP, 1, 0x01);    /* #9144[038.6] */
RegWrite(R_CTL, 1, 0x39);    /* #9145[038.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #9146[038.6] */
RegWrite(R_LEN, 2, 0x24E9);    /* #9147[038.6] */
{
 unsigned char uchRegs9148[]={
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
   0x80 /*R_CCAL3*/, 0xE9 /*!!R_LEN!!*/, 0x24 /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs9148);
}    /* #9148[038.7] */
RegWrite(0x34, 1, 0x03);    /* #9149[038.7] */
RegWrite(0x49, 1, 0x96);    /* #9150[038.7] */
RegWrite(R_CTL, 1, 0x79);    /* #9151[038.7] */
RegWrite(R_CTL, 1, 0xF9);    /* #9152[038.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9153[038.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0096*/    /* #9154[038.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #9155[038.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0780*/    /* #9156[038.8] */
BulkRead(fh,3840);   /* #9157[038.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9158[038.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #9159[038.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #9160[038.8] */
RegWrite(R_LEN, 2, 0x24EA);    /* #9161[038.8] */
{
 unsigned char uchRegs9162[]={
   0x71 /*0x01*/, 0x03 /*0x02*/, 0x20 /*0x03*/,
   0x00 /*0x04*/, 0xCF /*0x05*/, 0x00 /*R_STPS*/,
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
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0xEA /*!!R_LEN!!*/, 0x24 /*R_LENH*/,
   0x03 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*!!R_CSTAT!!*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x79 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs9162);
}    /* #9162[038.8] */
RegWrite(0x34, 1, 0x03);    /* #9163[038.8] */
RegWrite(0x49, 1, 0x96);    /* #9164[038.8] */
RegWrite(R_CTL, 1, 0x79);    /* #9165[038.8] */
RegWrite(R_CTL, 1, 0xF9);    /* #9166[038.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9167[038.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9168[038.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #9169[038.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0780*/    /* #9170[038.9] */
BulkRead(fh,3840);   /* #9171[038.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9172[038.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #9173[038.9] */
RegWrite(R_LEN, 2, 0x24EA);    /* #9174[038.9] */
RegWrite(R_LMP, 1, 0x01);    /* #9175[038.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #9176[038.9] */
RegWrite(R_LMP, 1, 0x01);    /* #9177[039.0] */
RegWrite(R_LMP, 1, 0x01);    /* #9178[039.0] */
RegWrite(R_CTL, 1, 0x39);    /* #9179[039.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #9180[039.0] */
RegWrite(R_CCAL, 3, 0x848888);    /* #9181[039.0] */
{
 unsigned char uchRegs9182[]={
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
   0x03 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0xD8 /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs9182);
}    /* #9182[039.0] */
RegWrite(0x34, 1, 0x03);    /* #9183[039.0] */
RegWrite(0x49, 1, 0x96);    /* #9184[039.0] */
RegWrite(R_CTL, 1, 0x79);    /* #9185[039.0] */
RegWrite(R_CTL, 1, 0xF9);    /* #9186[039.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9187[039.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9188[039.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #9189[039.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0048*/    /* #9190[039.1] */
BulkRead(fh,144);   /* #9191[039.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9192[039.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #9193[039.1] */
RegWrite(R_CCAL, 3, 0x848888);    /* #9194[039.1] */
RegWrite(R_LEN, 2, 0x24EA);    /* #9195[039.1] */
RegWrite(R_LMP, 1, 0x01);    /* #9196[039.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #9197[039.1] */
ulVal2 = RegRead(R_LEN, 2); /*=0x24EA*/    /* #9198[039.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #9199[039.2] */
RegWrite(R_LEN, 2, 0x24EA);    /* #9200[039.2] */
RegWrite(0x34, 1, 0x63);    /* #9201[039.2] */
RegWrite(0x49, 1, 0x9E);    /* #9202[039.2] */
{
 unsigned char uchRegs9203[]={
   0x00 /*!!0x01!!*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0x40 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0x06 /*!!R_STPS!!*/,
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
  RegWriteArray(R_ALL, 74, uchRegs9203);
}    /* #9203[039.2] */
RegWrite(R_CTL, 1, 0x19);    /* #9204[039.2] */
RegWrite(R_CTL, 1, 0x59);    /* #9205[039.2] */
RegWrite(R_CTL, 1, 0xD9);    /* #9206[039.2] */
RegWrite(R_LEN, 2, 0x24EA);    /* #9207[039.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9208[039.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #9209[039.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #9210[039.3] */
RegWrite(R_LEN, 2, 0x24EA);    /* #9211[039.3] */
{
 unsigned char uchRegs9212[]={
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
  RegWriteArray(R_ALL, 74, uchRegs9212);
}    /* #9212[039.3] */
RegWrite(0x43, 1, 0x03);    /* #9213[039.3] */
RegWrite(R_CCAL, 3, 0x848888);    /* #9214[039.3] */
RegWrite(R_LEN, 2, 0x24EA);    /* #9215[039.3] */
RegWrite(R_LMP, 1, 0x01);    /* #9216[039.3] */
RegWrite(R_LMP, 1, 0x01);    /* #9217[039.4] */
RegWrite(R_CTL, 1, 0x39);    /* #9218[039.4] */
RegWrite(0x34, 1, 0x63);    /* #9219[039.4] */
RegWrite(0x49, 1, 0x96);    /* #9220[039.4] */
{
 unsigned char uchRegs9221[]={
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
  RegWriteArray(R_ALL, 74, uchRegs9221);
}    /* #9221[039.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #9222[039.4] */
RegWrite(R_CTL, 1, 0x39);    /* #9223[039.4] */
RegWrite(R_CTL, 1, 0x79);    /* #9224[039.4] */
RegWrite(R_CTL, 1, 0xF9);    /* #9225[039.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9226[039.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x003A*/    /* #9227[039.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9228[039.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x8C96*/    /* #9229[039.5] */
BulkRead(fh,32768);   /* #9230[039.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9231[039.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xAF10*/    /* #9232[039.5] */
BulkRead(fh,32768);   /* #9233[039.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9234[039.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xDFCD*/    /* #9235[039.6] */
BulkRead(fh,32768);   /* #9236[039.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9237[039.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9238[039.6] */
BulkRead(fh,32768);   /* #9239[039.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9240[039.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9241[039.7] */
BulkRead(fh,32768);   /* #9242[039.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9243[039.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9244[039.8] */
BulkRead(fh,32768);   /* #9245[039.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9246[039.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9247[039.8] */
BulkRead(fh,32768);   /* #9248[039.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9249[039.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9250[039.9] */
BulkRead(fh,32768);   /* #9251[039.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9252[039.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9253[039.9] */
BulkRead(fh,32768);   /* #9254[039.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9255[039.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9256[039.9] */
BulkRead(fh,32768);   /* #9257[040.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9258[040.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9259[040.0] */
BulkRead(fh,32768);   /* #9260[040.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9261[040.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9262[040.0] */
BulkRead(fh,32768);   /* #9263[040.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9264[040.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9265[040.1] */
BulkRead(fh,32768);   /* #9266[040.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9267[040.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9268[040.1] */
BulkRead(fh,32768);   /* #9269[040.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9270[040.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9271[040.2] */
BulkRead(fh,32768);   /* #9272[040.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9273[040.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9274[040.3] */
BulkRead(fh,32768);   /* #9275[040.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9276[040.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9277[040.3] */
BulkRead(fh,32768);   /* #9278[040.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9279[040.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9280[040.4] */
BulkRead(fh,32768);   /* #9281[040.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9282[040.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9283[040.4] */
BulkRead(fh,32768);   /* #9284[040.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9285[040.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9286[040.4] */
BulkRead(fh,32768);   /* #9287[040.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9288[040.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9289[040.5] */
BulkRead(fh,32768);   /* #9290[040.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9291[040.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9292[040.5] */
BulkRead(fh,32768);   /* #9293[040.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9294[040.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9295[040.6] */
BulkRead(fh,32768);   /* #9296[040.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9297[040.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9298[040.6] */
BulkRead(fh,32768);   /* #9299[040.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9300[040.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9301[040.7] */
BulkRead(fh,32768);   /* #9302[040.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9303[040.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9304[040.7] */
BulkRead(fh,32768);   /* #9305[040.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9306[040.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9307[040.8] */
BulkRead(fh,32768);   /* #9308[040.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9309[040.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #9310[040.9] */
BulkRead(fh,32768);   /* #9311[040.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9312[040.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF008*/    /* #9313[040.9] */
BulkRead(fh,32768);   /* #9314[040.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9315[040.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB008*/    /* #9316[041.0] */
BulkRead(fh,32768);   /* #9317[041.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9318[041.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #9319[041.0] */
BulkRead(fh,32768);   /* #9320[041.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9321[041.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #9322[041.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #9323[041.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #9324[041.1] */
BulkRead(fh,24592);   /* #9325[041.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9326[041.1] */
RegWrite(0x43, 1, 0x03);    /* #9327[041.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #9328[041.2] */
{
 unsigned char uchRegs9329[]={
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
  RegWriteArray(R_ALL, 74, uchRegs9329);
}    /* #9329[041.2] */
RegWrite(R_CTL, 1, 0x39);    /* #9330[041.2] */
RegWrite(R_CTL, 1, 0x79);    /* #9331[041.2] */
RegWrite(R_CTL, 1, 0xF9);    /* #9332[041.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9333[041.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9334[041.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #9335[041.2] */
RegWrite(R_CTL, 1, 0x39);    /* #9336[041.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #9337[041.3] */
RegWrite(R_LEN, 2, 0x24EA);    /* #9338[041.3] */
RegWrite(0x34, 1, 0x63);    /* #9339[041.3] */
RegWrite(0x49, 1, 0x9E);    /* #9340[041.3] */
{
 unsigned char uchRegs9341[]={
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
  RegWriteArray(R_ALL, 74, uchRegs9341);
}    /* #9341[041.3] */
RegWrite(R_CTL, 1, 0x19);    /* #9342[041.3] */
RegWrite(R_CTL, 1, 0x59);    /* #9343[041.3] */
RegWrite(R_CTL, 1, 0xD9);    /* #9344[041.3] */
RegWrite(R_LEN, 2, 0x24EA);    /* #9345[041.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9346[041.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9347[041.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9348[041.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9349[041.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9350[041.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9351[041.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9352[041.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9353[041.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #9354[042.2] */
RegWrite(R_LMP, 1, 0x01);    /* #9355[042.2] */
RegWrite(R_LMP, 1, 0x01);    /* #9356[042.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #9357[042.2] */
RegWrite(R_LEN, 2, 0x24EA);    /* #9358[042.2] */
RegWrite(0x34, 1, 0x63);    /* #9359[042.2] */
RegWrite(0x49, 1, 0x9E);    /* #9360[042.2] */
{
 unsigned char uchRegs9361[]={
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
  RegWriteArray(R_ALL, 74, uchRegs9361);
}    /* #9361[042.3] */
RegWrite(R_CTL, 1, 0x19);    /* #9362[042.3] */
RegWrite(R_CTL, 1, 0x59);    /* #9363[042.3] */
RegWrite(R_CTL, 1, 0xD9);    /* #9364[042.3] */
RegWrite(R_LEN, 2, 0x24EA);    /* #9365[042.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9366[042.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9367[042.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9368[042.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9369[042.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9370[042.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9371[042.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9372[042.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9373[042.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9374[042.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9375[042.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9376[042.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #9377[043.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #9378[043.0] */
RegWrite(R_LEN, 2, 0x24EA);    /* #9379[043.0] */
RegWrite(R_LMP, 1, 0x01);    /* #9380[043.0] */
RegWrite(R_LMP, 1, 0x01);    /* #9381[043.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #9382[043.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #9383[043.1] */
RegWrite(R_CTL, 1, 0x39);    /* #9384[043.1] */
RegWrite(0x34, 1, 0x63);    /* #9385[043.1] */
RegWrite(0x49, 1, 0x96);    /* #9386[043.1] */
RegWrite(0x43, 1, 0x07);    /* #9387[043.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #9388[043.1] */
RegWrite(R_LEN, 2, 0x24EA);    /* #9389[043.1] */
RegWrite(0x34, 1, 0xC3);    /* #9390[043.1] */
RegWrite(0x49, 1, 0x9E);    /* #9391[043.1] */
{
 unsigned char uchRegs9392[]={
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
  RegWriteArray(R_ALL, 74, uchRegs9392);
}    /* #9392[043.1] */
RegWrite(0x43, 1, 0x03);    /* #9393[043.1] */
RegWrite(R_STPS, 2, 0x0000);    /* #9394[043.1] */
RegWrite(0x0A, 2, 0x0638);    /* #9395[043.1] */
RegWrite(0x47, 2, 0xA000);    /* #9396[043.1] */
RegWrite(0x34, 1, 0xC3);    /* #9397[043.1] */
RegWrite(0x49, 1, 0x9E);    /* #9398[043.1] */
RegWrite(R_CTL, 1, 0x39);    /* #9399[043.1] */
RegWrite(R_CTL, 1, 0x79);    /* #9400[043.1] */
RegWrite(R_CTL, 1, 0xF9);    /* #9401[043.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x0638*/    /* #9402[043.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x0636*/    /* #9403[043.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x0634*/    /* #9404[043.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x0632*/    /* #9405[043.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x0630*/    /* #9406[043.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x062E*/    /* #9407[043.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x062C*/    /* #9408[043.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x062A*/    /* #9409[043.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0628*/    /* #9410[043.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0626*/    /* #9411[043.2] */
RegWrite(0x47, 2, 0xA000);    /* #9412[043.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0622*/    /* #9413[043.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0620*/    /* #9414[043.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x061E*/    /* #9415[043.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x061C*/    /* #9416[043.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x061A*/    /* #9417[043.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0618*/    /* #9418[043.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0616*/    /* #9419[043.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0615*/    /* #9420[043.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0613*/    /* #9421[043.2] */
RegWrite(0x47, 2, 0x9800);    /* #9422[043.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x060F*/    /* #9423[043.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x060B*/    /* #9424[043.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0603*/    /* #9425[043.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0601*/    /* #9426[043.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05FA*/    /* #9427[043.3] */
RegWrite(0x47, 2, 0x9000);    /* #9428[043.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05EF*/    /* #9429[043.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05EC*/    /* #9430[043.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05E7*/    /* #9431[043.3] */
RegWrite(0x47, 2, 0x8800);    /* #9432[043.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05E3*/    /* #9433[043.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05DA*/    /* #9434[043.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05D7*/    /* #9435[043.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05D1*/    /* #9436[043.3] */
RegWrite(0x47, 2, 0x8000);    /* #9437[043.3] */
RegWrite(0x43, 1, 0x07);    /* #9438[043.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x05C2*/    /* #9439[043.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x05B7*/    /* #9440[043.4] */
RegWrite(0x47, 2, 0x7800);    /* #9441[043.4] */
RegWrite(0x43, 1, 0x07);    /* #9442[043.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x05A8*/    /* #9443[043.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x059D*/    /* #9444[043.4] */
RegWrite(0x47, 2, 0x7000);    /* #9445[043.4] */
RegWrite(0x43, 1, 0x07);    /* #9446[043.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x058D*/    /* #9447[043.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0581*/    /* #9448[043.4] */
RegWrite(0x47, 2, 0x6800);    /* #9449[043.5] */
RegWrite(0x43, 1, 0x07);    /* #9450[043.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0573*/    /* #9451[043.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0570*/    /* #9452[043.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0565*/    /* #9453[043.5] */
RegWrite(0x47, 2, 0x6000);    /* #9454[043.5] */
RegWrite(0x43, 1, 0x07);    /* #9455[043.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0545*/    /* #9456[043.5] */
RegWrite(0x47, 2, 0x5800);    /* #9457[043.5] */
RegWrite(0x43, 1, 0x07);    /* #9458[043.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0530*/    /* #9459[043.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0523*/    /* #9460[043.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x051D*/    /* #9461[043.6] */
RegWrite(0x47, 2, 0x5000);    /* #9462[043.6] */
RegWrite(0x43, 1, 0x07);    /* #9463[043.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x04DE*/    /* #9464[043.6] */
RegWrite(0x47, 2, 0x40C0);    /* #9465[043.6] */
RegWrite(R_LEN, 2, 0x24EA);    /* #9466[043.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9467[043.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9468[043.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9469[043.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9470[043.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9471[043.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9472[044.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9473[044.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9474[044.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9475[044.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9476[044.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9477[044.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9478[044.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9479[044.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9480[044.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9481[044.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9482[044.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #9483[044.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #9484[044.7] */
RegWrite(0x43, 1, 0x03);    /* #9485[044.7] */
RegWrite(R_CTL, 1, 0x39);    /* #9486[044.7] */
RegWrite(0x34, 1, 0x03);    /* #9487[044.7] */
RegWrite(0x49, 1, 0x96);    /* #9488[044.7] */
{
 unsigned char uchRegs9489[]={
   0xAB /*!!0x01!!*/, 0x05 /*!!0x02!!*/, 0x24 /*!!0x03!!*/,
   0x60 /*!!0x04!!*/, 0x09 /*!!0x05!!*/, 0x10 /*!!R_STPS!!*/,
   0x00 /*!!R_STPSH!!*/, 0x64 /*!!0x08!!*/, 0x92 /*!!0x09!!*/,
   0x1E /*!!0x0A!!*/, 0x0E /*!!0x0B!!*/, 0x6D /*0x0C*/,
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
  RegWriteArray(R_ALL, 74, uchRegs9489);
}    /* #9489[044.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #9490[044.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #9491[044.8] */
RegWrite(R_CTL, 1, 0x39);    /* #9492[044.8] */
RegWrite(R_CTL, 1, 0x79);    /* #9493[044.8] */
RegWrite(R_CTL, 1, 0xF9);    /* #9494[044.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9495[044.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9496[044.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9497[045.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #9498[045.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9499[045.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x07D0*/    /* #9500[045.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9501[045.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x12C0*/    /* #9502[045.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9503[045.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20D0*/    /* #9504[045.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9505[045.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D50*/    /* #9506[045.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9507[045.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3840*/    /* #9508[045.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9509[045.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x44C0*/    /* #9510[045.6] */
BulkRead(fh,32768);   /* #9511[045.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9512[045.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0E20*/    /* #9513[045.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9514[045.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C30*/    /* #9515[045.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9516[045.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2720*/    /* #9517[046.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9518[046.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x33A0*/    /* #9519[046.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9520[046.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x41B0*/    /* #9521[046.1] */
BulkRead(fh,32768);   /* #9522[046.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9523[046.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0CA0*/    /* #9524[046.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9525[046.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1AB0*/    /* #9526[046.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9527[046.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2730*/    /* #9528[046.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9529[046.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3220*/    /* #9530[046.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9531[046.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4030*/    /* #9532[046.6] */
BulkRead(fh,32768);   /* #9533[046.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9534[046.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0990*/    /* #9535[046.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9536[046.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1325*/    /* #9537[046.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9538[046.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F70*/    /* #9539[047.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9540[047.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A60*/    /* #9541[047.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9542[047.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x36E0*/    /* #9543[047.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9544[047.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x41D0*/    /* #9545[047.2] */
BulkRead(fh,32768);   /* #9546[047.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9547[047.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0E50*/    /* #9548[047.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9549[047.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1870*/    /* #9550[047.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9551[047.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x25C0*/    /* #9552[047.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9553[047.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30B0*/    /* #9554[047.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9555[047.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3D30*/    /* #9556[047.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9557[047.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4820*/    /* #9558[047.8] */
BulkRead(fh,32768);   /* #9559[047.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9560[047.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1180*/    /* #9561[048.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9562[048.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1FF8*/    /* #9563[048.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9564[048.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2C10*/    /* #9565[048.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9566[048.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3A20*/    /* #9567[048.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9568[048.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4510*/    /* #9569[048.3] */
BulkRead(fh,32768);   /* #9570[048.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9571[048.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1119*/    /* #9572[048.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9573[048.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B0B*/    /* #9574[048.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9575[048.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x25E0*/    /* #9576[048.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9577[048.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x33F0*/    /* #9578[048.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9579[048.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E60*/    /* #9580[048.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9581[048.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4E80*/    /* #9582[048.9] */
BulkRead(fh,32768);   /* #9583[049.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9584[049.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x17E0*/    /* #9585[049.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9586[049.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x22D0*/    /* #9587[049.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9588[049.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F50*/    /* #9589[049.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9590[049.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3A40*/    /* #9591[049.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9592[049.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4800*/    /* #9593[049.4] */
BulkRead(fh,32768);   /* #9594[049.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9595[049.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1020*/    /* #9596[049.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9597[049.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1CA0*/    /* #9598[049.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9599[049.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2790*/    /* #9600[049.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9601[049.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3280*/    /* #9602[049.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9603[049.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4090*/    /* #9604[049.9] */
BulkRead(fh,32768);   /* #9605[049.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9606[049.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x094D*/    /* #9607[050.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9608[050.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1670*/    /* #9609[050.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9610[050.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2160*/    /* #9611[050.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9612[050.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2DE0*/    /* #9613[050.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9614[050.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3A60*/    /* #9615[050.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9616[050.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x46E0*/    /* #9617[050.5] */
BulkRead(fh,32768);   /* #9618[050.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9619[050.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1360*/    /* #9620[050.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9621[050.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B30*/    /* #9622[050.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9623[050.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2620*/    /* #9624[050.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9625[050.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3430*/    /* #9626[050.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9627[051.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x41F6*/    /* #9628[051.0] */
BulkRead(fh,32768);   /* #9629[051.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9630[051.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0A10*/    /* #9631[051.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9632[051.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1500*/    /* #9633[051.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9634[051.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1FF0*/    /* #9635[051.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9636[051.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2AE0*/    /* #9637[051.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9638[051.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x35D0*/    /* #9639[051.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9640[051.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40C0*/    /* #9641[051.5] */
BulkRead(fh,32768);   /* #9642[051.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9643[051.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0A20*/    /* #9644[051.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9645[051.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1380*/    /* #9646[051.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9647[051.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2190*/    /* #9648[051.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9649[051.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x308A*/    /* #9650[052.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9651[052.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3DB0*/    /* #9652[052.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9653[052.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4A30*/    /* #9654[052.1] */
BulkRead(fh,32768);   /* #9655[052.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9656[052.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x131D*/    /* #9657[052.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9658[052.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E80*/    /* #9659[052.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9660[052.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2C90*/    /* #9661[052.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9662[052.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3910*/    /* #9663[052.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9664[052.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x45DE*/    /* #9665[052.6] */
BulkRead(fh,32768);   /* #9666[052.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9667[052.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0EF0*/    /* #9668[052.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9669[052.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19E0*/    /* #9670[052.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9671[052.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x24D0*/    /* #9672[053.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9673[053.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3150*/    /* #9674[053.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9675[053.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B77*/    /* #9676[053.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9677[053.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x45A0*/    /* #9678[053.2] */
BulkRead(fh,32768);   /* #9679[053.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9680[053.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1220*/    /* #9681[053.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9682[053.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B80*/    /* #9683[053.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9684[053.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2990*/    /* #9685[053.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9686[053.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3480*/    /* #9687[053.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9688[053.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4100*/    /* #9689[053.7] */
BulkRead(fh,32768);   /* #9690[053.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9691[053.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0BF0*/    /* #9692[053.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9693[053.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1870*/    /* #9694[053.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9695[053.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2360*/    /* #9696[054.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9697[054.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E50*/    /* #9698[054.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9699[054.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3940*/    /* #9700[054.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9701[054.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4750*/    /* #9702[054.3] */
BulkRead(fh,32768);   /* #9703[054.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9704[054.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x10B0*/    /* #9705[054.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9706[054.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1EC0*/    /* #9707[054.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9708[054.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D45*/    /* #9709[054.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9710[054.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3AE0*/    /* #9711[054.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9712[054.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x48F0*/    /* #9713[054.8] */
BulkRead(fh,32768);   /* #9714[054.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9715[054.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13E0*/    /* #9716[055.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9717[055.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2060*/    /* #9718[055.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9719[055.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B50*/    /* #9720[055.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9721[055.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3960*/    /* #9722[055.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9723[055.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x45E0*/    /* #9724[055.3] */
BulkRead(fh,32768);   /* #9725[055.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9726[055.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0F40*/    /* #9727[055.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9728[055.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A30*/    /* #9729[055.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9730[055.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x26B0*/    /* #9731[055.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9732[055.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x31A0*/    /* #9733[055.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9734[055.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E6D*/    /* #9735[055.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9736[055.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4910*/    /* #9737[055.9] */
BulkRead(fh,32768);   /* #9738[055.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9739[056.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1270*/    /* #9740[056.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9741[056.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1EF0*/    /* #9742[056.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9743[056.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x29E0*/    /* #9744[056.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9745[056.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x37F0*/    /* #9746[056.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9747[056.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4455*/    /* #9748[056.4] */
BulkRead(fh,32768);   /* #9749[056.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9750[056.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0DD0*/    /* #9751[056.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9752[056.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1BE0*/    /* #9753[056.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9754[056.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x26D0*/    /* #9755[056.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9756[056.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3350*/    /* #9757[056.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9758[056.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E40*/    /* #9759[057.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9760[057.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x49F7*/    /* #9761[057.0] */
BulkRead(fh,32768);   /* #9762[057.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9763[057.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0F95*/    /* #9764[057.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9765[057.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1BF0*/    /* #9766[057.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9767[057.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2870*/    /* #9768[057.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9769[057.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x34F0*/    /* #9770[057.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9771[057.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3FE0*/    /* #9772[057.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9773[057.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4C60*/    /* #9774[057.5] */
BulkRead(fh,32768);   /* #9775[057.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9776[057.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1430*/    /* #9777[057.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9778[057.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D90*/    /* #9779[057.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9780[057.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D30*/    /* #9781[057.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9782[057.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3820*/    /* #9783[058.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9784[058.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4180*/    /* #9785[058.0] */
BulkRead(fh,32768);   /* #9786[058.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9787[058.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0AE0*/    /* #9788[058.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9789[058.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1440*/    /* #9790[058.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9791[058.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2250*/    /* #9792[058.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9793[058.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3060*/    /* #9794[058.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9795[058.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B50*/    /* #9796[058.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9797[058.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4640*/    /* #9798[058.6] */
BulkRead(fh,32768);   /* #9799[058.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9800[058.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0FA0*/    /* #9801[058.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9802[058.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A90*/    /* #9803[058.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9804[058.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2710*/    /* #9805[058.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9806[059.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3520*/    /* #9807[059.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9808[059.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4010*/    /* #9809[059.1] */
BulkRead(fh,32768);   /* #9810[059.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9811[059.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x07E0*/    /* #9812[059.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9813[059.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1140*/    /* #9814[059.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9826[059.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1790*/    /* #9827[059.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4800*/    /* #9835[060.2] */
BulkRead(fh,32768);   /* #9836[060.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9845[060.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4360*/    /* #9846[060.7] */
BulkRead(fh,32768);   /* #9847[061.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9856[061.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4500*/    /* #9857[061.3] */
BulkRead(fh,32768);   /* #9858[061.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9861[061.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1950*/    /* #9862[061.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9872[061.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1190*/    /* #9873[062.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9876[062.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2DB0*/    /* #9877[062.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9887[062.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2AA0*/    /* #9888[062.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9889[062.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3400*/    /* #9890[062.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9891[062.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9896[063.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x14D0*/    /* #9897[063.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9902[063.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3AEB*/    /* #9903[063.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9904[063.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x12E9*/    /* #9908[063.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9909[063.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4870*/    /* #9916[064.0] */
BulkRead(fh,32768);   /* #9917[064.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9922[064.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2490*/    /* #9923[064.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9926[064.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40B0*/    /* #9927[064.5] */
BulkRead(fh,32768);   /* #9928[064.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3120*/    /* #9936[065.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9937[065.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9948[065.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3770*/    /* #9949[065.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9961[066.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40E0*/    /* #9962[066.1] */
BulkRead(fh,32768);   /* #9963[066.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9970[066.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3150*/    /* #9971[066.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9983[067.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x37A0*/    /* #9984[067.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #9996[067.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C60*/    /* #9997[067.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10005[068.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B40*/    /* #10006[068.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10020[068.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3AF0*/    /* #10021[068.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2644*/    /* #10030[069.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10031[069.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10040[069.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x23A0*/    /* #10041[069.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10042[069.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x31B0*/    /* #10043[069.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10051[070.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2090*/    /* #10052[070.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10062[070.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20A0*/    /* #10063[070.8] */
ulVal2 = RegRead(R_CSTAT, 2); /*=0x2EB0*/    /* #10065[070.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10066[070.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3CC0*/    /* #10067[071.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10075[071.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BA0*/    /* #10076[071.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10079[071.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4310*/    /* #10080[071.5] */
BulkRead(fh,32768);   /* #10081[071.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10088[071.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3380*/    /* #10089[072.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10097[072.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2710*/    /* #10098[072.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10108[072.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2270*/    /* #10109[072.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10112[073.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C48*/    /* #10113[073.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10114[073.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10119[073.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F60*/    /* #10120[073.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10121[073.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A50*/    /* #10122[073.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10132[073.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2028*/    /* #10133[074.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10145[074.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1DE9*/    /* #10146[074.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10156[075.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F90*/    /* #10157[075.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10158[075.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1320*/    /* #10166[075.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10167[075.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10178[076.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E20*/    /* #10179[076.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10182[076.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3720*/    /* #10183[076.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10189[076.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1CA0*/    /* #10190[076.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10191[076.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2AB0*/    /* #10192[076.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10193[076.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10202[077.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x27A0*/    /* #10203[077.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4230*/    /* #10207[077.5] */
BulkRead(fh,32768);   /* #10208[077.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10211[077.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19A0*/    /* #10212[077.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10213[077.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2490*/    /* #10214[077.8] */
BulkRead(fh,32768);   /* #10221[078.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10222[078.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10224[078.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1FF0*/    /* #10225[078.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10235[078.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19C0*/    /* #10236[078.9] */
ulVal2 = RegRead(R_CSTAT, 2); /*=0x43F0*/    /* #10242[079.1] */
BulkRead(fh,32768);   /* #10243[079.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10255[079.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0A40*/    /* #10256[080.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4280*/    /* #10266[080.2] */
BulkRead(fh,32768);   /* #10267[080.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10278[080.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x48D0*/    /* #10279[080.8] */
BulkRead(fh,32768);   /* #10280[081.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10292[081.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0E44*/    /* #10293[081.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10302[081.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x45D0*/    /* #10303[081.8] */
BulkRead(fh,32768);   /* #10304[082.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3AF0*/    /* #10314[082.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10315[082.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10324[082.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B00*/    /* #10325[082.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10335[083.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x37F0*/    /* #10336[083.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10346[083.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x34E0*/    /* #10347[083.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10359[084.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3680*/    /* #10360[084.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10368[084.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3370*/    /* #10369[085.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10379[085.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3060*/    /* #10380[085.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A30*/    /* #10391[086.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10392[086.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10405[086.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BB1*/    /* #10406[086.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10412[086.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F60*/    /* #10413[086.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10418[087.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3EA0*/    /* #10419[087.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10427[087.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F10*/    /* #10428[087.6] */
BulkRead(fh,32768);   /* #10433[087.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10434[088.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10445[088.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x14A0*/    /* #10446[088.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10453[088.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x41F0*/    /* #10454[088.8] */
BulkRead(fh,32768);   /* #10455[089.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10462[089.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3260*/    /* #10463[089.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10471[089.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2016*/    /* #10472[089.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10473[089.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2C30*/    /* #10474[089.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10482[090.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1FC0*/    /* #10483[090.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10495[090.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2610*/    /* #10496[090.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10499[090.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40A0*/    /* #10500[090.9] */
BulkRead(fh,32768);   /* #10501[091.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10512[091.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4880*/    /* #10513[091.6] */
BulkRead(fh,32768);   /* #10514[091.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10521[091.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x36B1*/    /* #10522[092.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #10528[092.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2000*/    /* #10529[092.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #10539[092.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1070*/    /* #10540[092.8] */
BulkRead(fh,8416);   /* #10541[093.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0000*/    /* #10569[093.4] */
RegWrite(0x47, 2, 0xA000);    /* #10570[093.4] */
RegWrite(0x47, 2, 0x6800);    /* #10589[093.8] */
RegWrite(0x43, 1, 0x07);    /* #10590[093.9] */
ulVal1 = RegRead(R_POS, 1); /*=0xD9*/    /* #10603[094.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10604[094.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10605[094.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10606[094.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10607[094.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10608[095.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10609[095.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10610[095.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10611[095.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10612[095.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10613[095.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10614[095.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10615[095.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10616[095.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10617[095.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10618[096.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10619[096.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10620[096.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10621[096.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10622[096.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10623[096.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10624[096.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10625[096.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10626[096.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10627[096.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10628[097.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10629[097.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10630[097.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10631[097.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10632[097.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10633[097.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10634[097.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10635[097.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10636[097.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #10637[098.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #10638[098.0] */
RegWrite(0x43, 1, 0x03);    /* #10639[098.0] */
RegWrite(R_CTL, 1, 0x39);    /* #10640[098.0] */
