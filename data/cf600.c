ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #4727[099.7] */
RegWrite(0x43, 1, 0x03);    /* #4728[099.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4729[099.8] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #4730[099.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4731[099.8] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #4732[099.8] */
RegWrite(0x32, 2, 0x2D0B);    /* #4733[099.8] */
{
 unsigned char uchRegs4734[]={
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
  RegWriteArray(R_ALL, 74, uchRegs4734);
}    /* #4734[099.8] */
RegWrite(0x43, 1, 0x03);    /* #4735[099.8] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #4736[099.8] */
RegWrite(R_CCAL, 3, 0x848888);    /* #4737[099.8] */
RegWrite(0x32, 2, 0x2D0B);    /* #4738[099.8] */
RegWrite(0x32, 2, 0x2D0B);    /* #4739[099.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4740[099.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4741[099.8] */
RegWrite(0x32, 2, 0x2D0B);    /* #4742[099.8] */
{
 unsigned char uchRegs4743[]={
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
  RegWriteArray(R_ALL, 74, uchRegs4743);
}    /* #4743[099.8] */
RegWrite(0x43, 1, 0x03);    /* #4744[099.8] */
RegWrite(R_CCAL, 3, 0x808080);    /* #4745[099.8] */
RegWrite(0x32, 2, 0x2D0B);    /* #4746[099.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4747[099.8] */
RegWrite(0x32, 2, 0x2D0B);    /* #4748[099.8] */
RegWrite(0x34, 1, 0x63);    /* #4749[099.8] */
RegWrite(0x49, 1, 0x9E);    /* #4750[099.8] */
{
 unsigned char uchRegs4751[]={
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
  RegWriteArray(R_ALL, 74, uchRegs4751);
}    /* #4751[099.8] */
RegWrite(R_CTL, 1, 0x39);    /* #4752[099.9] */
RegWrite(R_CTL, 1, 0x79);    /* #4753[099.9] */
RegWrite(R_CTL, 1, 0xF9);    /* #4754[099.9] */
RegWrite(0x32, 2, 0x2D0B);    /* #4755[099.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4756[099.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4757[100.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4758[100.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4759[100.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4760[100.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4761[100.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4762[100.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4763[100.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4764[100.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4765[100.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4766[100.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #4767[100.5] */
RegWrite(R_LMP, 1, 0x01);    /* #4768[100.5] */
RegWrite(R_LMP, 1, 0x01);    /* #4769[100.5] */
RegWrite(R_CTL, 1, 0x39);    /* #4770[100.5] */
RegWrite(0x34, 1, 0x63);    /* #4771[100.5] */
RegWrite(0x49, 1, 0x96);    /* #4772[100.5] */
{
 unsigned char uchRegs4773[]={
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
  RegWriteArray(R_ALL, 74, uchRegs4773);
}    /* #4773[100.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4774[100.5] */
RegWrite(R_CTL, 1, 0x39);    /* #4775[100.5] */
RegWrite(R_CTL, 1, 0x79);    /* #4776[100.5] */
RegWrite(R_CTL, 1, 0xF9);    /* #4777[100.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4778[100.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #4779[100.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4780[100.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x8AAA*/    /* #4781[100.6] */
BulkRead(fh,32768);   /* #4782[100.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4783[100.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xAF10*/    /* #4784[100.6] */
BulkRead(fh,32768);   /* #4785[100.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4786[100.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xE13C*/    /* #4787[100.7] */
BulkRead(fh,32768);   /* #4788[100.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4789[100.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4790[100.7] */
BulkRead(fh,32768);   /* #4791[100.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4792[100.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4793[100.8] */
BulkRead(fh,32768);   /* #4794[100.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4795[100.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4796[100.8] */
BulkRead(fh,32768);   /* #4797[100.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4798[100.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4799[100.9] */
BulkRead(fh,32768);   /* #4800[100.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4801[100.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4802[101.0] */
BulkRead(fh,32768);   /* #4803[101.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4804[101.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4805[101.0] */
BulkRead(fh,32768);   /* #4806[101.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4807[101.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4808[101.0] */
BulkRead(fh,32768);   /* #4809[101.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4810[101.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4811[101.1] */
BulkRead(fh,32768);   /* #4812[101.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4813[101.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4814[101.1] */
BulkRead(fh,32768);   /* #4815[101.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4816[101.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4817[101.2] */
BulkRead(fh,32768);   /* #4818[101.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4819[101.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4820[101.2] */
BulkRead(fh,32768);   /* #4821[101.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4822[101.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4823[101.3] */
BulkRead(fh,32768);   /* #4824[101.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4825[101.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4826[101.3] */
BulkRead(fh,32768);   /* #4827[101.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4828[101.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4829[101.4] */
BulkRead(fh,32768);   /* #4830[101.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4831[101.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4832[101.4] */
BulkRead(fh,32768);   /* #4833[101.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #4834[101.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4835[101.5] */
BulkRead(fh,32768);   /* #4836[101.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4837[101.5] */
BulkRead(fh,32768);   /* #4838[101.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4839[101.6] */
BulkRead(fh,32768);   /* #4840[101.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4841[101.6] */
BulkRead(fh,32768);   /* #4842[101.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4843[101.6] */
BulkRead(fh,32768);   /* #4844[101.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4845[101.7] */
BulkRead(fh,32768);   /* #4846[101.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4847[101.7] */
BulkRead(fh,32768);   /* #4848[101.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4849[101.8] */
BulkRead(fh,32768);   /* #4850[101.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4851[101.8] */
BulkRead(fh,32768);   /* #4852[101.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #4853[101.9] */
BulkRead(fh,32768);   /* #4854[101.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF008*/    /* #4855[101.9] */
BulkRead(fh,32768);   /* #4856[101.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB008*/    /* #4857[101.9] */
BulkRead(fh,32768);   /* #4858[102.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #4859[102.0] */
BulkRead(fh,32768);   /* #4860[102.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #4861[102.0] */
BulkRead(fh,24592);   /* #4862[102.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #4863[102.1] */
RegWrite(0x43, 1, 0x03);    /* #4864[102.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #4865[102.1] */
{
 unsigned char uchRegs4866[]={
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
  RegWriteArray(R_ALL, 74, uchRegs4866);
}    /* #4866[102.1] */
RegWrite(R_CTL, 1, 0x39);    /* #4867[102.1] */
RegWrite(R_CTL, 1, 0x79);    /* #4868[102.1] */
RegWrite(R_CTL, 1, 0xF9);    /* #4869[102.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4870[102.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4871[102.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4872[102.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4873[102.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #4874[102.1] */
RegWrite(R_CTL, 1, 0x39);    /* #4875[102.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4876[102.1] */
RegWrite(0x32, 2, 0x2D0B);    /* #4877[102.1] */
RegWrite(0x34, 1, 0x63);    /* #4878[102.2] */
RegWrite(0x49, 1, 0x9E);    /* #4879[102.2] */
{
 unsigned char uchRegs4880[]={
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
  RegWriteArray(R_ALL, 74, uchRegs4880);
}    /* #4880[102.2] */
RegWrite(R_CTL, 1, 0x19);    /* #4881[102.2] */
RegWrite(R_CTL, 1, 0x59);    /* #4882[102.2] */
RegWrite(R_CTL, 1, 0xD9);    /* #4883[102.2] */
RegWrite(0x32, 2, 0x2D0B);    /* #4884[102.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4885[102.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4886[102.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4887[102.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4888[102.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4889[102.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #4890[102.8] */
RegWrite(R_LMP, 1, 0x01);    /* #4891[102.8] */
RegWrite(R_LMP, 1, 0x01);    /* #4892[102.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #4893[102.8] */
RegWrite(0x32, 2, 0x2D0B);    /* #4894[102.8] */
RegWrite(0x34, 1, 0x63);    /* #4895[102.9] */
RegWrite(0x49, 1, 0x9E);    /* #4896[102.9] */
{
 unsigned char uchRegs4897[]={
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
  RegWriteArray(R_ALL, 74, uchRegs4897);
}    /* #4897[102.9] */
RegWrite(R_CTL, 1, 0x19);    /* #4898[102.9] */
RegWrite(R_CTL, 1, 0x59);    /* #4899[102.9] */
RegWrite(R_CTL, 1, 0xD9);    /* #4900[102.9] */
RegWrite(0x32, 2, 0x2D0B);    /* #4901[102.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4902[103.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4903[103.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4904[103.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4905[103.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4906[103.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4907[103.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4908[103.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4909[103.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4910[103.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4911[103.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #4912[103.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #4913[103.5] */
RegWrite(0x32, 2, 0x2D0B);    /* #4914[103.5] */
RegWrite(R_LMP, 1, 0x01);    /* #4915[103.5] */
RegWrite(R_LMP, 1, 0x01);    /* #4916[103.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #4917[103.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #4918[103.5] */
RegWrite(R_CTL, 1, 0x39);    /* #4919[103.6] */
RegWrite(0x34, 1, 0x63);    /* #4920[103.6] */
RegWrite(0x49, 1, 0x96);    /* #4921[103.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4922[103.6] */
RegWrite(0x32, 2, 0x2D0B);    /* #4923[103.6] */
RegWrite(0x34, 1, 0x63);    /* #4924[103.6] */
RegWrite(0x49, 1, 0x9E);    /* #4925[103.6] */
{
 unsigned char uchRegs4926[]={
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
  RegWriteArray(R_ALL, 74, uchRegs4926);
}    /* #4926[103.6] */
RegWrite(R_CTL, 1, 0x39);    /* #4927[103.6] */
RegWrite(R_CTL, 1, 0x79);    /* #4928[103.6] */
RegWrite(R_CTL, 1, 0xF9);    /* #4929[103.6] */
RegWrite(0x32, 2, 0x2D0B);    /* #4930[103.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4931[103.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4932[103.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4933[103.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4934[103.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4935[103.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4936[104.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4937[104.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4938[104.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4939[104.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4940[104.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4941[104.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4942[104.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4943[104.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4944[104.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4945[104.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4946[104.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4947[104.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4948[104.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #4949[104.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #4950[104.7] */
RegWrite(0x43, 1, 0x03);    /* #4951[104.7] */
RegWrite(R_CTL, 1, 0x39);    /* #4952[104.7] */
RegWrite(0x34, 1, 0x03);    /* #4953[104.8] */
RegWrite(0x49, 1, 0x96);    /* #4954[104.8] */
{
 unsigned char uchRegs4955[]={
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
  RegWriteArray(R_ALL, 74, uchRegs4955);
}    /* #4955[104.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4956[104.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #4957[104.9] */
RegWrite(R_CTL, 1, 0x39);    /* #4958[104.9] */
RegWrite(R_CTL, 1, 0x79);    /* #4959[104.9] */
RegWrite(R_CTL, 1, 0xF9);    /* #4960[104.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4961[104.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #4962[105.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4963[105.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0E5E*/    /* #4964[105.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4965[105.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2782*/    /* #4966[105.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4967[105.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x46A3*/    /* #4968[105.3] */
BulkRead(fh,32768);   /* #4969[105.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4970[105.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C30*/    /* #4971[105.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4972[105.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B51*/    /* #4973[105.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4974[105.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5940*/    /* #4975[105.6] */
BulkRead(fh,32768);   /* #4976[105.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4977[105.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3397*/    /* #4978[105.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4979[105.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5053*/    /* #4980[105.8] */
BulkRead(fh,32768);   /* #4981[105.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4982[105.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2AAA*/    /* #4983[105.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4984[105.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3DD2*/    /* #4985[106.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4986[106.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5CF3*/    /* #4987[106.1] */
BulkRead(fh,32768);   /* #4988[106.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4989[106.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x34E5*/    /* #4990[106.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4991[106.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4F3C*/    /* #4992[106.3] */
BulkRead(fh,32768);   /* #4993[106.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4994[106.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2860*/    /* #4995[106.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4996[106.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4185*/    /* #4997[106.4] */
BulkRead(fh,32768);   /* #4998[106.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #4999[106.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20A6*/    /* #5000[106.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5001[106.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3765*/    /* #5002[106.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5003[106.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x504A*/    /* #5004[106.7] */
BulkRead(fh,32768);   /* #5005[106.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5006[106.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2609*/    /* #5007[106.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5008[106.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x406E*/    /* #5009[106.9] */
BulkRead(fh,32768);   /* #5010[106.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5011[107.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1860*/    /* #5012[107.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5013[107.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2923*/    /* #5014[107.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5015[107.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40FA*/    /* #5016[107.1] */
BulkRead(fh,32768);   /* #5017[107.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5018[107.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1907*/    /* #5019[107.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5020[107.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x35C3*/    /* #5021[107.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5022[107.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x514C*/    /* #5023[107.4] */
BulkRead(fh,32768);   /* #5024[107.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5025[107.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BA3*/    /* #5026[107.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5027[107.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3ECB*/    /* #5028[107.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5029[107.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5DEC*/    /* #5030[107.7] */
BulkRead(fh,32768);   /* #5031[107.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5032[107.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3D0D*/    /* #5033[107.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5034[108.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x66F5*/    /* #5035[108.0] */
BulkRead(fh,32768);   /* #5036[108.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5037[108.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4019*/    /* #5038[108.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5039[108.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x580B*/    /* #5040[108.2] */
BulkRead(fh,32768);   /* #5041[108.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5042[108.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30D0*/    /* #5043[108.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5044[108.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4CB9*/    /* #5045[108.3] */
BulkRead(fh,32768);   /* #5046[108.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5047[108.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2379*/    /* #5048[108.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5049[108.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3309*/    /* #5050[108.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5051[108.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x535D*/    /* #5052[108.6] */
BulkRead(fh,32768);   /* #5053[108.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5054[108.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2DB4*/    /* #5055[108.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5056[108.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4473*/    /* #5057[108.9] */
BulkRead(fh,32768);   /* #5058[108.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5059[108.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30C0*/    /* #5060[109.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5061[109.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4C49*/    /* #5062[109.0] */
BulkRead(fh,32768);   /* #5063[109.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5064[109.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20A4*/    /* #5065[109.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5066[109.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x39C8*/    /* #5067[109.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5068[109.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5552*/    /* #5069[109.3] */
BulkRead(fh,32768);   /* #5070[109.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5071[109.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E76*/    /* #5072[109.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5073[109.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x6324*/    /* #5074[109.6] */
BulkRead(fh,32768);   /* #5075[109.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5076[109.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x377F*/    /* #5077[109.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5078[109.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x45DA*/    /* #5079[109.7] */
BulkRead(fh,32768);   /* #5080[109.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5081[109.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F01*/    /* #5082[109.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5083[109.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3958*/    /* #5084[110.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5085[110.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5879*/    /* #5086[110.0] */
BulkRead(fh,32768);   /* #5087[110.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5088[110.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3206*/    /* #5089[110.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5090[110.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x485D*/    /* #5091[110.2] */
BulkRead(fh,32768);   /* #5092[110.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5093[110.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1FC0*/    /* #5094[110.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5095[110.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3AA6*/    /* #5096[110.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5097[110.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x6F54*/    /* #5098[110.6] */
BulkRead(fh,32768);   /* #5099[110.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5100[110.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4879*/    /* #5101[110.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5102[110.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x619D*/    /* #5103[110.8] */
BulkRead(fh,32768);   /* #5104[110.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5105[110.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BF4*/    /* #5106[110.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5107[110.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4920*/    /* #5108[110.9] */
BulkRead(fh,32768);   /* #5109[110.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5110[111.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2120*/    /* #5111[111.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5112[111.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B69*/    /* #5113[111.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5114[111.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x55C0*/    /* #5115[111.3] */
BulkRead(fh,32768);   /* #5116[111.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5117[111.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x493B*/    /* #5118[111.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5119[111.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5C63*/    /* #5120[111.5] */
BulkRead(fh,32768);   /* #5121[111.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5122[111.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3588*/    /* #5123[111.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5124[111.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5376*/    /* #5125[111.7] */
BulkRead(fh,32768);   /* #5126[111.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5127[111.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3165*/    /* #5128[111.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5129[111.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x46F2*/    /* #5130[111.8] */
BulkRead(fh,32768);   /* #5131[111.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5132[111.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B4C*/    /* #5133[112.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5134[112.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x333E*/    /* #5135[112.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5136[112.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x6B84*/    /* #5137[112.2] */
BulkRead(fh,32768);   /* #5138[112.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5139[112.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3FDE*/    /* #5140[112.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5141[112.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5439*/    /* #5142[112.4] */
BulkRead(fh,32768);   /* #5143[112.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5144[112.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2893*/    /* #5145[112.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5146[112.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x42EA*/    /* #5147[112.5] */
BulkRead(fh,32768);   /* #5148[112.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5149[112.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1612*/    /* #5150[112.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5151[112.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D25*/    /* #5152[112.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5153[112.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4729*/    /* #5154[112.8] */
BulkRead(fh,32768);   /* #5155[112.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5156[113.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x39DE*/    /* #5157[113.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5158[113.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4C9A*/    /* #5159[113.0] */
BulkRead(fh,32768);   /* #5160[113.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5161[113.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x25BE*/    /* #5162[113.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5163[113.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x44DF*/    /* #5164[113.3] */
BulkRead(fh,32768);   /* #5165[113.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #5166[113.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0877*/    /* #5167[113.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0877*/    /* #5168[113.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0877*/    /* #5169[113.5] */
BulkRead(fh,4334);   /* #5170[113.5] */
RegWrite(0x43, 1, 0x03);    /* #5171[113.5] */
RegWrite(0x43, 1, 0x03);    /* #5172[113.5] */
RegWrite(R_CTL, 1, 0x39);    /* #5173[113.5] */
{
 unsigned char uchRegs5174[]={
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
  RegWriteArray(R_ALL, 74, uchRegs5174);
}    /* #5174[113.6] */
RegWrite(R_CTL, 1, 0x39);    /* #5175[113.6] */
RegWrite(R_CTL, 1, 0x79);    /* #5176[113.6] */
RegWrite(R_CTL, 1, 0xF9);    /* #5177[113.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #5178[113.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #5179[113.7] */
RegWrite(R_CTL, 1, 0x39);    /* #5180[113.7] */
RegWrite(0x43, 1, 0x07);    /* #5181[113.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #5182[113.7] */
RegWrite(0x32, 2, 0x2D0B);    /* #5183[113.7] */
RegWrite(0x34, 1, 0xC3);    /* #5184[113.8] */
RegWrite(0x49, 1, 0x9E);    /* #5185[113.8] */
{
 unsigned char uchRegs5186[]={
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
  RegWriteArray(R_ALL, 74, uchRegs5186);
}    /* #5186[113.8] */
RegWrite(0x43, 1, 0x03);    /* #5187[113.8] */
RegWrite(R_STPS, 2, 0x0000);    /* #5188[113.8] */
RegWrite(R_LEN, 2, 0x0417);    /* #5189[113.9] */
RegWrite(0x47, 2, 0xA000);    /* #5190[113.9] */
RegWrite(0x34, 1, 0xC3);    /* #5191[113.9] */
RegWrite(0x49, 1, 0x9E);    /* #5192[113.9] */
RegWrite(R_CTL, 1, 0x19);    /* #5193[114.0] */
RegWrite(R_CTL, 1, 0x59);    /* #5194[114.0] */
RegWrite(R_CTL, 1, 0xD9);    /* #5195[114.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0413*/    /* #5196[114.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0409*/    /* #5197[114.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x0400*/    /* #5198[114.1] */
RegWrite(0x47, 2, 0xA000);    /* #5199[114.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x03ED*/    /* #5200[114.2] */
RegWrite(0x47, 2, 0x9800);    /* #5201[114.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x03AD*/    /* #5202[114.2] */
RegWrite(0x47, 2, 0x9000);    /* #5203[114.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x0399*/    /* #5204[114.3] */
RegWrite(0x47, 2, 0x8800);    /* #5205[114.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x0382*/    /* #5206[114.3] */
RegWrite(0x47, 2, 0x8000);    /* #5207[114.3] */
RegWrite(0x43, 1, 0x07);    /* #5208[114.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x035F*/    /* #5209[114.4] */
RegWrite(0x47, 2, 0x7800);    /* #5210[114.4] */
RegWrite(0x43, 1, 0x07);    /* #5211[114.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0337*/    /* #5212[114.4] */
RegWrite(0x47, 2, 0x7000);    /* #5213[114.4] */
RegWrite(0x43, 1, 0x07);    /* #5214[114.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0314*/    /* #5215[114.5] */
RegWrite(0x47, 2, 0x6800);    /* #5216[114.5] */
RegWrite(0x43, 1, 0x07);    /* #5217[114.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x02DA*/    /* #5218[114.6] */
RegWrite(0x47, 2, 0x6000);    /* #5219[114.6] */
RegWrite(0x43, 1, 0x07);    /* #5220[114.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x02AC*/    /* #5221[114.6] */
RegWrite(0x47, 2, 0x5800);    /* #5222[114.6] */
RegWrite(0x43, 1, 0x07);    /* #5223[114.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x0268*/    /* #5224[114.7] */
RegWrite(0x47, 2, 0x5000);    /* #5225[114.7] */
RegWrite(0x43, 1, 0x07);    /* #5226[114.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x0237*/    /* #5227[114.7] */
RegWrite(0x47, 2, 0x40C0);    /* #5228[114.7] */
RegWrite(0x32, 2, 0x2D0B);    /* #5229[114.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5230[115.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5231[115.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5232[115.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #5233[115.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #5234[115.3] */
RegWrite(0x43, 1, 0x03);    /* #5235[115.3] */
RegWrite(R_CTL, 1, 0x39);    /* #5236[115.3] */
