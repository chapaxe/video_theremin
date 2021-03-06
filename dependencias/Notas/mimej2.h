#ifndef mimej2_h
#define mimej2_h

#include <stdio.h>
#include "Gamma/AudioIO.h"
#include "Gamma/Domain.h"
#include "Gamma/Oscillator.h"
#include "AudioApp.h"

namespace gam{

class mimej2 : public AudioApp{
public:
Sine<>osc_Mi1,osc_Mi2,osc_Mi3,osc_Mi4,osc_Mi5,osc_Mi6,osc_Mi7,osc_Mi8,osc_Mi9,osc_Mi10,osc_Mi11,osc_Mi12,osc_Mi13,osc_Mi14,osc_Mi15,osc_Mi16,osc_Mi17,osc_Mi18,osc_Mi19,osc_Mi20,osc_Mi21,osc_Mi22,osc_Mi23,osc_Mi24,osc_Mi25,osc_Mi26,osc_Mi27,osc_Mi28,osc_Mi29,osc_Mi30,osc_Mi31,osc_Mi32,osc_Mi33,osc_Mi34,osc_Mi35,osc_Mi36,osc_Mi37,osc_Mi38,osc_Mi39,osc_Mi40,osc_Mi41,osc_Mi42,osc_Mi43,osc_Mi44,osc_Mi45,osc_Mi46,osc_Mi47,osc_Mi48,osc_Mi49,osc_Mi50,osc_Mi51,osc_Mi52,osc_Mi53,osc_Mi54,osc_Mi55,osc_Mi56,osc_Mi57,osc_Mi58,osc_Mi59,osc_Mi60,osc_Mi61,osc_Mi62,osc_Mi63,osc_Mi64,osc_Mi65,osc_Mi66,osc_Mi67,osc_Mi68,osc_Mi69,osc_Mi70,osc_Mi71,osc_Mi72,osc_Mi73,osc_Mi74,osc_Mi75,osc_Mi76,osc_Mi77,osc_Mi78,osc_Mi79,osc_Mi80,osc_Mi81,osc_Mi82,osc_Mi83,osc_Mi84,osc_Mi85,osc_Mi86,osc_Mi87,osc_Mi88,osc_Mi89,osc_Mi90,osc_Mi91,osc_Mi92,osc_Mi93,osc_Mi94,osc_Mi95,osc_Mi96,osc_Mi97,osc_Mi98,osc_Mi99,osc_Mi100,osc_Mi101,osc_Mi102,osc_Mi103,osc_Mi104,osc_Mi105,osc_Mi106,osc_Mi107,osc_Mi108,osc_Mi109,osc_Mi110,osc_Mi111,osc_Mi112,osc_Mi113,osc_Mi114,osc_Mi115,osc_Mi116,osc_Mi117,osc_Mi118,osc_Mi119,osc_Mi120,osc_Mi121,osc_Mi122,osc_Mi123,osc_Mi124,osc_Mi125,osc_Mi126,osc_Mi127,osc_Mi128,osc_Mi129,osc_Mi130,osc_Mi131,osc_Mi132,osc_Mi133,osc_Mi134,osc_Mi135,osc_Mi136,osc_Mi137,osc_Mi138,osc_Mi139,osc_Mi140,osc_Mi141,osc_Mi142,osc_Mi143,osc_Mi144,osc_Mi145,osc_Mi146,osc_Mi147,osc_Mi148,osc_Mi149,osc_Mi150,osc_Mi151,osc_Mi152,osc_Mi153,osc_Mi154,osc_Mi155,osc_Mi156,osc_Mi157,osc_Mi158,osc_Mi159,osc_Mi160,osc_Mi161,osc_Mi162,osc_Mi163,osc_Mi164,osc_Mi165,osc_Mi166,osc_Mi167,osc_Mi168,osc_Mi169,osc_Mi170,osc_Mi171,osc_Mi172,osc_Mi173,osc_Mi174,osc_Mi175,osc_Mi176,osc_Mi177,osc_Mi178,osc_Mi179,osc_Mi180,osc_Mi181,osc_Mi182,osc_Mi183,osc_Mi184,osc_Mi185,osc_Mi186,osc_Mi187,osc_Mi188,osc_Mi189,osc_Mi190,osc_Mi191,osc_Mi192,osc_Mi193,osc_Mi194,osc_Mi195,osc_Mi196,osc_Mi197,osc_Mi198,osc_Mi199,osc_Mi200,osc_Mi201,osc_Mi202,osc_Mi203,osc_Mi204,osc_Mi205,osc_Mi206,osc_Mi207,osc_Mi208,osc_Mi209,osc_Mi210,osc_Mi211,osc_Mi212,osc_Mi213,osc_Mi214,osc_Mi215,osc_Mi216,osc_Mi217,osc_Mi218,osc_Mi219,osc_Mi220,osc_Mi221,osc_Mi222,osc_Mi223,osc_Mi224,osc_Mi225,osc_Mi226,osc_Mi227,osc_Mi228,osc_Mi229,osc_Mi230,osc_Mi231,osc_Mi232,osc_Mi233,osc_Mi234,osc_Mi235,osc_Mi236,osc_Mi237,osc_Mi238,osc_Mi239,osc_Mi240,osc_Mi241,osc_Mi242,osc_Mi243,osc_Mi244,osc_Mi245,osc_Mi246,osc_Mi247,osc_Mi248,osc_Mi249,osc_Mi250,osc_Mi251,osc_Mi252,osc_Mi253,osc_Mi254,osc_Mi255,osc_Mi256,osc_Mi257,osc_Mi258,osc_Mi259,osc_Mi260;


Sine<>osc_Mi261,osc_Mi262,osc_Mi263,osc_Mi264,osc_Mi265,osc_Mi266,osc_Mi267,osc_Mi268,osc_Mi269,osc_Mi270,osc_Mi271,osc_Mi272,osc_Mi273,osc_Mi274,osc_Mi275,osc_Mi276,osc_Mi277,osc_Mi278,osc_Mi279,osc_Mi280,osc_Mi281,osc_Mi282,osc_Mi283,osc_Mi284,osc_Mi285,osc_Mi286,osc_Mi287,osc_Mi288,osc_Mi289,osc_Mi290,osc_Mi291,osc_Mi292,osc_Mi293,osc_Mi294,osc_Mi295,osc_Mi296,osc_Mi297,osc_Mi298,osc_Mi299,osc_Mi300,osc_Mi301,osc_Mi302,osc_Mi303,osc_Mi304,osc_Mi305,osc_Mi306,osc_Mi307,osc_Mi308,osc_Mi309,osc_Mi310,osc_Mi311,osc_Mi312,osc_Mi313,osc_Mi314,osc_Mi315,osc_Mi316,osc_Mi317,osc_Mi318,osc_Mi319,osc_Mi320,osc_Mi321,osc_Mi322,osc_Mi323,osc_Mi324,osc_Mi325,osc_Mi326,osc_Mi327,osc_Mi328,osc_Mi329,osc_Mi330,osc_Mi331,osc_Mi332,osc_Mi333,osc_Mi334,osc_Mi335,osc_Mi336,osc_Mi337,osc_Mi338,osc_Mi339,osc_Mi340,osc_Mi341,osc_Mi342,osc_Mi343,osc_Mi344,osc_Mi345,osc_Mi346,osc_Mi347,osc_Mi348,osc_Mi349,osc_Mi350,osc_Mi351,osc_Mi352,osc_Mi353,osc_Mi354,osc_Mi355,osc_Mi356,osc_Mi357,osc_Mi358,osc_Mi359,osc_Mi360,osc_Mi361,osc_Mi362,osc_Mi363,osc_Mi364,osc_Mi365,osc_Mi366,osc_Mi367,osc_Mi368,osc_Mi369,osc_Mi370,osc_Mi371,osc_Mi372,osc_Mi373,osc_Mi374,osc_Mi375,osc_Mi376,osc_Mi377,osc_Mi378,osc_Mi379,osc_Mi380,osc_Mi381,osc_Mi382,osc_Mi383,osc_Mi384,osc_Mi385,osc_Mi386,osc_Mi387,osc_Mi388,osc_Mi389,osc_Mi390,osc_Mi391,osc_Mi392,osc_Mi393,osc_Mi394,osc_Mi395,osc_Mi396,osc_Mi397,osc_Mi398,osc_Mi399,osc_Mi400,osc_Mi401,osc_Mi402,osc_Mi403,osc_Mi404,osc_Mi405,osc_Mi406,osc_Mi407,osc_Mi408,osc_Mi409,osc_Mi410,osc_Mi411,osc_Mi412,osc_Mi413,osc_Mi414,osc_Mi415,osc_Mi416,osc_Mi417,osc_Mi418,osc_Mi419,osc_Mi420,osc_Mi421,osc_Mi422,osc_Mi423,osc_Mi424,osc_Mi425,osc_Mi426,osc_Mi427,osc_Mi428,osc_Mi429,osc_Mi430,osc_Mi431,osc_Mi432,osc_Mi433,osc_Mi434,osc_Mi435,osc_Mi436,osc_Mi437,osc_Mi438,osc_Mi439,osc_Mi440,osc_Mi441,osc_Mi442,osc_Mi443,osc_Mi444,osc_Mi445,osc_Mi446,osc_Mi447,osc_Mi448,osc_Mi449,osc_Mi450,osc_Mi451,osc_Mi452,osc_Mi453,osc_Mi454,osc_Mi455,osc_Mi456,osc_Mi457,osc_Mi458,osc_Mi459,osc_Mi460,osc_Mi461,osc_Mi462,osc_Mi463,osc_Mi464,osc_Mi465,osc_Mi466,osc_Mi467,osc_Mi468,osc_Mi469,osc_Mi470,osc_Mi471,osc_Mi472,osc_Mi473,osc_Mi474,osc_Mi475,osc_Mi476,osc_Mi477,osc_Mi478,osc_Mi479,osc_Mi480,osc_Mi481,osc_Mi482,osc_Mi483,osc_Mi484,osc_Mi485,osc_Mi486,osc_Mi487,osc_Mi488,osc_Mi489,osc_Mi490,osc_Mi491,osc_Mi492,osc_Mi493,osc_Mi494,osc_Mi495,osc_Mi496,osc_Mi497,osc_Mi498,osc_Mi499,osc_Mi500,osc_Mi501,osc_Mi502,osc_Mi503,osc_Mi504,osc_Mi505,osc_Mi506,osc_Mi507,osc_Mi508,osc_Mi509,osc_Mi510,osc_Mi511,osc_Mi512,osc_Mi513,osc_Mi514,osc_Mi515,osc_Mi516,osc_Mi517,osc_Mi518,osc_Mi519,osc_Mi520;

mimej2(){
osc_Mi1.freq(585.059);
osc_Mi2.freq(591.285);
osc_Mi3.freq(595.02);
osc_Mi4.freq(602.943);
osc_Mi5.freq(603.848);
osc_Mi6.freq(606.112);
osc_Mi7.freq(608.263);
osc_Mi8.freq(610.074);
osc_Mi9.freq(611.319);
osc_Mi10.freq(615.28);
osc_Mi11.freq(617.657);
osc_Mi12.freq(619.808);
osc_Mi13.freq(620.034);
osc_Mi14.freq(620.939);
osc_Mi15.freq(621.505);
osc_Mi16.freq(622.411);
osc_Mi17.freq(622.75);
osc_Mi18.freq(623.09);
osc_Mi19.freq(624.109);
osc_Mi20.freq(625.806);
osc_Mi21.freq(626.033);
osc_Mi22.freq(627.165);
osc_Mi23.freq(628.07);
osc_Mi24.freq(628.862);
osc_Mi25.freq(629.089);
osc_Mi26.freq(629.542);
osc_Mi27.freq(629.768);
osc_Mi28.freq(631.692);
osc_Mi29.freq(632.711);
osc_Mi30.freq(633.39);
osc_Mi31.freq(633.843);
osc_Mi32.freq(634.522);
osc_Mi33.freq(635.088);
osc_Mi34.freq(635.314);
osc_Mi35.freq(636.22);
osc_Mi36.freq(636.559);
osc_Mi37.freq(637.351);
osc_Mi38.freq(637.804);
osc_Mi39.freq(638.37);
osc_Mi40.freq(638.936);
osc_Mi41.freq(639.389);
osc_Mi42.freq(639.842);
osc_Mi43.freq(640.181);
osc_Mi44.freq(640.407);
osc_Mi45.freq(640.634);
osc_Mi46.freq(640.86);
osc_Mi47.freq(641.426);
osc_Mi48.freq(641.879);
osc_Mi49.freq(642.218);
osc_Mi50.freq(642.784);
osc_Mi51.freq(643.011);
osc_Mi52.freq(643.463);
osc_Mi53.freq(643.803);
osc_Mi54.freq(644.143);
osc_Mi55.freq(644.369);
osc_Mi56.freq(644.709);
osc_Mi57.freq(644.935);
osc_Mi58.freq(645.501);
osc_Mi59.freq(645.954);
osc_Mi60.freq(646.18);
osc_Mi61.freq(646.52);
osc_Mi62.freq(646.746);
osc_Mi63.freq(647.199);
osc_Mi64.freq(647.425);
osc_Mi65.freq(647.651);
osc_Mi66.freq(647.991);
osc_Mi67.freq(648.217);
osc_Mi68.freq(648.557);
osc_Mi69.freq(648.896);
osc_Mi70.freq(649.123);
osc_Mi71.freq(649.576);
osc_Mi72.freq(649.915);
osc_Mi73.freq(650.255);
osc_Mi74.freq(650.707);
osc_Mi75.freq(651.16);
osc_Mi76.freq(651.387);
osc_Mi77.freq(651.952);
osc_Mi78.freq(652.405);
osc_Mi79.freq(652.858);
osc_Mi80.freq(653.877);
osc_Mi81.freq(654.556);
osc_Mi82.freq(655.122);
osc_Mi83.freq(655.461);
osc_Mi84.freq(655.688);
osc_Mi85.freq(655.914);
osc_Mi86.freq(656.254);
osc_Mi87.freq(656.48);
osc_Mi88.freq(656.933);
osc_Mi89.freq(657.272);
osc_Mi90.freq(657.612);
osc_Mi91.freq(657.838);
osc_Mi92.freq(658.178);
osc_Mi93.freq(658.404);
osc_Mi94.freq(658.857);
osc_Mi95.freq(659.989);
osc_Mi96.freq(660.781);
osc_Mi97.freq(661.007);
osc_Mi98.freq(661.234);
osc_Mi99.freq(661.46);
osc_Mi100.freq(662.026);
osc_Mi101.freq(662.479);
osc_Mi102.freq(662.705);
osc_Mi103.freq(662.932);
osc_Mi104.freq(663.158);
osc_Mi105.freq(663.497);
osc_Mi106.freq(663.724);
osc_Mi107.freq(664.177);
osc_Mi108.freq(664.629);
osc_Mi109.freq(664.969);
osc_Mi110.freq(665.422);
osc_Mi111.freq(666.214);
osc_Mi112.freq(667.233);
osc_Mi113.freq(667.459);
osc_Mi114.freq(668.138);
osc_Mi115.freq(668.364);
osc_Mi116.freq(668.704);
osc_Mi117.freq(668.93);
osc_Mi118.freq(669.157);
osc_Mi119.freq(669.383);
osc_Mi120.freq(669.723);
osc_Mi121.freq(670.175);
osc_Mi122.freq(670.402);
osc_Mi123.freq(670.855);
osc_Mi124.freq(671.081);
osc_Mi125.freq(671.307);
osc_Mi126.freq(671.534);
osc_Mi127.freq(671.76);
osc_Mi128.freq(672.439);
osc_Mi129.freq(673.118);
osc_Mi130.freq(673.684);
osc_Mi131.freq(674.024);
osc_Mi132.freq(674.25);
osc_Mi133.freq(674.477);
osc_Mi134.freq(674.816);
osc_Mi135.freq(675.156);
osc_Mi136.freq(675.382);
osc_Mi137.freq(675.722);
osc_Mi138.freq(676.174);
osc_Mi139.freq(676.627);
osc_Mi140.freq(676.853);
osc_Mi141.freq(677.08);
osc_Mi142.freq(677.533);
osc_Mi143.freq(677.759);
osc_Mi144.freq(677.985);
osc_Mi145.freq(678.664);
osc_Mi146.freq(678.891);
osc_Mi147.freq(679.23);
osc_Mi148.freq(679.57);
osc_Mi149.freq(680.023);
osc_Mi150.freq(680.249);
osc_Mi151.freq(680.589);
osc_Mi152.freq(680.928);
osc_Mi153.freq(681.268);
osc_Mi154.freq(681.494);
osc_Mi155.freq(682.06);
osc_Mi156.freq(682.626);
osc_Mi157.freq(683.645);
osc_Mi158.freq(684.437);
osc_Mi159.freq(684.776);
osc_Mi160.freq(685.003);
osc_Mi161.freq(685.456);
osc_Mi162.freq(685.682);
osc_Mi163.freq(686.474);
osc_Mi164.freq(686.814);
osc_Mi165.freq(687.04);
osc_Mi166.freq(688.285);
osc_Mi167.freq(688.625);
osc_Mi168.freq(689.191);
osc_Mi169.freq(689.417);
osc_Mi170.freq(689.643);
osc_Mi171.freq(689.983);
osc_Mi172.freq(690.662);
osc_Mi173.freq(691.002);
osc_Mi174.freq(691.228);
osc_Mi175.freq(691.794);
osc_Mi176.freq(692.02);
osc_Mi177.freq(692.699);
osc_Mi178.freq(693.152);
osc_Mi179.freq(693.605);
osc_Mi180.freq(693.945);
osc_Mi181.freq(695.19);
osc_Mi182.freq(696.095);
osc_Mi183.freq(696.548);
osc_Mi184.freq(697.114);
osc_Mi185.freq(697.34);
osc_Mi186.freq(697.793);
osc_Mi187.freq(698.132);
osc_Mi188.freq(698.812);
osc_Mi189.freq(699.038);
osc_Mi190.freq(699.717);
osc_Mi191.freq(700.623);
osc_Mi192.freq(703.226);
osc_Mi193.freq(704.471);
osc_Mi194.freq(706.395);
osc_Mi195.freq(706.735);
osc_Mi196.freq(708.093);
osc_Mi197.freq(710.017);
osc_Mi198.freq(715.224);
osc_Mi199.freq(726.089);
osc_Mi200.freq(726.429);
osc_Mi201.freq(728.919);
osc_Mi202.freq(734.578);
osc_Mi203.freq(1276.51);
osc_Mi204.freq(1282.74);
osc_Mi205.freq(1282.97);
osc_Mi206.freq(1289.08);
osc_Mi207.freq(1289.64);
osc_Mi208.freq(1295.08);
osc_Mi209.freq(1295.3);
osc_Mi210.freq(1300.74);
osc_Mi211.freq(1301.53);
osc_Mi212.freq(1301.98);
osc_Mi213.freq(1302.32);
osc_Mi214.freq(1302.55);
osc_Mi215.freq(1303.45);
osc_Mi216.freq(1306.4);
osc_Mi217.freq(1306.62);
osc_Mi218.freq(1306.96);
osc_Mi219.freq(1307.64);
osc_Mi220.freq(1308.77);
osc_Mi221.freq(1309);
osc_Mi222.freq(1309.45);
osc_Mi223.freq(1309.79);
osc_Mi224.freq(1310.58);
osc_Mi225.freq(1311.94);
osc_Mi226.freq(1313.19);
osc_Mi227.freq(1313.64);
osc_Mi228.freq(1313.87);
osc_Mi229.freq(1314.77);
osc_Mi230.freq(1319.52);
osc_Mi231.freq(1320.09);
osc_Mi232.freq(1320.54);
osc_Mi233.freq(1321.79);
osc_Mi234.freq(1322.58);
osc_Mi235.freq(1324.84);
osc_Mi236.freq(1325.52);
osc_Mi237.freq(1326.32);
osc_Mi238.freq(1327.45);
osc_Mi239.freq(1327.67);
osc_Mi240.freq(1327.9);
osc_Mi241.freq(1328.58);
osc_Mi242.freq(1331.98);
osc_Mi243.freq(1332.43);
osc_Mi244.freq(1332.77);
osc_Mi245.freq(1332.99);
osc_Mi246.freq(1334.35);
osc_Mi247.freq(1334.92);
osc_Mi248.freq(1335.94);
osc_Mi249.freq(1336.16);
osc_Mi250.freq(1337.41);
osc_Mi251.freq(1338.65);
osc_Mi252.freq(1339.11);
osc_Mi253.freq(1343.75);
osc_Mi254.freq(1344.88);
osc_Mi255.freq(1345.33);
osc_Mi256.freq(1349.41);
osc_Mi257.freq(1350.99);
osc_Mi258.freq(1357.22);
osc_Mi259.freq(1357.44);
osc_Mi260.freq(1363.67);



osc_Mi261.freq(0.25-585.059);
osc_Mi262.freq(0.25-591.285);
osc_Mi263.freq(0.25-595.02);
osc_Mi264.freq(0.25-602.943);
osc_Mi265.freq(0.25-603.848);
osc_Mi266.freq(0.25-606.112);
osc_Mi267.freq(0.25-608.263);
osc_Mi268.freq(0.25-610.074);
osc_Mi269.freq(0.25-611.319);
osc_Mi270.freq(0.25-615.28);
osc_Mi271.freq(0.25-617.657);
osc_Mi272.freq(0.25-619.808);
osc_Mi273.freq(0.25-620.034);
osc_Mi274.freq(0.25-620.939);
osc_Mi275.freq(0.25-621.505);
osc_Mi276.freq(0.25-622.411);
osc_Mi277.freq(0.25-622.75);
osc_Mi278.freq(0.25-623.09);
osc_Mi279.freq(0.25-624.109);
osc_Mi280.freq(0.25-625.806);
osc_Mi281.freq(0.25-626.033);
osc_Mi282.freq(0.25-627.165);
osc_Mi283.freq(0.25-628.07);
osc_Mi284.freq(0.25-628.862);
osc_Mi285.freq(0.25-629.089);
osc_Mi286.freq(0.25-629.542);
osc_Mi287.freq(0.25-629.768);
osc_Mi288.freq(0.25-631.692);
osc_Mi289.freq(0.25-632.711);
osc_Mi290.freq(0.25-633.39);
osc_Mi291.freq(0.25-633.843);
osc_Mi292.freq(0.25-634.522);
osc_Mi293.freq(0.25-635.088);
osc_Mi294.freq(0.25-635.314);
osc_Mi295.freq(0.25-636.22);
osc_Mi296.freq(0.25-636.559);
osc_Mi297.freq(0.25-637.351);
osc_Mi298.freq(0.25-637.804);
osc_Mi299.freq(0.25-638.37);
osc_Mi300.freq(0.25-638.936);
osc_Mi301.freq(0.25-639.389);
osc_Mi302.freq(0.25-639.842);
osc_Mi303.freq(0.25-640.181);
osc_Mi304.freq(0.25-640.407);
osc_Mi305.freq(0.25-640.634);
osc_Mi306.freq(0.25-640.86);
osc_Mi307.freq(0.25-641.426);
osc_Mi308.freq(0.25-641.879);
osc_Mi309.freq(0.25-642.218);
osc_Mi310.freq(0.25-642.784);
osc_Mi311.freq(0.25-643.011);
osc_Mi312.freq(0.25-643.463);
osc_Mi313.freq(0.25-643.803);
osc_Mi314.freq(0.25-644.143);
osc_Mi315.freq(0.25-644.369);
osc_Mi316.freq(0.25-644.709);
osc_Mi317.freq(0.25-644.935);
osc_Mi318.freq(0.25-645.501);
osc_Mi319.freq(0.25-645.954);
osc_Mi320.freq(0.25-646.18);
osc_Mi321.freq(0.25-646.52);
osc_Mi322.freq(0.25-646.746);
osc_Mi323.freq(0.25-647.199);
osc_Mi324.freq(0.25-647.425);
osc_Mi325.freq(0.25-647.651);
osc_Mi326.freq(0.25-647.991);
osc_Mi327.freq(0.25-648.217);
osc_Mi328.freq(0.25-648.557);
osc_Mi329.freq(0.25-648.896);
osc_Mi330.freq(0.25-649.123);
osc_Mi331.freq(0.25-649.576);
osc_Mi332.freq(0.25-649.915);
osc_Mi333.freq(0.25-650.255);
osc_Mi334.freq(0.25-650.707);
osc_Mi335.freq(0.25-651.16);
osc_Mi336.freq(0.25-651.387);
osc_Mi337.freq(0.25-651.952);
osc_Mi338.freq(0.25-652.405);
osc_Mi339.freq(0.25-652.858);
osc_Mi340.freq(0.25-653.877);
osc_Mi341.freq(0.25-654.556);
osc_Mi342.freq(0.25-655.122);
osc_Mi343.freq(0.25-655.461);
osc_Mi344.freq(0.25-655.688);
osc_Mi345.freq(0.25-655.914);
osc_Mi346.freq(0.25-656.254);
osc_Mi347.freq(0.25-656.48);
osc_Mi348.freq(0.25-656.933);
osc_Mi349.freq(0.25-657.272);
osc_Mi350.freq(0.25-657.612);
osc_Mi351.freq(0.25-657.838);
osc_Mi352.freq(0.25-658.178);
osc_Mi353.freq(0.25-658.404);
osc_Mi354.freq(0.25-658.857);
osc_Mi355.freq(0.25-659.989);
osc_Mi356.freq(0.25-660.781);
osc_Mi357.freq(0.25-661.007);
osc_Mi358.freq(0.25-661.234);
osc_Mi359.freq(0.25-661.46);
osc_Mi360.freq(0.25-662.026);
osc_Mi361.freq(0.25-662.479);
osc_Mi362.freq(0.25-662.705);
osc_Mi363.freq(0.25-662.932);
osc_Mi364.freq(0.25-663.158);
osc_Mi365.freq(0.25-663.497);
osc_Mi366.freq(0.25-663.724);
osc_Mi367.freq(0.25-664.177);
osc_Mi368.freq(0.25-664.629);
osc_Mi369.freq(0.25-664.969);
osc_Mi370.freq(0.25-665.422);
osc_Mi371.freq(0.25-666.214);
osc_Mi372.freq(0.25-667.233);
osc_Mi373.freq(0.25-667.459);
osc_Mi374.freq(0.25-668.138);
osc_Mi375.freq(0.25-668.364);
osc_Mi376.freq(0.25-668.704);
osc_Mi377.freq(0.25-668.93);
osc_Mi378.freq(0.25-669.157);
osc_Mi379.freq(0.25-669.383);
osc_Mi380.freq(0.25-669.723);
osc_Mi381.freq(0.25-670.175);
osc_Mi382.freq(0.25-670.402);
osc_Mi383.freq(0.25-670.855);
osc_Mi384.freq(0.25-671.081);
osc_Mi385.freq(0.25-671.307);
osc_Mi386.freq(0.25-671.534);
osc_Mi387.freq(0.25-671.76);
osc_Mi388.freq(0.25-672.439);
osc_Mi389.freq(0.25-673.118);
osc_Mi390.freq(0.25-673.684);
osc_Mi391.freq(0.25-674.024);
osc_Mi392.freq(0.25-674.25);
osc_Mi393.freq(0.25-674.477);
osc_Mi394.freq(0.25-674.816);
osc_Mi395.freq(0.25-675.156);
osc_Mi396.freq(0.25-675.382);
osc_Mi397.freq(0.25-675.722);
osc_Mi398.freq(0.25-676.174);
osc_Mi399.freq(0.25-676.627);
osc_Mi400.freq(0.25-676.853);
osc_Mi401.freq(0.25-677.08);
osc_Mi402.freq(0.25-677.533);
osc_Mi403.freq(0.25-677.759);
osc_Mi404.freq(0.25-677.985);
osc_Mi405.freq(0.25-678.664);
osc_Mi406.freq(0.25-678.891);
osc_Mi407.freq(0.25-679.23);
osc_Mi408.freq(0.25-679.57);
osc_Mi409.freq(0.25-680.023);
osc_Mi410.freq(0.25-680.249);
osc_Mi411.freq(0.25-680.589);
osc_Mi412.freq(0.25-680.928);
osc_Mi413.freq(0.25-681.268);
osc_Mi414.freq(0.25-681.494);
osc_Mi415.freq(0.25-682.06);
osc_Mi416.freq(0.25-682.626);
osc_Mi417.freq(0.25-683.645);
osc_Mi418.freq(0.25-684.437);
osc_Mi419.freq(0.25-684.776);
osc_Mi420.freq(0.25-685.003);
osc_Mi421.freq(0.25-685.456);
osc_Mi422.freq(0.25-685.682);
osc_Mi423.freq(0.25-686.474);
osc_Mi424.freq(0.25-686.814);
osc_Mi425.freq(0.25-687.04);
osc_Mi426.freq(0.25-688.285);
osc_Mi427.freq(0.25-688.625);
osc_Mi428.freq(0.25-689.191);
osc_Mi429.freq(0.25-689.417);
osc_Mi430.freq(0.25-689.643);
osc_Mi431.freq(0.25-689.983);
osc_Mi432.freq(0.25-690.662);
osc_Mi433.freq(0.25-691.002);
osc_Mi434.freq(0.25-691.228);
osc_Mi435.freq(0.25-691.794);
osc_Mi436.freq(0.25-692.02);
osc_Mi437.freq(0.25-692.699);
osc_Mi438.freq(0.25-693.152);
osc_Mi439.freq(0.25-693.605);
osc_Mi440.freq(0.25-693.945);
osc_Mi441.freq(0.25-695.19);
osc_Mi442.freq(0.25-696.095);
osc_Mi443.freq(0.25-696.548);
osc_Mi444.freq(0.25-697.114);
osc_Mi445.freq(0.25-697.34);
osc_Mi446.freq(0.25-697.793);
osc_Mi447.freq(0.25-698.132);
osc_Mi448.freq(0.25-698.812);
osc_Mi449.freq(0.25-699.038);
osc_Mi450.freq(0.25-699.717);
osc_Mi451.freq(0.25-700.623);
osc_Mi452.freq(0.25-703.226);
osc_Mi453.freq(0.25-704.471);
osc_Mi454.freq(0.25-706.395);
osc_Mi455.freq(0.25-706.735);
osc_Mi456.freq(0.25-708.093);
osc_Mi457.freq(0.25-710.017);
osc_Mi458.freq(0.25-715.224);
osc_Mi459.freq(0.25-726.089);
osc_Mi460.freq(0.25-726.429);
osc_Mi461.freq(0.25-728.919);
osc_Mi462.freq(0.25-734.578);
osc_Mi463.freq(0.25-1276.51);
osc_Mi464.freq(0.25-1282.74);
osc_Mi465.freq(0.25-1282.97);
osc_Mi466.freq(0.25-1289.08);
osc_Mi467.freq(0.25-1289.64);
osc_Mi468.freq(0.25-1295.08);
osc_Mi469.freq(0.25-1295.3);
osc_Mi470.freq(0.25-1300.74);
osc_Mi471.freq(0.25-1301.53);
osc_Mi472.freq(0.25-1301.98);
osc_Mi473.freq(0.25-1302.32);
osc_Mi474.freq(0.25-1302.55);
osc_Mi475.freq(0.25-1303.45);
osc_Mi476.freq(0.25-1306.4);
osc_Mi477.freq(0.25-1306.62);
osc_Mi478.freq(0.25-1306.96);
osc_Mi479.freq(0.25-1307.64);
osc_Mi480.freq(0.25-1308.77);
osc_Mi481.freq(0.25-1309);
osc_Mi482.freq(0.25-1309.45);
osc_Mi483.freq(0.25-1309.79);
osc_Mi484.freq(0.25-1310.58);
osc_Mi485.freq(0.25-1311.94);
osc_Mi486.freq(0.25-1313.19);
osc_Mi487.freq(0.25-1313.64);
osc_Mi488.freq(0.25-1313.87);
osc_Mi489.freq(0.25-1314.77);
osc_Mi490.freq(0.25-1319.52);
osc_Mi491.freq(0.25-1320.09);
osc_Mi492.freq(0.25-1320.54);
osc_Mi493.freq(0.25-1321.79);
osc_Mi494.freq(0.25-1322.58);
osc_Mi495.freq(0.25-1324.84);
osc_Mi496.freq(0.25-1325.52);
osc_Mi497.freq(0.25-1326.32);
osc_Mi498.freq(0.25-1327.45);
osc_Mi499.freq(0.25-1327.67);
osc_Mi500.freq(0.25-1327.9);
osc_Mi501.freq(0.25-1328.58);
osc_Mi502.freq(0.25-1331.98);
osc_Mi503.freq(0.25-1332.43);
osc_Mi504.freq(0.25-1332.77);
osc_Mi505.freq(0.25-1332.99);
osc_Mi506.freq(0.25-1334.35);
osc_Mi507.freq(0.25-1334.92);
osc_Mi508.freq(0.25-1335.94);
osc_Mi509.freq(0.25-1336.16);
osc_Mi510.freq(0.25-1337.41);
osc_Mi511.freq(0.25-1338.65);
osc_Mi512.freq(0.25-1339.11);
osc_Mi513.freq(0.25-1343.75);
osc_Mi514.freq(0.25-1344.88);
osc_Mi515.freq(0.25-1345.33);
osc_Mi516.freq(0.25-1349.41);
osc_Mi517.freq(0.25-1350.99);
osc_Mi518.freq(0.25-1357.22);
osc_Mi519.freq(0.25-1357.44);
osc_Mi520.freq(0.25-1363.67);

	}


