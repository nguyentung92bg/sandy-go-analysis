/* IL2CPP: Dino.BusSand.View.StageLayout$$<BuildReturnPath>g__Line|106_1
void Dino_BusSand_View_StageLayout___BuildReturnPath_g__Line_106_1 (UnityEngine_Vector3_o to, int32_t seg, Dino_BusSand_View_StageLayout___c__DisplayClass106_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.StageLayout$$<BuildReturnPath>g__Line|106_1
   void Dino_BusSand_View_StageLayout___BuildReturnPath_g__Line_106_1 (UnityEngine_Vector3_o to,
   int32_t seg, Dino_BusSand_View_StageLayout___c__DisplayClass106_0_o* , const MethodInfo* method);
    */

void Dino_BusSand_View_StageLayout___BuildReturnPath_g__Line_106_1_23e9a0c
               (float param_1,float param_2,float param_3,int param_4,long *param_5)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar10 = param_2;
  fVar12 = param_3;
  if ((bRam0000000004f9ca97 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa170);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    bRam0000000004f9ca97 = 1;
  }
  lVar3 = *param_5;
  if (lVar3 != 0) {
    fVar7 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                             (lVar3,*(int *)(lVar3 + 0x18) + -1,*(undefined8 *)PTR_DAT_04caa1a8);
    puVar2 = PTR_DAT_04caa170;
    if (0 < param_4) {
      iVar6 = 1;
      do {
        lVar3 = *param_5;
        fVar8 = (float)iVar6 / (float)param_4;
        fVar11 = 1.0;
        if (fVar8 <= 1.0) {
          fVar11 = fVar8;
        }
        fVar9 = 0.0;
        if (0.0 <= fVar8) {
          fVar9 = fVar11;
        }
        if (lVar3 == 0) goto LAB_024e9b88;
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar4 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_024e9b88;
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          lVar5 = lVar5 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(float *)(lVar5 + 0x20) = fVar7 + (param_1 - fVar7) * fVar9;
          *(float *)(lVar5 + 0x24) = fVar10 + (param_2 - fVar10) * fVar9;
          *(float *)(lVar5 + 0x28) = fVar12 + (param_3 - fVar12) * fVar9;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                    (lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 <= param_4);
    }
    return;
  }
LAB_024e9b88:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

