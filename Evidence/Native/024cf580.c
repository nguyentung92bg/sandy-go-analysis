/* IL2CPP: Dino.BusSand.View.MechanicLayer$$DuneBurst
void Dino_BusSand_View_MechanicLayer__DuneBurst (Dino_BusSand_View_MechanicLayer_o* __this, UnityEngine_Vector3_o p, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$DuneBurst
   void Dino_BusSand_View_MechanicLayer__DuneBurst (Dino_BusSand_View_MechanicLayer_o* __this,
   UnityEngine_Vector3_o p, int32_t index, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__DuneBurst_23cf580
               (float param_1,float param_2,float param_3,long param_4,undefined4 param_5)

{
  undefined1 uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined1 auStack_54 [4];
  
  if ((bRam0000000004f9c9f5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd560);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    bRam0000000004f9c9f5 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  auStack_54[0] = 0;
  if (*(long *)(param_4 + 0x58) != 0) {
    uVar4 = System_Collections_Generic_Dictionary_int__byte___TryGetValue_341d83c
                      (*(long *)(param_4 + 0x58),param_5,auStack_54,*(undefined8 *)PTR_DAT_04cbd560)
    ;
    uVar1 = auStack_54[0];
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    uVar4 = Dino_BusSand_View_ArtPack__get_Active_238dea0(0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cbbfb8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = Dino_BusSand_Core_SandPalette__Color_24196fc(uVar1,0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cb70d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_View_PackPalette__Main_2390528(uVar1,0);
      uVar3 = FUN_023e4c88(0);
    }
    lVar5 = Dino_BusSand_View_MechanicLayer__get_GrainsLive_23beda0(param_4);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
    puVar2 = PTR_DAT_04caa208;
    if ((uVar4 & 1) != 0) {
      if ((lVar5 == 0) || (*(long *)(param_4 + 0x28) == 0)) goto LAB_024cf8d0;
      fVar7 = *(float *)(param_4 + 0x50);
      fVar9 = fVar7 * (ABS(*(float *)(lVar5 + 0x164)) + ABS(*(float *)(lVar5 + 0x164))) *
                      _UNK_00e20660;
      fVar10 = *(float *)(*(long *)(param_4 + 0x28) + 0x5c) * _UNK_00e20178;
      if (fVar10 <= fVar7 * _UNK_00e204a8) {
        fVar10 = fVar7 * _UNK_00e204a8;
      }
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        fVar7 = *(float *)(param_4 + 0x50);
        cRam0000000004f9bcf8 = '\x01';
      }
      lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
      uVar11 = *(undefined8 *)(lVar6 + 0x18);
      fVar8 = param_2 + (float)((ulong)uVar11 >> 0x20) * fVar7 * 0.35;
      Dino_BusSand_View_GrainParticles__Burst_23b5d68
                (CONCAT44(fVar8,param_1 + (float)uVar11 * fVar7 * 0.35),fVar8,
                 param_3 + *(float *)(lVar6 + 0x20) * fVar7 * _UNK_00e20590,SQRT(fVar9),fVar10,
                 0x3f000000,0x3f800000,0,lVar5,uVar3,0x82);
    }
    lVar5 = *(long *)(param_4 + 0x38);
    if (lVar5 != 0) {
      uVar4 = NEON_ushl(CONCAT44(uVar3,uVar3),_UNK_00e6a7d0,4);
      fVar9 = (float)(uVar3 & 0xff) / 255.0;
      uVar11 = NEON_ucvtf(uVar4 & 0xff000000ff,4);
      fVar10 = (float)uVar11 / 255.0;
      fVar7 = (float)((ulong)uVar11 >> 0x20) / 255.0;
      uVar11 = NEON_fmov(0x3f800000,4);
      fVar8 = (1.0 - fVar9) * _UNK_00e20590;
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
      Dino_BusSand_View_Fx__GroundRing_2398c44
                (param_1 + *(float *)(lVar6 + 0x18) * _UNK_00e20844,
                 param_2 + *(float *)(lVar6 + 0x1c) * _UNK_00e20844,
                 param_3 + *(float *)(lVar6 + 0x20) * _UNK_00e20844,fVar9 + fVar8,
                 fVar10 + ((float)uVar11 - fVar10) * 0.35,
                 fVar7 + ((float)((ulong)uVar11 >> 0x20) - fVar7) * 0.35,_UNK_00e200f8,
                 *(float *)(param_4 + 0x50) * _UNK_00e20274,lVar5,0);
    }
    return;
  }
LAB_024cf8d0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

