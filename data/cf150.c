ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2367[155.5] */
RegWrite(0x43, 1, 0x03);    /* #2368[155.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2369[155.5] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #2370[155.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2371[155.5] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #2372[155.5] */
RegWrite(0x32, 2, 0x2D0B);    /* #2373[155.5] */
{
 unsigned char uchRegs2374[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2374);
}    /* #2374[155.5] */
RegWrite(0x43, 1, 0x03);    /* #2375[155.5] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #2376[155.5] */
RegWrite(R_CCAL, 3, 0x848888);    /* #2377[155.5] */
RegWrite(0x32, 2, 0x2D0B);    /* #2378[155.5] */
RegWrite(0x32, 2, 0x2D0B);    /* #2379[155.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2380[155.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2381[155.6] */
RegWrite(0x32, 2, 0x2D0B);    /* #2382[155.6] */
{
 unsigned char uchRegs2383[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2383);
}    /* #2383[155.6] */
RegWrite(0x43, 1, 0x03);    /* #2384[155.6] */
RegWrite(R_CCAL, 3, 0x808080);    /* #2385[155.6] */
RegWrite(0x32, 2, 0x2D0B);    /* #2386[155.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2387[155.6] */
RegWrite(0x32, 2, 0x2D0B);    /* #2388[155.6] */
RegWrite(0x34, 1, 0x63);    /* #2389[155.6] */
RegWrite(0x49, 1, 0x9E);    /* #2390[155.6] */
{
 unsigned char uchRegs2391[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2391);
}    /* #2391[155.6] */
RegWrite(R_CTL, 1, 0x39);    /* #2392[155.6] */
RegWrite(R_CTL, 1, 0x79);    /* #2393[155.6] */
RegWrite(R_CTL, 1, 0xF9);    /* #2394[155.6] */
RegWrite(0x32, 2, 0x2D0B);    /* #2395[155.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2396[155.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2397[155.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2398[155.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2399[155.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2400[155.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2401[156.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2402[156.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2403[156.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2404[156.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2405[156.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2406[156.2] */
RegWrite(R_LMP, 1, 0x01);    /* #2407[156.2] */
RegWrite(R_LMP, 1, 0x01);    /* #2408[156.2] */
RegWrite(R_CTL, 1, 0x39);    /* #2409[156.2] */
RegWrite(0x34, 1, 0x63);    /* #2410[156.2] */
RegWrite(0x49, 1, 0x96);    /* #2411[156.2] */
{
 unsigned char uchRegs2412[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2412);
}    /* #2412[156.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2413[156.3] */
RegWrite(R_CTL, 1, 0x39);    /* #2414[156.3] */
RegWrite(R_CTL, 1, 0x79);    /* #2415[156.3] */
RegWrite(R_CTL, 1, 0xF9);    /* #2416[156.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2417[156.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1CB3*/    /* #2418[156.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2419[156.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB34C*/    /* #2420[156.4] */
BulkRead(fh,32768);   /* #2421[156.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2422[156.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xEAD4*/    /* #2423[156.4] */
BulkRead(fh,32768);   /* #2424[156.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2425[156.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2426[156.5] */
BulkRead(fh,32768);   /* #2427[156.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2428[156.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2429[156.5] */
BulkRead(fh,32768);   /* #2430[156.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2431[156.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2432[156.6] */
BulkRead(fh,32768);   /* #2433[156.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2434[156.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2435[156.6] */
BulkRead(fh,32768);   /* #2436[156.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2437[156.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2438[156.7] */
BulkRead(fh,32768);   /* #2439[156.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2440[156.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2441[156.7] */
BulkRead(fh,32768);   /* #2442[156.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2443[156.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2444[156.8] */
BulkRead(fh,32768);   /* #2445[156.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2446[156.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2447[156.8] */
BulkRead(fh,32768);   /* #2448[156.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2449[156.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2450[156.9] */
BulkRead(fh,32768);   /* #2451[156.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2452[156.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2453[156.9] */
BulkRead(fh,32768);   /* #2454[157.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2455[157.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2456[157.0] */
BulkRead(fh,32768);   /* #2457[157.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2458[157.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2459[157.0] */
BulkRead(fh,32768);   /* #2460[157.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2461[157.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2462[157.1] */
BulkRead(fh,32768);   /* #2463[157.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2464[157.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2465[157.1] */
BulkRead(fh,32768);   /* #2466[157.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2467[157.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2468[157.2] */
BulkRead(fh,32768);   /* #2469[157.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2470[157.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2471[157.2] */
BulkRead(fh,32768);   /* #2472[157.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2473[157.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2474[157.3] */
BulkRead(fh,32768);   /* #2475[157.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2476[157.3] */
BulkRead(fh,32768);   /* #2477[157.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2478[157.3] */
BulkRead(fh,32768);   /* #2479[157.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2480[157.4] */
BulkRead(fh,32768);   /* #2481[157.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2482[157.4] */
BulkRead(fh,32768);   /* #2483[157.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2484[157.5] */
BulkRead(fh,32768);   /* #2485[157.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2486[157.5] */
BulkRead(fh,32768);   /* #2487[157.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2488[157.5] */
BulkRead(fh,32768);   /* #2489[157.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2490[157.6] */
BulkRead(fh,32768);   /* #2491[157.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2492[157.7] */
BulkRead(fh,32768);   /* #2493[157.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF008*/    /* #2494[157.7] */
BulkRead(fh,32768);   /* #2495[157.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB008*/    /* #2496[157.7] */
BulkRead(fh,32768);   /* #2497[157.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #2498[157.8] */
BulkRead(fh,32768);   /* #2499[157.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #2500[157.8] */
BulkRead(fh,24592);   /* #2501[157.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2502[157.9] */
RegWrite(0x43, 1, 0x03);    /* #2503[157.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2504[157.9] */
{
 unsigned char uchRegs2505[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2505);
}    /* #2505[157.9] */
RegWrite(R_CTL, 1, 0x39);    /* #2506[157.9] */
RegWrite(R_CTL, 1, 0x79);    /* #2507[157.9] */
RegWrite(R_CTL, 1, 0xF9);    /* #2508[157.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2509[157.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2510[157.9] */
RegWrite(R_CTL, 1, 0x39);    /* #2511[157.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2512[158.0] */
RegWrite(0x32, 2, 0x2D0B);    /* #2513[158.0] */
RegWrite(0x34, 1, 0x63);    /* #2514[158.0] */
RegWrite(0x49, 1, 0x9E);    /* #2515[158.0] */
{
 unsigned char uchRegs2516[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2516);
}    /* #2516[158.0] */
RegWrite(R_CTL, 1, 0x19);    /* #2517[158.0] */
RegWrite(R_CTL, 1, 0x59);    /* #2518[158.0] */
RegWrite(R_CTL, 1, 0xD9);    /* #2519[158.0] */
RegWrite(0x32, 2, 0x2D0B);    /* #2520[158.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2521[158.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2522[158.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2523[158.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2524[158.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2525[158.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2526[158.7] */
RegWrite(R_LMP, 1, 0x01);    /* #2527[158.7] */
RegWrite(R_LMP, 1, 0x01);    /* #2528[158.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2529[158.8] */
RegWrite(0x32, 2, 0x2D0B);    /* #2530[158.8] */
RegWrite(0x34, 1, 0x63);    /* #2531[158.8] */
RegWrite(0x49, 1, 0x9E);    /* #2532[158.8] */
{
 unsigned char uchRegs2533[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2533);
}    /* #2533[158.8] */
RegWrite(R_CTL, 1, 0x19);    /* #2534[158.8] */
RegWrite(R_CTL, 1, 0x59);    /* #2535[158.8] */
RegWrite(R_CTL, 1, 0xD9);    /* #2536[158.8] */
RegWrite(0x32, 2, 0x2D0B);    /* #2537[158.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2538[158.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2539[158.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2540[159.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2541[159.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2542[159.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2543[159.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2544[159.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2545[159.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2546[159.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2547[159.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2548[159.4] */
RegWrite(0x32, 2, 0x2D0B);    /* #2549[159.4] */
RegWrite(R_LMP, 1, 0x01);    /* #2550[159.4] */
RegWrite(R_LMP, 1, 0x01);    /* #2551[159.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2552[159.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2553[159.4] */
RegWrite(R_CTL, 1, 0x39);    /* #2554[159.4] */
RegWrite(0x34, 1, 0x43);    /* #2555[159.4] */
RegWrite(0x49, 1, 0x9E);    /* #2556[159.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2557[159.5] */
RegWrite(0x32, 2, 0x2D0B);    /* #2558[159.5] */
RegWrite(0x34, 1, 0x63);    /* #2559[159.5] */
RegWrite(0x49, 1, 0x9E);    /* #2560[159.5] */
{
 unsigned char uchRegs2561[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2561);
}    /* #2561[159.5] */
RegWrite(R_CTL, 1, 0x39);    /* #2562[159.5] */
RegWrite(R_CTL, 1, 0x79);    /* #2563[159.5] */
RegWrite(R_CTL, 1, 0xF9);    /* #2564[159.5] */
RegWrite(0x32, 2, 0x2D0B);    /* #2565[159.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2566[159.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2567[159.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2568[159.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2569[159.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2570[159.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2571[159.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2572[159.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2573[160.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2574[160.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2575[160.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2576[160.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2577[160.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2578[160.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2579[160.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2580[160.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2581[160.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2582[160.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2583[160.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2584[160.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2585[160.6] */
RegWrite(0x43, 1, 0x03);    /* #2586[160.6] */
RegWrite(R_CTL, 1, 0x39);    /* #2587[160.6] */
RegWrite(0x34, 1, 0x43);    /* #2588[160.6] */
RegWrite(0x49, 1, 0x9E);    /* #2589[160.6] */
{
 unsigned char uchRegs2590[]={
   0xFC /*!!R_SPOS!!*/, 0x00 /*R_SPOSH*/, 0x24 /*!!0x03!!*/,
   0xB0 /*!!R_SWID!!*/, 0xC4 /*!!R_SWIDH!!*/, 0x06 /*!!R_STPS!!*/,
   0x00 /*!!R_STPSH!!*/, 0xFF /*!!0x08!!*/, 0xFF /*!!0x09!!*/,
   0x22 /*!!R_LEN!!*/, 0x07 /*!!R_LENH!!*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x42 /*!!0x12!!*/,
   0x15 /*0x13*/, 0x84 /*!!0x14!!*/, 0x2A /*0x15*/,
   0xC5 /*!!0x16!!*/, 0x40 /*0x17*/, 0xC5 /*!!0x18!!*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0x0B /*0x32*/, 0x2D /*0x33*/,
   0x43 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC5 /*!!0x47!!*/, 0x40 /*0x48*/,
   0x9E /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2590);
}    /* #2590[160.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2591[160.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2592[160.8] */
RegWrite(R_CTL, 1, 0x39);    /* #2593[160.8] */
RegWrite(R_CTL, 1, 0x79);    /* #2594[160.8] */
RegWrite(R_CTL, 1, 0xF9);    /* #2595[160.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2596[160.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2597[160.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2598[161.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1068*/    /* #2599[161.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2600[161.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20D0*/    /* #2601[161.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2602[161.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3200*/    /* #2603[161.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2604[161.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4650*/    /* #2605[161.3] */
BulkRead(fh,32768);   /* #2606[161.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2607[161.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x16D7*/    /* #2608[161.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2609[161.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2720*/    /* #2610[161.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2611[161.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3918*/    /* #2612[161.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2613[161.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4A25*/    /* #2614[161.7] */
BulkRead(fh,32768);   /* #2615[161.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2616[161.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1DD0*/    /* #2617[161.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2618[161.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2692*/    /* #2619[161.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2620[161.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B80*/    /* #2621[162.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2622[162.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4BF4*/    /* #2623[162.1] */
BulkRead(fh,32768);   /* #2624[162.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2625[162.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D18*/    /* #2626[162.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2627[162.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BD0*/    /* #2628[162.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2629[162.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3AC8*/    /* #2630[162.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2631[162.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4BDE*/    /* #2632[162.4] */
BulkRead(fh,32768);   /* #2633[162.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2634[162.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1BAF*/    /* #2635[162.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2636[162.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x24F8*/    /* #2637[162.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2638[162.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3560*/    /* #2639[162.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2640[162.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4758*/    /* #2641[162.7] */
BulkRead(fh,32768);   /* #2642[162.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2643[162.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x16FE*/    /* #2644[162.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2645[162.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2760*/    /* #2646[163.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2647[163.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BB0*/    /* #2648[163.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2649[163.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5000*/    /* #2650[163.1] */
BulkRead(fh,32768);   /* #2651[163.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2652[163.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D93*/    /* #2653[163.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2654[163.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #2655[163.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2656[163.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4138*/    /* #2657[163.4] */
BulkRead(fh,32768);   /* #2658[163.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2659[163.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1112*/    /* #2660[163.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2661[163.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2208*/    /* #2662[163.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2663[163.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3338*/    /* #2664[163.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2665[163.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x46C0*/    /* #2666[163.8] */
BulkRead(fh,32768);   /* #2667[163.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2668[163.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x18B8*/    /* #2669[164.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2670[164.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x289D*/    /* #2671[164.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2672[164.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BE0*/    /* #2673[164.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2674[164.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4D10*/    /* #2675[164.2] */
BulkRead(fh,32768);   /* #2676[164.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2677[164.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E40*/    /* #2678[164.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2679[164.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2AC0*/    /* #2680[164.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2681[164.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40A0*/    /* #2682[164.5] */
BulkRead(fh,32768);   /* #2683[164.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2684[164.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x11D0*/    /* #2685[164.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2686[164.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1809*/    /* #2687[164.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2688[164.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BD7*/    /* #2689[164.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2690[164.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x40B0*/    /* #2691[164.9] */
BulkRead(fh,32768);   /* #2692[164.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2693[164.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0DF8*/    /* #2694[164.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2695[165.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A78*/    /* #2696[165.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2697[165.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BA8*/    /* #2698[165.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2699[165.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3FF8*/    /* #2700[165.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2701[165.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5123*/    /* #2702[165.3] */
BulkRead(fh,32768);   /* #2703[165.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2704[165.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x25EB*/    /* #2705[165.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2706[165.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x31F8*/    /* #2707[165.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2708[165.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4328*/    /* #2709[165.6] */
BulkRead(fh,32768);   /* #2710[165.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2711[165.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x12C8*/    /* #2712[165.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2713[165.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x24C0*/    /* #2714[165.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2715[165.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3780*/    /* #2716[165.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2717[166.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4BD0*/    /* #2718[166.0] */
BulkRead(fh,32768);   /* #2719[166.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2720[166.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x188C*/    /* #2721[166.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2722[166.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x28B8*/    /* #2723[166.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2724[166.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C40*/    /* #2725[166.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2726[166.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x51FD*/    /* #2727[166.4] */
BulkRead(fh,32768);   /* #2728[166.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2729[166.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x21C0*/    /* #2730[166.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2731[166.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2738*/    /* #2732[166.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2733[166.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x36D8*/    /* #2734[166.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2735[166.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x45B0*/    /* #2736[166.7] */
BulkRead(fh,32768);   /* #2737[166.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2738[166.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1618*/    /* #2739[166.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2740[166.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F78*/    /* #2741[166.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2742[166.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F18*/    /* #2743[167.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2744[167.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4430*/    /* #2745[167.0] */
BulkRead(fh,32768);   /* #2746[167.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2747[167.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13D0*/    /* #2748[167.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2749[167.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2438*/    /* #2750[167.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2751[167.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x344C*/    /* #2752[167.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2753[167.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4508*/    /* #2754[167.4] */
BulkRead(fh,32768);   /* #2755[167.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2756[167.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2060*/    /* #2757[167.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2758[167.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30C8*/    /* #2759[167.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2760[167.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4130*/    /* #2761[167.7] */
BulkRead(fh,32768);   /* #2762[167.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2763[167.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1198*/    /* #2764[167.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2765[167.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1AF8*/    /* #2766[168.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2767[168.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E80*/    /* #2768[168.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2769[168.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x45F0*/    /* #2770[168.1] */
BulkRead(fh,32768);   /* #2771[168.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2772[168.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x14C8*/    /* #2773[168.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2774[168.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2733*/    /* #2775[168.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2776[168.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x37F0*/    /* #2777[168.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2778[168.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4B78*/    /* #2779[168.5] */
BulkRead(fh,32768);   /* #2780[168.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2781[168.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1931*/    /* #2782[168.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2783[168.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2928*/    /* #2784[168.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2785[168.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BE8*/    /* #2786[168.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2787[168.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4DE0*/    /* #2788[168.9] */
BulkRead(fh,32768);   /* #2789[168.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2790[169.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1290*/    /* #2791[169.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1290*/    /* #2792[169.0] */
BulkRead(fh,9504);   /* #2793[169.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2794[169.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2795[169.1] */
RegWrite(0x43, 1, 0x03);    /* #2796[169.1] */
RegWrite(0x43, 1, 0x03);    /* #2797[169.2] */
RegWrite(R_CTL, 1, 0x39);    /* #2798[169.2] */
{
 unsigned char uchRegs2799[]={
   0x00 /*!!R_SPOS!!*/, 0x00 /*R_SPOSH*/, 0x00 /*!!0x03!!*/,
   0x00 /*!!R_SWID!!*/, 0x00 /*!!R_SWIDH!!*/, 0x00 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!R_LEN!!*/, 0x00 /*!!R_LENH!!*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x42 /*0x12*/,
   0x15 /*0x13*/, 0x84 /*0x14*/, 0x2A /*0x15*/,
   0xC5 /*0x16*/, 0x40 /*0x17*/, 0xC5 /*0x18*/,
   0x40 /*0x19*/, 0xFF /*0x1A*/, 0x01 /*0x1B*/,
   0x88 /*0x1C*/, 0x40 /*0x1D*/, 0x4C /*0x1E*/,
   0x50 /*0x1F*/, 0x00 /*0x20*/, 0x0C /*0x21*/,
   0x21 /*0x22*/, 0xF0 /*0x23*/, 0x40 /*0x24*/,
   0x00 /*0x25*/, 0x0A /*0x26*/, 0xF0 /*0x27*/,
   0x00 /*0x28*/, 0x00 /*0x29*/, 0x4E /*0x2A*/,
   0xF0 /*0x2B*/, 0x00 /*0x2C*/, 0x00 /*0x2D*/,
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0x0B /*0x32*/, 0x2D /*0x33*/,
   0x43 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x80 /*!!0x41!!*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC5 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2799);
}    /* #2799[169.3] */
RegWrite(R_CTL, 1, 0x39);    /* #2800[169.3] */
RegWrite(R_CTL, 1, 0x79);    /* #2801[169.3] */
RegWrite(R_CTL, 1, 0xF9);    /* #2802[169.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2803[169.4] */
RegWrite(R_CTL, 1, 0x39);    /* #2804[169.4] */
RegWrite(0x43, 1, 0x07);    /* #2805[169.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2806[169.4] */
RegWrite(0x32, 2, 0x2D0B);    /* #2807[169.4] */
RegWrite(0x34, 1, 0xC3);    /* #2808[169.5] */
RegWrite(0x49, 1, 0x9E);    /* #2809[169.5] */
{
 unsigned char uchRegs2810[]={
   0x00 /*R_SPOS*/, 0x00 /*R_SPOSH*/, 0x3F /*!!0x03!!*/,
   0x40 /*!!R_SWID!!*/, 0x00 /*R_SWIDH*/, 0xC7 /*!!R_STPS!!*/,
   0x08 /*!!R_STPSH!!*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
   0x00 /*R_LEN*/, 0x00 /*R_LENH*/, 0x6D /*0x0C*/,
   0x70 /*0x0D*/, 0x69 /*0x0E*/, 0xD0 /*0x0F*/,
   0x00 /*0x10*/, 0x00 /*0x11*/, 0x40 /*!!0x12!!*/,
   0x15 /*0x13*/, 0x80 /*!!0x14!!*/, 0x2A /*0x15*/,
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
   0x9E /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2810);
}    /* #2810[169.5] */
RegWrite(0x43, 1, 0x03);    /* #2811[169.5] */
RegWrite(R_STPS, 2, 0x0000);    /* #2812[169.5] */
RegWrite(R_LEN, 2, 0x08C7);    /* #2813[169.6] */
RegWrite(0x47, 2, 0xA000);    /* #2814[169.6] */
RegWrite(0x34, 1, 0xC3);    /* #2815[169.6] */
RegWrite(0x49, 1, 0x9E);    /* #2816[169.6] */
RegWrite(R_CTL, 1, 0x19);    /* #2817[169.7] */
RegWrite(R_CTL, 1, 0x59);    /* #2818[169.7] */
RegWrite(R_CTL, 1, 0xD9);    /* #2819[169.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x08C6*/    /* #2820[169.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x08BC*/    /* #2821[169.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x08B3*/    /* #2822[169.8] */
RegWrite(0x47, 2, 0xA000);    /* #2823[169.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0897*/    /* #2824[169.8] */
RegWrite(0x47, 2, 0x9800);    /* #2825[169.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x0883*/    /* #2826[169.9] */
RegWrite(0x47, 2, 0x9000);    /* #2827[169.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x086D*/    /* #2828[169.9] */
RegWrite(0x47, 2, 0x8800);    /* #2829[169.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x084D*/    /* #2830[170.0] */
RegWrite(0x47, 2, 0x8000);    /* #2831[170.0] */
RegWrite(0x43, 1, 0x07);    /* #2832[170.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x082B*/    /* #2833[170.0] */
RegWrite(0x47, 2, 0x7800);    /* #2834[170.0] */
RegWrite(0x43, 1, 0x07);    /* #2835[170.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x0805*/    /* #2836[170.1] */
RegWrite(0x47, 2, 0x7000);    /* #2837[170.1] */
RegWrite(0x43, 1, 0x07);    /* #2838[170.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x07DE*/    /* #2839[170.1] */
RegWrite(0x47, 2, 0x6800);    /* #2840[170.1] */
RegWrite(0x43, 1, 0x07);    /* #2841[170.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x07A9*/    /* #2842[170.2] */
RegWrite(0x47, 2, 0x6000);    /* #2843[170.2] */
RegWrite(0x43, 1, 0x07);    /* #2844[170.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x077B*/    /* #2845[170.3] */
RegWrite(0x47, 2, 0x5800);    /* #2846[170.3] */
RegWrite(0x43, 1, 0x07);    /* #2847[170.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x0738*/    /* #2848[170.3] */
RegWrite(0x47, 2, 0x5000);    /* #2849[170.3] */
RegWrite(0x43, 1, 0x07);    /* #2850[170.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0701*/    /* #2851[170.4] */
RegWrite(0x47, 2, 0x40C0);    /* #2852[170.4] */
RegWrite(0x32, 2, 0x2D0B);    /* #2853[170.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2854[170.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2855[170.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2856[170.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2857[171.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2858[171.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2859[171.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2860[171.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2861[171.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2862[171.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2863[171.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2864[171.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2865[171.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2866[171.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2867[171.9] */
RegWrite(0x43, 1, 0x03);    /* #2868[171.9] */
RegWrite(R_CTL, 1, 0x39);    /* #2869[172.0] */
