ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2095[319.4] */
RegWrite(0x43, 1, 0x03);    /* #2096[319.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2097[319.4] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #2098[319.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2099[319.4] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #2100[319.4] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2101[319.4] */
{
 unsigned char uchRegs2102[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2102);
}    /* #2102[319.4] */
RegWrite(0x43, 1, 0x03);    /* #2103[319.4] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #2104[319.4] */
RegWrite(R_CCAL, 3, 0x848888);    /* #2105[319.4] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2106[319.4] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2107[319.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2108[319.5] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2109[319.5] */
RegWrite(0x34, 1, 0x63);    /* #2110[319.5] */
RegWrite(0x49, 1, 0x9E);    /* #2111[319.5] */
{
 unsigned char uchRegs2112[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2112);
}    /* #2112[319.5] */
RegWrite(R_CTL, 1, 0x39);    /* #2113[319.5] */
RegWrite(R_CTL, 1, 0x79);    /* #2114[319.5] */
RegWrite(R_CTL, 1, 0xF9);    /* #2115[319.5] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2116[319.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2117[319.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2118[319.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2119[319.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2120[319.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2121[319.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2122[319.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2123[319.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2124[319.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2125[320.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2126[320.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2127[320.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2128[320.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2129[320.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2130[320.2] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x848888*/    /* #2131[320.2] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2132[320.2] */
ulVal2 = RegRead(R_LEN, 2); /*=0x2D0B*/    /* #2133[320.2] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2134[320.2] */
{
 unsigned char uchRegs2135[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2135);
}    /* #2135[320.2] */
RegWrite(0x43, 1, 0x03);    /* #2136[320.2] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2137[320.3] */
RegWrite(R_LMP, 1, 0x01);    /* #2138[320.3] */
RegWrite(R_LMP, 1, 0x01);    /* #2139[320.3] */
RegWrite(R_CTL, 1, 0x39);    /* #2140[320.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2141[320.3] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2142[320.3] */
{
 unsigned char uchRegs2143[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2143);
}    /* #2143[320.3] */
RegWrite(0x34, 1, 0x03);    /* #2144[320.3] */
RegWrite(0x49, 1, 0x96);    /* #2145[320.3] */
RegWrite(R_CTL, 1, 0x79);    /* #2146[320.3] */
RegWrite(R_CTL, 1, 0xF9);    /* #2147[320.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2148[320.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2149[320.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2150[320.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0780*/    /* #2151[320.4] */
BulkRead(fh,3840);   /* #2152[320.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2153[320.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2154[320.4] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2155[320.4] */
RegWrite(R_LMP, 1, 0x01);    /* #2156[320.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2157[320.5] */
RegWrite(R_LMP, 1, 0x01);    /* #2158[320.5] */
RegWrite(R_LMP, 1, 0x01);    /* #2159[320.5] */
RegWrite(R_CTL, 1, 0x39);    /* #2160[320.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2161[320.5] */
RegWrite(R_CCAL, 3, 0x848888);    /* #2162[320.5] */
{
 unsigned char uchRegs2163[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2163);
}    /* #2163[320.5] */
RegWrite(0x34, 1, 0x03);    /* #2164[320.5] */
RegWrite(0x49, 1, 0x96);    /* #2165[320.5] */
RegWrite(R_CTL, 1, 0x79);    /* #2166[320.5] */
RegWrite(R_CTL, 1, 0xF9);    /* #2167[320.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2168[320.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2169[320.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2170[320.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0048*/    /* #2171[320.6] */
BulkRead(fh,144);   /* #2172[320.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2173[320.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2174[320.6] */
RegWrite(R_CCAL, 3, 0x848888);    /* #2175[320.6] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2176[320.6] */
RegWrite(R_LMP, 1, 0x01);    /* #2177[320.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2178[320.6] */
ulVal2 = RegRead(R_LEN, 2); /*=0x2D0B*/    /* #2179[320.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2180[320.6] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2181[320.6] */
RegWrite(0x34, 1, 0x63);    /* #2182[320.6] */
RegWrite(0x49, 1, 0x9E);    /* #2183[320.6] */
{
 unsigned char uchRegs2184[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2184);
}    /* #2184[320.6] */
RegWrite(R_CTL, 1, 0x19);    /* #2185[320.7] */
RegWrite(R_CTL, 1, 0x59);    /* #2186[320.7] */
RegWrite(R_CTL, 1, 0xD9);    /* #2187[320.7] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2188[320.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2189[320.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2190[320.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2191[320.8] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2192[320.8] */
{
 unsigned char uchRegs2193[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2193);
}    /* #2193[320.8] */
RegWrite(0x43, 1, 0x03);    /* #2194[320.8] */
RegWrite(R_CCAL, 3, 0x848888);    /* #2195[320.8] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2196[320.8] */
RegWrite(R_LMP, 1, 0x01);    /* #2197[320.8] */
RegWrite(R_LMP, 1, 0x01);    /* #2198[320.8] */
RegWrite(R_CTL, 1, 0x39);    /* #2199[320.8] */
RegWrite(0x34, 1, 0x63);    /* #2200[320.8] */
RegWrite(0x49, 1, 0x96);    /* #2201[320.8] */
{
 unsigned char uchRegs2202[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2202);
}    /* #2202[320.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2203[320.9] */
RegWrite(R_CTL, 1, 0x39);    /* #2204[320.9] */
RegWrite(R_CTL, 1, 0x79);    /* #2205[320.9] */
RegWrite(R_CTL, 1, 0xF9);    /* #2206[320.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2207[320.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1287*/    /* #2208[320.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2209[320.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB04F*/    /* #2210[321.0] */
BulkRead(fh,32768);   /* #2211[321.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2212[321.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xEAD4*/    /* #2213[321.0] */
BulkRead(fh,32768);   /* #2214[321.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2215[321.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2216[321.0] */
BulkRead(fh,32768);   /* #2217[321.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2218[321.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2219[321.1] */
BulkRead(fh,32768);   /* #2220[321.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2221[321.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2222[321.1] */
BulkRead(fh,32768);   /* #2223[321.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2224[321.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2225[321.2] */
BulkRead(fh,32768);   /* #2226[321.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2227[321.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2228[321.2] */
BulkRead(fh,32768);   /* #2229[321.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2230[321.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2231[321.3] */
BulkRead(fh,32768);   /* #2232[321.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2233[321.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2234[321.4] */
BulkRead(fh,32768);   /* #2235[321.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2236[321.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2237[321.4] */
BulkRead(fh,32768);   /* #2238[321.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2239[321.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2240[321.5] */
BulkRead(fh,32768);   /* #2241[321.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2242[321.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2243[321.5] */
BulkRead(fh,32768);   /* #2244[321.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2245[321.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2246[321.6] */
BulkRead(fh,32768);   /* #2247[321.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2248[321.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2249[321.6] */
BulkRead(fh,32768);   /* #2250[321.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2251[321.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2252[321.6] */
BulkRead(fh,32768);   /* #2253[321.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2254[321.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2255[321.7] */
BulkRead(fh,32768);   /* #2256[321.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2257[321.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2258[321.8] */
BulkRead(fh,32768);   /* #2259[321.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2260[321.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2261[321.8] */
BulkRead(fh,32768);   /* #2262[321.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2263[321.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2264[321.9] */
BulkRead(fh,32768);   /* #2265[321.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2266[321.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2267[321.9] */
BulkRead(fh,32768);   /* #2268[322.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2269[322.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2270[322.0] */
BulkRead(fh,32768);   /* #2271[322.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2272[322.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2273[322.0] */
BulkRead(fh,32768);   /* #2274[322.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2275[322.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2276[322.1] */
BulkRead(fh,32768);   /* #2277[322.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2278[322.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2279[322.1] */
BulkRead(fh,32768);   /* #2280[322.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2281[322.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2282[322.2] */
BulkRead(fh,32768);   /* #2283[322.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2284[322.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2285[322.2] */
BulkRead(fh,32768);   /* #2286[322.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2287[322.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2288[322.3] */
BulkRead(fh,32768);   /* #2289[322.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2290[322.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2291[322.3] */
BulkRead(fh,32768);   /* #2292[322.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2293[322.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF008*/    /* #2294[322.4] */
BulkRead(fh,32768);   /* #2295[322.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2296[322.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB008*/    /* #2297[322.4] */
BulkRead(fh,32768);   /* #2298[322.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2299[322.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #2300[322.5] */
BulkRead(fh,32768);   /* #2301[322.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2302[322.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #2303[322.5] */
BulkRead(fh,24592);   /* #2304[322.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2305[322.6] */
RegWrite(0x43, 1, 0x03);    /* #2306[322.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2307[322.6] */
{
 unsigned char uchRegs2308[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2308);
}    /* #2308[322.6] */
RegWrite(R_CTL, 1, 0x39);    /* #2309[322.6] */
RegWrite(R_CTL, 1, 0x79);    /* #2310[322.6] */
RegWrite(R_CTL, 1, 0xF9);    /* #2311[322.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2312[322.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2313[322.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2314[322.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2315[322.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2316[322.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2317[322.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2318[322.6] */
RegWrite(R_CTL, 1, 0x39);    /* #2319[322.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2320[322.6] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2321[322.6] */
RegWrite(0x34, 1, 0x63);    /* #2322[322.6] */
RegWrite(0x49, 1, 0x9E);    /* #2323[322.6] */
{
 unsigned char uchRegs2324[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2324);
}    /* #2324[322.6] */
RegWrite(R_CTL, 1, 0x19);    /* #2325[322.7] */
RegWrite(R_CTL, 1, 0x59);    /* #2326[322.7] */
RegWrite(R_CTL, 1, 0xD9);    /* #2327[322.7] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2328[322.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2329[322.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2330[322.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2331[322.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2332[322.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2333[322.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2334[323.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2335[323.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2336[323.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2337[323.5] */
RegWrite(R_LMP, 1, 0x01);    /* #2338[323.5] */
RegWrite(R_LMP, 1, 0x01);    /* #2339[323.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2340[323.5] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2341[323.5] */
RegWrite(0x34, 1, 0x63);    /* #2342[323.6] */
RegWrite(0x49, 1, 0x9E);    /* #2343[323.6] */
{
 unsigned char uchRegs2344[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2344);
}    /* #2344[323.6] */
RegWrite(R_CTL, 1, 0x19);    /* #2345[323.6] */
RegWrite(R_CTL, 1, 0x59);    /* #2346[323.6] */
RegWrite(R_CTL, 1, 0xD9);    /* #2347[323.6] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2348[323.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2349[323.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2350[323.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2351[323.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2352[323.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2353[323.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2354[323.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2355[324.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2356[324.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2357[324.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2358[324.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2359[324.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2360[324.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2361[324.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2362[324.3] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2363[324.3] */
RegWrite(R_LMP, 1, 0x01);    /* #2364[324.3] */
RegWrite(R_LMP, 1, 0x01);    /* #2365[324.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2366[324.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2367[324.4] */
RegWrite(R_CTL, 1, 0x39);    /* #2368[324.4] */
RegWrite(0x34, 1, 0x63);    /* #2369[324.4] */
RegWrite(0x49, 1, 0x96);    /* #2370[324.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2371[324.4] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2372[324.4] */
RegWrite(0x34, 1, 0x63);    /* #2373[324.4] */
RegWrite(0x49, 1, 0x9E);    /* #2374[324.4] */
{
 unsigned char uchRegs2375[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2375);
}    /* #2375[324.4] */
RegWrite(R_CTL, 1, 0x39);    /* #2376[324.4] */
RegWrite(R_CTL, 1, 0x79);    /* #2377[324.5] */
RegWrite(R_CTL, 1, 0xF9);    /* #2378[324.5] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2379[324.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2380[324.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2381[324.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2382[324.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2383[324.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2384[324.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2385[324.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2386[324.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2387[324.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2388[325.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2389[325.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2390[325.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2391[325.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2392[325.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2393[325.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2394[325.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2395[325.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2396[325.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2397[325.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2398[325.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2399[325.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2400[325.6] */
RegWrite(0x43, 1, 0x03);    /* #2401[325.6] */
RegWrite(R_CTL, 1, 0x39);    /* #2402[325.6] */
RegWrite(0x34, 1, 0x03);    /* #2403[325.6] */
RegWrite(0x49, 1, 0x96);    /* #2404[325.6] */
{
 unsigned char uchRegs2405[]={
   0xFB /*!!0x01!!*/, 0x00 /*0x02*/, 0x2A /*!!0x03!!*/,
   0x08 /*!!0x04!!*/, 0x47 /*!!0x05!!*/, 0x06 /*!!R_STPS!!*/,
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
  RegWriteArray(R_ALL, 74, uchRegs2405);
}    /* #2405[325.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2406[325.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2407[325.7] */
RegWrite(R_CTL, 1, 0x39);    /* #2408[325.7] */
RegWrite(R_CTL, 1, 0x79);    /* #2409[325.7] */
RegWrite(R_CTL, 1, 0xF9);    /* #2410[325.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2411[325.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2412[325.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2413[325.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0546*/    /* #2414[326.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2415[326.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1356*/    /* #2416[326.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2417[326.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x24EA*/    /* #2418[326.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2419[326.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x34BC*/    /* #2420[326.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2421[326.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x448E*/    /* #2422[326.3] */
BulkRead(fh,32768);   /* #2423[326.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2424[326.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0F1A*/    /* #2425[326.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2426[326.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B68*/    /* #2427[326.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2428[326.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2EBE*/    /* #2429[326.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2430[326.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E90*/    /* #2431[326.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2432[326.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4E62*/    /* #2433[326.8] */
BulkRead(fh,32768);   /* #2434[326.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2435[326.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x18EE*/    /* #2436[327.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2437[327.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x28C0*/    /* #2438[327.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2439[327.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x350E*/    /* #2440[327.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2441[327.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x46A2*/    /* #2442[327.2] */
BulkRead(fh,32768);   /* #2443[327.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2444[327.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x10A5*/    /* #2445[327.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2446[327.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19F8*/    /* #2447[327.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2448[327.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x29CA*/    /* #2449[327.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2450[327.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3873*/    /* #2451[327.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2452[327.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4CF2*/    /* #2453[327.7] */
BulkRead(fh,32768);   /* #2454[327.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2455[327.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x177E*/    /* #2456[327.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2457[327.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x293F*/    /* #2458[327.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2459[327.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x379D*/    /* #2460[328.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2461[328.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x471C*/    /* #2462[328.1] */
BulkRead(fh,32768);   /* #2463[328.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2464[328.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1239*/    /* #2465[328.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2466[328.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2152*/    /* #2467[328.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2468[328.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3124*/    /* #2469[328.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2470[328.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4305*/    /* #2471[328.5] */
BulkRead(fh,32768);   /* #2472[328.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2473[328.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x10C8*/    /* #2474[328.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2475[328.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C80*/    /* #2476[328.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2477[328.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x306C*/    /* #2478[328.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2479[328.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x403E*/    /* #2480[328.9] */
BulkRead(fh,32768);   /* #2481[328.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2482[328.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0ACA*/    /* #2483[329.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2484[329.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A9C*/    /* #2485[329.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2486[329.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A6E*/    /* #2487[329.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2488[329.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F04*/    /* #2489[329.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2490[329.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4A12*/    /* #2491[329.4] */
BulkRead(fh,32768);   /* #2492[329.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2493[329.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19E4*/    /* #2494[329.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2495[329.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x29B6*/    /* #2496[329.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2497[329.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3988*/    /* #2498[329.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2499[329.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4414*/    /* #2500[329.7] */
BulkRead(fh,32768);   /* #2501[329.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2502[329.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0EA0*/    /* #2503[329.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2504[329.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E72*/    /* #2505[330.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2506[330.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E44*/    /* #2507[330.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2508[330.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E16*/    /* #2509[330.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2510[330.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5874*/    /* #2511[330.3] */
BulkRead(fh,32768);   /* #2512[330.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2513[330.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2846*/    /* #2514[330.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2515[330.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3818*/    /* #2516[330.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2517[330.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x47EA*/    /* #2518[330.6] */
BulkRead(fh,32768);   /* #2519[330.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2520[330.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1276*/    /* #2521[330.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2522[330.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D02*/    /* #2523[330.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2524[330.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3058*/    /* #2525[330.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2526[331.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E68*/    /* #2527[331.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2528[331.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x51BE*/    /* #2529[331.1] */
BulkRead(fh,32768);   /* #2530[331.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2531[331.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2190*/    /* #2532[331.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2533[331.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x34E6*/    /* #2534[331.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2535[331.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x467A*/    /* #2536[331.5] */
BulkRead(fh,32768);   /* #2537[331.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2538[331.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1106*/    /* #2539[331.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2540[331.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20D8*/    /* #2541[331.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2542[331.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x346F*/    /* #2543[331.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2544[331.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x45C2*/    /* #2545[331.9] */
BulkRead(fh,32768);   /* #2546[331.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2547[332.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1DA9*/    /* #2548[332.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2549[332.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2AAC*/    /* #2550[332.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2551[332.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x38BC*/    /* #2552[332.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2553[332.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x488E*/    /* #2554[332.3] */
BulkRead(fh,32768);   /* #2555[332.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2556[332.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x14DC*/    /* #2557[332.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2558[332.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x22EC*/    /* #2559[332.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2560[332.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3480*/    /* #2561[332.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2562[332.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4452*/    /* #2563[332.7] */
BulkRead(fh,32768);   /* #2564[332.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2565[332.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1424*/    /* #2566[332.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2567[332.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2234*/    /* #2568[333.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2569[333.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3206*/    /* #2570[333.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2571[333.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x439A*/    /* #2572[333.1] */
BulkRead(fh,32768);   /* #2573[333.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2574[333.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0EE8*/    /* #2575[333.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2576[333.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A74*/    /* #2577[333.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2578[333.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A46*/    /* #2579[333.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2580[333.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3856*/    /* #2581[333.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2582[333.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x505F*/    /* #2583[333.7] */
BulkRead(fh,32768);   /* #2584[333.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2585[333.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D40*/    /* #2586[333.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2587[333.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x27CC*/    /* #2588[333.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2589[333.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B22*/    /* #2590[334.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2591[334.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4CB6*/    /* #2592[334.1] */
BulkRead(fh,32768);   /* #2593[334.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2594[334.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1858*/    /* #2595[334.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2596[334.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2390*/    /* #2597[334.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2598[334.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3362*/    /* #2599[334.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2600[334.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x46B8*/    /* #2601[334.4] */
BulkRead(fh,32768);   /* #2602[334.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2603[334.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1306*/    /* #2604[334.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2605[334.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BA2*/    /* #2606[334.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2607[334.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B74*/    /* #2608[334.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2609[334.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4B46*/    /* #2610[334.9] */
BulkRead(fh,32768);   /* #2611[334.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2612[335.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1794*/    /* #2613[335.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2614[335.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2928*/    /* #2615[335.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2616[335.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3ABC*/    /* #2617[335.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2618[335.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x48CC*/    /* #2619[335.3] */
BulkRead(fh,32768);   /* #2620[335.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2621[335.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x151A*/    /* #2622[335.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2623[335.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1FA6*/    /* #2624[335.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2625[335.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F78*/    /* #2626[335.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2627[335.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4490*/    /* #2628[335.7] */
BulkRead(fh,32768);   /* #2629[335.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2630[335.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0F1C*/    /* #2631[335.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2632[335.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1EEE*/    /* #2633[336.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2634[336.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3082*/    /* #2635[336.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2636[336.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E92*/    /* #2637[336.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2638[336.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5026*/    /* #2639[336.2] */
BulkRead(fh,32768);   /* #2640[336.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2641[336.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E36*/    /* #2642[336.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2643[336.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E08*/    /* #2644[336.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2645[336.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F70*/    /* #2646[336.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2647[336.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5130*/    /* #2648[336.6] */
BulkRead(fh,32768);   /* #2649[336.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2650[336.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x12F2*/    /* #2651[336.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x12F2*/    /* #2652[336.8] */
BulkRead(fh,9700);   /* #2653[336.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2654[336.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2655[336.9] */
RegWrite(0x43, 1, 0x03);    /* #2656[336.9] */
RegWrite(0x43, 1, 0x03);    /* #2657[336.9] */
RegWrite(R_CTL, 1, 0x39);    /* #2658[336.9] */
{
 unsigned char uchRegs2659[]={
   0x00 /*!!0x01!!*/, 0x00 /*0x02*/, 0x00 /*!!0x03!!*/,
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
  RegWriteArray(R_ALL, 74, uchRegs2659);
}    /* #2659[336.9] */
RegWrite(R_CTL, 1, 0x39);    /* #2660[336.9] */
RegWrite(R_CTL, 1, 0x79);    /* #2661[337.0] */
RegWrite(R_CTL, 1, 0xF9);    /* #2662[337.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2663[337.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2664[337.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2665[337.1] */
RegWrite(R_CTL, 1, 0x39);    /* #2666[337.1] */
RegWrite(0x43, 1, 0x07);    /* #2667[337.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2668[337.2] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2669[337.2] */
RegWrite(0x34, 1, 0xC3);    /* #2670[337.2] */
RegWrite(0x49, 1, 0x9E);    /* #2671[337.2] */
{
 unsigned char uchRegs2672[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2672);
}    /* #2672[337.2] */
RegWrite(0x43, 1, 0x03);    /* #2673[337.3] */
RegWrite(R_STPS, 2, 0x0000);    /* #2674[337.3] */
RegWrite(0x0A, 2, 0x03FE);    /* #2675[337.3] */
RegWrite(0x47, 2, 0xA000);    /* #2676[337.3] */
RegWrite(0x34, 1, 0xC3);    /* #2677[337.3] */
RegWrite(0x49, 1, 0x9E);    /* #2678[337.4] */
RegWrite(R_CTL, 1, 0x19);    /* #2679[337.4] */
RegWrite(R_CTL, 1, 0x59);    /* #2680[337.4] */
RegWrite(R_CTL, 1, 0xD9);    /* #2681[337.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x03F4*/    /* #2682[337.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x03EA*/    /* #2683[337.5] */
RegWrite(0x47, 2, 0xA000);    /* #2684[337.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x03CE*/    /* #2685[337.6] */
RegWrite(0x47, 2, 0x9800);    /* #2686[337.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x03C4*/    /* #2687[337.6] */
RegWrite(0x47, 2, 0x9000);    /* #2688[337.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x03B0*/    /* #2689[337.6] */
RegWrite(0x47, 2, 0x8800);    /* #2690[337.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0384*/    /* #2691[337.7] */
RegWrite(0x47, 2, 0x8000);    /* #2692[337.7] */
RegWrite(0x43, 1, 0x07);    /* #2693[337.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x0361*/    /* #2694[337.8] */
RegWrite(0x47, 2, 0x7800);    /* #2695[337.8] */
RegWrite(0x43, 1, 0x07);    /* #2696[337.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x033B*/    /* #2697[337.8] */
RegWrite(0x47, 2, 0x7000);    /* #2698[337.8] */
RegWrite(0x43, 1, 0x07);    /* #2699[337.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x030A*/    /* #2700[337.9] */
RegWrite(0x47, 2, 0x6800);    /* #2701[337.9] */
RegWrite(0x43, 1, 0x07);    /* #2702[337.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x02DF*/    /* #2703[338.0] */
RegWrite(0x47, 2, 0x6000);    /* #2704[338.0] */
RegWrite(0x43, 1, 0x07);    /* #2705[338.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x02B3*/    /* #2706[338.0] */
RegWrite(0x47, 2, 0x5800);    /* #2707[338.0] */
RegWrite(0x43, 1, 0x07);    /* #2708[338.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0282*/    /* #2709[338.1] */
RegWrite(0x47, 2, 0x5000);    /* #2710[338.1] */
RegWrite(0x43, 1, 0x07);    /* #2711[338.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x0239*/    /* #2712[338.1] */
RegWrite(0x47, 2, 0x40C0);    /* #2713[338.1] */
RegWrite(R_LEN, 2, 0x2D0B);    /* #2714[338.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2715[338.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2716[338.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2717[338.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2718[338.6] */
RegWrite(0x43, 1, 0x03);    /* #2719[338.6] */
RegWrite(R_CTL, 1, 0x39);    /* #2720[338.7] */
