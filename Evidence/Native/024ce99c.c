/* IL2CPP: Dino.BusSand.View.MechanicLayer$$UnlockBurst
void Dino_BusSand_View_MechanicLayer__UnlockBurst (Dino_BusSand_View_MechanicLayer_o* __this, UnityEngine_Vector3_o at, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$UnlockBurst
   void Dino_BusSand_View_MechanicLayer__UnlockBurst (Dino_BusSand_View_MechanicLayer_o* __this,
   UnityEngine_Vector3_o at, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__UnlockBurst_23ce99c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  float fVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined4 *puVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  float fStack_58;
  float fStack_54;
  
  puVar8 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c9ea & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c9ea = 1;
  }
  fVar16 = (float)Dino_BusSand_View_MechanicLayer__get_FxU_23bec9c(param_4);
  lVar11 = Dino_BusSand_View_MechanicLayer__get_FxLive_23bed30(param_4);
  lVar13 = *(long *)puVar8;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar13);
  }
  uVar12 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
  if ((uVar12 & 1) != 0) {
    if (lVar11 == 0) {
LAB_024ced3c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_View_Fx__Glow_2398b34
              (param_1,param_2,param_3,0x3f800000,_UNK_00e20830,_UNK_00e20994,_UNK_00e208e8,fVar16,
               lVar11,0);
    puVar9 = PTR_DAT_04cac5d0;
    lVar13 = *(long *)PTR_DAT_04cac5d0;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar9;
    }
    lVar13 = *(long *)(lVar13 + 0xb8);
    Dino_BusSand_View_Fx__GroundRing_2398c44
              (param_1,param_2,param_3,*(undefined4 *)(lVar13 + 8),*(undefined4 *)(lVar13 + 0xc),
               *(undefined4 *)(lVar13 + 0x10),*(undefined4 *)(lVar13 + 0x14),
               *(float *)(param_4 + 0x50) * _UNK_00e20274,lVar11,0);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    Dino_BusSand_View_Fx__StarsFlat_2398d44
              (param_1,param_2,param_3,fVar16 * 3.0,fVar16,lVar11,7,&uStack_b8,0);
  }
  lVar11 = Dino_BusSand_View_MechanicLayer__get_GrainsLive_23beda0(param_4);
  lVar13 = *(long *)puVar8;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar13);
  }
  uVar12 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
  if ((uVar12 & 1) == 0) {
    fVar17 = (float)UnityEngine_Random__Range_43b64a8(0,_UNK_00e1fdf4,0);
    puVar8 = PTR_DAT_04cac5d0;
    uVar7 = _UNK_00e20aec;
    uVar6 = _UNK_00e2098c;
    uVar5 = _UNK_00e208e8;
    fVar4 = _UNK_00e2082c;
    fVar16 = _UNK_00e207cc;
    uVar3 = _UNK_00e20590;
    uVar2 = _UNK_00e1fe50;
    uVar15 = 0;
    do {
      fVar18 = (float)UnityEngine_Random__Range_43b64a8(uVar2,uVar3,0);
      fVar18 = ((fVar18 + (float)(int)uVar15) / 10.0) * fVar4;
      sincosf(fVar17 + fVar18 + fVar18,&fStack_54,&fStack_58);
      fVar10 = fStack_54;
      fVar18 = fStack_58;
      fVar23 = *(float *)(param_4 + 0x50);
      fVar19 = (float)UnityEngine_Random__Range_43b64a8(0x40200000,0x40800000,0);
      lVar13 = *(long *)puVar8;
      if ((uVar15 / 5) * 5 == uVar15) {
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar13 = *(long *)puVar8;
        }
        puVar14 = (undefined4 *)(*(long *)(lVar13 + 0xb8) + 4);
      }
      else {
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar13 = *(long *)puVar8;
        }
        puVar14 = *(undefined4 **)(lVar13 + 0xb8);
      }
      uVar1 = *puVar14;
      fVar22 = *(float *)(param_4 + 0x50);
      fVar20 = (float)UnityEngine_Random__Range_43b64a8(uVar7,fVar16,0);
      uVar21 = UnityEngine_Random__Range_43b64a8(uVar6,uVar5,0);
      if (lVar11 == 0) goto LAB_024ced3c;
      fVar23 = fVar23 * fVar19;
      Dino_BusSand_View_GrainParticles__Spark_23ae9e8
                (param_1,param_2,param_3,fVar23 * fVar18,fVar23 * fVar16,fVar23 * fVar10,
                 fVar22 * fVar20,uVar21,lVar11,uVar1);
      uVar15 = uVar15 + 1;
    } while (uVar15 != 10);
  }
  return;
}

