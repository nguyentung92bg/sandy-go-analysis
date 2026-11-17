/* IL2CPP: Dino.BusSand.View.WorldView$$BuildGround
void Dino_BusSand_View_WorldView__BuildGround (Dino_BusSand_View_WorldView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.WorldView$$BuildGround
   void Dino_BusSand_View_WorldView__BuildGround (Dino_BusSand_View_WorldView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_WorldView__BuildGround_2402758(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  if ((bRam0000000004f9cb13 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cbc2b8);
    FUN_02132f7c(PTR_DAT_04cbe0c8);
    FUN_02132f7c(PTR_DAT_04cbe0d0);
    FUN_02132f7c(PTR_DAT_04cb68b8);
    FUN_02132f7c(PTR_DAT_04cbe0d8);
    FUN_02132f7c(PTR_DAT_04cbe0e0);
    FUN_02132f7c(PTR_DAT_04cbcf60);
    FUN_02132f7c(PTR_DAT_04cbe0e8);
    FUN_02132f7c(PTR_DAT_04cbe0f0);
    FUN_02132f7c(PTR_DAT_04cbe0f8);
    FUN_02132f7c(PTR_DAT_04cbd1a0);
    FUN_02132f7c(PTR_DAT_04cb76e0);
    FUN_02132f7c(PTR_DAT_04caa108);
    bRam0000000004f9cb13 = 1;
  }
  puVar2 = PTR_DAT_04cbc2b8;
  puVar1 = PTR_DAT_04cb6dd0;
  lVar12 = *(long *)(param_1 + 0x20);
  if (lVar12 != 0) {
    fVar14 = (*(float *)(lVar12 + 0x7c) - *(float *)(lVar12 + 0x88) * *(float *)(lVar12 + 0x6c)) +
             *(float *)(lVar12 + 0x68) * 3.0 + *(float *)(lVar12 + 0x60) * 40.0;
    fVar13 = (float)Dino_BusSand_View_StageLayout__HalfWidthAt_23e6f34(fVar14,lVar12,0);
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar2;
    }
    puVar4 = PTR_DAT_04cbe0d0;
    lVar9 = *(long *)(lVar9 + 0xb8);
    uVar15 = *(undefined4 *)(lVar9 + 4);
    uVar16 = *(undefined4 *)(lVar9 + 8);
    uVar17 = *(undefined4 *)(lVar9 + 0xc);
    uVar18 = *(undefined4 *)(lVar9 + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar9 = Dino_BusSand_View_MaterialLibrary__Ground_23ba8c8
                      (uVar15,uVar16,uVar17,uVar18,*(undefined8 *)puVar4,0,0);
    puVar1 = PTR_DAT_04cbcf60;
    if (lVar9 != 0) {
      lVar11 = *(long *)(*(long *)puVar2 + 0xb8);
      UnityEngine_Material__SetColor_43830b0
                (*(undefined4 *)(lVar11 + 4),*(undefined4 *)(lVar11 + 8),
                 *(undefined4 *)(lVar11 + 0xc),*(undefined4 *)(lVar11 + 0x10),lVar9,
                 *(undefined8 *)PTR_DAT_04cb68b8,0);
      lVar11 = *(long *)(*(long *)puVar2 + 0xb8);
      UnityEngine_Material__SetColor_43830b0
                (*(undefined4 *)(lVar11 + 0x14),*(undefined4 *)(lVar11 + 0x18),
                 *(undefined4 *)(lVar11 + 0x1c),*(undefined4 *)(lVar11 + 0x20),lVar9,
                 *(undefined8 *)puVar1,0);
      puVar8 = PTR_DAT_04cbe0f0;
      puVar7 = PTR_DAT_04cbe0e8;
      puVar6 = PTR_DAT_04cbe0e0;
      puVar5 = PTR_DAT_04cbe0d8;
      puVar3 = PTR_DAT_04cbd1a0;
      puVar2 = PTR_DAT_04cb76e0;
      puVar1 = PTR_DAT_04caa108;
      lVar11 = *(long *)(param_1 + 0x20);
      if (lVar11 != 0) {
        UnityEngine_Material__SetVector_4383100
                  (*(undefined4 *)(lVar12 + 0x54),
                   *(float *)(lVar11 + 0x7c) - *(float *)(lVar11 + 0x88) * *(float *)(lVar11 + 0x6c)
                   ,0,0,lVar9,*(undefined8 *)PTR_DAT_04cbe0c8,0);
        UnityEngine_Material__SetFloat_4383048(_UNK_00e200b8,lVar9,*(undefined8 *)puVar2,0);
        UnityEngine_Material__SetColor_43830b0
                  (_UNK_00e205e8,_UNK_00e205e8,_UNK_00e20374,0x3f800000,lVar9,*(undefined8 *)puVar1,
                   0);
        UnityEngine_Material__SetFloat_4383048(_UNK_00e20180,lVar9,*(undefined8 *)puVar3,0);
        UnityEngine_Material__SetFloat_4383048(0x3f800000,lVar9,*(undefined8 *)puVar8,0);
        UnityEngine_Material__SetFloat_4383048
                  (*(float *)(lVar12 + 0x60) * _UNK_00e2009c,lVar9,*(undefined8 *)puVar7,0);
        UnityEngine_Material__SetColor_43830b0
                  (_UNK_00e205fc,_UNK_00e20830,_UNK_00e205fc,0x3f800000,lVar9,*(undefined8 *)puVar6,
                   0);
        UnityEngine_Material__SetFloat_4383048
                  (*(float *)(lVar12 + 0x60) * _UNK_00e2043c,lVar9,*(undefined8 *)puVar5,0);
        lVar11 = *(long *)(param_1 + 0x20);
        if (lVar11 != 0) {
          UnityEngine_Material__SetVector_4383100
                    (*(float *)(lVar12 + 0x60) * _UNK_00e20280,
                     *(float *)(lVar11 + 0x7c) -
                     *(float *)(lVar11 + 0x88) * *(float *)(lVar11 + 0x6c),0x3f800000,0x3f800000,
                     lVar9,*(undefined8 *)PTR_DAT_04cbe0f8,0);
          uVar10 = Dino_BusSand_View_WorldView__Quad_2405a40
                             (-(fVar13 + 4.0),0,*(float *)(lVar12 + 0x54) + -4.0,fVar13 + 4.0,0,
                              fVar14,0x3f800000,0x3f800000);
          lVar12 = Dino_BusSand_View_WorldView__MeshObject_2405c94
                             (param_1,*(undefined8 *)puVar4,uVar10,lVar9,0,1);
          if ((lVar12 != 0) &&
             (lVar12 = UnityEngine_Component__get_transform_43bcd18(lVar12,0), lVar12 != 0)) {
            if ((bRam0000000004fa8b33 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7a00,0);
              bRam0000000004fa8b33 = 1;
            }
            if (lVar12 != 0) {
              lVar12 = *(long *)(lVar12 + 0x10);
              if (lVar12 != 0) {
                if (pcRam0000000004fa8b98 == (code *)0x0) {
                  pcRam0000000004fa8b98 = (code *)FUN_02132f40(&UNK_00e52061);
                }
                (*pcRam0000000004fa8b98)(lVar12,&stack0xffffffffffffffd4);
                return;
              }
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

