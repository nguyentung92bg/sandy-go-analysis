/* IL2CPP: Dino.BusSand.Cheat.CheatUiHider$$LateTick
void Dino_BusSand_Cheat_CheatUiHider__LateTick (Dino_BusSand_Cheat_CheatUiHider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatUiHider$$LateTick
   void Dino_BusSand_Cheat_CheatUiHider__LateTick (Dino_BusSand_Cheat_CheatUiHider_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_CheatUiHider__LateTick_236ebc8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  
                    /* try { // try from 0246ebcc to 0256ebcf has its CatchHandler @ 0246ebec */
                    /* try { // try from 0246ebd4 to 0256ebd7 has its CatchHandler @ 0246ebdc */
                    /* try { // try from 0246ebd8 to 0256ec1f has its CatchHandler @ 0246e794 */
                    /* catch() { ... } // from try @ 0246ebd4 with catch @ 0246ebdc */
                    /* catch() { ... } // from try @ 0246eb1c with catch @ 0246ebe0 */
                    /* catch() { ... } // from try @ 0246eab0 with catch @ 0246ebe4
                       catch() { ... } // from try @ 0246eae4 with catch @ 0246ebe4 */
                    /* catch() { ... } // from try @ 0246eb00 with catch @ 0246ebe8 */
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (fVar17 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0),
     fVar17 < *(float *)(param_1 + 0x48))) {
                    /* catch() { ... } // from try @ 0246ebcc with catch @ 0246ebec */
                    /* catch() { ... } // from try @ 0246eb6c with catch @ 0246ebf0 */
    return;
  }
                    /* catch() { ... } // from try @ 0246eac8 with catch @ 0246ebf4 */
                    /* catch() { ... } // from try @ 0246ebc4 with catch @ 0246ebf8 */
  fVar17 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
                    /* catch() { ... } // from try @ 0246ea8c with catch @ 0246ebfc */
                    /* catch() { ... } // from try @ 0246ea94 with catch @ 0246ec00 */
                    /* catch() { ... } // from try @ 0246ea78 with catch @ 0246ec04 */
  *(float *)(param_1 + 0x48) = fVar17 + _UNK_00e20390;
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
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar3;
  }
  uVar12 = **(undefined8 **)(lVar6 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
  lVar6 = 0;
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar3;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_0246ef60;
    lVar6 = *(long *)(**(long **)(lVar6 + 0xb8) + 0x20);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  if ((uVar7 & 1) == 0) {
    if (lVar6 == 0) {
LAB_0246ef60:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar12 = *(undefined8 *)(lVar6 + 0x38);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
    if ((uVar7 & 1) == 0) {
      if ((*(long *)(lVar6 + 0x38) == 0) ||
         (lVar6 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                            (*(long *)(lVar6 + 0x38),0,*(undefined8 *)PTR_DAT_04cad950),
         puVar5 = PTR_DAT_04cbaf58, puVar4 = PTR_DAT_04cb6930, puVar2 = PTR_DAT_04cb6928,
         puVar3 = PTR_DAT_04caf560, lVar6 == 0)) goto LAB_0246ef60;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        uVar15 = 0;
        do {
          if (uVar1 <= uVar15) {
LAB_0246ef64:
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          lVar13 = *(long *)(lVar6 + (long)(int)uVar15 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_0246ef60;
          uVar12 = UnityEngine_Object__get_name_43c71a4(lVar13,0);
          uVar7 = System_String__op_Inequality_46d110c(uVar12,*(undefined8 *)puVar3,0);
          if ((uVar7 & 1) == 0) {
LAB_0246ee64:
            lVar13 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                               (lVar13,0,*(undefined8 *)puVar2);
            if (lVar13 == 0) goto LAB_0246ef60;
            uVar1 = *(uint *)(lVar13 + 0x18);
            if (0 < (int)uVar1) {
              uVar16 = 0;
              do {
                if (uVar1 <= uVar16) goto LAB_0246ef64;
                lVar14 = *(long *)(lVar13 + (long)(int)uVar16 * 8 + 0x20);
                if (lVar14 == 0) goto LAB_0246ef60;
                uVar7 = UnityEngine_Renderer__get_enabled_4373a28(lVar14,0);
                if ((uVar7 & 1) != 0) {
                  UnityEngine_Renderer__set_enabled_4373adc(lVar14,0,0);
                  lVar8 = *(long *)(param_1 + 0x40);
                  if (lVar8 == 0) goto LAB_0246ef60;
                  lVar9 = *(long *)(lVar8 + 0x10);
                  lVar11 = *(long *)puVar4;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (lVar9 == 0) goto LAB_0246ef60;
                  uVar1 = *(uint *)(lVar8 + 0x18);
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                    plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar10 = lVar14;
                    thunk_FUN_02134474(plVar10,lVar14);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                              (lVar8,lVar14,
                               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                  }
                }
                uVar1 = *(uint *)(lVar13 + 0x18);
                uVar16 = uVar16 + 1;
              } while ((int)uVar16 < (int)uVar1);
            }
          }
          else {
            uVar12 = UnityEngine_Object__get_name_43c71a4(lVar13,0);
            uVar7 = System_String__op_Inequality_46d110c(uVar12,*(undefined8 *)puVar5,0);
            if ((uVar7 & 1) == 0) goto LAB_0246ee64;
          }
          uVar1 = *(uint *)(lVar6 + 0x18);
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar1);
      }
    }
  }
  return;
}

