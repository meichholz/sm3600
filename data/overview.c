ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1304[000.0] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #1305[000.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1306[000.0] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #1307[000.0] */
RegWrite(R_LEN, 2, 0x20C9);    /* #1308[000.0] */
{
 unsigned char uchRegs1309[]={
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
   0x96 /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs1309);
}    /* #1309[000.0] */
RegWrite(0x43, 1, 0x03);    /* #1310[000.0] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #1311[000.0] */
RegWrite(R_CCAL, 3, 0x848888);    /* #1312[000.0] */
RegWrite(R_LEN, 2, 0x20C9);    /* #1313[000.0] */
RegWrite(R_LEN, 2, 0x20C9);    /* #1314[000.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1315[000.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1316[000.0] */
RegWrite(R_LEN, 2, 0x20C9);    /* #1317[000.0] */
{
 unsigned char uchRegs1318[]={
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
   0x96 /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs1318);
}    /* #1318[000.0] */
RegWrite(0x43, 1, 0x03);    /* #1319[000.0] */
RegWrite(R_CCAL, 3, 0x808080);    /* #1320[000.0] */
RegWrite(R_LEN, 2, 0x20C9);    /* #1321[000.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1322[000.0] */
RegWrite(R_LEN, 2, 0x20C9);    /* #1323[000.0] */
RegWrite(0x34, 1, 0x63);    /* #1324[000.0] */
RegWrite(0x49, 1, 0x9E);    /* #1325[000.0] */
{
 unsigned char uchRegs1326[]={
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
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0xC9 /*!!R_LEN!!*/, 0x20 /*!!R_LENH!!*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs1326);
}    /* #1326[000.1] */
RegWrite(R_CTL, 1, 0x39);    /* #1327[000.1] */
RegWrite(R_CTL, 1, 0x79);    /* #1328[000.1] */
RegWrite(R_CTL, 1, 0xF9);    /* #1329[000.1] */
RegWrite(R_LEN, 2, 0x20C9);    /* #1330[000.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1331[000.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1332[000.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1333[000.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1334[000.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1335[000.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1336[000.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1337[000.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1338[000.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1339[000.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1340[000.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1341[000.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #1342[000.7] */
RegWrite(R_LMP, 1, 0x01);    /* #1343[000.7] */
RegWrite(R_LMP, 1, 0x01);    /* #1344[000.7] */
RegWrite(R_CTL, 1, 0x39);    /* #1345[000.7] */
RegWrite(0x34, 1, 0x63);    /* #1346[000.7] */
RegWrite(0x49, 1, 0x96);    /* #1347[000.7] */
{
 unsigned char uchRegs1348[]={
   0xFB /*!!0x01!!*/, 0x00 /*0x02*/, 0x3F /*0x03*/,
   0xEC /*!!0x04!!*/, 0x93 /*!!0x05!!*/, 0x00 /*!!R_STPS!!*/,
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
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0xC9 /*R_LEN*/, 0x20 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x20 /*!!0x41!!*/, 0x00 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*!!0x49!!*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs1348);
}    /* #1348[000.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1349[000.7] */
RegWrite(R_CTL, 1, 0x39);    /* #1350[000.7] */
RegWrite(R_CTL, 1, 0x79);    /* #1351[000.7] */
RegWrite(R_CTL, 1, 0xF9);    /* #1352[000.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1353[000.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1354[000.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1355[000.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x88F2*/    /* #1356[000.8] */
BulkRead(fh,32768);   /* #1357[000.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1358[000.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xAF10*/    /* #1359[000.8] */
BulkRead(fh,32768);   /* #1360[000.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1361[000.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xE433*/    /* #1362[000.9] */
BulkRead(fh,32768);   /* #1363[000.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1364[000.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF2F1*/    /* #1365[000.9] */
BulkRead(fh,32768);   /* #1366[000.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1367[001.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1368[001.0] */
BulkRead(fh,32768);   /* #1369[001.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1370[001.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1371[001.0] */
BulkRead(fh,32768);   /* #1372[001.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1373[001.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1374[001.1] */
BulkRead(fh,32768);   /* #1375[001.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1376[001.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1377[001.1] */
BulkRead(fh,32768);   /* #1378[001.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1379[001.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1380[001.2] */
BulkRead(fh,32768);   /* #1381[001.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1382[001.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1383[001.2] */
BulkRead(fh,32768);   /* #1384[001.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1385[001.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1386[001.3] */
BulkRead(fh,32768);   /* #1387[001.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1388[001.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1389[001.3] */
BulkRead(fh,32768);   /* #1390[001.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1391[001.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1392[001.4] */
BulkRead(fh,32768);   /* #1393[001.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1394[001.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1395[001.4] */
BulkRead(fh,32768);   /* #1396[001.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1397[001.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1398[001.5] */
BulkRead(fh,32768);   /* #1399[001.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1400[001.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1401[001.5] */
BulkRead(fh,32768);   /* #1402[001.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1403[001.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1404[001.6] */
BulkRead(fh,32768);   /* #1405[001.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1406[001.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1407[001.6] */
BulkRead(fh,32768);   /* #1408[001.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1409[001.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1410[001.7] */
BulkRead(fh,32768);   /* #1411[001.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1412[001.7] */
BulkRead(fh,32768);   /* #1413[001.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1414[001.8] */
BulkRead(fh,32768);   /* #1415[001.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1416[001.8] */
BulkRead(fh,32768);   /* #1417[001.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1418[001.8] */
BulkRead(fh,32768);   /* #1419[001.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1420[001.9] */
BulkRead(fh,32768);   /* #1421[001.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1422[001.9] */
BulkRead(fh,32768);   /* #1423[002.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1424[002.0] */
BulkRead(fh,32768);   /* #1425[002.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1426[002.0] */
BulkRead(fh,32768);   /* #1427[002.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1428[002.0] */
BulkRead(fh,32768);   /* #1429[002.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF008*/    /* #1430[002.1] */
BulkRead(fh,32768);   /* #1431[002.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB008*/    /* #1432[002.1] */
BulkRead(fh,32768);   /* #1433[002.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #1434[002.2] */
BulkRead(fh,32768);   /* #1435[002.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #1436[002.2] */
BulkRead(fh,24592);   /* #1437[002.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1438[002.3] */
RegWrite(0x43, 1, 0x03);    /* #1439[002.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #1440[002.3] */
{
 unsigned char uchRegs1441[]={
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
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0xC9 /*R_LEN*/, 0x20 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x80 /*!!0x41!!*/, 0x80 /*!!R_CSTAT!!*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x79 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x96 /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs1441);
}    /* #1441[002.3] */
RegWrite(R_CTL, 1, 0x39);    /* #1442[002.3] */
RegWrite(R_CTL, 1, 0x79);    /* #1443[002.3] */
RegWrite(R_CTL, 1, 0xF9);    /* #1444[002.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1445[002.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1446[002.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1447[002.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1448[002.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1449[002.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1450[002.3] */
RegWrite(R_CTL, 1, 0x39);    /* #1451[002.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1452[002.3] */
RegWrite(R_LEN, 2, 0x20C9);    /* #1453[002.3] */
RegWrite(0x34, 1, 0x63);    /* #1454[002.3] */
RegWrite(0x49, 1, 0x9E);    /* #1455[002.4] */
{
 unsigned char uchRegs1456[]={
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
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0xC9 /*R_LEN*/, 0x20 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*!!0x41!!*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*!!0x49!!*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs1456);
}    /* #1456[002.4] */
RegWrite(R_CTL, 1, 0x19);    /* #1457[002.4] */
RegWrite(R_CTL, 1, 0x59);    /* #1458[002.4] */
RegWrite(R_CTL, 1, 0xD9);    /* #1459[002.4] */
RegWrite(R_LEN, 2, 0x20C9);    /* #1460[002.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1461[002.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1462[002.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1463[002.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1464[002.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1465[002.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1466[003.1] */
RegWrite(R_LMP, 1, 0x01);    /* #1467[003.1] */
RegWrite(R_LMP, 1, 0x01);    /* #1468[003.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1469[003.1] */
RegWrite(R_LEN, 2, 0x20C9);    /* #1470[003.1] */
RegWrite(0x34, 1, 0x63);    /* #1471[003.1] */
RegWrite(0x49, 1, 0x9E);    /* #1472[003.1] */
{
 unsigned char uchRegs1473[]={
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
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0xC9 /*R_LEN*/, 0x20 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x59 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs1473);
}    /* #1473[003.1] */
RegWrite(R_CTL, 1, 0x19);    /* #1474[003.2] */
RegWrite(R_CTL, 1, 0x59);    /* #1475[003.2] */
RegWrite(R_CTL, 1, 0xD9);    /* #1476[003.2] */
RegWrite(R_LEN, 2, 0x20C9);    /* #1477[003.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1478[003.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1479[003.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1480[003.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1481[003.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1482[003.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1483[003.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1484[003.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1485[003.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1486[003.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1487[003.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1488[003.8] */
RegWrite(R_LEN, 2, 0x20C9);    /* #1489[003.8] */
RegWrite(R_LMP, 1, 0x01);    /* #1490[003.8] */
RegWrite(R_LMP, 1, 0x01);    /* #1491[003.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1492[003.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1493[003.8] */
RegWrite(R_CTL, 1, 0x39);    /* #1494[003.8] */
RegWrite(0x34, 1, 0x83);    /* #1495[003.8] */
RegWrite(0x49, 1, 0x9E);    /* #1496[003.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1497[003.8] */
RegWrite(R_LEN, 2, 0x20C9);    /* #1498[003.8] */
RegWrite(0x34, 1, 0x63);    /* #1499[003.9] */
RegWrite(0x49, 1, 0x9E);    /* #1500[003.9] */
{
 unsigned char uchRegs1501[]={
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
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0xC9 /*R_LEN*/, 0x20 /*R_LENH*/,
   0x63 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*!!R_CTL!!*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs1501);
}    /* #1501[003.9] */
RegWrite(R_CTL, 1, 0x39);    /* #1502[003.9] */
RegWrite(R_CTL, 1, 0x79);    /* #1503[003.9] */
RegWrite(R_CTL, 1, 0xF9);    /* #1504[003.9] */
RegWrite(R_LEN, 2, 0x20C9);    /* #1505[003.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1506[003.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1507[004.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1508[004.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1509[004.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1510[004.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1511[004.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1512[004.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1513[004.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1514[004.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1515[004.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1516[004.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1517[004.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1518[004.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1519[004.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1520[004.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1521[004.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1522[004.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1523[004.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #1524[004.9] */
RegWrite(0x43, 1, 0x03);    /* #1525[004.9] */
RegWrite(R_CTL, 1, 0x39);    /* #1526[004.9] */
RegWrite(0x34, 1, 0x83);    /* #1527[004.9] */
RegWrite(0x49, 1, 0x9E);    /* #1528[004.9] */
{
 unsigned char uchRegs1529[]={
   0xFB /*!!0x01!!*/, 0x00 /*0x02*/, 0x20 /*!!0x03!!*/,
   0x5C /*!!0x04!!*/, 0xD3 /*!!0x05!!*/, 0x06 /*!!R_STPS!!*/,
   0x00 /*!!R_STPSH!!*/, 0xFF /*!!0x08!!*/, 0xFF /*!!0x09!!*/,
   0x98 /*!!0x0A!!*/, 0x1B /*!!0x0B!!*/, 0x6D /*0x0C*/,
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
   0x80 /*R_CCAL3*/, 0xC9 /*R_LEN*/, 0x20 /*R_LENH*/,
   0x83 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*0x41*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs1529);
}    /* #1529[004.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1530[004.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1531[004.9] */
RegWrite(R_CTL, 1, 0x39);    /* #1532[005.0] */
RegWrite(R_CTL, 1, 0x79);    /* #1533[005.0] */
RegWrite(R_CTL, 1, 0xF9);    /* #1534[005.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1535[005.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1536[005.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1537[005.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x026C*/    /* #1538[005.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1539[005.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1714*/    /* #1540[005.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1541[005.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x357A*/    /* #1542[005.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1543[005.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4F0D*/    /* #1544[005.3] */
BulkRead(fh,32768);   /* #1545[005.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1546[005.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x27FD*/    /* #1547[005.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1548[005.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x328B*/    /* #1549[005.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1550[005.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4ABE*/    /* #1551[005.4] */
BulkRead(fh,32768);   /* #1552[005.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1553[005.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F6A*/    /* #1554[005.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1555[005.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x26A9*/    /* #1556[005.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1557[005.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C1A*/    /* #1558[005.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1559[005.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x50AD*/    /* #1560[005.6] */
BulkRead(fh,32768);   /* #1561[005.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1562[005.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2031*/    /* #1563[005.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1564[005.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x284D*/    /* #1565[005.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1566[005.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4498*/    /* #1567[005.8] */
BulkRead(fh,32768);   /* #1568[005.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1569[005.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2591*/    /* #1570[005.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1571[005.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3707*/    /* #1572[005.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1573[005.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4C13*/    /* #1574[005.9] */
BulkRead(fh,32768);   /* #1575[006.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1576[006.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F54*/    /* #1577[006.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1578[006.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x27BF*/    /* #1579[006.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1580[006.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3CBC*/    /* #1581[006.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1582[006.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5174*/    /* #1583[006.1] */
BulkRead(fh,32768);   /* #1584[006.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1585[006.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2389*/    /* #1586[006.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1587[006.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2C58*/    /* #1588[006.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1589[006.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x41C8*/    /* #1590[006.3] */
BulkRead(fh,32768);   /* #1591[006.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1592[006.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1276*/    /* #1593[006.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1594[006.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1DB0*/    /* #1595[006.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1596[006.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3790*/    /* #1597[006.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1598[006.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x51EA*/    /* #1599[006.5] */
BulkRead(fh,32768);   /* #1600[006.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1601[006.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2484*/    /* #1602[006.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1603[006.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2B17*/    /* #1604[006.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1605[006.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4072*/    /* #1606[006.6] */
BulkRead(fh,32768);   /* #1607[006.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1608[006.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0FF6*/    /* #1609[006.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1610[006.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x174A*/    /* #1611[006.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1612[006.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30C7*/    /* #1613[006.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1614[006.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x46ED*/    /* #1615[006.8] */
BulkRead(fh,32768);   /* #1616[006.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1617[006.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1AE0*/    /* #1618[006.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1619[006.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x26CC*/    /* #1620[006.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1621[006.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F96*/    /* #1622[007.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1623[007.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5784*/    /* #1624[007.0] */
BulkRead(fh,32768);   /* #1625[007.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1626[007.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2999*/    /* #1627[007.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1628[007.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3116*/    /* #1629[007.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1630[007.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x46AD*/    /* #1631[007.1] */
BulkRead(fh,32768);   /* #1632[007.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1633[007.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x16D0*/    /* #1634[007.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1635[007.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E4D*/    /* #1636[007.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1637[007.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3447*/    /* #1638[007.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1639[007.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5096*/    /* #1640[007.4] */
BulkRead(fh,32768);   /* #1641[007.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1642[007.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2667*/    /* #1643[007.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1644[007.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3587*/    /* #1645[007.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1646[007.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4FA3*/    /* #1647[007.5] */
BulkRead(fh,32768);   /* #1648[007.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1649[007.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F8B*/    /* #1650[007.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1651[007.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2A61*/    /* #1652[007.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1653[007.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4441*/    /* #1654[007.7] */
BulkRead(fh,32768);   /* #1655[007.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1656[007.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1400*/    /* #1657[007.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1658[007.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B54*/    /* #1659[007.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1660[007.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3177*/    /* #1661[007.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1662[007.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4D5F*/    /* #1663[007.9] */
BulkRead(fh,32768);   /* #1664[007.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1665[007.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2104*/    /* #1666[007.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1667[008.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30D5*/    /* #1668[008.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1669[008.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4951*/    /* #1670[008.0] */
BulkRead(fh,32768);   /* #1671[008.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1672[008.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1CF6*/    /* #1673[008.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1674[008.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x245D*/    /* #1675[008.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1676[008.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3A09*/    /* #1677[008.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1678[008.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4E9D*/    /* #1679[008.2] */
BulkRead(fh,32768);   /* #1680[008.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1681[008.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E20*/    /* #1682[008.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1683[008.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x269A*/    /* #1684[008.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1685[008.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x406A*/    /* #1686[008.4] */
BulkRead(fh,32768);   /* #1687[008.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1688[008.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x108C*/    /* #1689[008.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1690[008.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1BD7*/    /* #1691[008.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1692[008.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3A44*/    /* #1693[008.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1694[008.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x526E*/    /* #1695[008.6] */
BulkRead(fh,32768);   /* #1696[008.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1697[008.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x260D*/    /* #1698[008.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1699[008.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D67*/    /* #1700[008.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1701[008.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4317*/    /* #1702[008.7] */
BulkRead(fh,32768);   /* #1703[008.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1704[008.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x12E5*/    /* #1705[008.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1706[008.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19C0*/    /* #1707[008.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1708[008.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C21*/    /* #1709[008.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1710[008.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5295*/    /* #1711[008.9] */
BulkRead(fh,32768);   /* #1712[009.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1713[009.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x27F0*/    /* #1714[009.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1715[009.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x407E*/    /* #1716[009.1] */
BulkRead(fh,32768);   /* #1717[009.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1718[009.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x145F*/    /* #1719[009.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1720[009.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1BDB*/    /* #1721[009.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1722[009.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30D2*/    /* #1723[009.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1724[009.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x457B*/    /* #1725[009.2] */
BulkRead(fh,32768);   /* #1726[009.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1727[009.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x159E*/    /* #1728[009.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1729[009.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C3D*/    /* #1730[009.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1731[009.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x41FD*/    /* #1732[009.4] */
BulkRead(fh,32768);   /* #1733[009.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1734[009.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x117B*/    /* #1735[009.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1736[009.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x23CE*/    /* #1737[009.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1738[009.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x39C8*/    /* #1739[009.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1740[009.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5027*/    /* #1741[009.6] */
BulkRead(fh,32768);   /* #1742[009.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1743[009.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x204A*/    /* #1744[009.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1745[009.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2763*/    /* #1746[009.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1747[009.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BF6*/    /* #1748[009.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1749[009.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x51A2*/    /* #1750[009.8] */
BulkRead(fh,32768);   /* #1751[009.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1752[009.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x21B4*/    /* #1753[009.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1754[009.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x29CC*/    /* #1755[009.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1756[009.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x41F8*/    /* #1757[009.9] */
BulkRead(fh,32768);   /* #1758[010.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1759[010.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x16F1*/    /* #1760[010.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1761[010.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x21EC*/    /* #1762[010.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1763[010.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3C1D*/    /* #1764[010.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1765[010.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5729*/    /* #1766[010.2] */
BulkRead(fh,32768);   /* #1767[010.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1768[010.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x26E9*/    /* #1769[010.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1770[010.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E01*/    /* #1771[010.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1772[010.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4398*/    /* #1773[010.3] */
BulkRead(fh,32768);   /* #1774[010.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1775[010.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x13BB*/    /* #1776[010.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1777[010.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B5E*/    /* #1778[010.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1779[010.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3197*/    /* #1780[010.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1781[010.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4859*/    /* #1782[010.5] */
BulkRead(fh,32768);   /* #1783[010.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1784[010.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x187C*/    /* #1785[010.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1786[010.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x22D9*/    /* #1787[010.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1788[010.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4050*/    /* #1789[010.6] */
BulkRead(fh,32768);   /* #1790[010.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1791[010.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x16C4*/    /* #1792[010.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1793[010.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x224D*/    /* #1794[010.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1795[010.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B7B*/    /* #1796[010.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1797[010.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5087*/    /* #1798[010.8] */
BulkRead(fh,32768);   /* #1799[010.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1800[010.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x215D*/    /* #1801[010.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1802[010.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E92*/    /* #1803[011.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1804[011.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4525*/    /* #1805[011.0] */
BulkRead(fh,32768);   /* #1806[011.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1807[011.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1DEF*/    /* #1808[011.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1809[011.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2889*/    /* #1810[011.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1811[011.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x41A2*/    /* #1812[011.2] */
BulkRead(fh,32768);   /* #1813[011.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1814[011.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x15E6*/    /* #1815[011.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1816[011.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x224C*/    /* #1817[011.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1818[011.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x36DF*/    /* #1819[011.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1820[011.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5071*/    /* #1821[011.4] */
BulkRead(fh,32768);   /* #1822[011.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1823[011.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1FF5*/    /* #1824[011.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1825[011.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x27FC*/    /* #1826[011.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1827[011.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4061*/    /* #1828[011.5] */
BulkRead(fh,32768);   /* #1829[011.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1830[011.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x18EF*/    /* #1831[011.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1832[011.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2429*/    /* #1833[011.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1834[011.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3BFD*/    /* #1835[011.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1836[011.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x547E*/    /* #1837[011.7] */
BulkRead(fh,32768);   /* #1838[011.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1839[011.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x28EB*/    /* #1840[011.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1841[011.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x302A*/    /* #1842[011.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1843[011.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x45FE*/    /* #1844[011.9] */
BulkRead(fh,32768);   /* #1845[011.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1846[011.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x15A8*/    /* #1847[011.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1848[011.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C5D*/    /* #1849[012.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1850[012.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x331F*/    /* #1851[012.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1852[012.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x519A*/    /* #1853[012.1] */
BulkRead(fh,32768);   /* #1854[012.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1855[012.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2248*/    /* #1856[012.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1857[012.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E4A*/    /* #1858[012.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1859[012.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4570*/    /* #1860[012.2] */
BulkRead(fh,32768);   /* #1861[012.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1862[012.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1785*/    /* #1863[012.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1864[012.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2158*/    /* #1865[012.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1866[012.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3664*/    /* #1867[012.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1868[012.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4BD4*/    /* #1869[012.4] */
BulkRead(fh,32768);   /* #1870[012.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1871[012.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1BE2*/    /* #1872[012.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1873[012.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2297*/    /* #1874[012.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1875[012.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3740*/    /* #1876[012.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1877[012.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x50BC*/    /* #1878[012.6] */
BulkRead(fh,32768);   /* #1879[012.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1880[012.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2529*/    /* #1881[012.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1882[012.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x30A8*/    /* #1883[012.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1884[012.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4B47*/    /* #1885[012.7] */
BulkRead(fh,32768);   /* #1886[012.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1887[012.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F4F*/    /* #1888[012.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1889[012.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x25E5*/    /* #1890[012.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1891[012.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3AAD*/    /* #1892[012.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1893[012.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4FDF*/    /* #1894[012.9] */
BulkRead(fh,32768);   /* #1895[013.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1896[013.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x28D2*/    /* #1897[013.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1898[013.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3355*/    /* #1899[013.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1900[013.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4CFE*/    /* #1901[013.1] */
BulkRead(fh,32768);   /* #1902[013.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1903[013.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x23FC*/    /* #1904[013.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1905[013.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x32B8*/    /* #1906[013.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1907[013.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4A42*/    /* #1908[013.3] */
BulkRead(fh,32768);   /* #1909[013.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1910[013.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1E23*/    /* #1911[013.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1912[013.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2526*/    /* #1913[013.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1914[013.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3B9A*/    /* #1915[013.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1916[013.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5159*/    /* #1917[013.5] */
BulkRead(fh,32768);   /* #1918[013.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1919[013.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20B4*/    /* #1920[013.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1921[013.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2857*/    /* #1922[013.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1923[013.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3E2C*/    /* #1924[013.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1925[013.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5656*/    /* #1926[013.6] */
BulkRead(fh,32768);   /* #1927[013.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1928[013.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x28CF*/    /* #1929[013.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1930[013.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x39BA*/    /* #1931[013.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1932[013.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x51E4*/    /* #1933[013.8] */
BulkRead(fh,32768);   /* #1934[013.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1935[013.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2613*/    /* #1936[013.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1937[013.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E94*/    /* #1938[013.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1939[013.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x44F2*/    /* #1940[013.9] */
BulkRead(fh,32768);   /* #1941[014.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1942[014.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1897*/    /* #1943[014.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1944[014.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1FEF*/    /* #1945[014.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1946[014.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x35AB*/    /* #1947[014.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1948[014.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4E39*/    /* #1949[014.2] */
BulkRead(fh,32768);   /* #1950[014.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1951[014.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2345*/    /* #1952[014.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1953[014.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x38A0*/    /* #1954[014.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1955[014.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x50CA*/    /* #1956[014.3] */
BulkRead(fh,32768);   /* #1957[014.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1958[014.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x24AB*/    /* #1959[014.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1960[014.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2C4E*/    /* #1961[014.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1962[014.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x41BE*/    /* #1963[014.5] */
BulkRead(fh,32768);   /* #1964[014.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1965[014.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1142*/    /* #1966[014.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1967[014.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1881*/    /* #1968[014.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1969[014.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2FBD*/    /* #1970[014.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1971[014.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4505*/    /* #1972[014.7] */
BulkRead(fh,32768);   /* #1973[014.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1974[014.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19FE*/    /* #1975[014.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1976[014.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2584*/    /* #1977[014.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1978[014.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3CC0*/    /* #1979[014.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1980[014.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x5154*/    /* #1981[014.9] */
BulkRead(fh,32768);   /* #1982[014.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1983[014.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2FCF*/    /* #1984[014.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1985[014.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x374B*/    /* #1986[015.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1987[015.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4CE2*/    /* #1988[015.0] */
BulkRead(fh,32768);   /* #1989[015.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1990[015.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1D05*/    /* #1991[015.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1992[015.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2408*/    /* #1993[015.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1994[015.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x38B1*/    /* #1995[015.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1996[015.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x513F*/    /* #1997[015.2] */
BulkRead(fh,32768);   /* #1998[015.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1999[015.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2544*/    /* #2000[015.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2001[015.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x375D*/    /* #2002[015.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2003[015.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x504F*/    /* #2004[015.4] */
BulkRead(fh,32768);   /* #2005[015.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2006[015.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2390*/    /* #2007[015.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2008[015.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2BFB*/    /* #2009[015.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2010[015.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4143*/    /* #2011[015.5] */
BulkRead(fh,32768);   /* #2012[015.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2013[015.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x10C7*/    /* #2014[015.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2015[015.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x17CA*/    /* #2016[015.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2017[015.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F90*/    /* #2018[015.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2019[015.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4698*/    /* #2020[015.7] */
BulkRead(fh,32768);   /* #2021[015.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2022[015.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x187D*/    /* #2023[015.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2024[015.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2D4E*/    /* #2025[015.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2026[015.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x46CA*/    /* #2027[015.9] */
BulkRead(fh,32768);   /* #2028[015.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2029[015.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1689*/    /* #2030[015.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2031[015.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1DC9*/    /* #2032[016.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2033[016.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x344C*/    /* #2034[016.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2035[016.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x490D*/    /* #2036[016.0] */
BulkRead(fh,32768);   /* #2037[016.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2038[016.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1853*/    /* #2039[016.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2040[016.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1FD0*/    /* #2041[016.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2042[016.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3503*/    /* #2043[016.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2044[016.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4EF8*/    /* #2045[016.2] */
BulkRead(fh,32768);   /* #2046[016.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2047[016.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2786*/    /* #2048[016.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2049[016.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x37AA*/    /* #2050[016.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2051[016.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4C3D*/    /* #2052[016.4] */
BulkRead(fh,32768);   /* #2053[016.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2054[016.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x252F*/    /* #2055[016.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2056[016.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x348A*/    /* #2057[016.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2058[016.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x49FB*/    /* #2059[016.6] */
BulkRead(fh,32768);   /* #2060[016.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2061[016.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x19A4*/    /* #2062[016.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2063[016.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2121*/    /* #2064[016.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2065[016.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3195*/    /* #2066[016.7] */
BulkRead(fh,25386);   /* #2067[016.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2068[016.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #2069[016.8] */
RegWrite(0x43, 1, 0x03);    /* #2070[016.8] */
RegWrite(0x43, 1, 0x03);    /* #2071[016.8] */
RegWrite(R_CTL, 1, 0x39);    /* #2072[016.8] */
{
 unsigned char uchRegs2073[]={
   0x00 /*!!0x01!!*/, 0x00 /*0x02*/, 0x00 /*!!0x03!!*/,
   0x00 /*!!0x04!!*/, 0x00 /*!!0x05!!*/, 0x00 /*!!R_STPS!!*/,
   0x00 /*R_STPSH*/, 0x00 /*!!0x08!!*/, 0x00 /*!!0x09!!*/,
   0x00 /*!!0x0A!!*/, 0x00 /*!!0x0B!!*/, 0x6D /*0x0C*/,
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
   0x80 /*R_CCAL3*/, 0xC9 /*R_LEN*/, 0x20 /*R_LENH*/,
   0x83 /*0x34*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x80 /*!!0x41!!*/, 0x80 /*R_CSTAT*/,
   0x03 /*0x43*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2073);
}    /* #2073[016.8] */
RegWrite(R_CTL, 1, 0x39);    /* #2074[016.8] */
RegWrite(R_CTL, 1, 0x79);    /* #2075[016.8] */
RegWrite(R_CTL, 1, 0xF9);    /* #2076[016.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #2077[016.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #2078[016.9] */
RegWrite(R_CTL, 1, 0x39);    /* #2079[016.9] */
RegWrite(0x43, 1, 0x07);    /* #2080[016.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #2081[016.9] */
RegWrite(R_LEN, 2, 0x20C9);    /* #2082[016.9] */
RegWrite(0x34, 1, 0xC3);    /* #2083[016.9] */
RegWrite(0x49, 1, 0x9E);    /* #2084[016.9] */
{
 unsigned char uchRegs2085[]={
   0x00 /*0x01*/, 0x00 /*0x02*/, 0x3F /*!!0x03!!*/,
   0x40 /*!!0x04!!*/, 0x00 /*0x05*/, 0x30 /*!!R_STPS!!*/,
   0x1D /*!!R_STPSH!!*/, 0x00 /*0x08*/, 0x00 /*0x09*/,
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
   0x4E /*0x2E*/, 0x80 /*R_CCAL*/, 0x80 /*R_CCAL2*/,
   0x80 /*R_CCAL3*/, 0xC9 /*R_LEN*/, 0x20 /*R_LENH*/,
   0xC3 /*!!0x34!!*/, 0x29 /*0x35*/, 0x00 /*0x36*/,
   0x00 /*0x37*/, 0x00 /*0x38*/, 0x00 /*0x39*/,
   0x00 /*0x3A*/, 0x00 /*0x3B*/, 0xFF /*0x3C*/,
   0x0F /*0x3D*/, 0x00 /*0x3E*/, 0x00 /*0x3F*/,
   0x01 /*0x40*/, 0x00 /*!!0x41!!*/, 0x80 /*R_CSTAT*/,
   0x07 /*!!0x43!!*/, 0x01 /*R_LMP*/, 0x00 /*0x45*/,
   0x39 /*R_CTL*/, 0xC0 /*0x47*/, 0x40 /*0x48*/,
   0x9E /*0x49*/, 0x8C /*0x4A*/ };
  RegWriteArray(R_ALL, 74, uchRegs2085);
}    /* #2085[016.9] */
RegWrite(0x43, 1, 0x03);    /* #2086[016.9] */
RegWrite(R_STPS, 2, 0x0000);    /* #2087[016.9] */
RegWrite(0x0A, 2, 0x1D30);    /* #2088[016.9] */
RegWrite(0x47, 2, 0xA000);    /* #2089[017.0] */
RegWrite(0x34, 1, 0xC3);    /* #2090[017.0] */
RegWrite(0x49, 1, 0x9E);    /* #2091[017.0] */
RegWrite(R_CTL, 1, 0x19);    /* #2092[017.0] */
RegWrite(R_CTL, 1, 0x59);    /* #2093[017.0] */
RegWrite(R_CTL, 1, 0xD9);    /* #2094[017.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0000*/    /* #2095[017.0] */
RegWrite(0x47, 2, 0xA000);    /* #2096[017.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0000*/    /* #2097[017.0] */
RegWrite(0x47, 2, 0x9800);    /* #2098[017.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x0000*/    /* #2099[017.0] */
RegWrite(0x47, 2, 0x9000);    /* #2100[017.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D2E*/    /* #2101[017.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D2C*/    /* #2102[017.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D29*/    /* #2103[017.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D27*/    /* #2104[017.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D25*/    /* #2105[017.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D23*/    /* #2106[017.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D21*/    /* #2107[017.0] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D1D*/    /* #2108[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D1B*/    /* #2109[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D19*/    /* #2110[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D15*/    /* #2111[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D13*/    /* #2112[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D10*/    /* #2113[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D0E*/    /* #2114[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D0C*/    /* #2115[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D09*/    /* #2116[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D07*/    /* #2117[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D05*/    /* #2118[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D03*/    /* #2119[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1D01*/    /* #2120[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CFE*/    /* #2121[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CFC*/    /* #2122[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CFA*/    /* #2123[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CF8*/    /* #2124[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CF5*/    /* #2125[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CF3*/    /* #2126[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CF1*/    /* #2127[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CEF*/    /* #2128[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CED*/    /* #2129[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CEB*/    /* #2130[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CE9*/    /* #2131[017.1] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CE7*/    /* #2132[017.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CE4*/    /* #2133[017.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CE2*/    /* #2134[017.2] */
RegWrite(0x47, 2, 0x8800);    /* #2135[017.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CDE*/    /* #2136[017.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CDA*/    /* #2137[017.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CD6*/    /* #2138[017.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CD4*/    /* #2139[017.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CD1*/    /* #2140[017.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CCF*/    /* #2141[017.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CC5*/    /* #2142[017.2] */
RegWrite(0x47, 2, 0x8000);    /* #2143[017.2] */
RegWrite(0x43, 1, 0x07);    /* #2144[017.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CB6*/    /* #2145[017.2] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CAD*/    /* #2146[017.2] */
RegWrite(0x47, 2, 0x7800);    /* #2147[017.3] */
RegWrite(0x43, 1, 0x07);    /* #2148[017.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x1CA0*/    /* #2149[017.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C97*/    /* #2150[017.3] */
RegWrite(0x47, 2, 0x7000);    /* #2151[017.3] */
RegWrite(0x43, 1, 0x07);    /* #2152[017.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C86*/    /* #2153[017.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C7C*/    /* #2154[017.3] */
RegWrite(0x47, 2, 0x6800);    /* #2155[017.3] */
RegWrite(0x43, 1, 0x07);    /* #2156[017.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C6C*/    /* #2157[017.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C5E*/    /* #2158[017.4] */
RegWrite(0x47, 2, 0x6000);    /* #2159[017.4] */
RegWrite(0x43, 1, 0x07);    /* #2160[017.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C4C*/    /* #2161[017.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C3F*/    /* #2162[017.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C3C*/    /* #2163[017.4] */
RegWrite(0x47, 2, 0x5800);    /* #2164[017.4] */
RegWrite(0x43, 1, 0x07);    /* #2165[017.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C2C*/    /* #2166[017.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C1E*/    /* #2167[017.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C1B*/    /* #2168[017.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x1C0D*/    /* #2169[017.5] */
RegWrite(0x47, 2, 0x5000);    /* #2170[017.5] */
RegWrite(0x43, 1, 0x07);    /* #2171[017.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x1BF6*/    /* #2172[017.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x1BF0*/    /* #2173[017.5] */
RegWrite(0x47, 2, 0x40C0);    /* #2174[017.5] */
RegWrite(R_LEN, 2, 0x20C9);    /* #2175[017.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2176[017.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2177[017.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2178[017.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2179[018.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2180[018.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2181[018.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2182[018.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2183[018.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2184[018.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2185[018.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2186[018.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2187[019.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2188[019.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2189[019.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2190[019.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2191[019.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2192[019.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2193[019.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2194[019.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2195[019.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2196[019.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2197[020.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2198[020.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2199[020.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2200[020.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2201[020.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2202[020.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2203[020.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2204[020.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2205[020.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2206[020.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2207[021.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2208[021.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2209[021.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2210[021.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2211[021.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2212[021.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2213[021.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2214[021.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2215[021.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2216[021.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2217[022.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2218[022.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2219[022.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2220[022.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2221[022.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2222[022.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2223[022.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2224[022.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2225[022.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2226[023.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2227[023.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2228[023.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2229[023.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #2230[023.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #2231[023.4] */
RegWrite(0x43, 1, 0x03);    /* #2232[023.4] */
RegWrite(R_CTL, 1, 0x39);    /* #2233[023.4] */
