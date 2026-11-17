/* IL2CPP: Dino.BusSand.App.UI.KitValues$$.ctor
void Dino_BusSand_App_UI_KitValues___ctor (Dino_BusSand_App_UI_KitValues_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitValues$$.ctor
   void Dino_BusSand_App_UI_KitValues___ctor (Dino_BusSand_App_UI_KitValues_o* __this, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_KitValues___ctor_21845dc(long param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined4 uVar4;
  
  cVar1 = cRam0000000004f9b65e;
  auVar2._8_4_ = 0x3f000000;
  auVar2._0_8_ = 0x3f0000003f000000;
  auVar2._12_4_ = 0x3f000000;
                    /* catch() { ... } // from try @ 0228456c with catch @ 022845e8 */
                    /* catch() { ... } // from try @ 02284544 with catch @ 022845ec
                       catch() { ... } // from try @ 022845bc with catch @ 022845ec */
  *(long *)(param_1 + 0x18) = auVar2._8_8_;
  *(undefined8 *)(param_1 + 0x10) = 0x3f0000003f000000;
  *(undefined8 *)(param_1 + 0x20) = 0x3f0000003f000000;
  if (cVar1 == '\0') {
                    /* try { // try from 02284604 to 0238464f has its CatchHandler @ 02284604
                       catch() { ... } // from try @ 02284604 with catch @ 02284604
                       catch() { ... } // from try @ 022846a4 with catch @ 02284604 */
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65e = '\x01';
  }
  auVar2 = NEON_fmov(0x3f800000,4);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0xc);
  uVar4 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x14);
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(long *)(param_1 + 0x60) = auVar2._8_8_;
  *(long *)(param_1 + 0x58) = auVar2._0_8_;
                    /* try { // try from 02284650 to 023846a3 has its CatchHandler @ 022846a4 */
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(long *)(param_1 + 0xa8) = auVar2._8_8_;
  *(long *)(param_1 + 0xa0) = auVar2._0_8_;
  return param_1;
}

