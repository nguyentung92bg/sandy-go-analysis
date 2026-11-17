/* IL2CPP: Dino.BusSand.View.WorldView$$ProceduralFrame
void Dino_BusSand_View_WorldView__ProceduralFrame (Dino_BusSand_View_WorldView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.WorldView$$ProceduralFrame
   void Dino_BusSand_View_WorldView__ProceduralFrame (Dino_BusSand_View_WorldView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_WorldView__ProceduralFrame_2406c48
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar1 = PTR_DAT_04cbc250;
  if ((bRam0000000004f9cb1a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cbc250);
    FUN_02132f7c(PTR_DAT_04cbc2b8);
    FUN_02132f7c(PTR_DAT_04cbe248);
    FUN_02132f7c(PTR_DAT_04cbe260);
    bRam0000000004f9cb1a = 1;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_a0 = param_5;
  thunk_FUN_02134474(&lStack_a0,param_5);
  lVar5 = *(long *)(param_5 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = Dino_BusSand_View_StageLayout__get_FacingRotation_23e8a38(0);
  puVar2 = PTR_DAT_04cbc2b8;
  puVar1 = PTR_DAT_04cb6dd0;
  uStack_90 = CONCAT44(param_2,uVar6);
  uStack_88 = CONCAT44(param_4,param_3);
  if (lVar5 != 0) {
    fVar8 = *(float *)(lVar5 + 0x6c);
    lVar3 = *(long *)PTR_DAT_04cbc2b8;
    uStack_80 = CONCAT44(uStack_80._4_4_,fVar8 * _UNK_00e20994);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_04cbe260;
    lVar3 = *(long *)(lVar3 + 0xb8);
    uVar6 = *(undefined4 *)(lVar3 + 0x54);
    uVar14 = *(undefined4 *)(lVar3 + 0x58);
    uVar16 = *(undefined4 *)(lVar3 + 0x5c);
    uVar18 = *(undefined4 *)(lVar3 + 0x60);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_98 = Dino_BusSand_View_MaterialLibrary__Lit_23b0e94
                          (uVar6,uVar14,uVar16,uVar18,_UNK_00e205e8,0,*(undefined8 *)puVar2,0);
    thunk_FUN_02134474((ulong)&lStack_a0 | 8,uStack_98);
    fVar24 = *(float *)(lVar5 + 0x74);
    fVar20 = *(float *)(lVar5 + 0x78);
    fVar25 = *(float *)(lVar5 + 0x7c);
    fVar19 = *(float *)(lVar5 + 0x80);
    fVar17 = *(float *)(lVar5 + 0x84);
    fVar23 = *(float *)(lVar5 + 0x88);
    if (cRam0000000004f9c25f == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9c25f = '\x01';
    }
    puVar2 = PTR_DAT_04cbe248;
    puVar1 = PTR_DAT_04caa208;
    fVar7 = fVar8 + *(float *)(lVar5 + 100);
    lVar3 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    fVar21 = *(float *)(lVar3 + 0x3c);
    fVar15 = *(float *)(lVar3 + 0x40);
    fVar26 = *(float *)(lVar3 + 0x44);
    fVar13 = fVar25 - fVar8 * fVar26;
    fVar9 = fVar24 - fVar8 * fVar21;
    fVar11 = fVar20 - fVar8 * fVar15;
    Dino_BusSand_View_WorldView___ProceduralFrame_g__Bar_41_0_24074cc
              (fVar9 - fVar8 * fVar19,fVar11 - fVar8 * fVar17,fVar13 - fVar8 * fVar23,
               fVar24 + fVar21 * fVar7,fVar20 + fVar15 * fVar7,fVar25 + fVar26 * fVar7,param_5,
               &lStack_a0);
    fVar10 = *(float *)(lVar5 + 0x68);
    fVar7 = fVar8 + *(float *)(lVar5 + 100);
    fVar12 = fVar8 + fVar10;
    Dino_BusSand_View_WorldView___ProceduralFrame_g__Bar_41_0_24074cc
              (fVar9 + fVar19 * fVar10,fVar11 + fVar17 * fVar10,fVar13 + fVar23 * fVar10,
               fVar19 * fVar12 + fVar24 + fVar21 * fVar7,fVar17 * fVar12 + fVar20 + fVar15 * fVar7,
               fVar23 * fVar12 + fVar25 + fVar26 * fVar7,param_5,&lStack_a0);
    fVar7 = *(float *)(lVar5 + 0x68);
    Dino_BusSand_View_WorldView___ProceduralFrame_g__Bar_41_0_24074cc
              (fVar9,fVar11,fVar13,fVar24 + fVar19 * fVar7,fVar20 + fVar17 * fVar7,
               fVar25 + fVar23 * fVar7,param_5,&lStack_a0);
    fVar7 = *(float *)(lVar5 + 100);
    fVar9 = *(float *)(lVar5 + 0x68);
    fVar10 = fVar8 + fVar7;
    Dino_BusSand_View_WorldView___ProceduralFrame_g__Bar_41_0_24074cc
              (fVar24 + fVar21 * fVar7,fVar20 + fVar15 * fVar7,fVar25 + fVar26 * fVar7,
               fVar19 * fVar9 + fVar24 + fVar21 * fVar10,fVar17 * fVar9 + fVar20 + fVar15 * fVar10,
               fVar23 * fVar9 + fVar25 + fVar26 * fVar10,param_5,&lStack_a0);
    fVar17 = (float)uStack_80 * _UNK_00e1fefc;
    uVar14 = 0x3f000000;
    uVar6 = Dino_BusSand_View_StageLayout__BoardPoint_23e89d4(0x3f000000,0x3f000000,fVar17,lVar5,0);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    fVar19 = _UNK_00e20390;
    lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
    uVar16 = *(undefined4 *)(lVar3 + 0xc);
    uVar18 = *(undefined4 *)(lVar3 + 0x10);
    uVar22 = *(undefined4 *)(lVar3 + 0x14);
    uVar4 = Dino_BusSand_View_MaterialLibrary__Lit_23b0e94
                      (_UNK_00e20754,_UNK_00e20754,_UNK_00e205f0,0x3f800000,_UNK_00e20390,0,
                       *(undefined8 *)puVar2,0);
    lVar3 = Dino_BusSand_View_WorldView__Box_2405ee4
                      (uVar6,uVar14,fVar17,uVar16,uVar18,uVar22,param_5,*(undefined8 *)puVar2,uVar4,
                       0);
    if ((lVar3 != 0) && (lVar3 = UnityEngine_Component__get_transform_43bcd18(lVar3,0), lVar3 != 0))
    {
      UnityEngine_Transform__set_localRotation_43d156c
                (uStack_90 & 0xffffffff,uStack_90._4_4_,(undefined4)uStack_88,uStack_88._4_4_,lVar3,
                 0);
      UnityEngine_Transform__set_localScale_43d1be0
                (fVar8 + *(float *)(lVar5 + 100),fVar8 + *(float *)(lVar5 + 0x68),
                 (float)uStack_80 * fVar19,lVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

