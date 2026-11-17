/* IL2CPP: Dino.BusSand.App.UI.UiTweakApplier$$Adopt
void Dino_BusSand_App_UI_UiTweakApplier__Adopt (Dino_BusSand_App_UI_UiTweakApplier_o* __this, UnityEngine_RectTransform_o* rt, Dino_BusSand_App_UI_UiTweaks_Entry_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiTweakApplier$$Adopt
   void Dino_BusSand_App_UI_UiTweakApplier__Adopt (Dino_BusSand_App_UI_UiTweakApplier_o* __this,
   UnityEngine_RectTransform_o* rt, Dino_BusSand_App_UI_UiTweaks_Entry_o* e, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_UiTweakApplier__Adopt_22a4c9c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((bRam0000000004f9c27f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5b50);
    FUN_02132f7c(PTR_DAT_04cb5b58);
    FUN_02132f7c(PTR_DAT_04cb5b60);
    FUN_02132f7c(PTR_DAT_04cb5b68);
    bRam0000000004f9c27f = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  *(undefined4 *)(param_4 + 0x30) = 0xffffffff;
  uVar4 = Dino_BusSand_App_UI_UiTweaks__get_I_22a31b0();
  Dino_BusSand_App_UI_UiTweakApplier__Rebind_22a3eb8(param_4,uVar4);
  puVar2 = PTR_DAT_04cb5b58;
  puVar1 = PTR_DAT_04cb5b50;
  if (*(long *)(param_4 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_78,*(long *)(param_4 + 0x28),*(undefined8 *)PTR_DAT_04cb5b68);
  lStack_50 = lStack_68;
  uStack_58 = puStack_70;
  uStack_60 = uStack_78;
  uStack_78 = 0;
  puStack_70 = &uStack_60;
  while( true ) {
    do {
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_60,*(undefined8 *)puVar2);
      lVar3 = lStack_50;
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_60,*(undefined8 *)puVar1);
        return;
      }
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    } while (*(long *)(lStack_50 + 0x10) != param_6);
    *(long *)(lStack_50 + 0x18) = param_5;
    thunk_FUN_02134474((long *)(lStack_50 + 0x18),param_5);
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar6 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(param_5,0);
    *(undefined4 *)(lVar3 + 0x24) = uVar6;
    *(undefined4 *)(lVar3 + 0x28) = param_2;
    uVar6 = UnityEngine_RectTransform__get_sizeDelta_43cf9ac(param_5,0);
    *(undefined4 *)(lVar3 + 0x2c) = uVar6;
    *(undefined4 *)(lVar3 + 0x30) = param_2;
    uVar6 = UnityEngine_Transform__get_localScale_43d1b0c(param_5,0);
    *(undefined4 *)(lVar3 + 0x44) = uVar6;
    *(undefined4 *)(lVar3 + 0x48) = param_2;
    *(undefined4 *)(lVar3 + 0x4c) = param_3;
    if (param_6 == 0) break;
    *(undefined8 *)(lVar3 + 0x34) = *(undefined8 *)(param_6 + 0x20);
    *(undefined8 *)(lVar3 + 0x3c) = *(undefined8 *)(param_6 + 0x28);
    param_2 = *(undefined4 *)(param_6 + 0x34);
    uVar6 = Dino_BusSand_App_UI_UiTweakApplier__Safe_22a4c04(*(undefined4 *)(param_6 + 0x30));
    *(undefined4 *)(lVar3 + 0x50) = uVar6;
    *(undefined4 *)(lVar3 + 0x54) = param_2;
    *(undefined1 *)(lVar3 + 0x20) = 1;
    *(undefined1 *)(lVar3 + 0x21) = *(undefined1 *)(param_6 + 0x3c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

