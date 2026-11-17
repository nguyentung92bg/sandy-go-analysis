/* IL2CPP: Dino.BusSand.App.Meta.InterstitialSettings$$.ctor
void Dino_BusSand_App_Meta_InterstitialSettings___ctor (Dino_BusSand_App_Meta_InterstitialSettings_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.InterstitialSettings$$.ctor
   void Dino_BusSand_App_Meta_InterstitialSettings___ctor
   (Dino_BusSand_App_Meta_InterstitialSettings_o* __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Meta_InterstitialSettings___ctor_22689b8(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  puVar3 = PTR_DAT_04caec70;
  if ((bRam0000000004f9c099 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec70);
    bRam0000000004f9c099 = 1;
  }
  uVar2 = _UNK_00e6a870;
  uVar1 = _UNK_00e69840;
  uVar4 = *(undefined8 *)puVar3;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* try { // try from 02368a1c to 02468a3b has its CatchHandler @ 02368aa0 */
  *(undefined4 *)(param_1 + 0x30) = 2;
  lVar5 = FUN_02133068(uVar4,2);
  if (lVar5 != 0) {
    if ((*(int *)(lVar5 + 0x18) != 0) &&
       (*(undefined4 *)(lVar5 + 0x20) = 0x78, *(int *)(lVar5 + 0x18) != 1)) {
                    /* try { // try from 02368a48 to 02468a67 has its CatchHandler @ 02368aa4 */
      *(undefined4 *)(lVar5 + 0x24) = 0x3c;
      *(long *)(param_1 + 0x38) = lVar5;
      thunk_FUN_02134474();
      *(undefined2 *)(param_1 + 0x41) = 0x101;
      *(undefined1 *)(param_1 + 0x43) = 1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_1;
      return auVar6;
                    /* try { // try from 02368a78 to 02468a83 has its CatchHandler @ 02368a9c */
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

