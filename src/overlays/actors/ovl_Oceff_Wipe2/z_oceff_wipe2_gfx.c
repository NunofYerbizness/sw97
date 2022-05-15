#include "z_oceff_wipe2.h"

static u32 sTexture[] = {
    0x55211122, 0x22223333, 0x34444444, 0x44555566, 0x66666666, 0x66665555, 0x55554446, 0x99864323, 0x54211222,
    0x22223333, 0x44444444, 0x45555566, 0x66666666, 0x66666666, 0x66555458, 0xa9742224, 0x63212222, 0x22233334,
    0x44444445, 0x55555566, 0x66666666, 0x66666666, 0x66665569, 0xb9532225, 0x53222222, 0x22333344, 0x44445555,
    0x55555566, 0x66666666, 0x66666777, 0x77766569, 0xb9432235, 0x52222222, 0x33333444, 0x44445555, 0x55555556,
    0x66666666, 0x66666777, 0x77776668, 0xb9432236, 0x42222333, 0x33344444, 0x44455544, 0x44555556, 0x66666666,
    0x66666777, 0x77776667, 0xa9432346, 0x42223334, 0x44444444, 0x55555444, 0x44455556, 0x66666666, 0x66666777,
    0x77776666, 0x89532356, 0x32333444, 0x44555555, 0x55554444, 0x44445555, 0x66666666, 0x66666677, 0x77776655,
    0x68532366, 0x43334445, 0x55555555, 0x55554444, 0x44444555, 0x66666666, 0x66666667, 0x77776655, 0x56633476,
    0x64444555, 0x66666666, 0x65555444, 0x44444455, 0x56666666, 0x66666666, 0x66666655, 0x45533477, 0x88654556,
    0x67777776, 0x66555444, 0x44444445, 0x56666666, 0x66666666, 0x66666554, 0x44333578, 0x99975566, 0x77788777,
    0x76655444, 0x43334445, 0x55666666, 0x66666666, 0x66665554, 0x43323578, 0x99aa6667, 0x78888887, 0x77665544,
    0x43333444, 0x55666666, 0x66666556, 0x66655554, 0x43323578, 0x89ab8667, 0x88888888, 0x87765544, 0x43333344,
    0x45566676, 0x66666555, 0x55555544, 0x43322478, 0x89ab8667, 0x88899988, 0x88776554, 0x43333334, 0x45566677,
    0x66666555, 0x55555444, 0x33322357, 0x78996667, 0x88999998, 0x88876654, 0x43333333, 0x44556667, 0x76666555,
    0x55544444, 0x33222235, 0x46655567, 0x88899999, 0x88877655, 0x43333333, 0x44556667, 0x76666555, 0x55444443,
    0x33222223, 0x23334567, 0x78899999, 0x98887665, 0x44333333, 0x44578767, 0x77666555, 0x54444443, 0x33222222,
    0x22234456, 0x78889999, 0x99887765, 0x44333333, 0x457bc866, 0x77666655, 0x54444433, 0x33222222, 0x22233456,
    0x77889999, 0x99888766, 0x54433334, 0x69bdda76, 0x77766655, 0x54444333, 0x33222222, 0x22223445, 0x67888999,
    0x99988776, 0x54433458, 0xacdeeb77, 0x77776665, 0x54444333, 0x33222222, 0x22223345, 0x67788999, 0x99988876,
    0x5544579b, 0xcdeefd87, 0x77777665, 0x55444333, 0x33222222, 0x22222344, 0x56778899, 0x99988876, 0x65689abc,
    0xcddded97, 0x77777666, 0x55444433, 0x33322222, 0x22222334, 0x55678889, 0x99998877, 0x89abbccc, 0xcb99cd98,
    0x77777766, 0x65544443, 0x33322222, 0x22222233, 0x45677888, 0x9999888a, 0xcdddcccb, 0x9777beb8, 0x88887776,
    0x65554444, 0x33332222, 0x22222233, 0x44567788, 0x9999989d, 0xffeedb97, 0x6667aed9, 0x88888777, 0x66655544,
    0x44333222, 0x22222223, 0x34566788, 0x8999989c, 0xfffda866, 0x66779eea, 0x88888877, 0x76665554, 0x44433332,
    0x22222223, 0x34456778, 0x8999989b, 0xffd97666, 0x67789eea, 0x99988887, 0x77666555, 0x54444333, 0x32222222,
    0x33455678, 0x8899999a, 0xed976667, 0x7788aeea, 0x99988887, 0x77766665, 0x55544433, 0x33322222, 0x33445677,
    0x8889999a, 0xee977777, 0x78889dec, 0x99988888, 0x77776666, 0x65555444, 0x43332222, 0x33445567, 0x8889999a,
    0xeea88788, 0x88889ced, 0xbaa98887, 0x77776666, 0x66655544, 0x44433333, 0x33345567, 0x7888999a, 0xeeb98888,
    0x88899aef, 0xeeeca877, 0x77776666, 0x66665555, 0x54443333, 0x33344566, 0x78889999, 0xcec98888, 0x89999aef,
    0xffffda87, 0x77666666, 0x66666655, 0x55544433, 0x33444566, 0x77889999, 0xbeea9999, 0x99999aef, 0xfffffd97,
    0x66666666, 0x66666666, 0x65554444, 0x44444556, 0x77888999, 0xaeea9999, 0x999999bf, 0xfffffea6, 0x65555555,
    0x66666666, 0x66555544, 0x44444556, 0x67888999, 0xaeea9999, 0x999999ad, 0xfffffe96, 0x55555555, 0x55556666,
    0x66665555, 0x44445556, 0x67788899, 0xaeeb9999, 0x9999999a, 0xdeeeeb75, 0x44444444, 0x55555566, 0x66666655,
    0x55555556, 0x67788889, 0xadecaaa9, 0x99999988, 0x99aa9654, 0x44444444, 0x44455555, 0x56666666, 0x55555556,
    0x67778889, 0x9cffeeeb, 0xa9999888, 0x77766544, 0x43333333, 0x44444555, 0x55666666, 0x66555566, 0x66778888,
    0x9aefffff, 0xda998888, 0x77655443, 0x33333333, 0x33344455, 0x55666666, 0x66665566, 0x66777888, 0x8aefffff,
    0xfda88888, 0x76655443, 0x33222222, 0x33334444, 0x55566666, 0x66666666, 0x66677888, 0x89cfffff, 0xffb98887,
    0x76654433, 0x32222222, 0x22333444, 0x55566666, 0x66666666, 0x66677788, 0x88aeffff, 0xffc98887, 0x76654433,
    0x22222222, 0x22233344, 0x45566666, 0x66666556, 0x66667778, 0x889befff, 0xfda88877, 0x76654433, 0x22222222,
    0x22223344, 0x45556666, 0x66665555, 0x56666777, 0x8889acee, 0xda888877, 0x76554433, 0x22222222, 0x22223334,
    0x45555666, 0x66655555, 0x55566677, 0x78888999, 0x98888777, 0x66554432, 0x22221111, 0x22222334, 0x44555666,
    0x65555555, 0x55556667, 0x77888888, 0x88887777, 0x66554332, 0x22211111, 0x12222333, 0x44555555, 0x55555444,
    0x45555666, 0x77788888, 0x88887777, 0x66544332, 0x22211111, 0x11222333, 0x44555555, 0x55544444, 0x44455566,
    0x67778888, 0x88887776, 0x65544332, 0x22211111, 0x11222233, 0x44455555, 0x55444444, 0x44444556, 0x66777888,
    0x88887776, 0x65544322, 0x22211111, 0x11222233, 0x34455555, 0x54444333, 0x33444455, 0x66677788, 0x88887766,
    0x55443322, 0x22111111, 0x11122223, 0x34455555, 0x44443333, 0x33344445, 0x56677778, 0x88877766, 0x55443322,
    0x22111111, 0x11122223, 0x34445555, 0x44433333, 0x33334445, 0x55667777, 0x88777766, 0x54433222, 0x21111111,
    0x11112222, 0x33444444, 0x44333332, 0x23333444, 0x55566777, 0x77777665, 0x54433222, 0x21111111, 0x11112222,
    0x33344444, 0x43333222, 0x22333344, 0x45566677, 0x77777665, 0x54332222, 0x11111111, 0x11112222, 0x23444444,
    0x33332222, 0x22233334, 0x44556667, 0x77776665, 0x44332221, 0x11111111, 0x11111222, 0x23564333, 0x33332222,
    0x22233334, 0x44555666, 0x77776655, 0x44332221, 0x11111111, 0x11111222, 0x46763333, 0x33322222, 0x22233334,
    0x44455666, 0x67766655, 0x44332222, 0x21111111, 0x11111122, 0x67743333, 0x33222222, 0x22233334, 0x44455566,
    0x66666655, 0x44332222, 0x22211111, 0x11112235, 0x77632222, 0x22222222, 0x22333334, 0x44455566, 0x66666655,
    0x44333222, 0x22222222, 0x11223466, 0x77532222, 0x22222222, 0x23333344, 0x44455566, 0x66666655, 0x54433332,
    0x22222222, 0x22346677, 0x76422222, 0x22222223, 0x33333444, 0x44455566, 0x66666665, 0x55444333, 0x33322222,
    0x24567777, 0x66322222, 0x22222233, 0x33334444, 0x44455556, 0x66666665, 0x55544444, 0x43333323, 0x46777766,
    0x65211222, 0x22222333, 0x33444444, 0x44555556, 0x66666666, 0x55555544, 0x44443334, 0x78876544,
};

