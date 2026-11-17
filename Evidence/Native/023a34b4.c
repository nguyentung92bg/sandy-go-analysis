/* IL2CPP: Dino.BusSand.App.UI.UiTweaks$$HasPanel
bool Dino_BusSand_App_UI_UiTweaks__HasPanel (Dino_BusSand_App_UI_UiTweaks_o* __this, System_String_o* panel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiTweaks$$HasPanel
   bool Dino_BusSand_App_UI_UiTweaks__HasPanel (Dino_BusSand_App_UI_UiTweaks_o* __this,
   System_String_o* panel, const MethodInfo* method); */

uint Dino_BusSand_App_UI_UiTweaks__HasPanel_22a34b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9c276 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5b20);
    FUN_02132f7c(PTR_DAT_04cb5b28);
    FUN_02132f7c(PTR_DAT_04cb5b30);
    FUN_02132f7c(PTR_DAT_04cb5b38);
    bRam0000000004f9c276 = 1;
  }
  puVar2 = PTR_DAT_04cb5b28;
  puVar1 = PTR_DAT_04cb5b20;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_48,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_04cb5b38);
  do {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_48,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) break;
  } while ((lStack_38 == 0) ||
          (uVar4 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_38 + 0x10),param_2,0),
          (uVar4 & 1) == 0));
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_48,*(undefined8 *)puVar1);
  return uVar3 & 1;
}

