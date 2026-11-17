/* IL2CPP: Dino.BusSand.View.VehicleView$$Sample
void Dino_BusSand_View_VehicleView__Sample (Dino_BusSand_View_VehicleView_o* __this, float d, UnityEngine_Vector3_o* pos, UnityEngine_Vector3_o* dir, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$Sample
   void Dino_BusSand_View_VehicleView__Sample (Dino_BusSand_View_VehicleView_o* __this, float d,
   UnityEngine_Vector3_o* pos, UnityEngine_Vector3_o* dir, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__Sample_24012ec
               (float param_1,float param_2,float param_3,long param_4,float *param_5,float *param_6
               )

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if ((bRam0000000004f9cb01 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    bRam0000000004f9cb01 = 1;
  }
  puVar3 = PTR_DAT_04caa1a8;
  fVar13 = _UNK_00e20900;
  lVar5 = *(long *)(param_4 + 0x240);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    if (iVar1 < 2) {
      fVar13 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                (lVar5,0,*(undefined8 *)PTR_DAT_04caa1a8);
      *param_5 = fVar13;
      param_5[1] = param_2;
      cVar4 = cRam0000000004f9c41d;
      param_5[2] = param_3;
      if (cVar4 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9c41d = '\x01';
      }
      fVar13 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x50);
      *(undefined8 *)param_6 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x48);
      param_6[2] = fVar13;
      return;
    }
    lVar6 = *(long *)(param_4 + 0x248);
    uVar10 = iVar1 - 1;
    uVar8 = (ulong)uVar10;
    if (iVar1 == 2) {
      uVar9 = 1;
    }
    else {
      if (lVar6 == 0) goto LAB_025016cc;
      uVar2 = *(uint *)(lVar6 + 0x18);
      lVar7 = 0;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      do {
        if ((ulong)uVar2 - 1 == lVar7) goto LAB_025016c8;
        if (param_1 <= *(float *)(lVar6 + 0x24 + lVar7 * 4)) {
          uVar9 = (int)lVar7 + 1;
          goto LAB_02501424;
        }
        lVar7 = lVar7 + 1;
        uVar9 = uVar10;
      } while (uVar8 - 1 != lVar7);
    }
    if (lVar6 != 0) {
LAB_02501424:
      if ((*(uint *)(lVar6 + 0x18) <= uVar9) ||
         (uVar2 = uVar9 - 1, *(uint *)(lVar6 + 0x18) <= uVar2)) {
LAB_025016c8:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      fVar11 = *(float *)(lVar6 + 0x20 + (long)(int)uVar2 * 4);
      fVar16 = *(float *)(lVar6 + 0x20 + (long)(int)uVar9 * 4) - fVar11;
      fVar17 = 1.0;
      if (_UNK_00e20900 < fVar16) {
        param_3 = 0.0;
        fVar11 = (param_1 - fVar11) / fVar16;
        fVar16 = 1.0;
        if (fVar11 <= 1.0) {
          fVar16 = fVar11;
        }
        fVar17 = 0.0;
        if (0.0 <= fVar11) {
          fVar17 = fVar16;
        }
      }
      fVar11 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                (lVar5,uVar2,*(undefined8 *)PTR_DAT_04caa1a8);
      if (*(long *)(param_4 + 0x240) != 0) {
        fVar15 = fVar16;
        fVar18 = param_3;
        fVar12 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                  (*(long *)(param_4 + 0x240),uVar9,*(undefined8 *)puVar3);
        fVar19 = _UNK_00e201f4;
        fVar14 = 0.0;
        if (0.0 <= fVar17) {
          fVar14 = fVar17;
        }
        *param_5 = fVar11 + fVar14 * (fVar12 - fVar11);
        param_5[1] = fVar16 + fVar14 * (fVar15 - fVar16);
        param_5[2] = param_3 + fVar14 * (fVar18 - param_3);
        lVar5 = *(long *)(param_4 + 0x248);
        fVar16 = param_1 + fVar19;
        if (*(float *)(param_4 + 0x250) <= param_1 + fVar19) {
          fVar16 = *(float *)(param_4 + 0x250);
        }
        if (iVar1 + -2 == 0) {
          if (lVar5 == 0) goto LAB_025016cc;
          uVar10 = 1;
        }
        else {
          if (lVar5 == 0) goto LAB_025016cc;
          uVar2 = *(uint *)(lVar5 + 0x18);
          if ((int)uVar10 < 3) {
            uVar10 = 2;
          }
          lVar6 = 0;
          if (uVar2 < 2) {
            uVar2 = 1;
          }
          do {
            if ((ulong)uVar2 - 1 == lVar6) goto LAB_025016c8;
            if (fVar16 <= *(float *)(lVar5 + 0x24 + lVar6 * 4)) {
              uVar10 = (int)lVar6 + 1;
              break;
            }
            lVar6 = lVar6 + 1;
          } while ((ulong)uVar10 - 1 != lVar6);
        }
        if ((*(uint *)(lVar5 + 0x18) <= uVar10) ||
           (uVar2 = uVar10 - 1, *(uint *)(lVar5 + 0x18) <= uVar2)) goto LAB_025016c8;
        fVar17 = *(float *)(lVar5 + 0x20 + (long)(int)uVar2 * 4);
        fVar19 = *(float *)(lVar5 + 0x20 + (long)(int)uVar10 * 4) - fVar17;
        fVar11 = 1.0;
        if (fVar13 < fVar19) {
          fVar13 = (fVar16 - fVar17) / fVar19;
          fVar19 = 0.0;
          fVar17 = 1.0;
          if (fVar13 <= 1.0) {
            fVar17 = fVar13;
          }
          fVar11 = 0.0;
          if (0.0 <= fVar13) {
            fVar11 = fVar17;
          }
        }
        if (*(long *)(param_4 + 0x240) != 0) {
          fVar13 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                    (*(long *)(param_4 + 0x240),uVar2,*(undefined8 *)puVar3);
          if (*(long *)(param_4 + 0x240) != 0) {
            fVar16 = fVar17;
            fVar15 = fVar19;
            fVar14 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                      (*(long *)(param_4 + 0x240),uVar10,*(undefined8 *)puVar3);
            fVar18 = 0.0;
            if (0.0 <= fVar11) {
              fVar18 = fVar11;
            }
            fVar13 = (fVar13 + fVar18 * (fVar14 - fVar13)) - *param_5;
            fVar16 = (fVar17 + fVar18 * (fVar16 - fVar17)) - param_5[1];
            fVar17 = (fVar19 + fVar18 * (fVar15 - fVar19)) - param_5[2];
            *param_6 = fVar13;
            param_6[1] = fVar16;
            param_6[2] = fVar17;
            if (_UNK_00e1fe00 <= fVar17 * fVar17 + fVar13 * fVar13 + fVar16 * fVar16) {
              return;
            }
            if (*(long *)(param_4 + 0x240) != 0) {
              fVar13 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                        (*(long *)(param_4 + 0x240),uVar8,*(undefined8 *)puVar3);
              if (*(long *)(param_4 + 0x240) != 0) {
                fVar11 = fVar16;
                fVar19 = fVar17;
                fVar15 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                          (*(long *)(param_4 + 0x240),iVar1 + -2,
                                           *(undefined8 *)puVar3);
                *param_6 = fVar13 - fVar15;
                param_6[1] = fVar16 - fVar11;
                param_6[2] = fVar17 - fVar19;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_025016cc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

