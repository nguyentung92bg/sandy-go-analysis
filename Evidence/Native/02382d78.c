/* IL2CPP: Dino.BusSand.App.UI.UiKit$$LevelText
System_String_o* Dino_BusSand_App_UI_UiKit__LevelText (int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$LevelText
   System_String_o* Dino_BusSand_App_UI_UiKit__LevelText (int32_t level, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_UiKit__LevelText_2282d78(undefined4 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04cad330;
                    /* try { // try from 02382d84 to 02482d8b has its CatchHandler @ 02382f00 */
                    /* try { // try from 02382d94 to 02482db7 has its CatchHandler @ 02382f08 */
  uStack_24 = param_1;
  if ((bRam0000000004f9c189 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9c20);
                    /* try { // try from 02382db8 to 02482eeb has its CatchHandler @ 023822a4 */
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb4e38);
    FUN_02132f7c(PTR_DAT_04cb4e40);
    bRam0000000004f9c189 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_App_UI_UiKit__get_English_228be14();
  puVar1 = PTR_DAT_04cb4e40;
  if ((uVar2 & 1) == 0) {
    plVar4 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    uStack_28 = param_1;
    lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_28);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar3 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar3,0);
    }
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar4[4] = lVar5;
    thunk_FUN_02134474(plVar4 + 4,lVar5);
    if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cb4e38,plVar4,0);
  }
  else {
    uVar3 = System_Int32__ToString_482d750(&uStack_24,0);
    System_String__Concat_46c82e0(*(undefined8 *)puVar1,uVar3,0);
  }
  return;
}

