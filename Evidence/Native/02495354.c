/* IL2CPP: Dino.BusSand.View.Fx$$Dust
void Dino_BusSand_View_Fx__Dust (Dino_BusSand_View_Fx_o* __this, UnityEngine_Vector3_o pos, UnityEngine_Vector3_o drift, int32_t n, float size, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.Fx$$Dust
   void Dino_BusSand_View_Fx__Dust (Dino_BusSand_View_Fx_o* __this, UnityEngine_Vector3_o pos,
   UnityEngine_Vector3_o drift, int32_t n, float size, const MethodInfo* method); */

void Dino_BusSand_View_Fx__Dust_2395354
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,long param_8,int param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar17 = param_3;
  if ((bRam0000000004f9c8f2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc100);
    bRam0000000004f9c8f2 = 1;
  }
  puVar9 = PTR_DAT_04cbc100;
  uVar8 = _UNK_00e20994;
  fVar7 = _UNK_00e2098c;
  uVar6 = _UNK_00e2094c;
  fVar5 = _UNK_00e20754;
  uVar4 = _UNK_00e20390;
  uVar3 = _UNK_00e20178;
  uVar2 = _UNK_00e20094;
  uVar1 = _UNK_00e1fefc;
  if (0 < param_9) {
    do {
      fVar11 = (float)UnityEngine_Random__Range_43b64a8(uVar1,fVar7,0);
      fVar12 = (float)UnityEngine_Random__Range_43b64a8(uVar4,uVar2,0);
      fVar16 = fVar7;
      fVar13 = (float)UnityEngine_Random__Range_43b64a8(uVar1,fVar7,0);
      fVar19 = *(float *)(param_8 + 0x58);
      uVar10 = *(undefined8 *)(param_8 + 0x38);
      fVar14 = (float)UnityEngine_Random__get_insideUnitSphere_43b6598(0);
      fVar18 = *(float *)(param_8 + 0x58);
      fVar15 = (float)UnityEngine_Random__Range_43b64a8(uVar8,uVar3,0);
      UnityEngine_Random__Range_43b64a8(uVar6,0x3f400000,0);
      UnityEngine_Random__Range_43b64e8(0,0x168,0);
      if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar9);
      }
      fVar17 = param_3 + fVar18 * fVar17 * fVar5;
      Dino_BusSand_View_Fx__Emit_23988c0
                (param_1 + fVar18 * fVar14 * fVar5,param_2 + fVar18 * fVar16 * fVar5,fVar17,
                 param_4 + fVar11 * fVar19,param_5 + fVar12 * fVar19,param_6 + fVar13 * fVar19,
                 fVar18 * param_7 * fVar15,uVar10);
      param_9 = param_9 + -1;
    } while (param_9 != 0);
  }
  return;
}

