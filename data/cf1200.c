ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #5237[156.2] */
RegWrite(0x43, 1, 0x03);    /* #5238[156.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #5239[156.2] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #5240[156.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #5241[156.2] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #5242[156.2] */
RegWrite(0x32, 2, 0x2D0B);    /* #5243[156.2] */
{
 unsigned char uchRegs5244[]={
   0x00 /*R_SPOS*/, 0x00 /*R_SPOSH*/, 0x3F /*0x03*/,
   0x10 /*R_SWID*/, 0xC0 /*R_SWIDH*/, 0x00 /*R_STPS*/,
   0x00 /*R_STPSH*/, 0xFF /*0x08*/, 0xFF /*0x09*/,
   0x20 /*R_LEN*/, 0x00 /*R_LENH*/, 0x6D /*0x0C*/,
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
   0x80 /*R_CCAL3*/, 0x29 /*0x32*/, 0x35 /*0x33*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs5244);
}    /* #5244[156.3] */
RegWrite(0x43, 1, 0x03);    /* #5245[156.3] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #5246[156.3] */
RegWrite(R_CCAL, 3, 0x848888);    /* #5247[156.3] */
RegWrite(0x32, 2, 0x2D0B);    /* #5248[156.3] */
RegWrite(0x32, 2, 0x2D0B);    /* #5249[156.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #5250[156.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #5251[156.3] */
RegWrite(0x32, 2, 0x2D0B);    /* #5252[156.3] */
{
 unsigned char uchRegs5253[]={
   0x00 /*R_SPOS*/, 0x00 /*R_SPOSH*/, 0x3F /*0x03*/,
   0x10 /*R_SWID*/, 0xC0 /*R_SWIDH*/, 0x00 /*R_STPS*/,
   0x00 /*R_STPSH*/, 0xFF /*0x08*/, 0xFF /*0x09*/,
   0x20 /*R_LEN*/, 0x00 /*R_LENH*/, 0x6D /*0x0C*/,
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
   0x80 /*R_CCAL3*/, 0x29 /*0x32*/, 0x35 /*0x33*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs5253);
}    /* #5253[156.3] */
RegWrite(0x43, 1, 0x03);    /* #5254[156.3] */
RegWrite(R_CCAL, 3, 0x808080);    /* #5255[156.3] */
RegWrite(0x32, 2, 0x2D0B);    /* #5256[156.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #5257[156.3] */
RegWrite(0x32, 2, 0x2D0B);    /* #5258[156.3] */
RegWrite(0x34, 1, 0x63);    /* #5259[156.3] */
RegWrite(0x49, 1, 0x9E);    /* #5260[156.3] */
{
 unsigned char uchRegs5261[]={
   0x00 /*R_SPOS*/, 0x00 /*R_SPOSH*/, 0x3F /*0x03*/,
   0x40 /*!!R_SWID!!*/, 0x00 /*!!R_SWIDH!!*/, 0xC8 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!R_LEN!!*/, 0x00 /*R_LENH*/, 0x6D /*0x0C*/,
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
   0x80 /*R_CCAL3*/, 0x0B /*!!0x32!!*/, 0x2D /*!!0x33!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs5261);
}    /* #5261[156.3] */
RegWrite(R_CTL, 1, 0x39);    /* #5262[156.3] */
RegWrite(R_CTL, 1, 0x79);    /* #5263[156.3] */
RegWrite(R_CTL, 1, 0xF9);    /* #5264[156.3] */
RegWrite(0x32, 2, 0x2D0B);    /* #5265[156.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5266[156.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5267[156.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5268[156.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5269[156.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5270[156.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5271[156.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5272[156.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5273[156.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5274[156.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5275[156.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5276[156.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #5277[156.9] */
RegWrite(R_LMP, 1, 0x01);    /* #5278[156.9] */
RegWrite(R_LMP, 1, 0x01);    /* #5279[157.0] */
RegWrite(R_CTL, 1, 0x39);    /* #5280[157.0] */
RegWrite(0x34, 1, 0x63);    /* #5281[157.0] */
RegWrite(0x49, 1, 0x96);    /* #5282[157.0] */
{
 unsigned char uchRegs5283[]={
   0xFC /*!!R_SPOS!!*/, 0x00 /*R_SPOSH*/, 0x3F /*0x03*/,
   0xEC /*!!R_SWID!!*/, 0x93 /*!!R_SWIDH!!*/, 0x00 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0xAA /*!!0x08!!*/, 0xAA /*!!0x09!!*/,
   0x44 /*!!R_LEN!!*/, 0x00 /*R_LENH*/, 0x6D /*0x0C*/,
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
   0x80 /*R_CCAL3*/, 0x0B /*0x32*/, 0x2D /*0x33*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x20 /*!!0x41!!*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*!!0x49!!*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs5283);
}    /* #5283[157.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #5284[157.0] */
RegWrite(R_CTL, 1, 0x39);    /* #5285[157.0] */
RegWrite(R_CTL, 1, 0x79);    /* #5286[157.0] */
RegWrite(R_CTL, 1, 0xF9);    /* #5287[157.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5288[157.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F97*/    /* #5289[157.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5290[157.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB34C*/    /* #5291[157.1] */
BulkRead(fh,32768);   /* #5292[157.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5293[157.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xEAD4*/    /* #5294[157.2] */
BulkRead(fh,32768);   /* #5295[157.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5296[157.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFA54*/    /* #5297[157.2] */
BulkRead(fh,32768);   /* #5298[157.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5299[157.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5300[157.2] */
BulkRead(fh,32768);   /* #5301[157.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5302[157.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5303[157.3] */
BulkRead(fh,32768);   /* #5304[157.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5305[157.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5306[157.3] */
BulkRead(fh,32768);   /* #5307[157.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5308[157.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5309[157.4] */
BulkRead(fh,32768);   /* #5310[157.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5311[157.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5312[157.5] */
BulkRead(fh,32768);   /* #5313[157.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5314[157.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5315[157.5] */
BulkRead(fh,32768);   /* #5316[157.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5317[157.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5318[157.6] */
BulkRead(fh,32768);   /* #5319[157.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5320[157.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5321[157.6] */
BulkRead(fh,32768);   /* #5322[157.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5323[157.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5324[157.7] */
BulkRead(fh,32768);   /* #5325[157.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5326[157.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5327[157.7] */
BulkRead(fh,32768);   /* #5328[157.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5329[157.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5330[157.7] */
BulkRead(fh,32768);   /* #5331[157.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5332[157.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5333[157.8] */
BulkRead(fh,32768);   /* #5334[157.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5335[157.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5336[157.8] */
BulkRead(fh,32768);   /* #5337[157.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5338[157.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5339[157.9] */
BulkRead(fh,32768);   /* #5340[157.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5341[157.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5342[158.0] */
BulkRead(fh,32768);   /* #5343[158.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5344[158.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5345[158.0] */
BulkRead(fh,32768);   /* #5346[158.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5347[158.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5348[158.1] */
BulkRead(fh,32768);   /* #5349[158.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5350[158.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5351[158.1] */
BulkRead(fh,32768);   /* #5352[158.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5353[158.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5354[158.2] */
BulkRead(fh,32768);   /* #5355[158.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5356[158.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5357[158.2] */
BulkRead(fh,32768);   /* #5358[158.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5359[158.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5360[158.2] */
BulkRead(fh,32768);   /* #5361[158.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5362[158.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5363[158.3] */
BulkRead(fh,32768);   /* #5364[158.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5365[158.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5366[158.3] */
BulkRead(fh,32768);   /* #5367[158.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5368[158.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5369[158.4] */
BulkRead(fh,32768);   /* #5370[158.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5371[158.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #5372[158.5] */
BulkRead(fh,32768);   /* #5373[158.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #5374[158.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF008*/    /* #5375[158.5] */
BulkRead(fh,32768);   /* #5376[158.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB008*/    /* #5377[158.6] */
BulkRead(fh,32768);   /* #5378[158.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #5379[158.6] */
BulkRead(fh,32768);   /* #5380[158.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #5381[158.7] */
BulkRead(fh,24592);   /* #5382[158.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #5383[158.7] */
RegWrite(0x43, 1, 0x03);    /* #5384[158.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #5385[158.7] */
{
 unsigned char uchRegs5386[]={
   0x00 /*!!R_SPOS!!*/, 0x00 /*R_SPOSH*/, 0x00 /*!!0x03!!*/,
   0x00 /*!!R_SWID!!*/, 0x00 /*!!R_SWIDH!!*/, 0x00 /*R_STPS*/,
   0x00 /*R_STPSH*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!R_LEN!!*/, 0x00 /*R_LENH*/, 0x6D /*0x0C*/,
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
   0x80 /*R_CCAL3*/, 0x0B /*0x32*/, 0x2D /*0x33*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x80 /*!!0x41!!*/, 0x80 /*!!R_CSTAT!!*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x79 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs5386);
}    /* #5386[158.7] */
RegWrite(R_CTL, 1, 0x39);    /* #5387[158.7] */
RegWrite(R_CTL, 1, 0x79);    /* #5388[158.7] */
RegWrite(R_CTL, 1, 0xF9);    /* #5389[158.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5390[158.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5391[158.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5392[158.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5393[158.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5394[158.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #5395[158.8] */
RegWrite(R_CTL, 1, 0x39);    /* #5396[158.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #5397[158.8] */
RegWrite(0x32, 2, 0x2D0B);    /* #5398[158.8] */
RegWrite(0x34, 1, 0x63);    /* #5399[158.8] */
RegWrite(0x49, 1, 0x9E);    /* #5400[158.8] */
{
 unsigned char uchRegs5401[]={
   0x00 /*R_SPOS*/, 0x00 /*R_SPOSH*/, 0x3F /*!!0x03!!*/,
   0x40 /*!!R_SWID!!*/, 0x00 /*R_SWIDH*/, 0x44 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
   0x00 /*R_LEN*/, 0x00 /*R_LENH*/, 0x6D /*0x0C*/,
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
   0x80 /*R_CCAL3*/, 0x0B /*0x32*/, 0x2D /*0x33*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*!!0x41!!*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs5401);
}    /* #5401[158.8] */
RegWrite(R_CTL, 1, 0x19);    /* #5402[158.8] */
RegWrite(R_CTL, 1, 0x59);    /* #5403[158.8] */
RegWrite(R_CTL, 1, 0xD9);    /* #5404[158.8] */
RegWrite(0x32, 2, 0x2D0B);    /* #5405[158.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5406[158.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5407[158.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5408[159.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5409[159.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5410[159.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #5411[159.5] */
RegWrite(R_LMP, 1, 0x01);    /* #5412[159.5] */
RegWrite(R_LMP, 1, 0x01);    /* #5413[159.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #5414[159.5] */
RegWrite(0x32, 2, 0x2D0B);    /* #5415[159.5] */
RegWrite(0x34, 1, 0x63);    /* #5416[159.5] */
RegWrite(0x49, 1, 0x9E);    /* #5417[159.5] */
{
 unsigned char uchRegs5418[]={
   0x00 /*R_SPOS*/, 0x00 /*R_SPOSH*/, 0x3F /*0x03*/,
   0x40 /*R_SWID*/, 0x00 /*R_SWIDH*/, 0xC8 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
   0x00 /*R_LEN*/, 0x00 /*R_LENH*/, 0x6D /*0x0C*/,
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
   0x80 /*R_CCAL3*/, 0x0B /*0x32*/, 0x2D /*0x33*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x59 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs5418);
}    /* #5418[159.6] */
RegWrite(R_CTL, 1, 0x19);    /* #5419[159.6] */
RegWrite(R_CTL, 1, 0x59);    /* #5420[159.6] */
RegWrite(R_CTL, 1, 0xD9);    /* #5421[159.6] */
RegWrite(0x32, 2, 0x2D0B);    /* #5422[159.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5423[159.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5424[159.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5425[159.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5426[159.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5427[159.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5428[159.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5429[160.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5430[160.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5431[160.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5432[160.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #5433[160.2] */
RegWrite(0x32, 2, 0x2D0B);    /* #5434[160.2] */
RegWrite(R_LMP, 1, 0x01);    /* #5435[160.2] */
RegWrite(R_LMP, 1, 0x01);    /* #5436[160.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #5437[160.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #5438[160.2] */
RegWrite(R_CTL, 1, 0x39);    /* #5439[160.2] */
RegWrite(0x34, 1, 0x63);    /* #5440[160.2] */
RegWrite(0x49, 1, 0x96);    /* #5441[160.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #5442[160.2] */
RegWrite(0x32, 2, 0x2D0B);    /* #5443[160.2] */
RegWrite(0x34, 1, 0x63);    /* #5444[160.2] */
RegWrite(0x49, 1, 0x9E);    /* #5445[160.2] */
{
 unsigned char uchRegs5446[]={
   0x00 /*R_SPOS*/, 0x00 /*R_SPOSH*/, 0x3F /*0x03*/,
   0x40 /*R_SWID*/, 0x00 /*R_SWIDH*/, 0x9F /*!!R_STPS!!*/,
   0x01 /*!!R_STPSH!!*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
   0x00 /*R_LEN*/, 0x00 /*R_LENH*/, 0x6D /*0x0C*/,
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
   0x80 /*R_CCAL3*/, 0x0B /*0x32*/, 0x2D /*0x33*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs5446);
}    /* #5446[160.2] */
RegWrite(R_CTL, 1, 0x39);    /* #5447[160.2] */
RegWrite(R_CTL, 1, 0x79);    /* #5448[160.2] */
RegWrite(R_CTL, 1, 0xF9);    /* #5449[160.2] */
RegWrite(0x32, 2, 0x2D0B);    /* #5450[160.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5451[160.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5452[160.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5453[160.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5454[160.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5455[160.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5456[160.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5457[160.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5458[160.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5459[160.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5460[160.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5461[160.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5462[160.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5463[160.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5464[161.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5465[161.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5466[161.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5467[161.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5468[161.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #5469[161.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #5470[161.3] */
RegWrite(0x43, 1, 0x03);    /* #5471[161.3] */
RegWrite(R_CTL, 1, 0x39);    /* #5472[161.3] */
RegWrite(0x34, 1, 0x03);    /* #5473[161.3] */
RegWrite(0x49, 1, 0x96);    /* #5474[161.3] */
{
 unsigned char uchRegs5475[]={
   0xFC /*!!R_SPOS!!*/, 0x00 /*R_SPOSH*/, 0x3F /*0x03*/,
   0x65 /*!!R_SWID!!*/, 0xC2 /*!!R_SWIDH!!*/, 0x06 /*!!R_STPS!!*/,
   0x00 /*!!R_STPSH!!*/, 0xFF /*!!0x08!!*/, 0xFF /*!!0x09!!*/,
   0x72 /*!!R_LEN!!*/, 0x02 /*!!R_LENH!!*/, 0x6D /*0x0C*/,
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
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0x0B /*0x32*/, 0x2D /*0x33*/,
   0x03 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC2 /*!!0x47!!*/, 0x40 /*0x48*/,
   0x96 /*!!0x49!!*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs5475);
}    /* #5475[161.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #5476[161.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #5477[161.4] */
RegWrite(R_CTL, 1, 0x39);    /* #5478[161.4] */
RegWrite(R_CTL, 1, 0x79);    /* #5479[161.5] */
RegWrite(R_CTL, 1, 0xF9);    /* #5480[161.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5481[161.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #5482[161.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5483[161.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x10C3*/    /* #5484[161.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5485[161.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x35E0*/    /* #5486[161.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5487[161.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x53CF*/    /* #5488[161.9] */
BulkRead(fh,32768);   /* #5489[161.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5490[162.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E26*/    /* #5491[162.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5492[162.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4C14*/    /* #5493[162.1] */
BulkRead(fh,32768);   /* #5494[162.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5495[162.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x21A1*/    /* #5496[162.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5497[162.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3AC6*/    /* #5498[162.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5499[162.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x551D*/    /* #5500[162.4] */
BulkRead(fh,32768);   /* #5501[162.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5502[162.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F74*/    /* #5503[162.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5504[162.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4169*/    /* #5505[162.5] */
BulkRead(fh,32768);   /* #5506[162.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5507[162.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x10FA*/    /* #5508[162.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5509[162.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x34E5*/    /* #5510[162.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5511[162.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x51A1*/    /* #5512[162.8] */
BulkRead(fh,32768);   /* #5513[162.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5514[162.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x272E*/    /* #5515[162.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5516[163.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E30*/    /* #5517[163.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5518[163.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5F73*/    /* #5519[163.1] */
BulkRead(fh,32768);   /* #5520[163.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5521[163.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x329B*/    /* #5522[163.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5523[163.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4828*/    /* #5524[163.2] */
BulkRead(fh,32768);   /* #5525[163.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5526[163.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x22E5*/    /* #5527[163.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5528[163.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3CA7*/    /* #5529[163.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5530[163.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5A5F*/    /* #5531[163.5] */
BulkRead(fh,32768);   /* #5532[163.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5533[163.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2DED*/    /* #5534[163.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5535[163.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x45DE*/    /* #5536[163.7] */
BulkRead(fh,32768);   /* #5537[163.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5538[163.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B6C*/    /* #5539[163.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5540[163.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BBF*/    /* #5541[164.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5542[164.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5616*/    /* #5543[164.1] */
BulkRead(fh,32768);   /* #5544[164.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5545[164.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4AC4*/    /* #5546[164.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5547[164.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5D88*/    /* #5548[164.3] */
BulkRead(fh,32768);   /* #5549[164.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5550[164.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3976*/    /* #5551[164.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5552[164.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x529A*/    /* #5553[164.5] */
BulkRead(fh,32768);   /* #5554[164.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5555[165.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xBF02*/    /* #5556[165.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5557[165.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xCC2E*/    /* #5558[165.1] */
BulkRead(fh,32768);   /* #5559[165.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5560[165.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9CF1*/    /* #5561[165.2] */
BulkRead(fh,32768);   /* #5562[165.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5563[165.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x6C81*/    /* #5564[165.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5565[165.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7615*/    /* #5566[165.3] */
BulkRead(fh,32768);   /* #5567[165.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5568[165.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4341*/    /* #5569[165.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5570[165.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x579B*/    /* #5571[165.4] */
BulkRead(fh,32768);   /* #5572[165.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5573[165.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3325*/    /* #5574[165.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5575[165.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4EAE*/    /* #5576[165.6] */
BulkRead(fh,32768);   /* #5577[165.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5578[165.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x26A0*/    /* #5579[165.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5580[165.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x698D*/    /* #5581[166.0] */
BulkRead(fh,32768);   /* #5582[166.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5583[166.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4536*/    /* #5584[166.1] */
BulkRead(fh,32768);   /* #5585[166.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5586[166.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1AC3*/    /* #5587[166.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5588[166.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2CB8*/    /* #5589[166.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5590[166.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4A3D*/    /* #5591[166.9] */
BulkRead(fh,32768);   /* #5592[166.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5593[166.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xAFE0*/    /* #5594[166.9] */
BulkRead(fh,32768);   /* #5595[166.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5596[166.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7BD9*/    /* #5597[167.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5598[167.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x843A*/    /* #5599[167.0] */
BulkRead(fh,32768);   /* #5600[167.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5601[167.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x54FD*/    /* #5602[167.0] */
BulkRead(fh,32768);   /* #5603[167.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5604[167.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A8A*/    /* #5605[167.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5606[167.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x31B9*/    /* #5607[167.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5608[167.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4B12*/    /* #5609[167.3] */
BulkRead(fh,32768);   /* #5610[167.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5611[167.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x22D0*/    /* #5612[167.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5613[167.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3050*/    /* #5614[167.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5615[167.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4B85*/    /* #5616[167.5] */
BulkRead(fh,32768);   /* #5617[167.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5618[167.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7746*/    /* #5619[167.9] */
BulkRead(fh,32768);   /* #5620[167.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5621[168.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5402*/    /* #5622[168.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5623[168.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x6260*/    /* #5624[168.0] */
BulkRead(fh,32768);   /* #5625[168.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5626[168.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3DE9*/    /* #5627[168.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5628[168.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xA745*/    /* #5629[168.5] */
BulkRead(fh,32768);   /* #5630[168.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5631[168.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7E05*/    /* #5632[168.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5633[168.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x8FFA*/    /* #5634[168.7] */
BulkRead(fh,32768);   /* #5635[168.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5636[168.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x691F*/    /* #5637[168.8] */
BulkRead(fh,32768);   /* #5638[168.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5639[168.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x45DB*/    /* #5640[168.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5641[168.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5903*/    /* #5642[168.9] */
BulkRead(fh,32768);   /* #5643[169.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5644[169.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x348C*/    /* #5645[169.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5646[169.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4DB1*/    /* #5647[169.1] */
BulkRead(fh,32768);   /* #5648[169.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5649[169.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x25A3*/    /* #5650[169.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5651[170.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xC877*/    /* #5652[170.2] */
BulkRead(fh,32768);   /* #5653[170.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #5654[170.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x8877*/    /* #5655[170.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x8877*/    /* #5656[170.2] */
BulkRead(fh,32768);   /* #5657[170.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4877*/    /* #5658[170.3] */
BulkRead(fh,32768);   /* #5659[170.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0877*/    /* #5660[170.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0877*/    /* #5661[170.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0877*/    /* #5662[170.4] */
BulkRead(fh,4334);   /* #5663[170.4] */
RegWrite(0x43, 1, 0x03);    /* #5664[170.4] */
RegWrite(0x43, 1, 0x03);    /* #5665[170.5] */
RegWrite(R_CTL, 1, 0x39);    /* #5666[170.5] */
{
 unsigned char uchRegs5667[]={
   0x00 /*!!R_SPOS!!*/, 0x00 /*R_SPOSH*/, 0x00 /*!!0x03!!*/,
   0x00 /*!!R_SWID!!*/, 0x00 /*!!R_SWIDH!!*/, 0x00 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!R_LEN!!*/, 0x00 /*!!R_LENH!!*/, 0x6D /*0x0C*/,
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
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0x0B /*0x32*/, 0x2D /*0x33*/,
   0x03 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x80 /*!!0x41!!*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC2 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs5667);
}    /* #5667[170.5] */
RegWrite(R_CTL, 1, 0x39);    /* #5668[170.5] */
RegWrite(R_CTL, 1, 0x79);    /* #5669[170.6] */
RegWrite(R_CTL, 1, 0xF9);    /* #5670[170.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5671[170.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #5672[170.7] */
RegWrite(R_CTL, 1, 0x39);    /* #5673[170.7] */
RegWrite(0x43, 1, 0x07);    /* #5674[170.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #5675[170.7] */
RegWrite(0x32, 2, 0x2D0B);    /* #5676[170.7] */
RegWrite(0x34, 1, 0xC3);    /* #5677[170.7] */
RegWrite(0x49, 1, 0x9E);    /* #5678[170.8] */
{
 unsigned char uchRegs5679[]={
   0x00 /*R_SPOS*/, 0x00 /*R_SPOSH*/, 0x3F /*!!0x03!!*/,
   0x40 /*!!R_SWID!!*/, 0x00 /*R_SWIDH*/, 0x17 /*!!R_STPS!!*/,
   0x04 /*!!R_STPSH!!*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
   0x00 /*R_LEN*/, 0x00 /*R_LENH*/, 0x6D /*0x0C*/,
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
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0x0B /*0x32*/, 0x2D /*0x33*/,
   0xC3 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*!!0x41!!*/, 0x80 /*R_CSTAT*/,
   0x07 /*!!0x43!!*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*!!0x47!!*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs5679);
}    /* #5679[170.8] */
RegWrite(0x43, 1, 0x03);    /* #5680[170.8] */
RegWrite(R_STPS, 2, 0x0000);    /* #5681[170.8] */
RegWrite(R_LEN, 2, 0x0417);    /* #5682[170.8] */
RegWrite(0x47, 2, 0xA000);    /* #5683[170.9] */
RegWrite(0x34, 1, 0xC3);    /* #5684[170.9] */
RegWrite(0x49, 1, 0x9E);    /* #5685[170.9] */
RegWrite(R_CTL, 1, 0x19);    /* #5686[170.9] */
RegWrite(R_CTL, 1, 0x59);    /* #5687[171.0] */
RegWrite(R_CTL, 1, 0xD9);    /* #5688[171.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0409*/    /* #5689[171.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0400*/    /* #5690[171.0] */
RegWrite(0x47, 2, 0xA000);    /* #5691[171.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x03EE*/    /* #5692[171.1] */
RegWrite(0x47, 2, 0x9800);    /* #5693[171.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x03D0*/    /* #5694[171.1] */
RegWrite(0x47, 2, 0x9000);    /* #5695[171.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x03BB*/    /* #5696[171.2] */
RegWrite(0x47, 2, 0x8800);    /* #5697[171.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x03A6*/    /* #5698[171.2] */
RegWrite(0x47, 2, 0x8000);    /* #5699[171.2] */
RegWrite(0x43, 1, 0x07);    /* #5700[171.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x037B*/    /* #5701[171.3] */
RegWrite(0x47, 2, 0x7800);    /* #5702[171.3] */
RegWrite(0x43, 1, 0x07);    /* #5703[171.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x0358*/    /* #5704[171.3] */
RegWrite(0x47, 2, 0x7000);    /* #5705[171.3] */
RegWrite(0x43, 1, 0x07);    /* #5706[171.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x032D*/    /* #5707[171.4] */
RegWrite(0x47, 2, 0x6800);    /* #5708[171.4] */
RegWrite(0x43, 1, 0x07);    /* #5709[171.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x02F4*/    /* #5710[171.5] */
RegWrite(0x47, 2, 0x6000);    /* #5711[171.5] */
RegWrite(0x43, 1, 0x07);    /* #5712[171.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x02C7*/    /* #5713[171.5] */
RegWrite(0x47, 2, 0x5800);    /* #5714[171.5] */
RegWrite(0x43, 1, 0x07);    /* #5715[171.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x025E*/    /* #5716[171.6] */
RegWrite(0x47, 2, 0x5000);    /* #5717[171.6] */
RegWrite(0x43, 1, 0x07);    /* #5718[171.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x022F*/    /* #5719[171.7] */
RegWrite(0x47, 2, 0x40C0);    /* #5720[171.7] */
RegWrite(0x32, 2, 0x2D0B);    /* #5721[171.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5722[172.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #5723[172.2] */
RegWrite(0x43, 1, 0x03);    /* #5724[172.2] */
RegWrite(R_CTL, 1, 0x39);    /* #5725[172.2] */
