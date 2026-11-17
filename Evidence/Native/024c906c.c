/* IL2CPP: Dino.BusSand.View.MechanicLayer$$KeyProp
UnityEngine_Transform_o* Dino_BusSand_View_MechanicLayer__KeyProp (Dino_BusSand_View_MechanicLayer_o* __this, int32_t symbol, Dino_BusSand_View_VehicleView_o* v, UnityEngine_Transform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$KeyProp
   UnityEngine_Transform_o* Dino_BusSand_View_MechanicLayer__KeyProp
   (Dino_BusSand_View_MechanicLayer_o* __this, int32_t symbol, Dino_BusSand_View_VehicleView_o* v,
   UnityEngine_Transform_o* parent, const MethodInfo* method); */

long Dino_BusSand_View_MechanicLayer__KeyProp_23c906c
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,int param_5,
               long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if ((bRam0000000004f9c9e4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd088);
    FUN_02132f7c(PTR_DAT_04cbc250);
    FUN_02132f7c(PTR_DAT_04cb7928);
    bRam0000000004f9c9e4 = 1;
  }
  puVar1 = PTR_DAT_04cac5d0;
  lVar4 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0xd0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = 0;
  if ((0 < param_5) && (lVar4 != 0)) {
    if ((int)*(uint *)(lVar4 + 0x18) < param_5) {
      uVar9 = 0;
    }
    else {
      if (*(uint *)(lVar4 + 0x18) <= param_5 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar9 = *(undefined8 *)(lVar4 + (ulong)(param_5 - 1U) * 8 + 0x20);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if ((uVar5 & 1) == 0) {
    if (param_6 != 0) {
      fVar10 = (float)Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(param_6,0);
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      fVar14 = _UNK_00e20180;
      uVar19 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
      fVar17 = *(float *)(param_6 + 0xb0);
      fVar18 = (float)uVar19 * 0.76 * fVar17 * 0.85;
      fVar20 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20) * _UNK_00e1fe68 *
               fVar17 * _UNK_00e20180;
      fVar10 = fVar10 + fVar18;
      fVar17 = param_2 + (float)((ulong)uVar19 >> 0x20) * 0.76 * fVar17 * 0.85;
      param_3 = param_3 + fVar20;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar13 = Dino_BusSand_View_MechanicLayer__KeyFacing_23ca83c(0,1);
      puVar1 = PTR_DAT_04ca9ae8;
      fVar22 = *(float *)(param_6 + 0xb0);
      uVar19 = *(undefined8 *)PTR_DAT_04cb7928;
      if ((bRam0000000004f9c9e2 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb7798);
        FUN_02132f7c(PTR_DAT_04cad390);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9c9e2 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(param_7,0,0);
      if ((uVar5 & 1) == 0) {
        param_7 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
      }
      puVar2 = PTR_DAT_04cad390;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar4 = UnityEngine_Object__Instantiate_object__2805310(uVar9,param_7,0,*(undefined8 *)puVar2)
      ;
      puVar2 = PTR_DAT_04cb7798;
      if (lVar4 != 0) {
        UnityEngine_Object__set_name_43c72ec(lVar4,uVar19,0);
        lVar3 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                          (lVar4,1,*(undefined8 *)puVar2);
        if (lVar3 != 0) {
          uVar6 = *(uint *)(lVar3 + 0x18);
          if (0 < (int)uVar6) {
            lVar8 = 0;
            do {
              if (uVar6 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              lVar7 = *(long *)(lVar3 + 0x20 + lVar8 * 8);
              if (lVar7 == 0) goto LAB_024c9064;
              UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar7,0,0);
              UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar7,0,0);
              uVar6 = *(uint *)(lVar3 + 0x18);
              lVar8 = lVar8 + 1;
            } while ((int)lVar8 < (int)uVar6);
          }
          lVar4 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
          if (lVar4 != 0) {
            UnityEngine_Transform__SetPositionAndRotation_43d2064
                      (fVar10,fVar17,param_3,uVar13,param_2,fVar18,fVar20,lVar4,0);
            uVar9 = UnityEngine_Transform__get_parent_43d0d70(lVar4,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
            fVar10 = 1.0;
            if ((uVar5 & 1) != 0) {
              lVar3 = UnityEngine_Transform__get_parent_43d0d70(lVar4,0);
              if (lVar3 == 0) goto LAB_024c9064;
              fVar17 = (float)UnityEngine_Transform__get_lossyScale_43d4cf0(lVar3,0);
              fVar10 = _UNK_00e20a08;
              if (_UNK_00e20a08 <= fVar17) {
                fVar10 = fVar17;
              }
            }
            if (cRam0000000004f9b65e == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65e = '\x01';
            }
            fVar10 = (fVar22 * fVar14) / fVar10;
            lVar3 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
            UnityEngine_Transform__set_localScale_43d1be0
                      (fVar10 * *(float *)(lVar3 + 0xc),fVar10 * *(float *)(lVar3 + 0x10),
                       fVar10 * *(float *)(lVar3 + 0x14),lVar4,0);
            return lVar4;
          }
        }
      }
LAB_024c9064:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cbd088 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = Dino_BusSand_View_PropKit__Key_23dd804(param_5,0);
    if (param_6 != 0) {
      fVar10 = (float)Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(param_6,0);
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      fVar22 = *(float *)(param_4 + 0x50);
      fVar20 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
      uVar19 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
      fVar17 = 0.5;
      fVar18 = 0.5;
      fVar14 = param_2;
      if (*(int *)(*(long *)PTR_DAT_04cbc250 + 0xe4) == 0) {
        fVar17 = 0.5;
        fVar18 = 0.5;
        thunk_FUN_0218fdac();
      }
      param_2 = param_2 + (float)((ulong)uVar19 >> 0x20) * fVar22 * 0.5;
      fVar11 = (float)Dino_BusSand_View_StageLayout__get_FacingRotation_23e8a38(0);
      fVar16 = 0.0;
      fVar21 = fVar18;
      fVar15 = _UNK_00e2082c;
      fVar12 = (float)UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,_UNK_00e2082c,0,0);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      lVar4 = Dino_BusSand_View_MechanicLayer__Prop_23c2534
                        (CONCAT44(param_2,fVar10 + (float)uVar19 * fVar22 * 0.5),param_2,
                         param_3 + fVar20 * fVar22 * 0.5,
                         (fVar14 * fVar16 + fVar18 * fVar12 + fVar11 * fVar21) - fVar17 * fVar15,
                         (fVar17 * fVar12 + fVar18 * fVar15 + fVar14 * fVar21) - fVar11 * fVar16,
                         (fVar11 * fVar15 + fVar18 * fVar16 + fVar17 * fVar21) - fVar14 * fVar12,
                         ((fVar18 * fVar21 - fVar11 * fVar12) - fVar14 * fVar15) - fVar17 * fVar16,
                         param_4,uVar9,param_7,0);
      return lVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

