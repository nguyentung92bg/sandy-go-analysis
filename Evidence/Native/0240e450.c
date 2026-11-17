/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$ItemRect
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_HudPanel__ItemRect (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$ItemRect
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_HudPanel__ItemRect
   (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t id, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_HudPanel__ItemRect_230e450(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9c53b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8128);
    FUN_02132f7c(PTR_DAT_04cb8130);
    FUN_02132f7c(PTR_DAT_04cb8138);
    FUN_02132f7c(PTR_DAT_04cb8140);
    bRam0000000004f9c53b = 1;
  }
  puVar2 = PTR_DAT_04cb8130;
  puVar1 = PTR_DAT_04cb8128;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_48,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cb8140);
  do {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_48,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      goto LAB_0240e518;
    }
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  } while (*(int *)(lStack_38 + 0x10) != param_2);
  uVar4 = *(undefined8 *)(lStack_38 + 0x20);
LAB_0240e518:
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_48,*(undefined8 *)puVar1);
  return uVar4;
}

