/* IL2CPP: Dino.BusSand.View.GameView$$Willow
void Dino_BusSand_View_GameView__Willow (Dino_BusSand_View_GameView_o* __this, UnityEngine_Vector3_o c, int32_t n, float r, float h, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$Willow
   void Dino_BusSand_View_GameView__Willow (Dino_BusSand_View_GameView_o* __this,
   UnityEngine_Vector3_o c, int32_t n, float r, float h, const MethodInfo* method); */

void Dino_BusSand_View_GameView__Willow_23aaf64
               (undefined4 param_1,float param_2,float param_3,float param_4,long param_5,
               int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar15 = param_2;
  fVar19 = param_3;
  if ((bRam0000000004f9c94b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2870);
    bRam0000000004f9c94b = 1;
  }
  if ((*(long *)(param_5 + 0x38) != 0) &&
     (lVar8 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_5 + 0x38),0), lVar8 != 0)
     ) {
    fVar10 = (float)UnityEngine_Transform__get_forward_43d17f4(lVar8,0);
    puVar7 = PTR_DAT_04cb2870;
    uVar6 = _UNK_00e20ae0;
    uVar5 = _UNK_00e20270;
    uVar4 = _UNK_00e20174;
    fVar3 = _UNK_00e20094;
    uVar2 = _UNK_00e1fdec;
    if (0 < param_6) {
      param_4 = param_4 * _UNK_00e20188;
      fVar16 = _UNK_00e207b4;
      fVar20 = fVar19;
      do {
        fVar11 = (float)UnityEngine_Random__get_onUnitSphere_43b66a0(0);
        lVar9 = *(long *)(param_5 + 0xb0);
        fVar12 = (float)UnityEngine_Random__Range_43b64a8(0x3f400000,0x3f800000,0);
        lVar8 = *(long *)puVar7;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar7;
        }
        if (*(long *)(param_5 + 0x30) == 0) goto LAB_024ab1a8;
        fVar22 = *(float *)(*(long *)(param_5 + 0x30) + 0x5c);
        uVar1 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x6c);
        fVar13 = (float)UnityEngine_Random__Range_43b64a8(uVar6,uVar5,0);
        uVar14 = UnityEngine_Random__Range_43b64a8(0x3fc00000,uVar2,0);
        UnityEngine_Random__Range_43b64a8(0,uVar4,0);
        if (lVar9 == 0) goto LAB_024ab1a8;
        fVar17 = (fVar19 * fVar20 + fVar10 * fVar11 + fVar15 * fVar16) * fVar3;
        fVar12 = param_4 * fVar12;
        fVar21 = fVar16 - fVar15 * fVar17;
        fVar18 = fVar20 - fVar19 * fVar17;
        fVar16 = param_2;
        fVar20 = param_3;
        Dino_BusSand_View_GrainParticles__Spark_23ae9e8
                  (param_1,param_2,param_3,fVar12 * (fVar11 - fVar10 * fVar17),fVar12 * fVar21,
                   fVar12 * fVar18,fVar22 * fVar13,uVar14,lVar9,uVar1,0);
        param_6 = param_6 + -1;
      } while (param_6 != 0);
    }
    return;
  }
LAB_024ab1a8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

