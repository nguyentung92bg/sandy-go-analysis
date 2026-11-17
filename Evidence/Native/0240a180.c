/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$ResetForLevel
void Dino_BusSand_App_UI_HudPanel__ResetForLevel (Dino_BusSand_App_UI_HudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$ResetForLevel
   void Dino_BusSand_App_UI_HudPanel__ResetForLevel (Dino_BusSand_App_UI_HudPanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__ResetForLevel_230a180(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  Dino_BusSand_App_UI_HudPanel__ShowItemMask_230a1b4(param_1,0);
  Dino_BusSand_App_UI_HudPanel__CloseDropdown_230a37c();
  Dino_BusSand_App_UI_HudPanel__ApplyTier_23094e8(param_1);
  Dino_BusSand_App_UI_HudPanel__RefreshItems_230991c(param_1);
  if ((bRam0000000004f9c50f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8128);
    FUN_02132f7c(PTR_DAT_04cb8130);
    FUN_02132f7c(PTR_DAT_04cb8138);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb8140);
    FUN_02132f7c(PTR_DAT_04cb18b8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c50f = 1;
  }
  puVar10 = PTR_DAT_04cb18b8;
  puVar8 = PTR_DAT_04cad4c0;
  uVar14 = *(undefined8 *)(param_1 + 0x68);
  uStack_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  lStack_a0 = 0;
  if (cRam0000000004f9b65e == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65e = '\x01';
  }
  puVar9 = PTR_DAT_04cad568;
  puVar7 = PTR_DAT_04caa208;
  lVar13 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
  uStack_c8 = 0;
  puStack_c0 = (undefined8 *)0x0;
  System_Nullable_Vector3____ctor_2bd0e4c
            (*(undefined4 *)(lVar13 + 0xc),*(undefined4 *)(lVar13 + 0x10),
             *(undefined4 *)(lVar13 + 0x14),&uStack_c8,*(undefined8 *)puVar10);
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = _UNK_00e20754;
  uVar2 = _UNK_00e2032c;
  Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
            (_UNK_00e20754,_UNK_00e20094,_UNK_00e20324,_UNK_00e2032c,uVar14,uStack_c8,puStack_c0,0);
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar13 = *(long *)puVar9;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *(long *)puVar9;
  }
  if (**(long **)(lVar13 + 0xb8) != 0) {
    Dino_BusSand_GameAudio__NewLevel_2382ee8(**(long **)(lVar13 + 0xb8),0);
  }
  puVar11 = PTR_DAT_04cb8130;
  puVar9 = PTR_DAT_04cb8128;
  if (*(long *)(param_1 + 0x38) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_c8,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cb8140);
    fVar6 = _UNK_00e20af8;
    uVar5 = _UNK_00e2098c;
    fVar4 = _UNK_00e207dc;
    uVar1 = _UNK_00e200b4;
    iVar15 = 0;
    lStack_a0 = lStack_b8;
    puStack_a8 = puStack_c0;
    uStack_b0 = uStack_c8;
    puStack_c0 = &uStack_b0;
    uStack_c8 = 0;
    while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_b0,*(undefined8 *)puVar11), (uVar12 & 1) != 0) {
      if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar14 = *(undefined8 *)(lStack_a0 + 0x20);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(puVar7);
        cRam0000000004f9b65e = '\x01';
      }
      lVar13 = *(long *)(*(long *)puVar7 + 0xb8);
      uStack_d8 = 0;
      uStack_d0 = 0;
      System_Nullable_Vector3____ctor_2bd0e4c
                (*(undefined4 *)(lVar13 + 0xc),*(undefined4 *)(lVar13 + 0x10),
                 *(undefined4 *)(lVar13 + 0x14),&uStack_d8,*(undefined8 *)puVar10);
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                ((float)iVar15 * fVar6 + fVar4,uVar5,uVar1,uVar2,uVar14,uStack_d8,uStack_d0,0);
      iVar15 = iVar15 + 1;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_b0,*(undefined8 *)puVar9);
    if (*(long *)(param_1 + 0xa0) != 0) {
      uVar14 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0xa0),0);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      lVar13 = *(long *)(*(long *)puVar7 + 0xb8);
      uStack_c8 = 0;
      puStack_c0 = (undefined8 *)0x0;
      System_Nullable_Vector3____ctor_2bd0e4c
                (*(undefined4 *)(lVar13 + 0xc),*(undefined4 *)(lVar13 + 0x10),
                 *(undefined4 *)(lVar13 + 0x14),&uStack_c8,*(undefined8 *)puVar10);
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                (uVar3,uVar5,uVar1,uVar2,uVar14,uStack_c8,puStack_c0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