static u32 tex1[] = {
    0x64446975, 0x568a8666, 0x66667777, 0x77777777, 0x76666666, 0x66666555, 0x55797444, 0x68644468, 0x44469755,
    0x58a86667, 0x77777777, 0x77777777, 0x76666666, 0x66666555, 0x57975446, 0x86444686, 0x44697555, 0x8a877777,
    0x77777777, 0x77777777, 0x76666666, 0x66666655, 0x79755568, 0x64446864, 0x46875558, 0xa8777777, 0x77777777,
    0x77777777, 0x76666666, 0x66666668, 0xa7555797, 0x44468644, 0x6865557a, 0x86777777, 0x77777777, 0x77777777,
    0x76666666, 0x6666668a, 0x85557975, 0x45686444, 0x864557a8, 0x66777777, 0x77777777, 0x77777777, 0x76666666,
    0x666668a8, 0x66689755, 0x57974446, 0x64457976, 0x67777777, 0x77777777, 0x77777777, 0x76666666, 0x66668a86,
    0x668a8655, 0x79755578, 0x44479756, 0x66777777, 0x77777777, 0x77777777, 0x66666666, 0x6668a866, 0x68a86668,
    0xa8555797, 0x44797556, 0x66777777, 0x77777777, 0x77777777, 0x66666555, 0x568a8666, 0x8b97668a, 0x86657975,
    0x46975556, 0x66677777, 0x77777777, 0x77777776, 0x66665555, 0x68a86669, 0xb97779b9, 0x76689754, 0x69655555,
    0x66677777, 0x77777777, 0x77777776, 0x66655555, 0x7a86669b, 0x97779b97, 0x778a8555, 0x86444555, 0x66667777,
    0x77667777, 0x77777766, 0x66555557, 0xa86669b9, 0x788aca87, 0x79b86557, 0x64444555, 0x66666666, 0x66667777,
    0x77777766, 0x65555579, 0x86669b98, 0x88aca888, 0x9b966579, 0x44444555, 0x56666666, 0x66667777, 0x77777666,
    0x55555797, 0x6669b988, 0x8aca888a, 0xc9766797, 0x44444555, 0x56666666, 0x66667777, 0x77777666, 0x55557975,
    0x568b9888, 0xadb888ac, 0xa7768974, 0x44444555, 0x55666666, 0x66677777, 0x77776665, 0x55579755, 0x68b9788a,
    0xdb888bca, 0x8778a754, 0x44444555, 0x55566666, 0x66677777, 0x77766665, 0x55797556, 0x8b9788ad, 0xb888bda8,
    0x778a7544, 0x44444555, 0x55555666, 0x66677777, 0x77766655, 0x57975558, 0xa9778adb, 0x888bda88, 0x79a85544,
    0x44444455, 0x55555666, 0x66677777, 0x77766655, 0x7975557a, 0x8778ada8, 0x88bdb888, 0x9b855444, 0x44444455,
    0x55555666, 0x66777777, 0x77766667, 0x975557a8, 0x778acb88, 0x8bda8889, 0xb8655444, 0x44444455, 0x55555666,
    0x66777777, 0x77766689, 0x75557a86, 0x77aca888, 0xbdb888ab, 0x96555444, 0x44444555, 0x55555666, 0x67777777,
    0x777768a8, 0x55579866, 0x79ca888b, 0xdb888ab9, 0x65554444, 0x44444555, 0x55556666, 0x67777777, 0x77779a86,
    0x55797667, 0x9ca888bd, 0xb888ab96, 0x65544444, 0x44445555, 0x55566667, 0x77778888, 0x8779b966, 0x68a86669,
    0xba888bdb, 0x888ac976, 0x55544444, 0x44445555, 0x55666667, 0x77788888, 0x88ab9766, 0x8a86668b, 0x9888bdb8,
    0x88ac9766, 0x55444444, 0x44555555, 0x66666677, 0x77888888, 0x8aca7779, 0xa86668b9, 0x888bdb88, 0x8ac97665,
    0x55444444, 0x44555556, 0x66666777, 0x78888888, 0xaca8879b, 0x96668b97, 0x88adb888, 0xaca77665, 0x54444444,
    0x55555666, 0x66677777, 0x8888888b, 0xda888ac9, 0x7779b978, 0x8adb888a, 0xca776655, 0x54444444, 0x55566666,
    0x67777777, 0x888888bd, 0xb888aca7, 0x779b9788, 0xada888ac, 0xa7766555, 0x54444455, 0x55666667, 0x77777778,
    0x88888bdb, 0x888aca88, 0x8aca888a, 0xcb888aca, 0x87766555, 0x44444555, 0x66666777, 0x77777778, 0x8888adb8,
    0x88bda888, 0xaca888ad, 0xa888bda8, 0x77666555, 0x54455555, 0x66667777, 0x77777777, 0x788aca88, 0x8bdb888a,
    0xca888adb, 0x888bda87, 0x77665555, 0x55555566, 0x66677777, 0x77777777, 0x78aca888, 0xbdb888bd, 0xa888adb8,
    0x88bda887, 0x77665555, 0x55555666, 0x77777777, 0x77777777, 0x79ba888a, 0xdb888bdb, 0x888bdb88, 0x8bda8887,
    0x76665555, 0x55556666, 0x77777776, 0x66666667, 0x9b9778ac, 0xa888bdb8, 0x88bdb888, 0xbdb88887, 0x76665555,
    0x55666666, 0x77766666, 0x66666668, 0xa9777aca, 0x888bdb88, 0x8bdb888b, 0xdb888877, 0x76666555, 0x66666677,
    0x76666666, 0x6666668a, 0x86679ba8, 0x88bdb888, 0xbdb888bd, 0xb8888877, 0x76666666, 0x66667777, 0x66666665,
    0x555557a8, 0x6669b978, 0x8adb888b, 0xdb888bdb, 0x88888777, 0x76666666, 0x66677777, 0x66666555, 0x55557975,
    0x568a9778, 0xaca888bd, 0xb888bdb8, 0x88888777, 0x76666666, 0x67777776, 0x66655555, 0x55579755, 0x58a8677a,
    0xca888ada, 0x888bdb88, 0x88888777, 0x76666667, 0x77777766, 0x66555555, 0x55797555, 0x7986679c, 0xa888aca8,
    0x88ada888, 0x88887777, 0x76666777, 0x77777766, 0x65555544, 0x46864457, 0x976669b9, 0x888aca88, 0x8aca8888,
    0x88877777, 0x76667777, 0x77777666, 0x55555444, 0x68644479, 0x75568b97, 0x78aca888, 0xaca88888, 0x88877777,
    0x76667777, 0x77777666, 0x55554446, 0x86444687, 0x5558a977, 0x8aca888a, 0xca888888, 0x88777777, 0x66667777,
    0x77776666, 0x55554468, 0x64446865, 0x557a8777, 0xaca888ac, 0xa8888888, 0x87777766, 0x66666777, 0x77776666,
    0x55544686, 0x44468644, 0x57986679, 0xba888aca, 0x88888888, 0x77777666, 0x66666677, 0x77766666, 0x55546864,
    0x44686444, 0x7976669b, 0x9888aca8, 0x88888887, 0x77776666, 0x66666667, 0x77766666, 0x55568644, 0x46864446,
    0x975568b9, 0x778aca88, 0x88888877, 0x77666666, 0x66666666, 0x66666666, 0x55786444, 0x68644468, 0x75558a97,
    0x77aca888, 0x88888777, 0x76666666, 0x66666666, 0x66666665, 0x57964446, 0x86444686, 0x4557a867, 0x79ca8888,
    0x88887777, 0x66666555, 0x55556666, 0x66666665, 0x79744468, 0x64446864, 0x45798667, 0x9b988888, 0x88877776,
    0x66665555, 0x55555666, 0x66666655, 0x97444686, 0x44468644, 0x47975668, 0xb9778888, 0x88877776, 0x66655555,
    0x55555566, 0x66666657, 0x74446864, 0x44686444, 0x6975568a, 0x97778888, 0x88777766, 0x66555555, 0x55555556,
    0x66666679, 0x44468644, 0x46864446, 0x864557a8, 0x67777888, 0x77777666, 0x65555555, 0x45555555, 0x66666797,
    0x44686444, 0x68644468, 0x64457986, 0x67777777, 0x77776666, 0x55555544, 0x44555555, 0x56668975, 0x46864446,
    0x86444686, 0x44479756, 0x66777777, 0x77766666, 0x55555544, 0x44455555, 0x55579754, 0x68644468, 0x64446864,
    0x44697556, 0x66777777, 0x77766665, 0x55555544, 0x44445555, 0x55797544, 0x86444686, 0x44468644, 0x46875556,
    0x66777777, 0x77666665, 0x55555544, 0x44444555, 0x57975446, 0x64446864, 0x44686444, 0x68655556, 0x66777777,
    0x77666665, 0x55555544, 0x44444555, 0x79754468, 0x44468644, 0x46864446, 0x87555556, 0x66777777, 0x76666665,
    0x55555554, 0x44444457, 0x97544686, 0x44686444, 0x68644469, 0x75555566, 0x66777777, 0x76666665, 0x55555554,
    0x44444479, 0x74446864, 0x46864446, 0x86445797, 0x55555666, 0x67777777, 0x76666665, 0x55555555, 0x55444686,
    0x44468644, 0x68644469, 0x75557975, 0x55666666, 0x67777777, 0x76666666, 0x65555555, 0x55557864, 0x44686444,
    0x86444687, 0x55579866, 0x66666666, 0x77777777, 0x76666666, 0x66555555, 0x55579644, 0x46864446,
};

