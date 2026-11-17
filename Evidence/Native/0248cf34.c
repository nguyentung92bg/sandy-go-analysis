/* IL2CPP: Dino.BusSand.TweenRunner$$Update
void Dino_BusSand_TweenRunner__Update (Dino_BusSand_TweenRunner_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.TweenRunner$$Update
   void Dino_BusSand_TweenRunner__Update (Dino_BusSand_TweenRunner_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_TweenRunner__Update_238cf34(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  puVar2 = PTR_DAT_04cbbe20;
  if ((bRam0000000004f9c8b1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbec0);
    FUN_02132f7c(PTR_DAT_04cbbeb8);
    FUN_02132f7c(PTR_DAT_04cbbec8);
    FUN_02132f7c(PTR_DAT_04cbbea0);
    FUN_02132f7c(PTR_DAT_04cbbea8);
    FUN_02132f7c(PTR_DAT_04cbbe20);
    bRam0000000004f9c8b1 = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  lVar6 = *(long *)(lVar5 + 0xb8);
  if (*(long *)(lVar6 + 0x10) == 0) goto LAB_0248d2b8;
  if (0 < *(int *)(*(long *)(lVar6 + 0x10) + 0x18)) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
    }
    if (*(long *)(lVar6 + 8) == 0) goto LAB_0248d2b8;
    System_Collections_Generic_List_object___AddRange_3a81e04
              (*(long *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)PTR_DAT_04cbbec0);
    lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    if (lVar5 == 0) goto LAB_0248d2b8;
    iVar7 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (0 < iVar7) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar5 + 0x10),0,iVar7,0);
    }
  }
  fVar8 = (float)UnityEngine_Time__get_deltaTime_43cd5e8(0);
  fVar9 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  lVar5 = *(long *)puVar2;
  fVar10 = fVar9;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    fVar10 = (float)thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = PTR_DAT_04cbbec8;
  puVar3 = PTR_DAT_04cbbea8;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    iVar7 = *(int *)(lVar5 + 0x18);
    if (-1 < iVar7 + -1) {
      do {
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac(fVar10);
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 == 0) goto LAB_0248d2b8;
        iVar7 = iVar7 + -1;
        lVar5 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar5,iVar7,*(undefined8 *)puVar3);
        if (lVar5 == 0) goto LAB_0248d2b8;
        if (*(char *)(lVar5 + 0x10) == '\0') {
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar5 = *(long *)puVar2;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar5 == 0) goto LAB_0248d2b8;
          fVar10 = (float)System_Collections_Generic_List_object___RemoveAt_3a833a0
                                    (lVar5,iVar7,*(undefined8 *)puVar4);
        }
        else {
          fVar10 = fVar8;
          if (*(char *)(lVar5 + 0x30) != '\0') {
            fVar10 = fVar9;
          }
          if (0.0 < *(float *)(lVar5 + 0x20)) {
            fVar10 = *(float *)(lVar5 + 0x20) - fVar10;
            *(float *)(lVar5 + 0x20) = fVar10;
            if (0.0 < fVar10) goto LAB_0248d230;
            fVar10 = -fVar10;
            *(undefined4 *)(lVar5 + 0x20) = 0;
          }
          fVar12 = *(float *)(lVar5 + 0x24);
          fVar13 = fVar10 + *(float *)(lVar5 + 0x28);
          fVar11 = fVar13 / fVar12;
          *(float *)(lVar5 + 0x28) = fVar13;
          fVar14 = 1.0;
          if (fVar11 <= 1.0) {
            fVar14 = fVar11;
          }
          fVar10 = 0.0;
          if (0.0 <= fVar11) {
            fVar10 = fVar14;
          }
          if ((*(char *)(lVar5 + 0x4c) != '\0') && ((*(byte *)(lVar5 + 0x50) & 1) != 0)) {
            fVar10 = 1.0 - fVar10;
          }
          lVar6 = *(long *)(lVar5 + 0x38);
          if (lVar6 != 0) {
            Dino_BusSand_Easing__Evaluate_238b7d0(*(undefined4 *)(lVar5 + 0x2c));
            fVar10 = (float)(**(code **)(lVar6 + 0x18))
                                      (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
            fVar12 = *(float *)(lVar5 + 0x24);
            fVar13 = *(float *)(lVar5 + 0x28);
          }
          if (fVar12 <= fVar13) {
            uVar1 = *(uint *)(lVar5 + 0x48);
            if (((int)uVar1 < 0) || (*(uint *)(lVar5 + 0x48) = uVar1 - 1, 1 < uVar1)) {
              fVar10 = fVar13 - fVar12;
              *(int *)(lVar5 + 0x50) = *(int *)(lVar5 + 0x50) + 1;
              *(float *)(lVar5 + 0x28) = fVar10;
            }
            else {
              lVar6 = *(long *)puVar2;
              *(undefined2 *)(lVar5 + 0x10) = 0x100;
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac(fVar10);
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
              if (lVar6 == 0) goto LAB_0248d2b8;
              fVar10 = (float)System_Collections_Generic_List_object___RemoveAt_3a833a0
                                        (lVar6,iVar7,*(undefined8 *)puVar4);
              lVar5 = *(long *)(lVar5 + 0x40);
              if (lVar5 != 0) {
                fVar10 = (float)(**(code **)(lVar5 + 0x18))
                                          (*(undefined8 *)(lVar5 + 0x40),
                                           *(undefined8 *)(lVar5 + 0x28));
              }
            }
          }
        }
LAB_0248d230:
      } while (0 < iVar7);
    }
    return;
  }
LAB_0248d2b8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

