/* IL2CPP: Dino.BusSand.View.SkidMarks$$LateUpdate
void Dino_BusSand_View_SkidMarks__LateUpdate (Dino_BusSand_View_SkidMarks_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024ef0b0) */
/* WARNING: Removing unreachable block (ram,0x024ef188) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.SkidMarks$$LateUpdate
   void Dino_BusSand_View_SkidMarks__LateUpdate (Dino_BusSand_View_SkidMarks_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_SkidMarks__LateUpdate_23ee92c(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  float fStack_108;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  if ((bRam0000000004f9caae & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbdd28);
    FUN_02132f7c(PTR_DAT_04cbdd30);
    FUN_02132f7c(PTR_DAT_04cbdd38);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cbc360);
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04caa178);
    FUN_02132f7c(PTR_DAT_04cb7338);
    FUN_02132f7c(PTR_DAT_04cb7340);
    FUN_02132f7c(PTR_DAT_04cbdcc8);
    FUN_02132f7c(PTR_DAT_04cad858);
    FUN_02132f7c(PTR_DAT_04cbdd40);
    FUN_02132f7c(PTR_DAT_04cbdd48);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04cbdd18);
    FUN_02132f7c(PTR_DAT_04cbdd50);
    bRam0000000004f9caae = 1;
  }
  uStack_b0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  fVar29 = (float)UnityEngine_Time__get_time_43cd540(0);
  puVar12 = PTR_DAT_04cbdd50;
  puVar11 = PTR_DAT_04cbdd48;
  puVar10 = PTR_DAT_04cbdd40;
  puVar9 = PTR_DAT_04cbdd30;
  puVar8 = PTR_DAT_04cbc360;
  puVar7 = PTR_DAT_04caa178;
  puVar6 = PTR_DAT_04caa170;
  puVar5 = PTR_DAT_04caa160;
  fVar4 = _UNK_00e1feac;
  lVar23 = *(long *)(param_1 + 0x20);
  if (lVar23 != 0) {
    iVar28 = 0;
    do {
      if ((*(int *)(lVar23 + 0x18) <= iVar28) ||
         (System_Collections_Generic_List_SkidMarks_Seg___get_Item_2a9a868
                    (&uStack_138,lVar23,iVar28,*(undefined8 *)puVar12), fVar29 - fStack_108 <= fVar4
         )) {
        if (iVar28 != 0) {
          if (*(long *)(param_1 + 0x20) == 0) break;
          System_Collections_Generic_List_SkidMarks_Seg___RemoveRange_2a9c81c
                    (*(long *)(param_1 + 0x20),0,iVar28,*(undefined8 *)puVar11);
        }
        if (*(long *)(param_1 + 0x50) != 0) {
          UnityEngine_Mesh__Clear_4395cc4(*(long *)(param_1 + 0x50),0);
          lVar23 = *(long *)(param_1 + 0x20);
          if (lVar23 != 0) {
            if (*(int *)(lVar23 + 0x18) == 0) {
              return;
            }
            lVar26 = *(long *)(param_1 + 0x30);
            if (lVar26 != 0) {
              *(undefined4 *)(lVar26 + 0x18) = 0;
              *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
              lVar26 = *(long *)(param_1 + 0x38);
              if (lVar26 != 0) {
                *(undefined4 *)(lVar26 + 0x18) = 0;
                *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                lVar26 = *(long *)(param_1 + 0x40);
                if (lVar26 != 0) {
                  *(undefined4 *)(lVar26 + 0x18) = 0;
                  *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                  lVar26 = *(long *)(param_1 + 0x48);
                  if (lVar26 != 0) {
                    uVar25 = *(undefined8 *)puVar10;
                    *(undefined4 *)(lVar26 + 0x18) = 0;
                    *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                    System_Collections_Generic_List_SkidMarks_Seg___GetEnumerator_2a9b844
                              (&uStack_138,lVar23,uVar25);
                    func_0x049b5410(&uStack_f0,&uStack_138,0x48);
                    fVar4 = _UNK_00e2097c;
                    uStack_138 = 0;
                    puStack_130 = &uStack_f0;
                    goto LAB_024eeba4;
                  }
                }
              }
            }
          }
        }
        break;
      }
      lVar23 = *(long *)(param_1 + 0x20);
      iVar28 = iVar28 + 1;
    } while (lVar23 != 0);
  }
  goto LAB_024eeadc;
LAB_024eeba4:
  uVar24 = System_Collections_Generic_List_Enumerator_SkidMarks_Seg___MoveNext_36162a8
                     (&uStack_f0,*(undefined8 *)puVar9);
  uVar17 = uStack_c8;
  if ((uVar24 & 1) != 0) {
    lVar23 = *(long *)(param_1 + 0x30);
    fVar30 = (fVar29 - (float)uStack_b0) / fVar4 + 1.0;
    fVar31 = 1.0;
    if (fVar30 <= 1.0) {
      fVar31 = fVar30;
    }
    fVar32 = 0.0;
    if (0.0 <= fVar30) {
      fVar32 = fVar31;
    }
    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = *(uint *)(lVar23 + 0x18);
    lVar27 = *(long *)puVar6;
    uVar13 = uStack_d8._4_4_;
    uVar14 = (undefined4)uStack_d0;
    uVar15 = uStack_d0._4_4_;
    uVar16 = (undefined4)uStack_c8;
    uVar18 = uStack_c8._4_4_;
    lVar26 = *(long *)(lVar23 + 0x10);
    uVar19 = (undefined4)uStack_c0;
    uVar20 = uStack_c0._4_4_;
    uVar21 = (undefined4)uStack_b8;
    uVar22 = uStack_b8._4_4_;
    *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
    if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (uVar2 < *(uint *)(lVar26 + 0x18)) {
      lVar26 = lVar26 + (long)(int)uVar2 * 0xc;
      *(uint *)(lVar23 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar26 + 0x20) = (undefined4)uStack_e0;
      *(undefined4 *)(lVar26 + 0x24) = uStack_e0._4_4_;
      *(undefined4 *)(lVar26 + 0x28) = (undefined4)uStack_d8;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                (lVar23,*(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
    }
    lVar23 = *(long *)(param_1 + 0x30);
    if (lVar23 == 0) {
LAB_024ef15c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar26 = *(long *)(lVar23 + 0x10);
    lVar27 = *(long *)puVar6;
    *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
    if (lVar26 == 0) goto LAB_024ef15c;
    uVar3 = *(uint *)(lVar23 + 0x18);
    if (uVar3 < *(uint *)(lVar26 + 0x18)) {
      lVar26 = lVar26 + (long)(int)uVar3 * 0xc;
      *(uint *)(lVar23 + 0x18) = uVar3 + 1;
      *(undefined4 *)(lVar26 + 0x20) = uVar13;
      *(undefined4 *)(lVar26 + 0x24) = uVar14;
      *(undefined4 *)(lVar26 + 0x28) = uVar15;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                (uVar13,uVar14,uVar15,lVar23,
                 *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
    }
    lVar23 = *(long *)(param_1 + 0x30);
    if (lVar23 == 0) {
LAB_024ef160:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar26 = *(long *)(lVar23 + 0x10);
    lVar27 = *(long *)puVar6;
    *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
    if (lVar26 == 0) goto LAB_024ef160;
    uVar3 = *(uint *)(lVar23 + 0x18);
    if (uVar3 < *(uint *)(lVar26 + 0x18)) {
      lVar26 = lVar26 + (long)(int)uVar3 * 0xc;
      *(uint *)(lVar23 + 0x18) = uVar3 + 1;
      *(undefined4 *)(lVar26 + 0x20) = uVar16;
      *(undefined4 *)(lVar26 + 0x24) = uVar18;
      *(undefined4 *)(lVar26 + 0x28) = uVar19;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                (uVar17 & 0xffffffff,uVar18,uVar19,lVar23,
                 *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
    }
    lVar23 = *(long *)(param_1 + 0x30);
    if (lVar23 == 0) {
LAB_024ef164:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar26 = *(long *)(lVar23 + 0x10);
    lVar27 = *(long *)puVar6;
    *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
    if (lVar26 == 0) goto LAB_024ef164;
    uVar3 = *(uint *)(lVar23 + 0x18);
    if (uVar3 < *(uint *)(lVar26 + 0x18)) {
      lVar26 = lVar26 + (long)(int)uVar3 * 0xc;
      *(uint *)(lVar23 + 0x18) = uVar3 + 1;
      *(undefined4 *)(lVar26 + 0x20) = uVar20;
      *(undefined4 *)(lVar26 + 0x24) = uVar21;
      *(undefined4 *)(lVar26 + 0x28) = uVar22;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                (uVar20,uVar21,uVar22,lVar23,
                 *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
    }
    iVar28 = 4;
    do {
      lVar23 = *(long *)(param_1 + 0x38);
      if (lVar23 == 0) {
LAB_024ef158:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar26 = *(long *)(lVar23 + 0x10);
      lVar27 = *(long *)puVar8;
      *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
      if (lVar26 == 0) goto LAB_024ef158;
      uVar3 = *(uint *)(lVar23 + 0x18);
      if (uVar3 < *(uint *)(lVar26 + 0x18)) {
        uVar25 = NEON_fmov(0x3f800000,4);
        lVar26 = lVar26 + (long)(int)uVar3 * 0x10;
        *(uint *)(lVar23 + 0x18) = uVar3 + 1;
        *(undefined4 *)(lVar26 + 0x28) = 0x3f800000;
        *(float *)(lVar26 + 0x2c) = fVar32 * fVar32;
        *(undefined8 *)(lVar26 + 0x20) = uVar25;
      }
      else {
        System_Collections_Generic_List_Color___AddWithResize_3a023f0
                  (0x3f800000,0x3f800000,0x3f800000,fVar32 * fVar32,lVar23,
                   *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
      }
      lVar23 = *(long *)(param_1 + 0x40);
      if (lVar23 == 0) {
LAB_024ef14c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar26 = *(long *)(lVar23 + 0x10);
      lVar27 = *(long *)puVar7;
      *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
      if (lVar26 == 0) goto LAB_024ef14c;
      uVar3 = *(uint *)(lVar23 + 0x18);
      if (uVar3 < *(uint *)(lVar26 + 0x18)) {
        *(uint *)(lVar23 + 0x18) = uVar3 + 1;
        *(undefined8 *)(lVar26 + (long)(int)uVar3 * 8 + 0x20) = 0x3f0000003f000000;
      }
      else {
        System_Collections_Generic_List_Vector2___AddWithResize_3af7448
                  (0x3f000000,0x3f000000,lVar23,
                   *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
      }
      iVar28 = iVar28 + -1;
    } while (iVar28 != 0);
    lVar23 = *(long *)(param_1 + 0x48);
    if (lVar23 == 0) {
LAB_024ef168:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar26 = *(long *)(lVar23 + 0x10);
    lVar27 = *(long *)puVar5;
    *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
    if (lVar26 == 0) goto LAB_024ef168;
    uVar3 = *(uint *)(lVar23 + 0x18);
    if (uVar3 < *(uint *)(lVar26 + 0x18)) {
      *(uint *)(lVar23 + 0x18) = uVar3 + 1;
      *(uint *)(lVar26 + (long)(int)uVar3 * 4 + 0x20) = uVar2;
    }
    else {
      System_Collections_Generic_List_int___AddWithResize_3a2c06c
                (lVar23,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
      lVar23 = *(long *)(param_1 + 0x48);
      if (lVar23 == 0) goto LAB_024ef178;
    }
    lVar26 = *(long *)(lVar23 + 0x10);
    lVar27 = *(long *)puVar5;
    *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
    if (lVar26 == 0) {
LAB_024ef178:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = *(uint *)(lVar23 + 0x18);
    iVar28 = uVar2 + 2;
    if (uVar3 < *(uint *)(lVar26 + 0x18)) {
      *(uint *)(lVar23 + 0x18) = uVar3 + 1;
      *(int *)(lVar26 + (long)(int)uVar3 * 4 + 0x20) = iVar28;
    }
    else {
      System_Collections_Generic_List_int___AddWithResize_3a2c06c
                (lVar23,iVar28,*(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
      lVar23 = *(long *)(param_1 + 0x48);
      if (lVar23 == 0) goto LAB_024ef170;
    }
    lVar26 = *(long *)(lVar23 + 0x10);
    lVar27 = *(long *)puVar5;
    *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
    if (lVar26 == 0) {
LAB_024ef170:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = *(uint *)(lVar23 + 0x18);
    iVar1 = uVar2 + 1;
    if (uVar3 < *(uint *)(lVar26 + 0x18)) {
      *(uint *)(lVar23 + 0x18) = uVar3 + 1;
      *(int *)(lVar26 + (long)(int)uVar3 * 4 + 0x20) = iVar1;
    }
    else {
      System_Collections_Generic_List_int___AddWithResize_3a2c06c
                (lVar23,iVar1,*(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
      lVar23 = *(long *)(param_1 + 0x48);
      if (lVar23 == 0) goto LAB_024ef174;
    }
    lVar26 = *(long *)(lVar23 + 0x10);
    lVar27 = *(long *)puVar5;
    *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
    if (lVar26 == 0) {
LAB_024ef174:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = *(uint *)(lVar23 + 0x18);
    if (uVar3 < *(uint *)(lVar26 + 0x18)) {
      *(uint *)(lVar23 + 0x18) = uVar3 + 1;
      *(int *)(lVar26 + (long)(int)uVar3 * 4 + 0x20) = iVar1;
    }
    else {
      System_Collections_Generic_List_int___AddWithResize_3a2c06c
                (lVar23,iVar1,*(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
      lVar23 = *(long *)(param_1 + 0x48);
      if (lVar23 == 0) goto LAB_024ef17c;
    }
    lVar26 = *(long *)(lVar23 + 0x10);
    lVar27 = *(long *)puVar5;
    *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
    if (lVar26 == 0) {
LAB_024ef17c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = *(uint *)(lVar23 + 0x18);
    if (uVar3 < *(uint *)(lVar26 + 0x18)) {
      *(uint *)(lVar23 + 0x18) = uVar3 + 1;
      *(int *)(lVar26 + (long)(int)uVar3 * 4 + 0x20) = iVar28;
    }
    else {
      System_Collections_Generic_List_int___AddWithResize_3a2c06c
                (lVar23,iVar28,*(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
      lVar23 = *(long *)(param_1 + 0x48);
      if (lVar23 == 0) goto LAB_024ef16c;
    }
    lVar26 = *(long *)(lVar23 + 0x10);
    lVar27 = *(long *)puVar5;
    *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
    if (lVar26 == 0) {
LAB_024ef16c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = *(uint *)(lVar23 + 0x18);
    if (uVar3 < *(uint *)(lVar26 + 0x18)) {
      *(uint *)(lVar23 + 0x18) = uVar3 + 1;
      *(uint *)(lVar26 + (long)(int)uVar3 * 4 + 0x20) = uVar2 + 3;
    }
    else {
      System_Collections_Generic_List_int___AddWithResize_3a2c06c
                (lVar23,uVar2 + 3,*(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70)
                );
    }
    goto LAB_024eeba4;
  }
  System_Collections_Generic_List_Enumerator_SkidMarks_Seg___Dispose_36162a4
            (puStack_130,*(undefined8 *)PTR_DAT_04cbdd28);
  if (*(long *)(param_1 + 0x50) != 0) {
    UnityEngine_Mesh__SetVertices_439178c
              (*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x30),0);
    if (*(long *)(param_1 + 0x50) != 0) {
      UnityEngine_Mesh__SetColors_439205c
                (*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x38),0);
      if (*(long *)(param_1 + 0x50) != 0) {
        UnityEngine_Mesh__SetUVs_4392594
                  (*(long *)(param_1 + 0x50),0,*(undefined8 *)(param_1 + 0x40),0);
        if (*(long *)(param_1 + 0x50) != 0) {
          UnityEngine_Mesh__SetTriangles_4394c90
                    (*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48),0,0);
          if (*(long *)(param_1 + 0x50) != 0) {
            UnityEngine_Mesh__RecalculateBounds_4395ccc(*(long *)(param_1 + 0x50),0);
            return;
          }
        }
      }
    }
  }
LAB_024eeadc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

