ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2045[198.9] */
RegWrite(0x43, 1, 0x03);    /* #2046[198.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2047[198.9] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #2048[198.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2049[198.9] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #2050[198.9] */
RegWrite(0x32, 2, 0x290A);    /* #2051[198.9] */
{
 unsigned char uchRegs2052[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0x10, /*R_SWIDH*/ 0xC0, /*R_STPS*/ 0x00,
   /*R_STPSH*/ 0x00, /*0x08*/ 0xFF, /*0x09*/ 0xFF,
   /*R_LEN*/ 0x20, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x80, /*0x15*/ 0x2A,
   /*0x16*/ 0xC0, /*0x17*/ 0x40, /*0x18*/ 0xC0,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x29, /*0x33*/ 0x35,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x00,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2052);
}    /* #2052[198.9] */
RegWrite(0x43, 1, 0x03);    /* #2053[198.9] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #2054[198.9] */
RegWrite(R_CCAL, 3, 0x848888);    /* #2055[198.9] */
RegWrite(0x32, 2, 0x290A);    /* #2056[198.9] */
RegWrite(0x32, 2, 0x290A);    /* #2057[198.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2058[198.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2059[198.9] */
RegWrite(0x32, 2, 0x290A);    /* #2060[198.9] */
{
 unsigned char uchRegs2061[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0x10, /*R_SWIDH*/ 0xC0, /*R_STPS*/ 0x00,
   /*R_STPSH*/ 0x00, /*0x08*/ 0xFF, /*0x09*/ 0xFF,
   /*R_LEN*/ 0x20, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x80, /*0x15*/ 0x2A,
   /*0x16*/ 0xC0, /*0x17*/ 0x40, /*0x18*/ 0xC0,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x29, /*0x33*/ 0x35,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x00,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2061);
}    /* #2061[198.9] */
RegWrite(0x43, 1, 0x03);    /* #2062[198.9] */
RegWrite(R_CCAL, 3, 0x808080);    /* #2063[198.9] */
RegWrite(0x32, 2, 0x290A);    /* #2064[198.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2065[199.0] */
RegWrite(0x32, 2, 0x290A);    /* #2066[199.0] */
RegWrite(0x34, 1, 0x63);    /* #2067[199.0] */
RegWrite(0x49, 1, 0x9E);    /* #2068[199.0] */
{
 unsigned char uchRegs2069[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0x40, /*R_SWIDH*/ 0x00, /*R_STPS*/ 0xC8,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x00,
   /*R_LEN*/ 0x00, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x80, /*0x15*/ 0x2A,
   /*0x16*/ 0xC0, /*0x17*/ 0x40, /*0x18*/ 0xC0,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x00,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2069);
}    /* #2069[199.0] */
RegWrite(R_CTL, 1, 0x39);    /* #2070[199.0] */
RegWrite(R_CTL, 1, 0x79);    /* #2071[199.0] */
RegWrite(R_CTL, 1, 0xF9);    /* #2072[199.0] */
RegWrite(0x32, 2, 0x290A);    /* #2073[199.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2074[199.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2075[199.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2076[199.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2077[199.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2078[199.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2079[199.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2080[199.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2081[199.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2082[199.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2083[199.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2084[199.6] */
RegWrite(R_LMP, 1, 0x01);    /* #2085[199.6] */
RegWrite(R_LMP, 1, 0x01);    /* #2086[199.6] */
RegWrite(R_CTL, 1, 0x39);    /* #2087[199.6] */
RegWrite(0x34, 1, 0x63);    /* #2088[199.6] */
RegWrite(0x49, 1, 0x96);    /* #2089[199.6] */
{
 unsigned char uchRegs2090[]={
   /*R_SPOS*/ 0xFB, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0xEC, /*R_SWIDH*/ 0x93, /*R_STPS*/ 0x00,
   /*R_STPSH*/ 0x00, /*0x08*/ 0xAA, /*0x09*/ 0xAA,
   /*R_LEN*/ 0x44, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x80, /*0x15*/ 0x2A,
   /*0x16*/ 0xC0, /*0x17*/ 0x40, /*0x18*/ 0xC0,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x20, /*R_CSTAT*/ 0x00,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2090);
}    /* #2090[199.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2091[199.6] */
RegWrite(R_CTL, 1, 0x39);    /* #2092[199.6] */
RegWrite(R_CTL, 1, 0x79);    /* #2093[199.6] */
RegWrite(R_CTL, 1, 0xF9);    /* #2094[199.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2095[199.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E83*/    /* #2096[199.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2097[199.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB34C*/    /* #2098[199.7] */
BulkRead(fh,32768);   /* #2099[199.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2100[199.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2101[199.8] */
BulkRead(fh,32768);   /* #2102[199.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2103[199.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2104[199.8] */
BulkRead(fh,32768);   /* #2105[199.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2106[199.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2107[199.9] */
BulkRead(fh,32768);   /* #2108[199.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2109[199.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2110[199.9] */
BulkRead(fh,32768);   /* #2111[200.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2112[200.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2113[200.0] */
BulkRead(fh,32768);   /* #2114[200.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2115[200.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2116[200.0] */
BulkRead(fh,32768);   /* #2117[200.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2118[200.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2119[200.1] */
BulkRead(fh,32768);   /* #2120[200.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2121[200.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2122[200.1] */
BulkRead(fh,32768);   /* #2123[200.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2124[200.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2125[200.2] */
BulkRead(fh,32768);   /* #2126[200.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2127[200.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2128[200.2] */
BulkRead(fh,32768);   /* #2129[200.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2130[200.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2131[200.3] */
BulkRead(fh,32768);   /* #2132[200.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2133[200.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2134[200.4] */
BulkRead(fh,32768);   /* #2135[200.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2136[200.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2137[200.4] */
BulkRead(fh,32768);   /* #2138[200.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2139[200.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2140[200.4] */
BulkRead(fh,32768);   /* #2141[200.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2142[200.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2143[200.5] */
BulkRead(fh,32768);   /* #2144[200.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2145[200.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2146[200.5] */
BulkRead(fh,32768);   /* #2147[200.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2148[200.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2149[200.6] */
BulkRead(fh,32768);   /* #2150[200.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2151[200.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2152[200.6] */
BulkRead(fh,32768);   /* #2153[200.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2154[200.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2155[200.7] */
BulkRead(fh,32768);   /* #2156[200.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2157[200.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2158[200.7] */
BulkRead(fh,32768);   /* #2159[200.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2160[200.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2161[200.8] */
BulkRead(fh,32768);   /* #2162[200.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2163[200.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2164[200.8] */
BulkRead(fh,32768);   /* #2165[200.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2166[200.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2167[200.9] */
BulkRead(fh,32768);   /* #2168[200.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2169[201.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2170[201.0] */
BulkRead(fh,32768);   /* #2171[201.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2172[201.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2173[201.0] */
BulkRead(fh,32768);   /* #2174[201.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2175[201.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2176[201.1] */
BulkRead(fh,32768);   /* #2177[201.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2178[201.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2179[201.1] */
BulkRead(fh,32768);   /* #2180[201.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF008*/    /* #2181[201.2] */
BulkRead(fh,32768);   /* #2182[201.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB008*/    /* #2183[201.2] */
BulkRead(fh,32768);   /* #2184[201.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #2185[201.2] */
BulkRead(fh,32768);   /* #2186[201.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #2187[201.3] */
BulkRead(fh,24592);   /* #2188[201.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2189[201.3] */
RegWrite(0x43, 1, 0x03);    /* #2190[201.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2191[201.3] */
{
 unsigned char uchRegs2192[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x00,
   /*R_SWID*/ 0x00, /*R_SWIDH*/ 0x00, /*R_STPS*/ 0x00,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x00,
   /*R_LEN*/ 0x00, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x80, /*0x15*/ 0x2A,
   /*0x16*/ 0xC0, /*0x17*/ 0x40, /*0x18*/ 0xC0,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x80, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x79, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2192);
}    /* #2192[201.3] */
RegWrite(R_CTL, 1, 0x39);    /* #2193[201.3] */
RegWrite(R_CTL, 1, 0x79);    /* #2194[201.4] */
RegWrite(R_CTL, 1, 0xF9);    /* #2195[201.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2196[201.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2197[201.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2198[201.4] */
RegWrite(R_CTL, 1, 0x39);    /* #2199[201.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2200[201.4] */
RegWrite(0x32, 2, 0x290A);    /* #2201[201.4] */
RegWrite(0x34, 1, 0x63);    /* #2202[201.4] */
RegWrite(0x49, 1, 0x9E);    /* #2203[201.4] */
{
 unsigned char uchRegs2204[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0x40, /*R_SWIDH*/ 0x00, /*R_STPS*/ 0x44,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x00,
   /*R_LEN*/ 0x00, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x80, /*0x15*/ 0x2A,
   /*0x16*/ 0xC0, /*0x17*/ 0x40, /*0x18*/ 0xC0,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2204);
}    /* #2204[201.5] */
RegWrite(R_CTL, 1, 0x19);    /* #2205[201.5] */
RegWrite(R_CTL, 1, 0x59);    /* #2206[201.5] */
RegWrite(R_CTL, 1, 0xD9);    /* #2207[201.5] */
RegWrite(0x32, 2, 0x290A);    /* #2208[201.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2209[201.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2210[201.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2211[201.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2212[201.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2213[201.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2214[202.1] */
RegWrite(R_LMP, 1, 0x01);    /* #2215[202.1] */
RegWrite(R_LMP, 1, 0x01);    /* #2216[202.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2217[202.1] */
RegWrite(0x32, 2, 0x290A);    /* #2218[202.1] */
RegWrite(0x34, 1, 0x63);    /* #2219[202.2] */
RegWrite(0x49, 1, 0x9E);    /* #2220[202.2] */
{
 unsigned char uchRegs2221[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0x40, /*R_SWIDH*/ 0x00, /*R_STPS*/ 0xC8,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x00,
   /*R_LEN*/ 0x00, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x80, /*0x15*/ 0x2A,
   /*0x16*/ 0xC0, /*0x17*/ 0x40, /*0x18*/ 0xC0,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x59, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2221);
}    /* #2221[202.2] */
RegWrite(R_CTL, 1, 0x19);    /* #2222[202.2] */
RegWrite(R_CTL, 1, 0x59);    /* #2223[202.2] */
RegWrite(R_CTL, 1, 0xD9);    /* #2224[202.2] */
RegWrite(0x32, 2, 0x290A);    /* #2225[202.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2226[202.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2227[202.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2228[202.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2229[202.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2230[202.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2231[202.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2232[202.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2233[202.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2234[202.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2235[202.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2236[202.8] */
RegWrite(0x32, 2, 0x290A);    /* #2237[202.8] */
RegWrite(R_LMP, 1, 0x01);    /* #2238[202.8] */
RegWrite(R_LMP, 1, 0x01);    /* #2239[202.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2240[202.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2241[202.8] */
RegWrite(R_CTL, 1, 0x39);    /* #2242[202.8] */
RegWrite(0x34, 1, 0x63);    /* #2243[202.8] */
RegWrite(0x49, 1, 0x96);    /* #2244[202.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2245[202.8] */
RegWrite(0x32, 2, 0x290A);    /* #2246[202.8] */
RegWrite(0x34, 1, 0x63);    /* #2247[202.8] */
RegWrite(0x49, 1, 0x9E);    /* #2248[202.9] */
{
 unsigned char uchRegs2249[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0x40, /*R_SWIDH*/ 0x00, /*R_STPS*/ 0x92,
   /*R_STPSH*/ 0x01, /*0x08*/ 0x00, /*0x09*/ 0x00,
   /*R_LEN*/ 0x00, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x80, /*0x15*/ 0x2A,
   /*0x16*/ 0xC0, /*0x17*/ 0x40, /*0x18*/ 0xC0,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2249);
}    /* #2249[202.9] */
RegWrite(R_CTL, 1, 0x39);    /* #2250[202.9] */
RegWrite(R_CTL, 1, 0x79);    /* #2251[202.9] */
RegWrite(R_CTL, 1, 0xF9);    /* #2252[202.9] */
RegWrite(0x32, 2, 0x290A);    /* #2253[202.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2254[203.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2255[203.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2256[203.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2257[203.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2258[203.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2259[203.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2260[203.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2261[203.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2262[203.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2263[203.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2264[203.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2265[203.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2266[203.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2267[203.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2268[203.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2269[203.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2270[203.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2271[204.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2272[204.0] */
RegWrite(0x43, 1, 0x03);    /* #2273[204.0] */
RegWrite(R_CTL, 1, 0x39);    /* #2274[204.0] */
RegWrite(0x34, 1, 0x03);    /* #2275[204.0] */
RegWrite(0x49, 1, 0x96);    /* #2276[204.0] */
{
 unsigned char uchRegs2277[]={
   /*R_SPOS*/ 0xFB, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0xB0, /*R_SWIDH*/ 0x04, /*R_STPS*/ 0x06,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x3F,
   /*R_LEN*/ 0xBE, /*R_LENH*/ 0x04, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x42,
   /*0x13*/ 0x15, /*0x14*/ 0x42, /*0x15*/ 0x15,
   /*0x16*/ 0x42, /*0x17*/ 0x15, /*0x18*/ 0x42,
   /*0x19*/ 0x15, /*0x1A*/ 0x07, /*0x1B*/ 0x00,
   /*0x1C*/ 0x08, /*0x1D*/ 0x12, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0x03, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0x42, /*0x48*/ 0x15,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2277);
}    /* #2277[204.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2278[204.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2279[204.1] */
RegWrite(R_CTL, 1, 0x39);    /* #2280[204.1] */
RegWrite(R_CTL, 1, 0x79);    /* #2281[204.1] */
RegWrite(R_CTL, 1, 0xF9);    /* #2282[204.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2283[204.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0708*/    /* #2284[204.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2285[204.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3CF0*/    /* #2286[204.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2287[204.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x779C*/    /* #2288[204.4] */
BulkRead(fh,32768);   /* #2289[204.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2290[204.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7478*/    /* #2291[204.5] */
BulkRead(fh,32768);   /* #2292[204.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2293[204.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x65B0*/    /* #2294[204.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2295[204.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9490*/    /* #2296[204.7] */
BulkRead(fh,32768);   /* #2297[204.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2298[204.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7FC5*/    /* #2299[204.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2300[204.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9180*/    /* #2301[204.8] */
BulkRead(fh,32768);   /* #2302[204.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2303[204.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7958*/    /* #2304[204.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2305[204.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9578*/    /* #2306[204.9] */
BulkRead(fh,32768);   /* #2307[205.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2308[205.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x81D6*/    /* #2309[205.0] */
BulkRead(fh,32768);   /* #2310[205.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2311[205.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7385*/    /* #2312[205.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2313[205.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9660*/    /* #2314[205.2] */
BulkRead(fh,32768);   /* #2315[205.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2316[205.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7E38*/    /* #2317[205.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2318[205.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9CB0*/    /* #2319[205.3] */
BulkRead(fh,32768);   /* #2320[205.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2321[205.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9E50*/    /* #2322[205.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2323[205.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xC033*/    /* #2324[205.5] */
BulkRead(fh,32768);   /* #2325[205.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2326[205.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB9D4*/    /* #2327[205.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2328[205.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xD128*/    /* #2329[205.6] */
BulkRead(fh,32768);   /* #2330[205.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2331[205.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xC008*/    /* #2332[205.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2333[205.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xD9D0*/    /* #2334[205.8] */
BulkRead(fh,32768);   /* #2335[205.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2336[205.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xCCE0*/    /* #2337[205.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2338[205.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFD79*/    /* #2339[206.0] */
BulkRead(fh,32768);   /* #2340[206.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2341[206.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xE670*/    /* #2342[206.0] */
BulkRead(fh,32768);   /* #2343[206.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2344[206.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xE360*/    /* #2345[206.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2346[206.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFC1C*/    /* #2347[206.2] */
BulkRead(fh,32768);   /* #2348[206.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2349[207.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2350[207.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2351[207.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2352[207.2] */
BulkRead(fh,32768);   /* #2353[207.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2354[207.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2355[207.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2356[207.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2357[207.4] */
BulkRead(fh,32768);   /* #2358[207.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2359[207.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2360[207.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2361[207.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2362[207.6] */
BulkRead(fh,32768);   /* #2363[207.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2364[207.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2365[207.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2366[207.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2367[207.7] */
BulkRead(fh,32768);   /* #2368[207.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2369[207.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2370[207.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2371[207.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2372[207.9] */
BulkRead(fh,32768);   /* #2373[207.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2374[207.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2375[207.9] */
BulkRead(fh,32768);   /* #2376[207.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2377[208.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2378[208.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2379[208.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2380[208.1] */
BulkRead(fh,32768);   /* #2381[208.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2382[208.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2383[208.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2384[208.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2385[208.2] */
BulkRead(fh,32768);   /* #2386[208.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2387[208.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2388[208.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2389[208.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2390[208.4] */
BulkRead(fh,32768);   /* #2391[208.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2392[208.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2393[208.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2394[208.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2395[208.5] */
BulkRead(fh,32768);   /* #2396[208.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2397[208.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2398[208.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2399[208.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2400[208.7] */
BulkRead(fh,32768);   /* #2401[208.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2402[208.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2403[208.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2404[208.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2405[208.8] */
BulkRead(fh,32768);   /* #2406[208.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2407[208.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2408[208.9] */
BulkRead(fh,32768);   /* #2409[208.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2410[208.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2411[209.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2412[209.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2413[209.0] */
BulkRead(fh,32768);   /* #2414[209.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2415[209.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2416[209.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2417[209.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2418[209.1] */
BulkRead(fh,32768);   /* #2419[209.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2420[210.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2421[210.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2422[210.6] */
BulkRead(fh,32768);   /* #2423[210.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2424[210.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2425[210.7] */
BulkRead(fh,32768);   /* #2426[210.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2427[210.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2428[210.8] */
BulkRead(fh,32768);   /* #2429[210.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2430[210.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2431[210.8] */
BulkRead(fh,32768);   /* #2432[210.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2433[210.9] */
BulkRead(fh,32768);   /* #2434[210.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2435[211.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2436[211.0] */
BulkRead(fh,32768);   /* #2437[211.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2438[211.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2439[211.1] */
BulkRead(fh,32768);   /* #2440[211.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2441[211.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2442[211.3] */
BulkRead(fh,32768);   /* #2443[211.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2444[211.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2445[211.4] */
BulkRead(fh,32768);   /* #2446[211.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2447[211.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2448[211.5] */
BulkRead(fh,32768);   /* #2449[211.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2450[211.6] */
BulkRead(fh,32768);   /* #2451[211.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2452[211.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2453[211.7] */
BulkRead(fh,32768);   /* #2454[211.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xDD50*/    /* #2455[211.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xDD50*/    /* #2456[211.8] */
BulkRead(fh,32768);   /* #2457[211.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9D50*/    /* #2458[211.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x9D50*/    /* #2459[211.9] */
BulkRead(fh,32768);   /* #2460[211.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5D50*/    /* #2461[212.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5D50*/    /* #2462[212.0] */
BulkRead(fh,32768);   /* #2463[212.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D50*/    /* #2464[212.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D50*/    /* #2465[212.1] */
BulkRead(fh,15008);   /* #2466[212.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2467[212.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2468[212.2] */
RegWrite(0x43, 1, 0x03);    /* #2469[212.2] */
RegWrite(0x43, 1, 0x03);    /* #2470[212.2] */
RegWrite(R_CTL, 1, 0x39);    /* #2471[212.3] */
{
 unsigned char uchRegs2472[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x00,
   /*R_SWID*/ 0x00, /*R_SWIDH*/ 0x00, /*R_STPS*/ 0x00,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x00,
   /*R_LEN*/ 0x00, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x42,
   /*0x13*/ 0x15, /*0x14*/ 0x42, /*0x15*/ 0x15,
   /*0x16*/ 0x42, /*0x17*/ 0x15, /*0x18*/ 0x42,
   /*0x19*/ 0x15, /*0x1A*/ 0x07, /*0x1B*/ 0x00,
   /*0x1C*/ 0x08, /*0x1D*/ 0x12, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0x03, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x80, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0x42, /*0x48*/ 0x15,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2472);
}    /* #2472[212.3] */
RegWrite(R_CTL, 1, 0x39);    /* #2473[212.3] */
RegWrite(R_CTL, 1, 0x79);    /* #2474[212.3] */
RegWrite(R_CTL, 1, 0xF9);    /* #2475[212.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2476[212.4] */
RegWrite(R_CTL, 1, 0x39);    /* #2477[212.4] */
RegWrite(0x43, 1, 0x07);    /* #2478[212.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2479[212.5] */
RegWrite(0x32, 2, 0x290A);    /* #2480[212.5] */
RegWrite(0x34, 1, 0xC3);    /* #2481[214.3] */
RegWrite(0x49, 1, 0x9E);    /* #2482[214.3] */
{
 unsigned char uchRegs2483[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0x40, /*R_SWIDH*/ 0x00, /*R_STPS*/ 0x56,
   /*R_STPSH*/ 0x06, /*0x08*/ 0x00, /*0x09*/ 0x00,
   /*R_LEN*/ 0x00, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x80, /*0x15*/ 0x2A,
   /*0x16*/ 0xC0, /*0x17*/ 0x40, /*0x18*/ 0xC0,
   /*0x19*/ 0x40, /*0x1A*/ 0xFF, /*0x1B*/ 0x01,
   /*0x1C*/ 0x88, /*0x1D*/ 0x40, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0xC3, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x07, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2483);
}    /* #2483[214.4] */
RegWrite(0x43, 1, 0x03);    /* #2484[214.4] */
RegWrite(R_STPS, 2, 0x0000);    /* #2485[214.4] */
RegWrite(R_LEN, 2, 0x0656);    /* #2486[214.4] */
RegWrite(0x47, 2, 0xA000);    /* #2487[214.4] */
RegWrite(0x34, 1, 0xC3);    /* #2488[214.4] */
RegWrite(0x49, 1, 0x9E);    /* #2489[214.4] */
RegWrite(R_CTL, 1, 0x19);    /* #2490[214.4] */
RegWrite(R_CTL, 1, 0x59);    /* #2491[214.4] */
RegWrite(R_CTL, 1, 0xD9);    /* #2492[214.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0000*/    /* #2493[214.4] */
RegWrite(0x47, 2, 0xA000);    /* #2494[214.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x064E*/    /* #2495[214.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0649*/    /* #2496[214.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0644*/    /* #2497[214.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x063F*/    /* #2498[214.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x063B*/    /* #2499[214.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0634*/    /* #2500[214.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0631*/    /* #2501[214.5] */
RegWrite(0x47, 2, 0x9800);    /* #2502[214.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x062A*/    /* #2503[214.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0622*/    /* #2504[214.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x061B*/    /* #2505[214.5] */
RegWrite(0x47, 2, 0x9000);    /* #2506[214.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x060B*/    /* #2507[214.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x0601*/    /* #2508[214.6] */
RegWrite(0x47, 2, 0x8800);    /* #2509[214.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x05EB*/    /* #2510[214.6] */
RegWrite(0x47, 2, 0x8000);    /* #2511[214.6] */
RegWrite(0x43, 1, 0x07);    /* #2512[214.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x05C8*/    /* #2513[214.7] */
RegWrite(0x47, 2, 0x7800);    /* #2514[214.7] */
RegWrite(0x43, 1, 0x07);    /* #2515[214.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x05A2*/    /* #2516[214.7] */
RegWrite(0x47, 2, 0x7000);    /* #2517[214.7] */
RegWrite(0x43, 1, 0x07);    /* #2518[214.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x057C*/    /* #2519[214.8] */
RegWrite(0x47, 2, 0x6800);    /* #2520[214.8] */
RegWrite(0x43, 1, 0x07);    /* #2521[214.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0549*/    /* #2522[214.8] */
RegWrite(0x47, 2, 0x6000);    /* #2523[214.9] */
RegWrite(0x43, 1, 0x07);    /* #2524[214.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x0523*/    /* #2525[214.9] */
RegWrite(0x47, 2, 0x5800);    /* #2526[214.9] */
RegWrite(0x43, 1, 0x07);    /* #2527[214.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x04E1*/    /* #2528[215.0] */
RegWrite(0x47, 2, 0x5000);    /* #2529[215.0] */
RegWrite(0x43, 1, 0x07);    /* #2530[215.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0496*/    /* #2531[215.1] */
RegWrite(0x47, 2, 0x40C0);    /* #2532[215.1] */
RegWrite(0x32, 2, 0x290A);    /* #2533[215.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2534[215.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2535[215.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2536[215.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2537[215.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2538[215.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2539[215.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2540[215.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2541[216.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2542[216.0] */
RegWrite(0x43, 1, 0x03);    /* #2543[216.0] */
RegWrite(R_CTL, 1, 0x39);    /* #2544[216.1] */
