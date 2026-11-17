/* IL2CPP: Dino.BusSand.App.TweenRunner$$Update
void Dino_BusSand_App_TweenRunner__Update (Dino_BusSand_App_TweenRunner_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.TweenRunner$$Update
   void Dino_BusSand_App_TweenRunner__Update (Dino_BusSand_App_TweenRunner_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_TweenRunner__Update_2162690(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  puVar3 = PTR_DAT_04cac1f0;
  if ((bRam0000000004f9b837 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac2c0);
    FUN_02132f7c(PTR_DAT_04cac2b8);
    FUN_02132f7c(PTR_DAT_04cac2c8);
    FUN_02132f7c(PTR_DAT_04cac278);
    FUN_02132f7c(PTR_DAT_04cac280);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1f0);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    bRam0000000004f9b837 = 1;
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar3;
  }
  lVar8 = *(long *)(lVar6 + 0xb8);
  if (*(long *)(lVar8 + 0x10) == 0) goto LAB_02262ab0;
  if (0 < *(int *)(*(long *)(lVar8 + 0x10) + 0x18)) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
    }
    if (*(long *)(lVar8 + 8) == 0) goto LAB_02262ab0;
    System_Collections_Generic_List_object___AddRange_3a81e04
              (*(long *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)PTR_DAT_04cac2c0);
    lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    if (lVar6 == 0) goto LAB_02262ab0;
    iVar9 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar9) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar6 + 0x10),0,iVar9,0);
    }
  }
  puVar2 = PTR_DAT_04cac1e8;
  fVar11 = (float)UnityEngine_Time__get_deltaTime_43cd5e8(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar12 = (float)Dino_BusSand_App_Tween__get_UiDelta_2160d50();
  lVar6 = *(long *)puVar3;
  fVar13 = fVar12;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    fVar13 = (float)thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar3;
  }
  puVar5 = PTR_DAT_04cac2c8;
  puVar4 = PTR_DAT_04cac280;
  puVar2 = PTR_DAT_04ca9ae8;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar6 != 0) {
    iVar9 = *(int *)(lVar6 + 0x18);
    if (-1 < iVar9 + -1) {
      do {
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac(fVar13);
          lVar6 = *(long *)puVar3;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar6 == 0) goto LAB_02262ab0;
        iVar9 = iVar9 + -1;
        lVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar6,iVar9,*(undefined8 *)puVar4);
        if (lVar6 == 0) goto LAB_02262ab0;
        if (*(char *)(lVar6 + 0x10) == '\0') {
LAB_022628e8:
          lVar6 = *(long *)puVar3;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar3;
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar6 == 0) goto LAB_02262ab0;
          fVar13 = (float)System_Collections_Generic_List_object___RemoveAt_3a833a0
                                    (lVar6,iVar9,*(undefined8 *)puVar5);
        }
        else {
          plVar10 = *(long **)(lVar6 + 0x18);
          if (plVar10 != (long *)0x0) {
            lVar8 = *(long *)puVar2;
            if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar10 + 0x130)) &&
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) ==
                lVar8)) {
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar7 = UnityEngine_Object__op_Equality_43c6f30(plVar10,0,0);
              if ((uVar7 & 1) != 0) {
                if (*(char *)(lVar6 + 0x10) != '\0') {
                  *(undefined1 *)(lVar6 + 0x10) = 0;
                }
                goto LAB_022628e8;
              }
            }
          }
          fVar13 = fVar11;
          if (*(char *)(lVar6 + 0x30) != '\0') {
            fVar13 = fVar12;
          }
          if (0.0 < *(float *)(lVar6 + 0x20)) {
            fVar13 = *(float *)(lVar6 + 0x20) - fVar13;
            *(float *)(lVar6 + 0x20) = fVar13;
            if (0.0 < fVar13) goto LAB_02262a24;
            fVar13 = -fVar13;
            *(undefined4 *)(lVar6 + 0x20) = 0;
          }
          fVar15 = *(float *)(lVar6 + 0x24);
          fVar16 = fVar13 + *(float *)(lVar6 + 0x28);
          fVar14 = fVar16 / fVar15;
          *(float *)(lVar6 + 0x28) = fVar16;
          fVar17 = 1.0;
          if (fVar14 <= 1.0) {
            fVar17 = fVar14;
          }
          fVar13 = 0.0;
          if (0.0 <= fVar14) {
            fVar13 = fVar17;
          }
          if ((*(char *)(lVar6 + 0x4c) != '\0') && ((*(byte *)(lVar6 + 0x50) & 1) != 0)) {
            fVar13 = 1.0 - fVar13;
          }
          lVar8 = *(long *)(lVar6 + 0x38);
          if (lVar8 != 0) {
            Dino_BusSand_App_Easing__Evaluate_21609e0(*(undefined4 *)(lVar6 + 0x2c));
            fVar13 = (float)(**(code **)(lVar8 + 0x18))
                                      (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
            fVar15 = *(float *)(lVar6 + 0x24);
            fVar16 = *(float *)(lVar6 + 0x28);
          }
          if (fVar15 <= fVar16) {
            uVar1 = *(uint *)(lVar6 + 0x48);
            if (((int)uVar1 < 0) || (*(uint *)(lVar6 + 0x48) = uVar1 - 1, 1 < uVar1)) {
              fVar13 = fVar16 - fVar15;
              *(int *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) + 1;
              *(float *)(lVar6 + 0x28) = fVar13;
            }
            else {
              lVar8 = *(long *)puVar3;
              *(undefined2 *)(lVar6 + 0x10) = 0x100;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_0218fdac(fVar13);
                lVar8 = *(long *)puVar3;
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
              if (lVar8 == 0) goto LAB_02262ab0;
              fVar13 = (float)System_Collections_Generic_List_object___RemoveAt_3a833a0
                                        (lVar8,iVar9,*(undefined8 *)puVar5);
              lVar6 = *(long *)(lVar6 + 0x40);
              if (lVar6 != 0) {
                fVar13 = (float)(**(code **)(lVar6 + 0x18))
                                          (*(undefined8 *)(lVar6 + 0x40),
                                           *(undefined8 *)(lVar6 + 0x28));
              }
            }
          }
        }
LAB_02262a24:
      } while (0 < iVar9);
    }
    return;
  }
LAB_02262ab0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

