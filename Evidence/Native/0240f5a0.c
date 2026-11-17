/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$<OpenBuyPopup>b__97_0
void Dino_BusSand_App_UI_HudPanel___OpenBuyPopup_b__97_0 (Dino_BusSand_App_UI_HudPanel_o* __this, bool ok, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$<OpenBuyPopup>b__97_0
   void Dino_BusSand_App_UI_HudPanel___OpenBuyPopup_b__97_0 (Dino_BusSand_App_UI_HudPanel_o* __this,
   bool ok, const MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel___OpenBuyPopup_b__97_0_230f5a0(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c53e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb81d8);
    bRam0000000004f9c53e = 1;
  }
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
  if ((uVar9 & 1) == 0) {
    lVar10 = *(long *)(param_1 + 0x40);
  }
  else {
    if ((param_2 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_0240f6c4;
      Dino_BusSand_App_Gameplay_GameplayController__ResetJamClock_229dae8
                (*(long *)(param_1 + 0x40),0);
    }
    lVar10 = *(long *)(param_1 + 0x40);
    if (lVar10 == 0) goto LAB_0240f6c4;
    *(undefined1 *)(lVar10 + 0xa4) = 0;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) {
LAB_0240f6c4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dda8
              (*(long *)(param_1 + 0x40),0,*(undefined8 *)PTR_DAT_04cb81d8,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  puVar1 = PTR_DAT_04cb6a88;
  if ((uVar9 & 1) != 0) {
    return;
  }
  if ((bRam0000000004f9c527 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1c70);
    FUN_02132f7c(PTR_DAT_04cb8128);
    FUN_02132f7c(PTR_DAT_04cb8130);
    FUN_02132f7c(PTR_DAT_04cb8138);
    FUN_02132f7c(PTR_DAT_04cb6a88);
    FUN_02132f7c(PTR_DAT_04cb8140);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c527 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_70 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_UI_HudPanel__get_FooterShown_230b8d8();
  lVar10 = *(long *)puVar2;
  uVar12 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar10);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
  if ((uVar9 & 1) != 0) {
    if ((*(long *)(param_1 + 0x60) == 0) ||
       (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x60),0),
       lVar10 == 0)) goto LAB_02409bfc;
    uVar6 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar10,0);
    if ((uVar5 & 1) != (uVar6 & 1)) {
      if ((*(long *)(param_1 + 0x60) == 0) ||
         (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x60),0),
         lVar10 == 0)) goto LAB_02409bfc;
      UnityEngine_GameObject__SetActive_43c1408(lVar10,uVar5 & 1,0);
    }
  }
  uVar12 = *(undefined8 *)(param_1 + 0xf8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
  if ((uVar9 & 1) != 0) {
    if ((*(long *)(param_1 + 0xf8) == 0) ||
       (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0xf8),0),
       lVar10 == 0)) goto LAB_02409bfc;
    uVar6 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar10,0);
    if ((uVar5 & 1) != (uVar6 & 1)) {
      if ((*(long *)(param_1 + 0xf8) == 0) ||
         (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0xf8),0),
         lVar10 == 0)) goto LAB_02409bfc;
      UnityEngine_GameObject__SetActive_43c1408(lVar10,uVar5 & 1,0);
    }
  }
  puVar4 = PTR_DAT_04cb8130;
  puVar3 = PTR_DAT_04cb8128;
  puVar2 = PTR_DAT_04cb1c70;
  puVar1 = PTR_DAT_04cabaf8;
  if (*(long *)(param_1 + 0x38) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_98,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cb8140);
    lStack_70 = lStack_88;
    uStack_78 = puStack_90;
    uStack_80 = uStack_98;
    uStack_98 = 0;
    puStack_90 = &uStack_80;
    while( true ) {
      uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_80,*(undefined8 *)puVar4);
      lVar10 = lStack_70;
      if ((uVar9 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)puVar3);
        return;
      }
      if (lStack_70 == 0) break;
      uVar7 = Dino_BusSand_App_UI_HudPanel__StateOf_230d45c(uVar9,*(undefined4 *)(lStack_70 + 0x10))
      ;
      lVar11 = *(long *)(lVar10 + 0x18);
      uVar8 = *(undefined4 *)(lVar10 + 0x10);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = Dino_BusSand_App_Meta_Profile__Count_225b150(uVar8,0);
      uVar12 = Dino_BusSand_App_CheatFlags__Usable_214f578(uVar12,0);
      uVar8 = *(undefined4 *)(lVar10 + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = Dino_BusSand_App_Meta_BoosterIntro__Level_2202754(uVar8,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_UI_KitBoosterButton__Set_2288aac
                (lVar11,uVar7,uVar12,uVar8,*(int *)(lVar10 + 0x10) == *(int *)(param_1 + 0x48),0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_02409bfc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

