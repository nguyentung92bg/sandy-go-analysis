/* IL2CPP: Dino.BusSand.App.UI.HomePuffs$$Quad
void Dino_BusSand_App_UI_HomePuffs__Quad (Dino_BusSand_App_UI_HomePuffs_o* __this, UnityEngine_Vector3_o at, float size, float spin, UnityEngine_Vector3_o right, UnityEngine_Vector3_o up, UnityEngine_Color_o c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomePuffs$$Quad
   void Dino_BusSand_App_UI_HomePuffs__Quad (Dino_BusSand_App_UI_HomePuffs_o* __this,
   UnityEngine_Vector3_o at, float size, float spin, UnityEngine_Vector3_o right,
   UnityEngine_Vector3_o up, UnityEngine_Color_o c, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomePuffs__Quad_22e67c0
               (float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
               float param_6,float param_7,float param_8,long param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack_88;
  float fStack_84;
  
  if ((bRam0000000004f9c429 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cb7350);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04caa178);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    bRam0000000004f9c429 = 1;
  }
  sincosf(param_5,&fStack_84,&fStack_88);
  puVar4 = PTR_DAT_04caa170;
  lVar7 = *(long *)(param_9 + 0x48);
  if (lVar7 != 0) {
    uVar2 = *(uint *)(lVar7 + 0x18);
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *(long *)PTR_DAT_04caa170;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 != 0) {
      fVar13 = fStack_88 * param_4 * 0.5;
      fVar11 = fStack_84 * param_4 * 0.5;
      fVar17 = param_6 * fVar13 + fStack0000000000000000 * fVar11;
      fVar19 = param_7 * fVar13 + fStack0000000000000004 * fVar11;
      fVar20 = param_8 * fVar13 + in_stack_00000008 * fVar11;
      fVar15 = fStack0000000000000000 * fVar13 - param_6 * fVar11;
      fVar14 = in_stack_00000008 * fVar13 - param_8 * fVar11;
      fVar16 = fStack0000000000000004 * fVar13 - param_7 * fVar11;
      fVar13 = param_1 - fVar17;
      fVar18 = param_2 - fVar19;
      fVar11 = param_3 - fVar20;
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar2 * 0xc;
        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
        *(float *)(lVar8 + 0x20) = fVar13 - fVar15;
        *(float *)(lVar8 + 0x24) = fVar18 - fVar16;
        *(float *)(lVar8 + 0x28) = fVar11 - fVar14;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                  (lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      lVar7 = *(long *)(param_9 + 0x48);
      if (lVar7 != 0) {
        lVar8 = *(long *)(lVar7 + 0x10);
        lVar9 = *(long *)puVar4;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar8 != 0) {
          param_1 = param_1 + fVar17;
          uVar3 = *(uint *)(lVar7 + 0x18);
          param_2 = param_2 + fVar19;
          param_3 = param_3 + fVar20;
          if (uVar3 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar3 * 0xc;
            *(uint *)(lVar7 + 0x18) = uVar3 + 1;
            *(float *)(lVar8 + 0x20) = param_1 - fVar15;
            *(float *)(lVar8 + 0x24) = param_2 - fVar16;
            *(float *)(lVar8 + 0x28) = param_3 - fVar14;
          }
          else {
            System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                      (lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          lVar7 = *(long *)(param_9 + 0x48);
          if (lVar7 != 0) {
            lVar8 = *(long *)(lVar7 + 0x10);
            lVar9 = *(long *)puVar4;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar3 = *(uint *)(lVar7 + 0x18);
              if (uVar3 < *(uint *)(lVar8 + 0x18)) {
                lVar8 = lVar8 + (long)(int)uVar3 * 0xc;
                *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                *(float *)(lVar8 + 0x20) = fVar15 + fVar13;
                *(float *)(lVar8 + 0x24) = fVar16 + fVar18;
                *(float *)(lVar8 + 0x28) = fVar14 + fVar11;
              }
              else {
                System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                          (lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              lVar7 = *(long *)(param_9 + 0x48);
              if (lVar7 != 0) {
                lVar8 = *(long *)(lVar7 + 0x10);
                lVar9 = *(long *)puVar4;
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (lVar8 != 0) {
                  uVar3 = *(uint *)(lVar7 + 0x18);
                  if (uVar3 < *(uint *)(lVar8 + 0x18)) {
                    lVar8 = lVar8 + (long)(int)uVar3 * 0xc;
                    *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                    *(float *)(lVar8 + 0x20) = fVar15 + param_1;
                    *(float *)(lVar8 + 0x24) = fVar16 + param_2;
                    *(float *)(lVar8 + 0x28) = fVar14 + param_3;
                  }
                  else {
                    System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                              (lVar7,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  puVar4 = PTR_DAT_04caa178;
                  lVar7 = *(long *)(param_9 + 0x50);
                  if (lVar7 != 0) {
                    lVar8 = *(long *)(lVar7 + 0x10);
                    lVar9 = *(long *)PTR_DAT_04caa178;
                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar3 = *(uint *)(lVar7 + 0x18);
                      if (uVar3 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                        *(undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20) = 0;
                      }
                      else {
                        System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                                  (0,0,lVar7,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                  );
                      }
                      lVar7 = *(long *)(param_9 + 0x50);
                      if (lVar7 != 0) {
                        lVar8 = *(long *)(lVar7 + 0x10);
                        lVar9 = *(long *)puVar4;
                        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                        uVar12 = _UNK_00e698b8;
                        if (lVar8 != 0) {
                          uVar3 = *(uint *)(lVar7 + 0x18);
                          if (uVar3 < *(uint *)(lVar8 + 0x18)) {
                            *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                            *(undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20) = uVar12;
                          }
                          else {
                            System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                                      (0x3f800000,0,lVar7,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar7 = *(long *)(param_9 + 0x50);
                          if (lVar7 != 0) {
                            lVar8 = *(long *)(lVar7 + 0x10);
                            lVar9 = *(long *)puVar4;
                            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                            uVar12 = _UNK_00e698c8;
                            if (lVar8 != 0) {
                              uVar3 = *(uint *)(lVar7 + 0x18);
                              if (uVar3 < *(uint *)(lVar8 + 0x18)) {
                                *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                                *(undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20) = uVar12;
                              }
                              else {
                                System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                                          (0,0x3f800000,lVar7,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar7 = *(long *)(param_9 + 0x50);
                              if (lVar7 != 0) {
                                lVar8 = *(long *)(lVar7 + 0x10);
                                lVar9 = *(long *)puVar4;
                                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                if (lVar8 != 0) {
                                  uVar3 = *(uint *)(lVar7 + 0x18);
                                  if (uVar3 < *(uint *)(lVar8 + 0x18)) {
                                    uVar12 = NEON_fmov(0x3f800000,4);
                                    *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                                    *(undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20) = uVar12;
                                  }
                                  else {
                                    System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                                              (0x3f800000,0x3f800000,lVar7,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                                  }
                                  puVar5 = PTR_DAT_04cb7350;
                                  puVar4 = PTR_DAT_04caa160;
                                  uVar6 = FUN_023e4c88(uStack0000000000000010,uStack0000000000000014
                                                       ,uStack0000000000000018,
                                                       uStack000000000000001c,0);
                                  iVar10 = 4;
                                  do {
                                    lVar7 = *(long *)(param_9 + 0x58);
                                    if (lVar7 == 0) goto LAB_023e6f38;
                                    lVar8 = *(long *)(lVar7 + 0x10);
                                    lVar9 = *(long *)puVar5;
                                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                    if (lVar8 == 0) goto LAB_023e6f38;
                                    uVar3 = *(uint *)(lVar7 + 0x18);
                                    if (uVar3 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                                      *(undefined4 *)(lVar8 + (long)(int)uVar3 * 4 + 0x20) = uVar6;
                                    }
                                    else {
                                      System_Collections_Generic_List_Color32___AddWithResize_3a04d30
                                                (lVar7,uVar6,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                                );
                                    }
                                    iVar10 = iVar10 + -1;
                                  } while (iVar10 != 0);
                                  lVar7 = *(long *)(param_9 + 0x60);
                                  if (lVar7 != 0) {
                                    lVar8 = *(long *)(lVar7 + 0x10);
                                    lVar9 = *(long *)puVar4;
                                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                    if (lVar8 != 0) {
                                      uVar3 = *(uint *)(lVar7 + 0x18);
                                      if (uVar3 < *(uint *)(lVar8 + 0x18)) {
                                        *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                                        *(uint *)(lVar8 + (long)(int)uVar3 * 4 + 0x20) = uVar2;
                                      }
                                      else {
                                        System_Collections_Generic_List_int___AddWithResize_3a2c06c
                                                  (lVar7,uVar2,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                        lVar7 = *(long *)(param_9 + 0x60);
                                        if (lVar7 == 0) goto LAB_023e6f38;
                                      }
                                      lVar8 = *(long *)(lVar7 + 0x10);
                                      lVar9 = *(long *)puVar4;
                                      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                      if (lVar8 != 0) {
                                        uVar3 = *(uint *)(lVar7 + 0x18);
                                        iVar10 = uVar2 + 2;
                                        if (uVar3 < *(uint *)(lVar8 + 0x18)) {
                                          *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                                          *(int *)(lVar8 + (long)(int)uVar3 * 4 + 0x20) = iVar10;
                                        }
                                        else {
                                          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                                                    (lVar7,iVar10,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                      0x70));
                                          lVar7 = *(long *)(param_9 + 0x60);
                                          if (lVar7 == 0) goto LAB_023e6f38;
                                        }
                                        lVar8 = *(long *)(lVar7 + 0x10);
                                        lVar9 = *(long *)puVar4;
                                        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                        if (lVar8 != 0) {
                                          uVar3 = *(uint *)(lVar7 + 0x18);
                                          iVar1 = uVar2 + 1;
                                          if (uVar3 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                                            *(int *)(lVar8 + (long)(int)uVar3 * 4 + 0x20) = iVar1;
                                          }
                                          else {
                                            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                                                      (lVar7,iVar1,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                        0x70));
                                            lVar7 = *(long *)(param_9 + 0x60);
                                            if (lVar7 == 0) goto LAB_023e6f38;
                                          }
                                          lVar8 = *(long *)(lVar7 + 0x10);
                                          lVar9 = *(long *)puVar4;
                                          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                          if (lVar8 != 0) {
                                            uVar3 = *(uint *)(lVar7 + 0x18);
                                            if (uVar3 < *(uint *)(lVar8 + 0x18)) {
                                              *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                                              *(int *)(lVar8 + (long)(int)uVar3 * 4 + 0x20) = iVar10
                                              ;
                                            }
                                            else {
                                              System_Collections_Generic_List_int___AddWithResize_3a2c06c
                                                        (lVar7,iVar10,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                              lVar7 = *(long *)(param_9 + 0x60);
                                              if (lVar7 == 0) goto LAB_023e6f38;
                                            }
                                            lVar8 = *(long *)(lVar7 + 0x10);
                                            lVar9 = *(long *)puVar4;
                                            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                            if (lVar8 != 0) {
                                              uVar3 = *(uint *)(lVar7 + 0x18);
                                              if (uVar3 < *(uint *)(lVar8 + 0x18)) {
                                                *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                                                *(uint *)(lVar8 + (long)(int)uVar3 * 4 + 0x20) =
                                                     uVar2 + 3;
                                              }
                                              else {
                                                System_Collections_Generic_List_int___AddWithResize_3a2c06c
                                                          (lVar7,uVar2 + 3,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                                lVar7 = *(long *)(param_9 + 0x60);
                                                if (lVar7 == 0) goto LAB_023e6f38;
                                              }
                                              lVar8 = *(long *)(lVar7 + 0x10);
                                              lVar9 = *(long *)puVar4;
                                              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                              if (lVar8 != 0) {
                                                uVar2 = *(uint *)(lVar7 + 0x18);
                                                if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                                  *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                  *(int *)(lVar8 + (long)(int)uVar2 * 4 + 0x20) =
                                                       iVar1;
                                                  return;
                                                }
                                                uVar2 = *(uint *)(lVar7 + 0x18);
                                                System_Collections_Generic_List_int___EnsureCapacity_3a2c62c
                                                          (lVar7,uVar2 + 1,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(*(long *)(*(long *)
                                                  (*(long *)(lVar9 + 0x20) + 0xc0) + 0x70) + 0x20) +
                                                  0xc0) + 0x78));
                                                lVar8 = *(long *)(lVar7 + 0x10);
                                                *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                                                if (lVar8 != 0) {
                                                  if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                                    *(int *)(lVar8 + (long)(int)uVar2 * 4 + 0x20) =
                                                         iVar1;
                                                    return;
                                                  }
                    /* WARNING: Subroutine does not return */
                                                  FUN_0213322c();
                                                }
                    /* WARNING: Subroutine does not return */
                                                FUN_02133224();
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_023e6f38:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