static Vtx sFrustumVtx[] = {
    VTX(88, 121, 0, 1638, 2048, 0xFF, 0xFF, 0xFF, 0x00),   VTX(243, 176, 1000, 1434, 0, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(143, 46, 0, 1229, 2048, 0xFF, 0xFF, 0xFF, 0x00),   VTX(300, 0, 1000, 1024, 0, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(0, 150, 0, 2048, 2048, 0xFF, 0xFF, 0xFF, 0x00),    VTX(93, 285, 1000, 1843, 0, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(-88, 121, 0, 2458, 2048, 0xFF, 0xFF, 0xFF, 0x00),  VTX(-93, 285, 1000, 2253, 0, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(-143, 46, 0, 2867, 2048, 0xFF, 0xFF, 0xFF, 0x00),  VTX(-243, 176, 1000, 2662, 0, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(-143, -46, 0, 3277, 2048, 0xFF, 0xFF, 0xFF, 0x00), VTX(-300, 0, 1000, 3072, 0, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(-88, -121, 0, 3686, 2048, 0xFF, 0xFF, 0xFF, 0x00), VTX(-243, -176, 1000, 3482, 0, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(0, -150, 0, 4096, 2048, 0xFF, 0xFF, 0xFF, 0x00),   VTX(-93, -285, 1000, 3891, 0, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(93, -285, 1000, 4301, 0, 0xFF, 0xFF, 0xFF, 0xFF),  VTX(143, -46, 0, 819, 2048, 0xFF, 0xFF, 0xFF, 0x00),
    VTX(243, -176, 1000, 614, 0, 0xFF, 0xFF, 0xFF, 0xFF),  VTX(88, -121, 0, 410, 2048, 0xFF, 0xFF, 0xFF, 0x00),
    VTX(93, -285, 1000, 205, 0, 0xFF, 0xFF, 0xFF, 0xFF),   VTX(0, -150, 0, 0, 2048, 0xFF, 0xFF, 0xFF, 0x00),
};

static Gfx sTextureDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(sTexture, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6,
                            14, 14),
    gsDPLoadMultiBlock_4b(tex1, 0x100, 1, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP,
                          6, 6, 1, 14),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, 0, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, SHADE, 0),
    gsDPSetRenderMode(AA_EN | IM_RD | CLR_ON_CVG | CVG_DST_WRAP | ZMODE_OPA | FORCE_BL |
                          GBL_c1(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1),
                      G_RM_AA_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPEndDisplayList(),
};

static Gfx sFrustumDL[] = {
    gsSPVertex(&sFrustumVtx, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 0, 0, 5, 1, 0, 0),
    gsSP2Triangles(6, 7, 4, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 9, 6, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 8, 0, 11, 9, 8, 0),
    gsSP2Triangles(12, 13, 10, 0, 13, 11, 10, 0),
    gsSP2Triangles(14, 15, 12, 0, 15, 13, 12, 0),
    gsSP2Triangles(16, 15, 14, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 2, 3, 17, 0),
    gsSP2Triangles(3, 18, 17, 0, 19, 20, 21, 0),
    gsSPEndDisplayList(),
};
