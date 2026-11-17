/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$LateUpdate
void Dino_BusSand_Cheat_CheatManager__LateUpdate (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$LateUpdate
   void Dino_BusSand_Cheat_CheatManager__LateUpdate (Dino_BusSand_Cheat_CheatManager_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__LateUpdate_2366e9c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  
  lVar6 = *(long *)(param_1 + 0x110);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(char *)(lVar6 + 0x12) == '\0') ||
     (fVar18 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0,0),
     fVar18 < *(float *)(lVar6 + 0x48))) {
    return;
  }
  fVar18 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  *(float *)(lVar6 + 0x48) = fVar18 + _UNK_00e20390;
  puVar3 = PTR_DAT_04caba50;
  if ((bRam0000000004f9c7c0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6928);
    FUN_02132f7c(PTR_DAT_04cad950);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cb6930);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caf560);
    FUN_02132f7c(PTR_DAT_04cbaf58);
    bRam0000000004f9c7c0 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar3;
  }
  uVar13 = **(undefined8 **)(lVar7 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
  lVar7 = 0;
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar3;
    }
    if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_0246ef60;
    lVar7 = *(long *)(**(long **)(lVar7 + 0xb8) + 0x20);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
  if ((uVar8 & 1) == 0) {
    if (lVar7 == 0) {
LAB_0246ef60:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar13 = *(undefined8 *)(lVar7 + 0x38);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar13,0,0);
    if ((uVar8 & 1) == 0) {
      if ((*(long *)(lVar7 + 0x38) == 0) ||
         (lVar7 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                            (*(long *)(lVar7 + 0x38),0,*(undefined8 *)PTR_DAT_04cad950),
         puVar5 = PTR_DAT_04cbaf58, puVar4 = PTR_DAT_04cb6930, puVar2 = PTR_DAT_04cb6928,
         puVar3 = PTR_DAT_04caf560, lVar7 == 0)) goto LAB_0246ef60;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar1) {
        uVar16 = 0;
        do {
          if (uVar1 <= uVar16) {
LAB_0246ef64:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          lVar14 = *(long *)(lVar7 + (long)(int)uVar16 * 8 + 0x20);
          if (lVar14 == 0) goto LAB_0246ef60;
          uVar13 = UnityEngine_Object__get_name_43c71a4(lVar14,0);
          uVar8 = System_String__op_Inequality_46d110c(uVar13,*(undefined8 *)puVar3,0);
          if ((uVar8 & 1) == 0) {
LAB_0246ee64:
            lVar14 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                               (lVar14,0,*(undefined8 *)puVar2);
            if (lVar14 == 0) goto LAB_0246ef60;
            uVar1 = *(uint *)(lVar14 + 0x18);
            if (0 < (int)uVar1) {
              uVar17 = 0;
              do {
                if (uVar1 <= uVar17) goto LAB_0246ef64;
                lVar15 = *(long *)(lVar14 + (long)(int)uVar17 * 8 + 0x20);
                if (lVar15 == 0) goto LAB_0246ef60;
                uVar8 = UnityEngine_Renderer__get_enabled_4373a28(lVar15,0);
                if ((uVar8 & 1) != 0) {
                  UnityEngine_Renderer__set_enabled_4373adc(lVar15,0,0);
                  lVar9 = *(long *)(lVar6 + 0x40);
                  if (lVar9 == 0) goto LAB_0246ef60;
                  lVar10 = *(long *)(lVar9 + 0x10);
                  lVar12 = *(long *)puVar4;
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  if (lVar10 == 0) goto LAB_0246ef60;
                  uVar1 = *(uint *)(lVar9 + 0x18);
                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                    plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar11 = lVar15;
                    thunk_FUN_02134474(plVar11,lVar15);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                              (lVar9,lVar15,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                  }
                }
                uVar1 = *(uint *)(lVar14 + 0x18);
                uVar17 = uVar17 + 1;
              } while ((int)uVar17 < (int)uVar1);
            }
          }
          else {
            uVar13 = UnityEngine_Object__get_name_43c71a4(lVar14,0);
            uVar8 = System_String__op_Inequality_46d110c(uVar13,*(undefined8 *)puVar5,0);
            if ((uVar8 & 1) == 0) goto LAB_0246ee64;
          }
          uVar1 = *(uint *)(lVar7 + 0x18);
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)uVar1);
      }
    }
  }
  return;
}

