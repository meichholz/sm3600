ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1240[096.2] */
ulVal2 = RegRead(0x12, 2); /*=0x1540*/    /* #1241[096.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1242[096.2] */
ulVal1 = RegRead(R_LMP, 1); /*=0x01*/    /* #1243[096.2] */
RegWrite(0x32, 2, 0x290A);    /* #1244[096.2] */
{
 unsigned char uchRegs1245[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1245);
}    /* #1245[096.2] */
RegWrite(0x43, 1, 0x03);    /* #1246[096.2] */
ulVal3 = RegRead(R_CCAL, 3); /*=0x808080*/    /* #1247[096.2] */
RegWrite(R_CCAL, 3, 0x848888);    /* #1248[096.2] */
RegWrite(0x32, 2, 0x290A);    /* #1249[096.2] */
RegWrite(0x32, 2, 0x290A);    /* #1250[096.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1251[096.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1252[096.2] */
RegWrite(0x32, 2, 0x290A);    /* #1253[096.2] */
{
 unsigned char uchRegs1254[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1254);
}    /* #1254[096.2] */
RegWrite(0x43, 1, 0x03);    /* #1255[096.3] */
RegWrite(R_CCAL, 3, 0x808080);    /* #1256[096.3] */
RegWrite(0x32, 2, 0x290A);    /* #1257[096.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1258[096.3] */
RegWrite(0x32, 2, 0x290A);    /* #1259[096.3] */
RegWrite(0x34, 1, 0x63);    /* #1260[096.3] */
RegWrite(0x49, 1, 0x9E);    /* #1261[096.3] */
{
 unsigned char uchRegs1262[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1262);
}    /* #1262[096.3] */
RegWrite(R_CTL, 1, 0x39);    /* #1263[096.3] */
RegWrite(R_CTL, 1, 0x79);    /* #1264[096.3] */
RegWrite(R_CTL, 1, 0xF9);    /* #1265[096.3] */
RegWrite(0x32, 2, 0x290A);    /* #1266[096.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1267[096.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1268[096.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1269[096.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1270[096.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1271[096.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1272[096.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1273[096.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1274[096.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1275[096.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1276[096.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1277[096.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #1278[096.9] */
RegWrite(R_LMP, 1, 0x01);    /* #1279[096.9] */
RegWrite(R_LMP, 1, 0x01);    /* #1280[096.9] */
RegWrite(R_CTL, 1, 0x39);    /* #1281[096.9] */
RegWrite(0x34, 1, 0x63);    /* #1282[096.9] */
RegWrite(0x49, 1, 0x96);    /* #1283[096.9] */
{
 unsigned char uchRegs1284[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1284);
}    /* #1284[096.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1285[096.9] */
RegWrite(R_CTL, 1, 0x39);    /* #1286[096.9] */
RegWrite(R_CTL, 1, 0x79);    /* #1287[096.9] */
RegWrite(R_CTL, 1, 0xF9);    /* #1288[096.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1289[096.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1290[097.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1291[097.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x8895*/    /* #1292[097.0] */
BulkRead(fh,32768);   /* #1293[097.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1294[097.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xAF10*/    /* #1295[097.1] */
BulkRead(fh,32768);   /* #1296[097.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1297[097.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xE698*/    /* #1298[097.1] */
BulkRead(fh,32768);   /* #1299[097.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1300[097.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFA9F*/    /* #1301[097.1] */
BulkRead(fh,32768);   /* #1302[097.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1303[097.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1304[097.2] */
BulkRead(fh,32768);   /* #1305[097.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1306[097.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1307[097.3] */
BulkRead(fh,32768);   /* #1308[097.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1309[097.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1310[097.3] */
BulkRead(fh,32768);   /* #1311[097.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1312[097.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1313[097.4] */
BulkRead(fh,32768);   /* #1314[097.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1315[097.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1316[097.4] */
BulkRead(fh,32768);   /* #1317[097.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1318[097.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1319[097.5] */
BulkRead(fh,32768);   /* #1320[097.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1321[097.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1322[097.5] */
BulkRead(fh,32768);   /* #1323[097.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1324[097.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1325[097.6] */
BulkRead(fh,32768);   /* #1326[097.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1327[097.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1328[097.6] */
BulkRead(fh,32768);   /* #1329[097.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1330[097.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1331[097.7] */
BulkRead(fh,32768);   /* #1332[097.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1333[097.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1334[097.7] */
BulkRead(fh,32768);   /* #1335[097.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1336[097.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1337[097.8] */
BulkRead(fh,32768);   /* #1338[097.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1339[097.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1340[097.8] */
BulkRead(fh,32768);   /* #1341[097.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1342[097.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1343[097.9] */
BulkRead(fh,32768);   /* #1344[097.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1345[097.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1346[098.0] */
BulkRead(fh,32768);   /* #1347[098.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1348[098.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1349[098.0] */
BulkRead(fh,32768);   /* #1350[098.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1351[098.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1352[098.0] */
BulkRead(fh,32768);   /* #1353[098.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1354[098.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1355[098.1] */
BulkRead(fh,32768);   /* #1356[098.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1357[098.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1358[098.1] */
BulkRead(fh,32768);   /* #1359[098.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1360[098.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1361[098.2] */
BulkRead(fh,32768);   /* #1362[098.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1363[098.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1364[098.2] */
BulkRead(fh,32768);   /* #1365[098.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1366[098.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1367[098.3] */
BulkRead(fh,32768);   /* #1368[098.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1369[098.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1370[098.4] */
BulkRead(fh,32768);   /* #1371[098.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1372[098.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0xFFFF*/    /* #1373[098.4] */
BulkRead(fh,32768);   /* #1374[098.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xF008*/    /* #1375[098.5] */
BulkRead(fh,32768);   /* #1376[098.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0xB008*/    /* #1377[098.5] */
BulkRead(fh,32768);   /* #1378[098.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x7008*/    /* #1379[098.6] */
BulkRead(fh,32768);   /* #1380[098.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3008*/    /* #1381[098.6] */
BulkRead(fh,24592);   /* #1382[098.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1383[098.6] */
RegWrite(0x43, 1, 0x03);    /* #1384[098.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #1385[098.6] */
{
 unsigned char uchRegs1386[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1386);
}    /* #1386[098.6] */
RegWrite(R_CTL, 1, 0x39);    /* #1387[098.6] */
RegWrite(R_CTL, 1, 0x79);    /* #1388[098.7] */
RegWrite(R_CTL, 1, 0xF9);    /* #1389[098.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1390[098.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1391[098.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1392[098.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1393[098.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1394[098.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1395[098.7] */
RegWrite(R_CTL, 1, 0x39);    /* #1396[098.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1397[098.7] */
RegWrite(0x32, 2, 0x290A);    /* #1398[098.7] */
RegWrite(0x34, 1, 0x63);    /* #1399[098.7] */
RegWrite(0x49, 1, 0x9E);    /* #1400[098.7] */
{
 unsigned char uchRegs1401[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1401);
}    /* #1401[098.7] */
RegWrite(R_CTL, 1, 0x19);    /* #1402[098.7] */
RegWrite(R_CTL, 1, 0x59);    /* #1403[098.7] */
RegWrite(R_CTL, 1, 0xD9);    /* #1404[098.7] */
RegWrite(0x32, 2, 0x290A);    /* #1405[098.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1406[098.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1407[098.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1408[098.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1409[098.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1410[099.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1411[099.4] */
RegWrite(R_LMP, 1, 0x01);    /* #1412[099.4] */
RegWrite(R_LMP, 1, 0x01);    /* #1413[099.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1414[099.4] */
RegWrite(0x32, 2, 0x290A);    /* #1415[099.4] */
RegWrite(0x34, 1, 0x63);    /* #1416[099.4] */
RegWrite(0x49, 1, 0x9E);    /* #1417[099.4] */
{
 unsigned char uchRegs1418[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1418);
}    /* #1418[099.5] */
RegWrite(R_CTL, 1, 0x19);    /* #1419[099.5] */
RegWrite(R_CTL, 1, 0x59);    /* #1420[099.5] */
RegWrite(R_CTL, 1, 0xD9);    /* #1421[099.5] */
RegWrite(0x32, 2, 0x290A);    /* #1422[099.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1423[099.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1424[099.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1425[099.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1426[099.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1427[099.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1428[099.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1429[099.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1430[099.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1431[100.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1432[100.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1433[100.1] */
RegWrite(0x32, 2, 0x290A);    /* #1434[100.1] */
RegWrite(R_LMP, 1, 0x01);    /* #1435[100.1] */
RegWrite(R_LMP, 1, 0x01);    /* #1436[100.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1437[100.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1438[100.1] */
RegWrite(R_CTL, 1, 0x39);    /* #1439[100.1] */
RegWrite(0x34, 1, 0x63);    /* #1440[100.1] */
RegWrite(0x49, 1, 0x96);    /* #1441[100.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1442[100.1] */
RegWrite(0x32, 2, 0x290A);    /* #1443[100.1] */
RegWrite(0x34, 1, 0x63);    /* #1444[100.1] */
RegWrite(0x49, 1, 0x9E);    /* #1445[100.1] */
{
 unsigned char uchRegs1446[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1446);
}    /* #1446[100.1] */
RegWrite(R_CTL, 1, 0x39);    /* #1447[100.1] */
RegWrite(R_CTL, 1, 0x79);    /* #1448[100.1] */
RegWrite(R_CTL, 1, 0xF9);    /* #1449[100.1] */
RegWrite(0x32, 2, 0x290A);    /* #1450[100.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1451[100.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1452[100.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1453[100.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1454[100.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1455[100.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1456[100.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1457[100.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1458[100.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1459[100.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1460[100.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1461[100.8] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1462[100.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1463[100.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1464[101.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1465[101.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1466[101.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1467[101.1] */
ulVal1 = RegRead(R_CTL, 1); /*=0xF9*/    /* #1468[101.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x79*/    /* #1469[101.2] */
RegWrite(0x43, 1, 0x03);    /* #1470[101.2] */
RegWrite(R_CTL, 1, 0x39);    /* #1471[101.2] */
RegWrite(0x34, 1, 0x03);    /* #1472[101.2] */
RegWrite(0x49, 1, 0x96);    /* #1473[101.2] */
{
 unsigned char uchRegs1474[]={
   /*R_SPOS*/ 0xFB, /*R_SPOSH*/ 0x00, /*0x03*/ 0x2A,
   /*R_SWID*/ 0xB0, /*R_SWIDH*/ 0x04, /*R_STPS*/ 0x06,
   /*R_STPSH*/ 0x00, /*0x08*/ 0x00, /*0x09*/ 0x2A,
   /*R_LEN*/ 0xBE, /*R_LENH*/ 0x04, /*0x0C*/ 0x6D,
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0x03, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x00, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0x40, /*0x48*/ 0x15,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs1474);
}    /* #1474[101.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1475[101.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1476[101.3] */
RegWrite(R_CTL, 1, 0x39);    /* #1477[101.4] */
RegWrite(R_CTL, 1, 0x79);    /* #1478[101.4] */
RegWrite(R_CTL, 1, 0xF9);    /* #1479[101.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1480[101.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0384*/    /* #1481[101.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1482[101.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1068*/    /* #1483[101.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1484[101.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2328*/    /* #1485[101.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1486[101.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x300C*/    /* #1487[101.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1488[101.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F48*/    /* #1489[101.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1490[102.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4C2C*/    /* #1491[102.0] */
BulkRead(fh,32768);   /* #1492[102.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1493[102.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1910*/    /* #1494[102.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1495[102.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2144*/    /* #1496[102.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1497[102.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E28*/    /* #1498[102.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1499[102.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3D64*/    /* #1500[102.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1501[102.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4B74*/    /* #1502[102.5] */
BulkRead(fh,32768);   /* #1503[102.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1504[102.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x172C*/    /* #1505[102.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1506[102.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2022*/    /* #1507[102.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1508[102.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2FC8*/    /* #1509[102.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1510[102.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4030*/    /* #1511[102.8] */
BulkRead(fh,32768);   /* #1512[102.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1513[102.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0ABC*/    /* #1514[102.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1515[103.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x11C4*/    /* #1516[103.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1517[103.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1C50*/    /* #1518[103.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1519[103.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2934*/    /* #1520[103.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1521[103.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3618*/    /* #1522[103.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1523[103.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x42FC*/    /* #1524[103.3] */
BulkRead(fh,32768);   /* #1525[103.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1526[103.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0EB4*/    /* #1527[103.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1528[103.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1490*/    /* #1529[103.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1530[103.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2048*/    /* #1531[103.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1532[103.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F84*/    /* #1533[103.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1534[103.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3EC0*/    /* #1535[103.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1536[103.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4DFC*/    /* #1537[103.9] */
BulkRead(fh,32768);   /* #1538[103.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1539[103.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1888*/    /* #1540[104.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1541[104.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2206*/    /* #1542[104.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1543[104.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3124*/    /* #1544[104.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1545[104.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4060*/    /* #1546[104.3] */
BulkRead(fh,32768);   /* #1547[104.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1548[104.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0AEC*/    /* #1549[104.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1550[104.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x11F4*/    /* #1551[104.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1552[104.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1ED8*/    /* #1553[104.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1554[104.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2E14*/    /* #1555[104.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1556[104.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3AF8*/    /* #1557[104.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1558[104.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4584*/    /* #1559[104.8] */
BulkRead(fh,32768);   /* #1560[104.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1561[104.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x113C*/    /* #1562[104.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1563[104.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1CF4*/    /* #1564[105.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1565[105.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x29D8*/    /* #1566[105.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1567[105.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x36BC*/    /* #1568[105.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1569[105.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x45F8*/    /* #1570[105.3] */
BulkRead(fh,32768);   /* #1571[105.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1572[105.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1084*/    /* #1573[105.4] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1574[105.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20B9*/    /* #1575[105.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1576[105.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3028*/    /* #1577[105.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1578[105.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3F64*/    /* #1579[105.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1580[105.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4FCC*/    /* #1581[105.8] */
BulkRead(fh,32768);   /* #1582[105.8] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1583[105.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1B84*/    /* #1584[105.9] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1585[105.9] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1F08*/    /* #1586[106.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1587[106.0] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2F70*/    /* #1588[106.1] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1589[106.1] */
ulVal2 = RegRead(R_STAT, 2); /*=0x3FD8*/    /* #1590[106.2] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1591[106.2] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4CBC*/    /* #1592[106.3] */
BulkRead(fh,32768);   /* #1593[106.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1594[106.3] */
ulVal2 = RegRead(R_STAT, 2); /*=0x1874*/    /* #1595[106.3] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1596[106.4] */
ulVal2 = RegRead(R_STAT, 2); /*=0x20A8*/    /* #1597[106.5] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1598[106.5] */
ulVal2 = RegRead(R_STAT, 2); /*=0x2FE4*/    /* #1599[106.6] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x00*/    /* #1600[106.6] */
ulVal2 = RegRead(R_STAT, 2); /*=0x4178*/    /* #1601[106.6] */
BulkRead(fh,32768);   /* #1602[106.7] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1603[106.7] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0754*/    /* #1604[106.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0754*/    /* #1605[106.8] */
BulkRead(fh,3752);   /* #1606[106.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1607[106.8] */
ulVal2 = RegRead(R_STAT, 2); /*=0x0000*/    /* #1608[106.8] */
RegWrite(0x43, 1, 0x03);    /* #1609[106.8] */
RegWrite(0x43, 1, 0x03);    /* #1610[106.9] */
RegWrite(R_CTL, 1, 0x39);    /* #1611[106.9] */
{
 unsigned char uchRegs1612[]={
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
   /*R_CCAL3*/ 0x80, /*0x32*/ 0x0A, /*0x33*/ 0x29,
   /*0x34*/ 0x03, /*0x35*/ 0x29, /*0x36*/ 0x00,
   /*0x37*/ 0x00, /*0x38*/ 0x00, /*0x39*/ 0x00,
   /*0x3A*/ 0x00, /*0x3B*/ 0x00, /*0x3C*/ 0xFF,
   /*0x3D*/ 0x0F, /*0x3E*/ 0x00, /*0x3F*/ 0x00,
   /*0x40*/ 0x01, /*0x41*/ 0x80, /*R_CSTAT*/ 0x80,
   /*0x43*/ 0x03, /*R_LMP*/ 0x01, /*0x45*/ 0x00,
   /*R_CTL*/ 0x39, /*0x47*/ 0x40, /*0x48*/ 0x15,
   /*0x49*/ 0x96, /*0x4A*/ 0x8C };
  RegWriteArray(R_ALL, 74, uchRegs1612);
}    /* #1612[106.9] */
RegWrite(R_CTL, 1, 0x39);    /* #1613[106.9] */
RegWrite(R_CTL, 1, 0x79);    /* #1614[106.9] */
RegWrite(R_CTL, 1, 0xF9);    /* #1615[107.0] */
ulVal1 = RegRead(R_CSTAT, 1); /*=0x80*/    /* #1616[107.0] */
RegWrite(R_CTL, 1, 0x39);    /* #1617[107.0] */
RegWrite(0x43, 1, 0x07);    /* #1618[107.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x39*/    /* #1619[107.1] */
RegWrite(0x32, 2, 0x290A);    /* #1620[107.1] */
RegWrite(0x34, 1, 0xC3);    /* #1621[107.1] */
RegWrite(0x49, 1, 0x9E);    /* #1622[107.1] */
{
 unsigned char uchRegs1623[]={
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
  RegWriteArray(R_ALL, 74, uchRegs1623);
}    /* #1623[107.1] */
RegWrite(0x43, 1, 0x03);    /* #1624[107.2] */
RegWrite(R_STPS, 2, 0x0000);    /* #1625[107.2] */
RegWrite(R_LEN, 2, 0x0656);    /* #1626[107.2] */
RegWrite(0x47, 2, 0xA000);    /* #1627[107.2] */
RegWrite(0x34, 1, 0xC3);    /* #1628[107.2] */
RegWrite(0x49, 1, 0x9E);    /* #1629[107.3] */
RegWrite(R_CTL, 1, 0x19);    /* #1630[107.3] */
RegWrite(R_CTL, 1, 0x59);    /* #1631[107.3] */
RegWrite(R_CTL, 1, 0xD9);    /* #1632[107.3] */
ulVal2 = RegRead(R_POS, 2); /*=0x0650*/    /* #1633[107.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0647*/    /* #1634[107.4] */
ulVal2 = RegRead(R_POS, 2); /*=0x0621*/    /* #1635[107.5] */
RegWrite(0x47, 2, 0xA000);    /* #1636[107.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x0605*/    /* #1637[107.5] */
RegWrite(0x47, 2, 0x9800);    /* #1638[107.5] */
ulVal2 = RegRead(R_POS, 2); /*=0x05F1*/    /* #1639[107.6] */
RegWrite(0x47, 2, 0x9000);    /* #1640[107.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x05D2*/    /* #1641[107.6] */
RegWrite(0x47, 2, 0x8800);    /* #1642[107.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x05C6*/    /* #1643[107.6] */
RegWrite(0x47, 2, 0x8000);    /* #1644[107.6] */
RegWrite(0x43, 1, 0x07);    /* #1645[107.6] */
ulVal2 = RegRead(R_POS, 2); /*=0x05B2*/    /* #1646[107.7] */
RegWrite(0x47, 2, 0x7800);    /* #1647[107.7] */
RegWrite(0x43, 1, 0x07);    /* #1648[107.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x0594*/    /* #1649[107.7] */
RegWrite(0x47, 2, 0x7000);    /* #1650[107.7] */
RegWrite(0x43, 1, 0x07);    /* #1651[107.7] */
ulVal2 = RegRead(R_POS, 2); /*=0x057A*/    /* #1652[107.7] */
RegWrite(0x47, 2, 0x6800);    /* #1653[107.7] */
RegWrite(0x43, 1, 0x07);    /* #1654[107.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x055E*/    /* #1655[107.8] */
RegWrite(0x47, 2, 0x6000);    /* #1656[107.8] */
RegWrite(0x43, 1, 0x07);    /* #1657[107.8] */
ulVal2 = RegRead(R_POS, 2); /*=0x051E*/    /* #1658[107.9] */
RegWrite(0x47, 2, 0x5800);    /* #1659[107.9] */
RegWrite(0x43, 1, 0x07);    /* #1660[107.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x04FD*/    /* #1661[107.9] */
RegWrite(0x47, 2, 0x5000);    /* #1662[107.9] */
RegWrite(0x43, 1, 0x07);    /* #1663[107.9] */
ulVal2 = RegRead(R_POS, 2); /*=0x04CB*/    /* #1664[108.0] */
RegWrite(0x47, 2, 0x40C0);    /* #1665[108.0] */
RegWrite(0x32, 2, 0x290A);    /* #1666[108.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1667[108.2] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1668[108.3] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1669[108.4] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1670[108.5] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1671[108.6] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1672[108.7] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1673[108.9] */
ulVal1 = RegRead(R_CTL, 1); /*=0xD9*/    /* #1674[109.0] */
ulVal1 = RegRead(R_CTL, 1); /*=0x59*/    /* #1675[109.0] */
RegWrite(0x43, 1, 0x03);    /* #1676[109.0] */
RegWrite(R_CTL, 1, 0x39);    /* #1677[109.0] */
