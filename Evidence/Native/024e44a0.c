/* IL2CPP: Dino.BusSand.View.RoadLoopDebug$$Update
void Dino_BusSand_View_RoadLoopDebug__Update (Dino_BusSand_View_RoadLoopDebug_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.RoadLoopDebug$$Update
   void Dino_BusSand_View_RoadLoopDebug__Update (Dino_BusSand_View_RoadLoopDebug_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_RoadLoopDebug__Update_23e44a0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 in_s3;
  float fVar15;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = Dino_BusSand_View_RoadLoopConfig__get_Active_23e4040();
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  Dino_BusSand_View_RoadLoopDebug__UpdateLine_23e44f0(param_1,*(undefined1 *)(lVar4 + 0x2c));
  if ((bRam0000000004f9ca7a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    FUN_02132f7c(PTR_DAT_04cbc250);
    FUN_02132f7c(PTR_DAT_04cafc38);
    FUN_02132f7c(PTR_DAT_04caf3d0);
    bRam0000000004f9ca7a = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  uStack_8c = 0;
  if (lVar4 != 0) {
    if ((*(char *)(lVar4 + 0x2d) == '\0') ||
       (uVar5 = Dino_BusSand_View_ArtPack__get_Active_238dea0(0), (uVar5 & 1) == 0)) {
      plVar8 = (long *)(param_1 + 0x38);
      lVar4 = *plVar8;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (*plVar8 != 0) {
        uVar6 = UnityEngine_Component__get_gameObject_43bcde8(*plVar8,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        UnityEngine_Object__Destroy_43c8114(uVar6,0);
        plVar7 = (long *)(param_1 + 0x40);
        if (*plVar7 != 0) {
          uVar6 = UnityEngine_Component__get_gameObject_43bcde8(*plVar7,0);
          UnityEngine_Object__Destroy_43c8114(uVar6,0);
          *plVar7 = 0;
          thunk_FUN_02134474(plVar7,0);
          *plVar8 = 0;
          if (iRam00000000051c1b10 != 0) {
            FUN_02220bf0(1L << ((ulong)plVar8 >> 0xc & 0x3f),
                         ((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
          }
          return;
        }
      }
    }
    else {
      plVar8 = (long *)(param_1 + 0x38);
      lVar9 = *plVar8;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
      if (((uVar5 & 1) != 0) || (*(int *)(param_1 + 0x48) != *(int *)(lVar4 + 0x30))) {
        lVar9 = *plVar8;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
        if ((uVar5 & 1) != 0) {
          if (*plVar8 == 0) goto LAB_024e4e14;
          uVar6 = UnityEngine_Component__get_gameObject_43bcde8(*plVar8,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          UnityEngine_Object__Destroy_43c8114(uVar6,0);
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_024e4e14;
          uVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x40),0);
          UnityEngine_Object__Destroy_43c8114(uVar6,0);
        }
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar4 + 0x30);
        uVar6 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
        uVar1 = *(undefined4 *)(param_1 + 0x48);
        if (*(int *)(*(long *)PTR_DAT_04cbbfb8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cbbfb8);
        }
        uVar3 = Dino_BusSand_Core_SandPalette__Id_2419278(*(undefined8 *)PTR_DAT_04cafc38,0);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_024e4e14;
        uVar6 = Dino_BusSand_View_PackVehicle__Create_23d7220
                          (0x3f000000,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0xb8),uVar6,uVar1,
                           uVar3,1,0);
        *(undefined8 *)(param_1 + 0x38) = uVar6;
        thunk_FUN_02134474(plVar8,uVar6);
        uVar6 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
        uVar1 = *(undefined4 *)(param_1 + 0x48);
        uVar3 = Dino_BusSand_Core_SandPalette__Id_2419278(*(undefined8 *)PTR_DAT_04caf3d0,0);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_024e4e14;
        uVar6 = Dino_BusSand_View_PackVehicle__Create_23d7220
                          (0x3f000000,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0xb8),uVar6,uVar1,
                           uVar3,1,0);
        puVar10 = (undefined8 *)(param_1 + 0x40);
        *puVar10 = uVar6;
        thunk_FUN_02134474(puVar10,uVar6);
        uVar6 = *(undefined8 *)(param_1 + 0x38);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
        if ((uVar5 & 1) != 0) {
          return;
        }
        uVar6 = *puVar10;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
        if ((uVar5 & 1) != 0) {
          return;
        }
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        Dino_BusSand_View_StageLayout__ReturnLengths_23e4e84
                  (*(long *)(param_1 + 0x20),(long)&uStack_68 + 4,&uStack_68);
        if (*(char *)(lVar4 + 0x38) == '\0') {
          fVar11 = *(float *)(lVar4 + 0x34);
        }
        else {
          fVar15 = *(float *)(param_1 + 0x4c);
          fVar11 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
          in_s3 = 0xbf800000;
          fVar15 = fVar15 + fVar11 / 3.0;
          *(float *)(param_1 + 0x4c) = fVar15;
          fVar15 = fVar15 - ((float)(int)(fVar15 * 0.5) + (float)(int)(fVar15 * 0.5));
          fVar11 = 2.0;
          if (fVar15 <= 2.0) {
            fVar11 = fVar15;
          }
          fVar12 = -1.0;
          if (0.0 <= fVar15) {
            fVar12 = fVar11 + -1.0;
          }
          fVar11 = 1.0 - ABS(fVar12);
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          fVar11 = fVar11 * (float)uStack_68;
          Dino_BusSand_View_StageLayout__ReturnPoseAt_23e4fcc
                    (fVar11,*(long *)(param_1 + 0x20),&uStack_78,(long)&uStack_80 + 4);
          if (*plVar8 != 0) {
            lVar4 = UnityEngine_Component__get_transform_43bcd18(*plVar8,0);
            uVar3 = uStack_70;
            uVar5 = uStack_78;
            uVar1 = uStack_78._4_4_;
            fVar15 = uStack_80._4_4_;
            if (*(int *)(*(long *)PTR_DAT_04cbc250 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04cbc250);
            }
            uVar14 = 0;
            fVar15 = (fVar15 + 90.0) * _UNK_00e20a74;
            uVar13 = UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,fVar15,0,0);
            if (lVar4 != 0) {
              UnityEngine_Transform__SetPositionAndRotation_43d2064
                        (uVar5 & 0xffffffff,uVar1,uVar3,uVar13,fVar15,uVar14,in_s3,lVar4,0);
              if (*(long *)(param_1 + 0x20) != 0) {
                Dino_BusSand_View_StageLayout__ReturnPoseAt_23e4fcc
                          (uStack_68._4_4_ - fVar11,*(long *)(param_1 + 0x20),&uStack_88,&uStack_8c)
                ;
                if (*(long *)(param_1 + 0x40) != 0) {
                  lVar4 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0x40),0);
                  UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,0);
                  if (lVar4 != 0) {
                    if ((bRam0000000004fa8b44 & 1) == 0) {
                      FUN_02132f7c(PTR_DAT_04cf7a00,0);
                      bRam0000000004fa8b44 = 1;
                    }
                    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    lVar4 = *(long *)(lVar4 + 0x10);
                    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
                    }
                    if (pcRam0000000004fa8c18 == (code *)0x0) {
                      pcRam0000000004fa8c18 = (code *)FUN_02132f40(&UNK_00e21de3);
                    }
                    (*pcRam0000000004fa8c18)
                              (lVar4,&stack0xffffffffffffffd4,&stack0xffffffffffffffc4);
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
LAB_024e4e14:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

