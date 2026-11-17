/* IL2CPP: Dino.BusSand.View.StageLayout$$<BuildReturnPath>g__Arc|106_0
void Dino_BusSand_View_StageLayout___BuildReturnPath_g__Arc_106_0 (UnityEngine_Vector3_o c, float r, float a0, float a1, int32_t seg, Dino_BusSand_View_StageLayout___c__DisplayClass106_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.StageLayout$$<BuildReturnPath>g__Arc|106_0
   void Dino_BusSand_View_StageLayout___BuildReturnPath_g__Arc_106_0 (UnityEngine_Vector3_o c, float
   r, float a0, float a1, int32_t seg, Dino_BusSand_View_StageLayout___c__DisplayClass106_0_o* ,
   const MethodInfo* method); */

void Dino_BusSand_View_StageLayout___BuildReturnPath_g__Arc_106_0_23e9b8c
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               int param_7,long *param_8)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_38;
  float fStack_34;
  
  if ((bRam0000000004f9ca96 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa170);
    bRam0000000004f9ca96 = 1;
  }
  puVar3 = PTR_DAT_04caa170;
  fVar2 = _UNK_00e20a74;
  if (0 < param_7) {
    iVar7 = 1;
    param_2 = param_2 + param_4 * 0.0;
    do {
      lVar6 = *param_8;
      fVar8 = (float)iVar7 / (float)param_7;
      fVar10 = 1.0;
      if (fVar8 <= 1.0) {
        fVar10 = fVar8;
      }
      fVar9 = 0.0;
      if (0.0 <= fVar8) {
        fVar9 = fVar10;
      }
      sincosf(((param_6 - param_5) * fVar9 + param_5) * fVar2,&fStack_34,&fStack_38);
      if (lVar6 == 0) {
LAB_024e9d08:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar4 = *(long *)(lVar6 + 0x10);
      lVar5 = *(long *)puVar3;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_024e9d08;
      uVar1 = *(uint *)(lVar6 + 0x18);
      fVar10 = param_1 + fStack_38 * param_4;
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(float *)(lVar4 + 0x20) = fVar10;
        *(float *)(lVar4 + 0x24) = param_2;
        *(float *)(lVar4 + 0x28) = param_3 + fStack_34 * param_4;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_3af9d14
                  (fVar10,param_2,lVar6,
                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 <= param_7);
  }
  return;
}

