ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2452[726.1] */
RegWrite(0x43, 1, 0x03);    /* #2453[726.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2454[726.1] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #2455[726.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2456[726.1] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #2457[726.1] */
RegWrite(0x32, 2, 0x20C9);    /* #2458[726.2] */
{
 unsigned char uchRegs2459[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2459);
}    /* #2459[726.2] */
RegWrite(0x43, 1, 0x03);    /* #2460[726.2] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #2461[726.2] */
RegWrite(R_CCAL, 3, 0x848888);    /* #2462[726.2] */
RegWrite(0x32, 2, 0x20C9);    /* #2463[726.2] */
RegWrite(0x32, 2, 0x20C9);    /* #2464[726.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2465[726.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2466[726.2] */
RegWrite(0x32, 2, 0x20C9);    /* #2467[726.2] */
{
 unsigned char uchRegs2468[]={
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
  RegWriteArray(R_ALL, 74, uchRegs2468);
}    /* #2468[726.2] */
RegWrite(0x43, 1, 0x03);    /* #2469[726.2] */
RegWrite(R_CCAL, 3, 0x808080);    /* #2470[726.2] */
RegWrite(0x32, 2, 0x20C9);    /* #2471[726.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2472[726.2] */
RegWrite(0x32, 2, 0x20C9);    /* #2473[726.2] */
RegWrite(0x34, 1, 0x63);    /* #2474[726.2] */
RegWrite(0x49, 1, 0x9E);    /* #2475[726.2] */
{
 unsigned char uchRegs2476[]={
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x00,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2476);
}    /* #2476[726.2] */
RegWrite(R_CTL, 1, 0x39);    /* #2477[726.2] */
RegWrite(R_CTL, 1, 0x79);    /* #2478[726.2] */
RegWrite(R_CTL, 1, 0xF9);    /* #2479[726.2] */
RegWrite(0x32, 2, 0x20C9);    /* #2480[726.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2481[726.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2482[726.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2483[726.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2484[726.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2485[726.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2486[726.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2487[726.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2488[726.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2489[726.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2490[726.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2491[726.8] */
RegWrite(R_LMP, 1, 0x01);    /* #2492[726.8] */
RegWrite(R_LMP, 1, 0x01);    /* #2493[726.8] */
RegWrite(R_CTL, 1, 0x39);    /* #2494[726.8] */
RegWrite(0x34, 1, 0x63);    /* #2495[726.8] */
RegWrite(0x49, 1, 0x96);    /* #2496[726.8] */
{
 unsigned char uchRegs2497[]={
   /*R_SPOS*/ 0xFC, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x20, /*R_CSTAT*/ 0x00,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2497);
}    /* #2497[726.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2498[726.9] */
RegWrite(R_CTL, 1, 0x39);    /* #2499[726.9] */
RegWrite(R_CTL, 1, 0x79);    /* #2500[726.9] */
RegWrite(R_CTL, 1, 0xF9);    /* #2501[726.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2502[726.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x323E*/    /* #2503[727.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2504[727.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB34C*/    /* #2505[727.0] */
BulkRead(fh,32768);   /* #2506[727.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2507[727.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFE17*/    /* #2508[727.0] */
BulkRead(fh,32768);   /* #2509[727.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2510[727.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2511[727.1] */
BulkRead(fh,32768);   /* #2512[727.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2513[727.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2514[727.1] */
BulkRead(fh,32768);   /* #2515[727.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2516[727.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2517[727.2] */
BulkRead(fh,32768);   /* #2518[727.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2519[727.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2520[727.2] */
BulkRead(fh,32768);   /* #2521[727.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2522[727.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2523[727.3] */
BulkRead(fh,32768);   /* #2524[727.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2525[727.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2526[727.3] */
BulkRead(fh,32768);   /* #2527[727.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2528[727.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2529[727.4] */
BulkRead(fh,32768);   /* #2530[727.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2531[727.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2532[727.4] */
BulkRead(fh,32768);   /* #2533[727.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2534[727.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2535[727.5] */
BulkRead(fh,32768);   /* #2536[727.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2537[727.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2538[727.5] */
BulkRead(fh,32768);   /* #2539[727.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2540[727.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2541[727.6] */
BulkRead(fh,32768);   /* #2542[727.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2543[727.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2544[727.6] */
BulkRead(fh,32768);   /* #2545[727.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2546[727.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2547[727.7] */
BulkRead(fh,32768);   /* #2548[727.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2549[727.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2550[727.7] */
BulkRead(fh,32768);   /* #2551[727.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2552[727.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2553[727.8] */
BulkRead(fh,32768);   /* #2554[727.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2555[727.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2556[727.8] */
BulkRead(fh,32768);   /* #2557[727.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2558[727.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2559[727.9] */
BulkRead(fh,32768);   /* #2560[727.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2561[727.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2562[727.9] */
BulkRead(fh,32768);   /* #2563[728.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2564[728.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2565[728.0] */
BulkRead(fh,32768);   /* #2566[728.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2567[728.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2568[728.1] */
BulkRead(fh,32768);   /* #2569[728.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2570[728.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2571[728.1] */
BulkRead(fh,32768);   /* #2572[728.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2573[728.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2574[728.2] */
BulkRead(fh,32768);   /* #2575[728.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2576[728.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2577[728.2] */
BulkRead(fh,32768);   /* #2578[728.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2579[728.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2580[728.3] */
BulkRead(fh,32768);   /* #2581[728.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2582[728.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2583[728.4] */
BulkRead(fh,32768);   /* #2584[728.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #2585[728.4] */
BulkRead(fh,32768);   /* #2586[728.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF008*/    /* #2587[728.4] */
BulkRead(fh,32768);   /* #2588[728.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB008*/    /* #2589[728.5] */
BulkRead(fh,32768);   /* #2590[728.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #2591[728.5] */
BulkRead(fh,32768);   /* #2592[728.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #2593[728.6] */
BulkRead(fh,24592);   /* #2594[728.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2595[728.6] */
RegWrite(0x43, 1, 0x03);    /* #2596[728.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2597[728.6] */
{
 unsigned char uchRegs2598[]={
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x80, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x79, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2598);
}    /* #2598[728.6] */
RegWrite(R_CTL, 1, 0x39);    /* #2599[728.6] */
RegWrite(R_CTL, 1, 0x79);    /* #2600[728.6] */
RegWrite(R_CTL, 1, 0xF9);    /* #2601[728.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2602[728.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2603[728.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2604[728.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2605[728.7] */
RegWrite(R_CTL, 1, 0x39);    /* #2606[728.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2607[728.7] */
RegWrite(0x32, 2, 0x20C9);    /* #2608[728.7] */
RegWrite(0x34, 1, 0x63);    /* #2609[728.7] */
RegWrite(0x49, 1, 0x9E);    /* #2610[728.7] */
{
 unsigned char uchRegs2611[]={
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2611);
}    /* #2611[728.7] */
RegWrite(R_CTL, 1, 0x19);    /* #2612[728.7] */
RegWrite(R_CTL, 1, 0x59);    /* #2613[728.8] */
RegWrite(R_CTL, 1, 0xD9);    /* #2614[728.8] */
RegWrite(0x32, 2, 0x20C9);    /* #2615[728.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2616[728.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2617[728.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2618[728.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2619[729.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2620[729.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2621[729.4] */
RegWrite(R_LMP, 1, 0x01);    /* #2622[729.4] */
RegWrite(R_LMP, 1, 0x01);    /* #2623[729.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2624[729.5] */
RegWrite(0x32, 2, 0x20C9);    /* #2625[729.5] */
RegWrite(0x34, 1, 0x63);    /* #2626[729.5] */
RegWrite(0x49, 1, 0x9E);    /* #2627[729.5] */
{
 unsigned char uchRegs2628[]={
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x59, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2628);
}    /* #2628[729.5] */
RegWrite(R_CTL, 1, 0x19);    /* #2629[729.5] */
RegWrite(R_CTL, 1, 0x59);    /* #2630[729.5] */
RegWrite(R_CTL, 1, 0xD9);    /* #2631[729.5] */
RegWrite(0x32, 2, 0x20C9);    /* #2632[729.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2633[729.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2634[729.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2635[729.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2636[729.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2637[729.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2638[729.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2639[729.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2640[730.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2641[730.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2642[730.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2643[730.1] */
RegWrite(0x32, 2, 0x20C9);    /* #2644[730.1] */
RegWrite(R_LMP, 1, 0x01);    /* #2645[730.1] */
RegWrite(R_LMP, 1, 0x01);    /* #2646[730.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2647[730.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2648[730.1] */
RegWrite(R_CTL, 1, 0x39);    /* #2649[730.1] */
RegWrite(0x34, 1, 0x63);    /* #2650[730.2] */
RegWrite(0x49, 1, 0x96);    /* #2651[730.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2652[730.2] */
RegWrite(0x32, 2, 0x20C9);    /* #2653[730.2] */
RegWrite(0x34, 1, 0x63);    /* #2654[730.2] */
RegWrite(0x49, 1, 0x9E);    /* #2655[730.2] */
{
 unsigned char uchRegs2656[]={
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x63, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2656);
}    /* #2656[730.2] */
RegWrite(R_CTL, 1, 0x39);    /* #2657[730.2] */
RegWrite(R_CTL, 1, 0x79);    /* #2658[730.2] */
RegWrite(R_CTL, 1, 0xF9);    /* #2659[730.2] */
RegWrite(0x32, 2, 0x20C9);    /* #2660[730.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2661[730.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2662[730.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2663[730.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2664[730.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2665[730.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2666[730.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2667[730.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2668[730.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2669[730.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2670[730.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2671[730.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2672[730.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2673[731.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2674[731.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2675[731.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2676[731.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2677[731.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #2678[731.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #2679[731.3] */
RegWrite(0x43, 1, 0x03);    /* #2680[731.3] */
RegWrite(R_CTL, 1, 0x39);    /* #2681[731.3] */
RegWrite(0x34, 1, 0x03);    /* #2682[731.3] */
RegWrite(0x49, 1, 0x96);    /* #2683[731.3] */
{
 unsigned char uchRegs2684[]={
   /*R_SPOS*/ 0xFC, /*R_SPOSH*/ 0x00, /*0x03*/ 0x2A,
   /*R_SWID*/ 0xB0, /*R_SWIDH*/ 0x04, /*R_STPS*/ 0x06,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x2A,
   /*R_LEN*/ 0x16, /*R_LENH*/ 0x07, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x40, /*0x15*/ 0x15,
   /*0x16*/ 0x40, /*0x17*/ 0x15, /*0x18*/ 0x40,
   /*0x19*/ 0x15, /*0x1A*/ 0x07, /*0x1B*/ 0x00,
   /*0x1C*/ 0x08, /*0x1D*/ 0x12, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x03, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0x40, /*0x48*/ 0x15,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2684);
}    /* #2684[731.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2685[731.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2686[731.5] */
RegWrite(R_CTL, 1, 0x39);    /* #2687[731.5] */
RegWrite(R_CTL, 1, 0x79);    /* #2688[731.5] */
RegWrite(R_CTL, 1, 0xF9);    /* #2689[731.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2690[731.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0258*/    /* #2691[731.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2692[731.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0F3C*/    /* #2693[731.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2694[731.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20D0*/    /* #2695[731.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2696[731.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x300C*/    /* #2697[732.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2698[732.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3A98*/    /* #2699[732.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2700[732.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x477C*/    /* #2701[732.1] */
BulkRead(fh,32768);   /* #2702[732.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2703[732.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1208*/    /* #2704[732.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2705[732.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1910*/    /* #2706[732.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2707[732.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x284C*/    /* #2708[732.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2709[732.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x38B4*/    /* #2710[732.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2711[732.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x47F0*/    /* #2712[732.6] */
BulkRead(fh,32768);   /* #2713[732.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2714[732.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x127C*/    /* #2715[732.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2716[732.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E34*/    /* #2717[732.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2718[732.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E9C*/    /* #2719[732.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2720[732.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3DD8*/    /* #2721[733.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2722[733.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4ABC*/    /* #2723[733.0] */
BulkRead(fh,32768);   /* #2724[733.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2725[733.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x141C*/    /* #2726[733.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2727[733.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19F8*/    /* #2728[733.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2729[733.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2745*/    /* #2730[733.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2731[733.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x346F*/    /* #2732[733.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2733[733.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x41D0*/    /* #2734[733.5] */
BulkRead(fh,32768);   /* #2735[733.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2736[733.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0EB4*/    /* #2737[733.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2738[733.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x15BC*/    /* #2739[733.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2740[733.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2162*/    /* #2741[733.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2742[733.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F84*/    /* #2743[733.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2744[733.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C68*/    /* #2745[734.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2746[734.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x494C*/    /* #2747[734.0] */
BulkRead(fh,32768);   /* #2748[734.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2749[734.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x12AC*/    /* #2750[734.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2751[734.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19B4*/    /* #2752[734.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2753[734.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2DA0*/    /* #2754[734.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2755[734.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BB0*/    /* #2756[734.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2757[734.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4AEC*/    /* #2758[734.5] */
BulkRead(fh,32768);   /* #2759[734.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2760[734.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x17D0*/    /* #2761[734.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2762[734.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x229F*/    /* #2763[734.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2764[734.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3198*/    /* #2765[734.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2766[734.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E7C*/    /* #2767[734.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2768[734.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4C8C*/    /* #2769[735.0] */
BulkRead(fh,32768);   /* #2770[735.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2771[735.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1970*/    /* #2772[735.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2773[735.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E20*/    /* #2774[735.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2775[735.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30E0*/    /* #2776[735.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2777[735.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x401C*/    /* #2778[735.3] */
BulkRead(fh,32768);   /* #2779[735.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2780[735.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0BD4*/    /* #2781[735.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2782[735.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1534*/    /* #2783[735.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2784[735.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20EC*/    /* #2785[735.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2786[735.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2EFC*/    /* #2787[735.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2788[735.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E38*/    /* #2789[735.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2790[735.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4FCC*/    /* #2791[735.9] */
BulkRead(fh,32768);   /* #2792[736.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2793[736.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x192C*/    /* #2794[736.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2795[736.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2160*/    /* #2796[736.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2797[736.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E44*/    /* #2798[736.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2799[736.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C54*/    /* #2800[736.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2801[736.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4938*/    /* #2802[736.4] */
BulkRead(fh,32768);   /* #2803[736.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2804[736.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x161C*/    /* #2805[736.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2806[736.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1BF8*/    /* #2807[736.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2808[736.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A08*/    /* #2809[736.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2810[736.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x37DF*/    /* #2811[736.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2812[736.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4628*/    /* #2813[736.8] */
BulkRead(fh,32768);   /* #2814[736.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2815[736.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x10B4*/    /* #2816[736.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2817[736.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1690*/    /* #2818[737.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2819[737.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F2C*/    /* #2820[737.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2821[737.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C10*/    /* #2822[737.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2823[737.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4DA4*/    /* #2824[737.3] */
BulkRead(fh,32768);   /* #2825[737.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2826[737.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1A88*/    /* #2827[737.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2828[737.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2064*/    /* #2829[737.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2830[737.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2FA0*/    /* #2831[737.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2832[737.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C84*/    /* #2833[737.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2834[737.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4BC0*/    /* #2835[737.8] */
BulkRead(fh,32768);   /* #2836[737.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2837[737.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1778*/    /* #2838[737.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2839[737.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D54*/    /* #2840[738.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2841[738.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3140*/    /* #2842[738.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2843[738.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F50*/    /* #2844[738.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2845[738.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4E8C*/    /* #2846[738.3] */
BulkRead(fh,32768);   /* #2847[738.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2848[738.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1918*/    /* #2849[738.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2850[738.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x214C*/    /* #2851[738.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2852[738.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E30*/    /* #2853[738.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2854[738.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3D6C*/    /* #2855[738.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2856[738.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4A50*/    /* #2857[738.7] */
BulkRead(fh,32768);   /* #2858[738.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2859[738.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1734*/    /* #2860[738.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2861[738.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2418*/    /* #2862[739.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2863[739.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3130*/    /* #2864[739.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2865[739.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3CB4*/    /* #2866[739.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2867[739.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4F74*/    /* #2868[739.2] */
BulkRead(fh,32768);   /* #2869[739.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2870[739.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C58*/    /* #2871[739.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2872[739.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2234*/    /* #2873[739.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2874[739.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x26E4*/    /* #2875[739.5] */
BulkRead(fh,19912);   /* #2876[739.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2877[739.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2878[739.6] */
RegWrite(0x43, 1, 0x03);    /* #2879[739.6] */
RegWrite(0x43, 1, 0x03);    /* #2880[739.6] */
RegWrite(R_CTL, 1, 0x39);    /* #2881[739.6] */
{
 unsigned char uchRegs2882[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x00,
   /*R_SWID*/ 0x00, /*R_SWIDH*/ 0x00, /*R_STPS*/ 0x00,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x00,
   /*R_LEN*/ 0x00, /*R_LENH*/ 0x00, /*0x0C*/ 0x6D,
   /*0x0D*/ 0x70, /*0x0E*/ 0x69, /*0x0F*/ 0xD0,
   /*0x10*/ 0x00, /*0x11*/ 0x00, /*0x12*/ 0x40,
   /*0x13*/ 0x15, /*0x14*/ 0x40, /*0x15*/ 0x15,
   /*0x16*/ 0x40, /*0x17*/ 0x15, /*0x18*/ 0x40,
   /*0x19*/ 0x15, /*0x1A*/ 0x07, /*0x1B*/ 0x00,
   /*0x1C*/ 0x08, /*0x1D*/ 0x12, /*0x1E*/ 0x4C,
   /*0x1F*/ 0x50, /*0x20*/ 0x00, /*0x21*/ 0x0C,
   /*0x22*/ 0x21, /*0x23*/ 0xF0, /*0x24*/ 0x40,
   /*0x25*/ 0x00, /*0x26*/ 0x0A, /*0x27*/ 0xF0,
   /*0x28*/ 0x00, /*0x29*/ 0x00, /*0x2A*/ 0x4E,
   /*0x2B*/ 0xF0, /*0x2C*/ 0x00, /*0x2D*/ 0x00,
   /*0x2E*/ 0x4E, /*R_CCAL*/ 0x80, /*R_CCAL2*/ 0x80,
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0x03, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x80, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0x40, /*0x48*/ 0x15,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2882);
}    /* #2882[739.7] */
RegWrite(R_CTL, 1, 0x39);    /* #2883[739.7] */
RegWrite(R_CTL, 1, 0x79);    /* #2884[739.7] */
RegWrite(R_CTL, 1, 0xF9);    /* #2885[739.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2886[739.8] */
RegWrite(R_CTL, 1, 0x39);    /* #2887[739.8] */
RegWrite(0x43, 1, 0x07);    /* #2888[739.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2889[739.9] */
RegWrite(0x32, 2, 0x20C9);    /* #2890[739.9] */
RegWrite(0x34, 1, 0xC3);    /* #2891[739.9] */
RegWrite(0x49, 1, 0x9E);    /* #2892[739.9] */
{
 unsigned char uchRegs2893[]={
   /*R_SPOS*/ 0x00, /*R_SPOSH*/ 0x00, /*0x03*/ 0x3F,
   /*R_SWID*/ 0x40, /*R_SWIDH*/ 0x00, /*R_STPS*/ 0xAE,
   /*R_STPSH*/ 0x08, /*0x08*/ 0x00, /*0x09*/ 0x00,
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0xC9, /*0x33*/ 0x20,
   /*0x34*/ 0xC3, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x07, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0xC0, /*0x48*/ 0x40,
   /*0x49*/ 0x9E, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs2893);
}    /* #2893[739.9] */
RegWrite(0x43, 1, 0x03);    /* #2894[740.0] */
RegWrite(R_STPS, 2, 0x0000);    /* #2895[740.0] */
RegWrite(R_LEN, 2, 0x08AE);    /* #2896[740.0] */
RegWrite(0x47, 2, 0xA000);    /* #2897[740.0] */
RegWrite(0x34, 1, 0xC3);    /* #2898[740.0] */
RegWrite(0x49, 1, 0x9E);    /* #2899[740.0] */
RegWrite(R_CTL, 1, 0x19);    /* #2900[740.1] */
RegWrite(R_CTL, 1, 0x59);    /* #2901[740.1] */
RegWrite(R_CTL, 1, 0xD9);    /* #2902[740.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x08A8*/    /* #2903[740.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x089F*/    /* #2904[740.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0895*/    /* #2905[740.2] */
RegWrite(0x47, 2, 0xA000);    /* #2906[740.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x0883*/    /* #2907[740.2] */
RegWrite(0x47, 2, 0x9800);    /* #2908[740.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x086F*/    /* #2909[740.3] */
RegWrite(0x47, 2, 0x9000);    /* #2910[740.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x085A*/    /* #2911[740.3] */
RegWrite(0x47, 2, 0x8800);    /* #2912[740.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x0844*/    /* #2913[740.4] */
RegWrite(0x47, 2, 0x8000);    /* #2914[740.4] */
RegWrite(0x43, 1, 0x07);    /* #2915[740.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0817*/    /* #2916[740.4] */
RegWrite(0x47, 2, 0x7800);    /* #2917[740.4] */
RegWrite(0x43, 1, 0x07);    /* #2918[740.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x07E8*/    /* #2919[740.5] */
RegWrite(0x47, 2, 0x7000);    /* #2920[740.5] */
RegWrite(0x43, 1, 0x07);    /* #2921[740.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x078B*/    /* #2922[740.6] */
RegWrite(0x47, 2, 0x6800);    /* #2923[740.6] */
RegWrite(0x43, 1, 0x07);    /* #2924[740.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x075D*/    /* #2925[740.7] */
RegWrite(0x47, 2, 0x6000);    /* #2926[740.7] */
RegWrite(0x43, 1, 0x07);    /* #2927[740.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x072F*/    /* #2928[740.7] */
RegWrite(0x47, 2, 0x5800);    /* #2929[740.7] */
RegWrite(0x43, 1, 0x07);    /* #2930[740.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x06FD*/    /* #2931[740.8] */
RegWrite(0x47, 2, 0x5000);    /* #2932[740.8] */
RegWrite(0x43, 1, 0x07);    /* #2933[740.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x06BA*/    /* #2934[740.9] */
RegWrite(0x47, 2, 0x40C0);    /* #2935[740.9] */
RegWrite(0x32, 2, 0x20C9);    /* #2936[740.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2937[741.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2938[741.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2939[741.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2940[741.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2941[741.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2942[741.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2943[741.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2944[741.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2945[741.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2946[742.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2947[742.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2948[742.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2949[742.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2950[742.3] */
RegWrite(0x43, 1, 0x03);    /* #2951[742.3] */
RegWrite(R_CTL, 1, 0x39);    /* #2952[742.4] */
