/* IL2CPP: Dino.BusSand.App.UI.SystemOpenPanel.<CloseAfterDelay>d__8$$MoveNext
bool Dino_BusSand_App_UI_SystemOpenPanel__CloseAfterDelay_d__8__MoveNext (Dino_BusSand_App_UI_SystemOpenPanel__CloseAfterDelay_d__8_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.SystemOpenPanel.<CloseAfterDelay>d__8$$MoveNext
   bool Dino_BusSand_App_UI_SystemOpenPanel__CloseAfterDelay_d__8__MoveNext
   (Dino_BusSand_App_UI_SystemOpenPanel__CloseAfterDelay_d__8_o* __this, const MethodInfo* method);
    */

bool Dino_BusSand_App_UI_SystemOpenPanel__CloseAfterDelay_d__8__MoveNext_21e7834(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
                    /* catch() { ... } // from try @ 022e74a4 with catch @ 022e7834
                       catch() { ... } // from try @ 022e7730 with catch @ 022e7834 */
  if ((bRam0000000004f9bbd9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9bbd9 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar2 = PTR_DAT_04caca88;
    if (lVar6 == 0) goto LAB_022e7950;
    *(undefined1 *)(lVar6 + 0x48) = 1;
    uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e20754,uVar5,0);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar5);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) {
LAB_022e7950:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(lVar6 + 0x2c) == '\0') {
      Dino_BusSand_App_UI_SystemOpenPanel__RestoreCopy_21e7620(lVar6);
      lVar3 = *(long *)(lVar6 + 0x38);
      if (lVar3 == 0) goto LAB_022e7950;
      if (*(char *)(lVar3 + 0x21) != '\0') {
        Dino_BusSand_App_Meta_SystemOpen__MarkGuided_224333c(*(undefined4 *)(lVar3 + 0x10),0);
        lVar3 = *(long *)(lVar6 + 0x38);
        if (lVar3 == 0) goto LAB_022e7950;
      }
      plVar4 = (long *)(lVar3 + 0x28);
      lVar3 = *plVar4;
      *plVar4 = 0;
      thunk_FUN_02134474(plVar4,0);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      }
      Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar6,0);
    }
  }
  return iVar1 == 0;
}

