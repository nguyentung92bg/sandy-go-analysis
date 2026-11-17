/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$get_FirstBoosterLevel
int32_t Dino_BusSand_App_UI_HudPanel__get_FirstBoosterLevel (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$get_FirstBoosterLevel
   int32_t Dino_BusSand_App_UI_HudPanel__get_FirstBoosterLevel (const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_HudPanel__get_FirstBoosterLevel_230b854(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
                    /* catch() { ... } // from try @ 0240b834 with catch @ 0240b854 */
  puVar2 = PTR_DAT_04cab380;
                    /* try { // try from 0240b858 to 0250b85f has its CatchHandler @ 0240b868 */
                    /* try { // try from 0240b860 to 0250b86b has its CatchHandler @ 0240b5ec */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0240b858 with catch @ 0240b868
                        */
  if ((bRam0000000004f9c518 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1c70);
    FUN_02132f7c(PTR_DAT_04cab380);
    bRam0000000004f9c518 = 1;
  }
  if (*(char *)(*(long *)(*(long *)puVar2 + 0xb8) + 1) != '\0') {
    return 1;
  }
  if (*(int *)(*(long *)PTR_DAT_04cb1c70 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cb1c70;
  if ((bRam0000000004f9bcb3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1c70);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bcb3 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = Dino_BusSand_App_Meta_BoosterIntro__get_Order_22025b0();
  puVar1 = PTR_DAT_04caa200;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((int)*(ulong *)(lVar5 + 0x18) < 1) {
    uVar4 = 0x7fffffff;
  }
  else {
    uVar7 = 0;
    uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    uVar4 = 0x7fffffff;
    do {
      if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar3 = *(undefined4 *)(lVar5 + 0x20 + uVar7 * 4);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = Dino_BusSand_App_Meta_BoosterIntro__Level_2202754(uVar3);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar4 = System_Math__Min_4831118(uVar4,uVar3,0);
      uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  return uVar4;
}

