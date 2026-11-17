/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$PressItem
bool Dino_BusSand_App_UI_HudPanel__PressItem (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$PressItem
   bool Dino_BusSand_App_UI_HudPanel__PressItem (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t id,
   const MethodInfo* method); */

uint Dino_BusSand_App_UI_HudPanel__PressItem_230d830(long param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9c52a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8128);
    FUN_02132f7c(PTR_DAT_04cb8130);
    FUN_02132f7c(PTR_DAT_04cb8138);
    FUN_02132f7c(PTR_DAT_04cb8140);
    bRam0000000004f9c52a = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  uVar3 = Dino_BusSand_App_UI_HudPanel__CanPressItem_230d664(param_1,param_2);
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cb8140);
    puVar1 = PTR_DAT_04cb8130;
    do {
      uVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_48,*(undefined8 *)puVar1);
      if ((uVar2 & 1) == 0) goto LAB_0240d900;
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    } while (*(int *)(lStack_38 + 0x10) != param_2);
    Dino_BusSand_App_UI_HudPanel__OnItemClick_230d99c(param_1);
LAB_0240d900:
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_48,*(undefined8 *)PTR_DAT_04cb8128);
  }
  return uVar2 & 1;
}