	void onAudio(AudioIOData& io){

		while(io()){

			float s = -1e-06+-0.000182*osc_Mi1()+2.3e-05*osc_Mi261()+-7.8e-05*osc_Mi2()+-0.000126*osc_Mi262()+5.5e-05*osc_Mi3()+-0.000126*osc_Mi263()+2e-06*osc_Mi4()+-0.000139*osc_Mi264()+0.00016*osc_Mi5()+4.6e-05*osc_Mi265()+8.2e-05*osc_Mi6()+-0.000117*osc_Mi266()+-0.000135*osc_Mi7()+5.4e-05*osc_Mi267()+-0.000126*osc_Mi8()+-0.00011*osc_Mi268()+-6.6e-05*osc_Mi9()+-0.00018*osc_Mi269()+1.4e-05*osc_Mi10()+-0.000141*osc_Mi270()+8.3e-05*osc_Mi11()+0.000124*osc_Mi271()+4.9e-05*osc_Mi12()+-0.000133*osc_Mi272()+0.00012*osc_Mi13()+-5.9e-05*osc_Mi273()+-5e-05*osc_Mi14()+-0.000128*osc_Mi274()+1.5e-05*osc_Mi15()+-0.000158*osc_Mi275()+-0.000152*osc_Mi16()+-9e-05*osc_Mi276()+0.000274*osc_Mi17()+-5.4e-05*osc_Mi277()+0.00014*osc_Mi18()+0*osc_Mi278()+-0.000107*osc_Mi19()+-8.6e-05*osc_Mi279()+9.9e-05*osc_Mi20()+-9.8e-05*osc_Mi280()+0.000103*osc_Mi21()+-8.5e-05*osc_Mi281()+0.000166*osc_Mi22()+-1.3e-05*osc_Mi282()+0.000115*osc_Mi23()+-9.5e-05*osc_Mi283()+0.000434*osc_Mi24()+-0.000105*osc_Mi284()+8.3e-05*osc_Mi25()+-0.000219*osc_Mi285()+2.2e-05*osc_Mi26()+-0.000144*osc_Mi286()+0.000194*osc_Mi27()+-2e-05*osc_Mi287()+-1.7e-05*osc_Mi28()+-0.000167*osc_Mi288()+4e-06*osc_Mi29()+-0.000178*osc_Mi289()+5.6e-05*osc_Mi30()+-0.000137*osc_Mi290()+-4e-06*osc_Mi31()+-0.000135*osc_Mi291()+8.1e-05*osc_Mi32()+-0.000149*osc_Mi292()+-0.000368*osc_Mi33()+-0.000225*osc_Mi293()+-0.000138*osc_Mi34()+-0.00023*osc_Mi294()+-0.000112*osc_Mi35()+-0.000134*osc_Mi295()+2e-06*osc_Mi36()+-0.000153*osc_Mi296()+-8.9e-05*osc_Mi37()+-0.000165*osc_Mi297()+5e-06*osc_Mi38()+-0.000216*osc_Mi298()+-3.5e-05*osc_Mi39()+-0.000228*osc_Mi299()+2e-06*osc_Mi40()+-0.000199*osc_Mi300()+0.000119*osc_Mi41()+-0.000124*osc_Mi301()+-2.7e-05*osc_Mi42()+-0.000192*osc_Mi302()+-7.1e-05*osc_Mi43()+-0.000169*osc_Mi303()+7.5e-05*osc_Mi44()+-0.000116*osc_Mi304()+-0.00024*osc_Mi45()+-0.000209*osc_Mi305()+0.000161*osc_Mi46()+-7e-05*osc_Mi306()+4.8e-05*osc_Mi47()+-0.00165*osc_Mi307()+0.000103*osc_Mi48()+0.000183*osc_Mi308()+-0.000126*osc_Mi49()+0.000158*osc_Mi309()+0.000107*osc_Mi50()+0.000104*osc_Mi310()+-0.000141*osc_Mi51()+-4e-06*osc_Mi311()+-5.5e-05*osc_Mi52()+-0.00013*osc_Mi312()+-0.000239*osc_Mi53()+4e-05*osc_Mi313()+-0.000122*osc_Mi54()+-0.000204*osc_Mi314()+-6.5e-05*osc_Mi55()+0.000128*osc_Mi315()+-0.000171*osc_Mi56()+-0.000263*osc_Mi316()+-0.000124*osc_Mi57()+5.3e-05*osc_Mi317()+-0.000122*osc_Mi58()+-0.000102*osc_Mi318()+-0.000159*osc_Mi59()+0.000145*osc_Mi319()+-9e-05*osc_Mi60()+0.000328*osc_Mi320()+0.000105*osc_Mi61()+0.00013*osc_Mi321()+-8.8e-05*osc_Mi62()+-0.000182*osc_Mi322()+-0.000248*osc_Mi63()+0.000144*osc_Mi323()+-4.5e-05*osc_Mi64()+0.00045*osc_Mi324()+-0.00371*osc_Mi65()+0.005908*osc_Mi325()+-0.000229*osc_Mi66()+-6.5e-05*osc_Mi326()+-0.000101*osc_Mi67()+0.000158*osc_Mi327()+-0.000102*osc_Mi68()+-0.000126*osc_Mi328()+-0.000115*osc_Mi69()+0.000223*osc_Mi329()+-0.00021*osc_Mi70()+0.000217*osc_Mi330()+-0.00019*osc_Mi71()+0.000234*osc_Mi331()+-0.00014*osc_Mi72()+-7.2e-05*osc_Mi332()+-0.000176*osc_Mi73()+7.3e-05*osc_Mi333()+-5.5e-05*osc_Mi74()+0.000232*osc_Mi334()+-0.000167*osc_Mi75()+-0.00013*osc_Mi335()+-0.000205*osc_Mi76()+-2.5e-05*osc_Mi336()+-0.000249*osc_Mi77()+7.4e-05*osc_Mi337()+-0.000317*osc_Mi78()+0.000212*osc_Mi338()+-0.000248*osc_Mi79()+0.000411*osc_Mi339()+0.014288*osc_Mi80()+-0.007665*osc_Mi340()+0.000964*osc_Mi81()+-0.000576*osc_Mi341()+0.00069*osc_Mi82()+-0.00033*osc_Mi342()+0.000583*osc_Mi83()+-5.3e-05*osc_Mi343()+0.000346*osc_Mi84()+-0.000312*osc_Mi344()+0.000502*osc_Mi85()+-0.000168*osc_Mi345()+0.000264*osc_Mi86()+-0.000234*osc_Mi346()+0.000337*osc_Mi87()+3.1e-05*osc_Mi347()+0.000489*osc_Mi88()+-0.000255*osc_Mi348()+0.000435*osc_Mi89()+-0.000258*osc_Mi349()+0.000666*osc_Mi90()+-3.8e-05*osc_Mi350()+0.000675*osc_Mi91()+5.7e-05*osc_Mi351()+0.000608*osc_Mi92()+-0.000117*osc_Mi352()+0.00054*osc_Mi93()+-0.000259*osc_Mi353()+0.000845*osc_Mi94()+-8.6e-05*osc_Mi354()+0.014443*osc_Mi95()+0.00088*osc_Mi355()+-0.001036*osc_Mi96()+-6.4e-05*osc_Mi356()+-0.000862*osc_Mi97()+-0.000197*osc_Mi357()+-0.000803*osc_Mi98()+-0.000203*osc_Mi358()+-0.000687*osc_Mi99()+0.000112*osc_Mi359()+-0.000489*osc_Mi100()+-0.000116*osc_Mi360()+-0.000348*osc_Mi101()+-0.000265*osc_Mi361()+-0.0002*osc_Mi102()+-0.00016*osc_Mi362()+-0.00026*osc_Mi103()+-0.000255*osc_Mi363()+-0.000299*osc_Mi104()+-0.000142*osc_Mi364()+0.000117*osc_Mi105()+-9.1e-05*osc_Mi365()+-0.000245*osc_Mi106()+-1.4e-05*osc_Mi366()+-7.5e-05*osc_Mi107()+0.000149*osc_Mi367()+0.000211*osc_Mi108()+-0.000341*osc_Mi368()+0.000205*osc_Mi109()+1.9e-05*osc_Mi369()+0.000246*osc_Mi110()+0.000307*osc_Mi370()+0.020613*osc_Mi111()+0.007607*osc_Mi371()+-0.000722*osc_Mi112()+-0.000321*osc_Mi372()+-0.000602*osc_Mi113()+-0.000351*osc_Mi373()+-0.00037*osc_Mi114()+5.7e-05*osc_Mi374()+-0.0003*osc_Mi115()+-0.000301*osc_Mi375()+-0.000308*osc_Mi116()+-6.2e-05*osc_Mi376()+-0.000348*osc_Mi117()+-8.1e-05*osc_Mi377()+-0.000314*osc_Mi118()+-7.5e-05*osc_Mi378()+-0.000282*osc_Mi119()+-0.000191*osc_Mi379()+-0.000207*osc_Mi120()+-0.000259*osc_Mi380()+-0.00036*osc_Mi121()+-0.000132*osc_Mi381()+-0.000279*osc_Mi122()+5.4e-05*osc_Mi382()+-0.000327*osc_Mi123()+-0.000264*osc_Mi383()+-0.000203*osc_Mi124()+-0.000177*osc_Mi384()+-0.000245*osc_Mi125()+-0.00024*osc_Mi385()+-0.000267*osc_Mi126()+-0.000187*osc_Mi386()+-0.000495*osc_Mi127()+-0.0003*osc_Mi387()+0.005971*osc_Mi128()+0.00618*osc_Mi388()+0.000285*osc_Mi129()+0.000422*osc_Mi389()+0.000278*osc_Mi130()+0.000345*osc_Mi390()+-8.2e-05*osc_Mi131()+0.000266*osc_Mi391()+7.5e-05*osc_Mi132()+0.000137*osc_Mi392()+-6e-06*osc_Mi133()+0.000295*osc_Mi393()+-0.000237*osc_Mi134()+5e-06*osc_Mi394()+-0.000296*osc_Mi135()+0.000209*osc_Mi395()+-0.000169*osc_Mi136()+-9.3e-05*osc_Mi396()+-0.000113*osc_Mi137()+0.000135*osc_Mi397()+-0.00021*osc_Mi138()+3.1e-05*osc_Mi398()+-0.000193*osc_Mi139()+8.1e-05*osc_Mi399()+-0.000169*osc_Mi140()+6.1e-05*osc_Mi400()+-0.000176*osc_Mi141()+-0.0001*osc_Mi401()+4.3e-05*osc_Mi142()+-0.000288*osc_Mi402()+9.1e-05*osc_Mi143()+-0.000121*osc_Mi403()+8e-05*osc_Mi144()+-0.000162*osc_Mi404()+0.000116*osc_Mi145()+0.001451*osc_Mi405()+-0.000422*osc_Mi146()+0.000478*osc_Mi406()+-0.000136*osc_Mi147()+0.000382*osc_Mi407()+0.00017*osc_Mi148()+0.000265*osc_Mi408()+-0.000101*osc_Mi149()+0.000254*osc_Mi409()+-0.000277*osc_Mi150()+8.2e-05*osc_Mi410()+0.000135*osc_Mi151()+0.000113*osc_Mi411()+-0.000132*osc_Mi152()+0.000144*osc_Mi412()+-0.00029*osc_Mi153()+0.000116*osc_Mi413()+-8.4e-05*osc_Mi154()+0.000215*osc_Mi414()+-1.6e-05*osc_Mi155()+0.000201*osc_Mi415()+-0.000154*osc_Mi156()+0.000177*osc_Mi416()+-2e-05*osc_Mi157()+0.000236*osc_Mi417()+8.6e-05*osc_Mi158()+-0.000145*osc_Mi418()+-8.6e-05*osc_Mi159()+-0.000442*osc_Mi419()+-0.000261*osc_Mi160()+0.000391*osc_Mi420()+3.1e-05*osc_Mi161()+0.000259*osc_Mi421()+-5.9e-05*osc_Mi162()+0.000237*osc_Mi422()+6.6e-05*osc_Mi163()+0.000213*osc_Mi423()+8.9e-05*osc_Mi164()+0.000121*osc_Mi424()+-0.000124*osc_Mi165()+9.2e-05*osc_Mi425()+-0.000151*osc_Mi166()+-3.5e-05*osc_Mi426()+0.000144*osc_Mi167()+0.000172*osc_Mi427()+-6.3e-05*osc_Mi168()+0.00019*osc_Mi428()+0.000205*osc_Mi169()+9.4e-05*osc_Mi429()+4e-06*osc_Mi170()+0.000136*osc_Mi430()+0.000111*osc_Mi171()+0.000121*osc_Mi431()+0.000175*osc_Mi172()+-0.00018*osc_Mi432()+7.9e-05*osc_Mi173()+-0.000337*osc_Mi433()+-0.000583*osc_Mi174()+-5.1e-05*osc_Mi434()+5.6e-05*osc_Mi175()+0.000182*osc_Mi435()+-0.000105*osc_Mi176()+8.8e-05*osc_Mi436()+-2e-06*osc_Mi177()+0.000162*osc_Mi437()+-0.000108*osc_Mi178()+9.7e-05*osc_Mi438()+8.2e-05*osc_Mi179()+0.000173*osc_Mi439()+-0.00012*osc_Mi180()+8.2e-05*osc_Mi440()+-5.7e-05*osc_Mi181()+0.000146*osc_Mi441()+1.6e-05*osc_Mi182()+0.000137*osc_Mi442()+7.8e-05*osc_Mi183()+0.000156*osc_Mi443()+-0.00017*osc_Mi184()+2e-06*osc_Mi444()+0.000233*osc_Mi185()+-5.4e-05*osc_Mi445()+1.2e-05*osc_Mi186()+0.000158*osc_Mi446()+6.3e-05*osc_Mi187()+0.00016*osc_Mi447()+-0.000163*osc_Mi188()+0.000114*osc_Mi448()+-3.5e-05*osc_Mi189()+0.000127*osc_Mi449()+-0.000162*osc_Mi190()+3.4e-05*osc_Mi450()+-8.7e-05*osc_Mi191()+0.000136*osc_Mi451()+-1.9e-05*osc_Mi192()+0.000139*osc_Mi452()+-9.1e-05*osc_Mi193()+0.0001*osc_Mi453()+-9.5e-05*osc_Mi194()+0.000114*osc_Mi454()+-0.000173*osc_Mi195()+-6e-06*osc_Mi455()+-0.00015*osc_Mi196()+-3.1e-05*osc_Mi456()+-0.000128*osc_Mi197()+3.1e-05*osc_Mi457()+-0.000116*osc_Mi198()+-7.8e-05*osc_Mi458()+-5.9e-05*osc_Mi199()+0.000118*osc_Mi459()+-0.000129*osc_Mi200()+7.6e-05*osc_Mi460()+-0.000118*osc_Mi201()+-8.3e-05*osc_Mi461()+0.000144*osc_Mi202()+3.4e-05*osc_Mi462()+0.000132*osc_Mi203()+-9.7e-05*osc_Mi463()+-0.000236*osc_Mi204()+-2.6e-05*osc_Mi464()+0.000142*osc_Mi205()+4.6e-05*osc_Mi465()+0.000208*osc_Mi206()+0.0003*osc_Mi466()+-0.000133*osc_Mi207()+-8.1e-05*osc_Mi467()+-8.8e-05*osc_Mi208()+-0.000177*osc_Mi468()+-0.00025*osc_Mi209()+-0.001236*osc_Mi469()+-1.9e-05*osc_Mi210()+-0.000131*osc_Mi470()+-0.000826*osc_Mi211()+0.002556*osc_Mi471()+1.7e-05*osc_Mi212()+0.000172*osc_Mi472()+-7.1e-05*osc_Mi213()+0.000152*osc_Mi473()+4.6e-05*osc_Mi214()+0.000158*osc_Mi474()+-8.4e-05*osc_Mi215()+0.000113*osc_Mi475()+-7.5e-05*osc_Mi216()+0.00012*osc_Mi476()+-0.000101*osc_Mi217()+0.000116*osc_Mi477()+-0.000144*osc_Mi218()+0.000179*osc_Mi478()+-0.001979*osc_Mi219()+0.002153*osc_Mi479()+7.2e-05*osc_Mi220()+-0.000134*osc_Mi480()+0.000156*osc_Mi221()+-6e-05*osc_Mi481()+6.3e-05*osc_Mi222()+-0.000117*osc_Mi482()+0.00013*osc_Mi223()+-0.000151*osc_Mi483()+0.000153*osc_Mi224()+4e-06*osc_Mi484()+5.2e-05*osc_Mi225()+-0.000121*osc_Mi485()+0.000128*osc_Mi226()+-5.9e-05*osc_Mi486()+9.7e-05*osc_Mi227()+-0.000211*osc_Mi487()+0.002191*osc_Mi228()+-0.000659*osc_Mi488()+-0.000145*osc_Mi229()+-9.9e-05*osc_Mi489()+-0.000214*osc_Mi230()+-7.1e-05*osc_Mi490()+0.002459*osc_Mi231()+0.000471*osc_Mi491()+0.000151*osc_Mi232()+5.5e-05*osc_Mi492()+-5.7e-05*osc_Mi233()+-0.000128*osc_Mi493()+-3.7e-05*osc_Mi234()+0.000155*osc_Mi494()+0.000135*osc_Mi235()+7.2e-05*osc_Mi495()+0.000144*osc_Mi236()+1.7e-05*osc_Mi496()+-0.00131*osc_Mi237()+-0.001027*osc_Mi497()+-0.000134*osc_Mi238()+1.1e-05*osc_Mi498()+-0.000147*osc_Mi239()+-1.2e-05*osc_Mi499()+-0.000131*osc_Mi240()+-0.000141*osc_Mi500()+-7.7e-05*osc_Mi241()+-0.000124*osc_Mi501()+-9.9e-05*osc_Mi242()+0.000224*osc_Mi502()+0.001282*osc_Mi243()+0.003309*osc_Mi503()+0.0001*osc_Mi244()+-0.000282*osc_Mi504()+-9.2e-05*osc_Mi245()+-0.000159*osc_Mi505()+-3.7e-05*osc_Mi246()+-0.000159*osc_Mi506()+-0.000104*osc_Mi247()+-9.1e-05*osc_Mi507()+0.000147*osc_Mi248()+-3.6e-05*osc_Mi508()+2.6e-05*osc_Mi249()+-0.000135*osc_Mi509()+8e-06*osc_Mi250()+-0.000132*osc_Mi510()+-0.000477*osc_Mi251()+0.002358*osc_Mi511()+-0.000124*osc_Mi252()+0.000119*osc_Mi512()+-1.4e-05*osc_Mi253()+-0.000131*osc_Mi513()+-0.000483*osc_Mi254()+0.000494*osc_Mi514()+-0.0001*osc_Mi255()+0.000115*osc_Mi515()+0.000107*osc_Mi256()+8.2e-05*osc_Mi516()+0.000331*osc_Mi257()+-0.000161*osc_Mi517()+0.000109*osc_Mi258()+8.5e-05*osc_Mi518()+0.000137*osc_Mi259()+4.7e-05*osc_Mi519()+2.8e-05*osc_Mi260()+0.000145*osc_Mi520();

			// Scale the sample down a bit for output
			s *= this->get_mult();

			io.out(0) = s;
			io.out(1) = s;
		}
	}

};

}

#endif
