/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$PlaceWorldTags
void Dino_BusSand_App_UI_HudPanel__PlaceWorldTags (Dino_BusSand_App_UI_HudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$PlaceWorldTags
   void Dino_BusSand_App_UI_HudPanel__PlaceWorldTags (Dino_BusSand_App_UI_HudPanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__PlaceWorldTags_230a8a8(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c512 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabd80);
    FUN_02132f7c(PTR_DAT_04cb6a88);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c512 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  lVar5 = 0;
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_0240af48;
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    lVar5 = 0;
    if ((uVar3 & 1) != 0) {
      if ((*(long *)(param_1 + 0x40) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x38), lVar5 == 0)) goto LAB_0240af48;
      lVar5 = *(long *)(lVar5 + 0x30);
    }
  }
  lStack_80 = lVar5;
  thunk_FUN_02134474(&lStack_80);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  lVar5 = 0;
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_0240af48;
    lVar5 = Dino_BusSand_App_Gameplay_GameplayController__get_Cam_229b328
                      (*(long *)(param_1 + 0x40),0);
  }
  if (lStack_80 == 0) {
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar3 = UnityEngine_Screen__get_width_436a6a0(0);
  lVar4 = UnityEngine_Screen__get_height_436a6c8(0);
  uVar3 = uVar3 & 0xffffffff | lVar4 << 0x20;
  if ((lStack_80 == *(long *)(param_1 + 0xd0)) && (uVar3 == *(ulong *)(param_1 + 0xd8))) {
    return;
  }
  *(long *)(param_1 + 0xd0) = lStack_80;
  thunk_FUN_02134474();
  lVar4 = *(long *)puVar1;
  *(ulong *)(param_1 + 0xd8) = uVar3;
  uVar6 = *(undefined8 *)(param_1 + 0x110);
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_0240af48;
    lVar4 = UnityEngine_Component__GetComponentInParent_object__26f9d74
                      (*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_04cabd80);
    *(long *)(param_1 + 0x110) = lVar4;
    thunk_FUN_02134474(param_1 + 0x110,lVar4);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x110);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
  fVar7 = 1.0;
  if ((uVar3 & 1) != 0) {
    if ((lVar4 == 0) || (lVar4 = UnityEngine_Canvas__get_rootCanvas_4680a14(lVar4,0), lVar4 == 0))
    goto LAB_0240af48;
    fVar7 = (float)UnityEngine_Canvas__get_scaleFactor_467f504(lVar4,0);
  }
  if ((lVar5 != 0) &&
     (iVar2 = UnityEngine_Camera__get_pixelHeight_435ad54(lVar5,0), lVar5 = lStack_80,
     lStack_80 != 0)) {
    fVar8 = (float)func_0x049b5430(*(float *)(lStack_80 + 0x30) * 0.5 * _UNK_00e20a74);
    uVar13 = *(undefined4 *)(lVar5 + 0x28);
    uVar16 = *(undefined4 *)(lVar5 + 0x2c);
    uVar11 = *(undefined4 *)(lVar5 + 0x24);
    uStack_78 = CONCAT44(uStack_78._4_4_,((float)iVar2 / 2.0) / fVar8);
    uVar9 = UnityEngine_Quaternion__Inverse_43aedbc(*(undefined4 *)(lVar5 + 0x20),0);
    uStack_90 = CONCAT44(uVar11,uVar9);
    uStack_88 = CONCAT44(uVar16,uVar13);
    if (lStack_80 != 0) {
      uVar13 = 0;
      uVar11 = 0x3f800000;
      uVar9 = Dino_BusSand_View_StageLayout__BoardPoint_23e89d4(0,0x3f800000,0,lStack_80,0);
      if (lStack_80 != 0) {
        uVar14 = 0;
        uVar12 = 0x3f800000;
        uVar16 = Dino_BusSand_View_StageLayout__BoardPoint_23e89d4
                           (0x3f800000,0x3f800000,0,lStack_80,0);
        if (*(int *)(*(long *)PTR_DAT_04cb6a88 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar8 = (float)Dino_BusSand_App_UI_HudPanel___PlaceWorldTags_g__Px_44_0_230af4c
                                 (uVar9,uVar11,uVar13,uVar16,uVar12,uVar14,&uStack_90);
        if (lStack_80 != 0) {
          fVar19 = 1.0;
          fVar21 = 0.0;
          fVar28 = *(float *)(lStack_80 + 100);
          lVar5 = *(long *)(param_1 + 0xc0);
          fVar10 = 1.0;
          if (1.0 <= fVar8 / fVar7) {
            fVar10 = fVar8 / fVar7;
          }
          fVar8 = (float)Dino_BusSand_View_StageLayout__BoardPoint_23e89d4(0x3f000000,lStack_80,0);
          if (lStack_80 != 0) {
            fVar18 = *(float *)(lStack_80 + 0x8c);
            fVar22 = *(float *)(lStack_80 + 0x90);
            fVar26 = *(float *)(lStack_80 + 0x84);
            fVar27 = *(float *)(lStack_80 + 0x88);
            fVar24 = *(float *)(lStack_80 + 0x94);
            fVar25 = *(float *)(lStack_80 + 0x80);
            fVar20 = *(float *)(lStack_80 + 0x6c);
            uVar3 = (ulong)(uint)-fVar22;
            fVar15 = -fVar24;
            fVar17 = fVar25;
            uVar9 = UnityEngine_Quaternion__LookRotation_43af2a0
                              (-fVar18,uVar3,fVar15,fVar25,fVar26,fVar27,0);
            if (lVar5 != 0) {
              fVar28 = fVar28 / fVar10;
              fVar10 = fVar28 * 22.0 + fVar20 * 0.5;
              UnityEngine_Transform__SetPositionAndRotation_43d2064
                        (fVar18 * 0.25 + fVar8 + fVar25 * fVar10,
                         fVar22 * 0.25 + fVar19 + fVar26 * fVar10,
                         fVar21 + fVar27 * fVar10 + fVar24 * 0.25,uVar9,uVar3 & 0xffffffff,fVar15,
                         fVar17,lVar5,0);
              lVar5 = *(long *)(param_1 + 0xc0);
              if (cRam0000000004f9b65e == '\0') {
                FUN_02132f7c(PTR_DAT_04caa208);
                cRam0000000004f9b65e = '\x01';
              }
              puVar1 = PTR_DAT_04caa208;
              if (lVar5 != 0) {
                lVar4 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
                UnityEngine_Transform__set_localScale_43d1be0
                          (fVar28 * *(float *)(lVar4 + 0xc),fVar28 * *(float *)(lVar4 + 0x10),
                           fVar28 * *(float *)(lVar4 + 0x14),lVar5,0);
                if (lStack_80 != 0) {
                  fVar19 = *(float *)(lStack_80 + 0xf4);
                  fVar28 = *(float *)(lStack_80 + 0xf0) + _UNK_00e200f8;
                  fVar21 = (*(float *)(lStack_80 + 0xd4) + *(float *)(lStack_80 + 0xd8)) * 0.5;
                  fVar8 = (fVar28 + fVar19) * 0.5;
                  fVar10 = (float)Dino_BusSand_App_UI_HudPanel___PlaceWorldTags_g__Px_44_0_230af4c
                                            (fVar21 + -1.0,0,fVar8,fVar21 + 1.0,0,fVar8,&uStack_90);
                  lVar5 = *(long *)(param_1 + 200);
                  fVar8 = 1.0;
                  if (1.0 <= fVar10 / fVar7) {
                    fVar8 = fVar10 / fVar7;
                  }
                  fVar8 = 2.0 / fVar8;
                  fVar10 = ((fVar28 - fVar19) + fVar8 * -8.0) / (fVar8 * 112.0);
                  fVar7 = 1.0;
                  if (fVar10 <= 1.0) {
                    fVar7 = fVar10;
                  }
                  fVar19 = _UNK_00e20994;
                  if (_UNK_00e20994 <= fVar10) {
                    fVar19 = fVar7;
                  }
                  if (cRam0000000004f9c54e == '\0') {
                    FUN_02132f7c(PTR_DAT_04caa208);
                    cRam0000000004f9c54e = '\x01';
                  }
                  lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
                  uVar11 = *(undefined4 *)(lVar4 + 0x24);
                  uVar23 = *(uint *)(lVar4 + 0x28);
                  uVar9 = *(undefined4 *)(lVar4 + 0x2c);
                  if (cRam0000000004f9c41d == '\0') {
                    FUN_02132f7c(puVar1);
                    cRam0000000004f9c41d = '\x01';
                    lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
                  }
                  uVar3 = (ulong)uVar23;
                  uVar13 = *(undefined4 *)(lVar4 + 0x48);
                  uVar11 = UnityEngine_Quaternion__LookRotation_43af2a0
                                     (uVar11,uVar3,uVar9,uVar13,*(undefined4 *)(lVar4 + 0x4c),
                                      *(undefined4 *)(lVar4 + 0x50),0);
                  if (lVar5 != 0) {
                    /* try { // try from 0240aea0 to 0250afbb has its CatchHandler @ 0240aea0
                       catch() { ... } // from try @ 0240aea0 with catch @ 0240aea0
                       catch() { ... } // from try @ 0240afc4 with catch @ 0240aea0
                       catch() { ... } // from try @ 0240b094 with catch @ 0240aea0
                       catch() { ... } // from try @ 0240b0c0 with catch @ 0240aea0 */
                    UnityEngine_Transform__SetPositionAndRotation_43d2064
                              (fVar21,_UNK_00e20844,fVar28 - fVar8 * (fVar19 * 56.0 + 4.0),uVar11,
                               uVar3 & 0xffffffff,uVar9,uVar13,lVar5,0);
                    lVar5 = *(long *)(param_1 + 200);
                    if (cRam0000000004f9b65e == '\0') {
                      FUN_02132f7c(PTR_DAT_04caa208);
                      cRam0000000004f9b65e = '\x01';
                    }
                    if (lVar5 != 0) {
                      fVar8 = fVar8 * fVar19;
                      lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
                      UnityEngine_Transform__set_localScale_43d1be0
                                (fVar8 * *(float *)(lVar4 + 0xc),fVar8 * *(float *)(lVar4 + 0x10),
                                 fVar8 * *(float *)(lVar4 + 0x14),lVar5,0);
                      if (*(long *)(param_1 + 0xb8) != 0) {
                        UnityEngine_Behaviour__set_enabled_43bc50c(*(long *)(param_1 + 0xb8),1,0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0240af48:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

