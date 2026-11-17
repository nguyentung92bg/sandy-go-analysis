/* IL2CPP: Dino.BusSand.App.UI.TapRipple$$OnDisable
void Dino_BusSand_App_UI_TapRipple__OnDisable (Dino_BusSand_App_UI_TapRipple_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.TapRipple$$OnDisable
   void Dino_BusSand_App_UI_TapRipple__OnDisable (Dino_BusSand_App_UI_TapRipple_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_TapRipple__OnDisable_228a9f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar3 = PTR_DAT_04cb5148;
  puVar2 = PTR_DAT_04cb2870;
  puVar1 = PTR_DAT_04cb2860;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0238a9d8 with catch @ 0238a9f8
                        */
                    /* try { // try from 0238aa10 to 0248aa27 has its CatchHandler @ 0238aa7c */
  if ((bRam0000000004f9c174 & 1) == 0) {
                    /* try { // try from 0238aa28 to 0248aa6b has its CatchHandler @ 0238a840 */
    FUN_02132f7c(PTR_DAT_04cb2860);
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04cb5148);
    bRam0000000004f9c174 = 1;
  }
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 0238aa6c to 0248aa7b has its CatchHandler @ 0238aa7c */
  System_Action_Vector2____ctor_35f2774(uVar5,param_1,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0238aa10 with catch @ 0238aa7c
                       catch() { ... } // from try @ 0238aa6c with catch @ 0238aa7c */
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0238aa80 to 0248aa83 has its CatchHandler @ 0238aa8c */
  puVar1 = PTR_DAT_04cb2870;
                    /* try { // try from 0238aa84 to 0248aa8f has its CatchHandler @ 0238a840 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0238aa80 with catch @ 0238aa8c
                        */
  if ((bRam0000000004f9c91a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2860,0);
    FUN_02132f7c(PTR_DAT_04cb2870);
    bRam0000000004f9c91a = 1;
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_04cb2860;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
  do {
    lVar7 = System_Delegate__Remove_4872510(lVar6,uVar5,0);
    if (lVar7 == 0) {
      lVar8 = 0;
    }
    else {
      uVar9 = *(undefined8 *)puVar2;
      lVar8 = thunk_FUN_0216e7a0(lVar7,uVar9);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar7,uVar9);
      }
    }
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar1;
    }
    lVar7 = FUN_0216aff4(*(long *)(lVar7 + 0xb8) + 0x18,lVar8,lVar6);
    bVar4 = lVar7 != lVar6;
    lVar6 = lVar7;
  } while (bVar4);
  return;
}

