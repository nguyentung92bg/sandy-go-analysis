/* IL2CPP: Dino.BusSand.View.VehicleView$$ApplyAuthoredMaterials
void Dino_BusSand_View_VehicleView__ApplyAuthoredMaterials (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$ApplyAuthoredMaterials
   void Dino_BusSand_View_VehicleView__ApplyAuthoredMaterials (Dino_BusSand_View_VehicleView_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__ApplyAuthoredMaterials_23f9e48
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  
  if ((bRam0000000004f9cad2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cb6dd8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb27f8);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    FUN_02132f7c(PTR_DAT_04cbc460);
    bRam0000000004f9cad2 = 1;
  }
  puVar2 = PTR_DAT_04cb27f8;
  if (*(char *)(param_5 + 0xe0) != '\0') {
    if (*(char *)(param_5 + 0x30) == '\0') {
      uVar1 = *(undefined1 *)(param_5 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = Dino_BusSand_View_MaterialLibrary__PaintColor_23bae24(uVar1,0);
    }
    else {
      param_4 = 0x3f800000;
      uVar12 = _UNK_00e2098c;
      param_2 = _UNK_00e20634;
      param_3 = _UNK_00e20114;
    }
    puVar3 = PTR_DAT_04cbbfb8;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar12 = Dino_BusSand_RenderQuality__ShaderColor_238b0d8(uVar12,param_2,param_3,param_4,0);
    lVar8 = *(long *)puVar3;
    *(undefined4 *)(param_5 + 0x154) = uVar12;
    uVar1 = *(undefined1 *)(param_5 + 0x28);
    *(undefined4 *)(param_5 + 0x158) = param_2;
    *(undefined4 *)(param_5 + 0x15c) = param_3;
    *(undefined4 *)(param_5 + 0x160) = 0;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_Core_SandPalette__Color_24196fc(uVar1,0);
    fVar13 = (float)(uVar5 >> 8 & 0xff) / 255.0;
    fVar14 = (float)(uVar5 >> 0x10 & 0xff) / 255.0;
    uVar12 = Dino_BusSand_RenderQuality__ShaderColor_238b0d8
                       ((float)(uVar5 & 0xff) / 255.0,fVar13,fVar14,(float)(uVar5 >> 0x18) / 255.0,0
                       );
    bVar4 = 0;
    *(undefined4 *)(param_5 + 0x164) = uVar12;
    *(float *)(param_5 + 0x168) = fVar13;
    *(float *)(param_5 + 0x16c) = fVar14;
    *(undefined4 *)(param_5 + 0x170) = 0;
    if (*(char *)(param_5 + 0x30) == '\0') {
      bVar4 = Dino_BusSand_View_VehicleView__get_LightPaint_23fa1dc(param_5);
    }
    *(byte *)(param_5 + 0x174) = bVar4 & 1;
    return;
  }
  lVar8 = *(long *)(param_5 + 0x48);
  plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cb6dd8,3);
  if (*(char *)(param_5 + 0x30) == '\0') {
    uVar1 = *(undefined1 *)(param_5 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = Dino_BusSand_View_MaterialLibrary__Paint_23baef0(uVar1,0);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = Dino_BusSand_View_MaterialLibrary__get_HiddenPaint_23bb1cc(0);
  }
  if (plVar6 == (long *)0x0) {
LAB_024fa1cc:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((lVar7 != 0) &&
     (lVar9 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
LAB_024fa1d0:
    uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar11,0);
  }
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar7;
    thunk_FUN_02134474(plVar6 + 4,lVar7);
    uVar11 = *(undefined8 *)(param_5 + 200);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
    if ((uVar10 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar7 = Dino_BusSand_View_MaterialLibrary__get_GlassEmpty_23bb4c8(0);
    }
    else {
      lVar7 = *(long *)(param_5 + 200);
    }
    if ((lVar7 != 0) &&
       (lVar9 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
    goto LAB_024fa1d0;
    if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
      plVar6[5] = lVar7;
      thunk_FUN_02134474(plVar6 + 5,lVar7);
      if (*(int *)(*(long *)PTR_DAT_04cbc460 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar7 = Dino_BusSand_View_VehicleView__get_DetailMaterial_23fa278();
      if ((lVar7 != 0) &&
         (lVar9 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
      goto LAB_024fa1d0;
      if (2 < *(uint *)(plVar6 + 3)) {
        plVar6[6] = lVar7;
        thunk_FUN_02134474(plVar6 + 6,lVar7);
        if (lVar8 != 0) {
          if (plVar6 == (long *)0x0) {
            uVar12 = 0;
          }
          else {
            uVar12 = (undefined4)plVar6[3];
          }
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224(0,plVar6,uVar12);
          }
          if ((bRam0000000004fa68be & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf67a0);
            FUN_02132f7c(PTR_DAT_04caef28);
            bRam0000000004fa68be = 1;
          }
          if (plVar6 != (long *)0x0) {
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar7 = *(long *)(lVar8 + 0x10);
            if (lVar7 != 0) {
              if (pcRam0000000004fa6900 == (code *)0x0) {
                pcRam0000000004fa6900 = (code *)FUN_02132f40(&UNK_00e3b0e1);
              }
                    /* WARNING: Could not recover jumptable at 0x0447354c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fa6900)(lVar7,plVar6,uVar12);
              return;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar8,0);
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_43c84f8
                    (0,*(undefined8 *)PTR_DAT_04caef28,0);
        }
        goto LAB_024fa1cc;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

