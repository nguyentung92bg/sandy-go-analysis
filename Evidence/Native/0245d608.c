/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$RefreshHud
void Dino_BusSand_Cheat_CheatManager__RefreshHud (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$RefreshHud
   void Dino_BusSand_Cheat_CheatManager__RefreshHud (const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__RefreshHud_235d608(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar2 = PTR_DAT_04caba50;
  if ((bRam0000000004f9c762 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c762 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar2;
  }
  lVar11 = *(long *)puVar1;
  uVar12 = **(undefined8 **)(lVar9 + 0xb8);
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar11);
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
  lVar9 = 0;
  if ((uVar10 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar2;
    }
    if (**(long **)(lVar9 + 0xb8) == 0) goto LAB_0245d768;
    lVar9 = *(long *)(**(long **)(lVar9 + 0xb8) + 0x48);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
  puVar2 = PTR_DAT_04cb6a88;
  if ((uVar10 & 1) == 0) {
    return;
  }
  if (lVar9 == 0) {
LAB_0245d768:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c527 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1c70,0);
    FUN_02132f7c(PTR_DAT_04cb8128);
    FUN_02132f7c(PTR_DAT_04cb8130);
    FUN_02132f7c(PTR_DAT_04cb8138);
    FUN_02132f7c(PTR_DAT_04cb6a88);
    FUN_02132f7c(PTR_DAT_04cb8140);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c527 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_70 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_UI_HudPanel__get_FooterShown_230b8d8();
  lVar11 = *(long *)puVar1;
  uVar12 = *(undefined8 *)(lVar9 + 0x60);
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar11);
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
  if ((uVar10 & 1) != 0) {
    if ((*(long *)(lVar9 + 0x60) == 0) ||
       (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar9 + 0x60),0),
       lVar11 == 0)) goto LAB_02409bfc;
    uVar6 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar11,0);
    if ((uVar5 & 1) != (uVar6 & 1)) {
      if ((*(long *)(lVar9 + 0x60) == 0) ||
         (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar9 + 0x60),0),
         lVar11 == 0)) goto LAB_02409bfc;
      UnityEngine_GameObject__SetActive_43c1408(lVar11,uVar5 & 1,0);
    }
  }
  uVar12 = *(undefined8 *)(lVar9 + 0xf8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
  if ((uVar10 & 1) != 0) {
    if ((*(long *)(lVar9 + 0xf8) == 0) ||
       (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar9 + 0xf8),0),
       lVar11 == 0)) goto LAB_02409bfc;
    uVar6 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar11,0);
    if ((uVar5 & 1) != (uVar6 & 1)) {
      if ((*(long *)(lVar9 + 0xf8) == 0) ||
         (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar9 + 0xf8),0),
         lVar11 == 0)) goto LAB_02409bfc;
      UnityEngine_GameObject__SetActive_43c1408(lVar11,uVar5 & 1,0);
    }
  }
  puVar4 = PTR_DAT_04cb8130;
  puVar3 = PTR_DAT_04cb8128;
  puVar1 = PTR_DAT_04cb1c70;
  puVar2 = PTR_DAT_04cabaf8;
  if (*(long *)(lVar9 + 0x38) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_98,*(long *)(lVar9 + 0x38),*(undefined8 *)PTR_DAT_04cb8140);
    lStack_70 = lStack_88;
    uStack_78 = puStack_90;
    uStack_80 = uStack_98;
    uStack_98 = 0;
    puStack_90 = &uStack_80;
    while( true ) {
      uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                         (&uStack_80,*(undefined8 *)puVar4);
      lVar11 = lStack_70;
      if ((uVar10 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)puVar3);
        return;
      }
      if (lStack_70 == 0) break;
      uVar7 = Dino_BusSand_App_UI_HudPanel__StateOf_230d45c
                        (uVar10,*(undefined4 *)(lStack_70 + 0x10));
      lVar13 = *(long *)(lVar11 + 0x18);
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = Dino_BusSand_App_Meta_Profile__Count_225b150(uVar8,0);
      uVar12 = Dino_BusSand_App_CheatFlags__Usable_214f578(uVar12,0);
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = Dino_BusSand_App_Meta_BoosterIntro__Level_2202754(uVar8,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      Dino_BusSand_App_UI_KitBoosterButton__Set_2288aac
                (lVar13,uVar7,uVar12,uVar8,*(int *)(lVar11 + 0x10) == *(int *)(lVar9 + 0x48),0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_02409bfc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

