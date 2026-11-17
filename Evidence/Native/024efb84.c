/* IL2CPP: Dino.BusSand.View.VehicleBatch$$KindFor
Dino_BusSand_View_VehicleBatch_Kind_o* Dino_BusSand_View_VehicleBatch__KindFor (Dino_BusSand_View_VehicleBatch_o* __this, int32_t k, Dino_BusSand_ModelEntry_o* model, UnityEngine_Vector4_o meta, float arrowScale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleBatch$$KindFor
   Dino_BusSand_View_VehicleBatch_Kind_o* Dino_BusSand_View_VehicleBatch__KindFor
   (Dino_BusSand_View_VehicleBatch_o* __this, int32_t k, Dino_BusSand_ModelEntry_o* model,
   UnityEngine_Vector4_o meta, float arrowScale, const MethodInfo* method); */

long Dino_BusSand_View_VehicleBatch__KindFor_23efb84
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6,uint param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  uint uStack_98;
  
  if ((bRam0000000004f9cab8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd2d8);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cbdda8);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb27f8);
    FUN_02132f7c(PTR_DAT_04cbc2c8);
    FUN_02132f7c(PTR_DAT_04cbcbb0);
    FUN_02132f7c(PTR_DAT_04cbddb0);
    FUN_02132f7c(PTR_DAT_04cbddb8);
    FUN_02132f7c(PTR_DAT_04cbddc0);
    FUN_02132f7c(PTR_DAT_04cbcbc0);
    FUN_02132f7c(PTR_DAT_04cbddc8);
    FUN_02132f7c(PTR_DAT_04cbddd0);
    FUN_02132f7c(PTR_DAT_04cbddd8);
    FUN_02132f7c(PTR_DAT_04cbdd80);
    FUN_02132f7c(PTR_DAT_04cbdde0);
    bRam0000000004f9cab8 = 1;
  }
  plVar12 = (long *)PTR_DAT_04cab208;
  lVar11 = *(long *)(param_6 + 0x20);
  if (lVar11 == 0) goto LAB_024f02e4;
  if (*(uint *)(lVar11 + 0x18) <= param_7) goto LAB_024f02e8;
  lVar11 = *(long *)(lVar11 + (long)(int)param_7 * 8 + 0x20);
  if (lVar11 != 0) {
    return lVar11;
  }
  if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar11 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
  puVar2 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
  if ((uVar4 & 1) == 0) {
LAB_024efd64:
    puVar3 = PTR_DAT_04cb27f8;
    if (*(int *)(*(long *)PTR_DAT_04cb27f8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9c49a == '\0') {
      FUN_02132f7c(PTR_DAT_04cb27f8);
      cRam0000000004f9c49a = '\x01';
    }
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar3;
    }
    uVar10 = 0x22;
    lVar6 = param_8;
    if (**(int **)(lVar7 + 0xb8) != 0) {
      uVar10 = 0;
    }
  }
  else {
    if ((param_8 == 0) ||
       (uVar5 = System_String__Concat_46c82e0
                          (*(undefined8 *)(param_8 + 0x10),*(undefined8 *)PTR_DAT_04cbddc8,0),
       lVar11 == 0)) goto LAB_024f02e4;
    lVar6 = Dino_BusSand_GameAssets__GetModel_237d214(lVar11,uVar5,0);
    if (lVar6 == 0) goto LAB_024efd64;
    uVar10 = 0;
  }
  if (*(int *)(*(long *)PTR_DAT_04cbc2c8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_View_VehicleBatch__MergedMesh_23f02ec
                    (param_1,param_2,param_3,param_4,param_5,lVar6,uVar10,1);
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbdda8);
  Dino_BusSand_View_VehicleBatch_Kind___ctor_23f1240();
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x10) = uVar5;
    thunk_FUN_02134474((undefined8 *)(lVar7 + 0x10),uVar5);
    uVar5 = Dino_BusSand_View_VehicleBatch__ShadowHull_23f1308(lVar6,0xb);
    *(undefined8 *)(lVar7 + 0x30) = uVar5;
    thunk_FUN_02134474();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
    lVar6 = 0;
    if ((uVar4 & 1) != 0) {
      if ((param_8 == 0) ||
         (uVar5 = System_String__Concat_46c82e0
                            (*(undefined8 *)(param_8 + 0x10),*(undefined8 *)PTR_DAT_04cbddb0,0),
         lVar11 == 0)) goto LAB_024f02e4;
      lVar6 = Dino_BusSand_GameAssets__GetModel_237d214(lVar11,uVar5,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
    lVar13 = 0;
    if ((uVar4 & 1) != 0) {
      if ((param_8 == 0) ||
         (uVar5 = System_String__Concat_46c82e0
                            (*(undefined8 *)(param_8 + 0x10),*(undefined8 *)PTR_DAT_04cbddc0,0),
         lVar11 == 0)) goto LAB_024f02e4;
      lVar13 = Dino_BusSand_GameAssets__GetModel_237d214(lVar11,uVar5,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
    if ((uVar4 & 1) != 0) {
      if ((param_8 == 0) ||
         (uVar5 = System_String__Concat_46c82e0
                            (*(undefined8 *)(param_8 + 0x10),*(undefined8 *)PTR_DAT_04cbddd8,0),
         lVar11 == 0)) goto LAB_024f02e4;
      lVar8 = Dino_BusSand_GameAssets__GetModel_237d214(lVar11,uVar5,0);
      if ((lVar6 != 0) && ((lVar13 != 0 && (lVar8 != 0)))) {
        uVar5 = System_String__Concat_46c82e0
                          (*(undefined8 *)(param_8 + 0x10),*(undefined8 *)PTR_DAT_04cbddb8,0);
        lVar11 = Dino_BusSand_GameAssets__GetModel_237d214(lVar11,uVar5,0);
        puVar3 = PTR_DAT_04cb27f8;
        if (*(int *)(*(long *)PTR_DAT_04cb27f8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb27f8);
        }
        if (cRam0000000004f9c49a == '\0') {
          FUN_02132f7c(PTR_DAT_04cb27f8);
          cRam0000000004f9c49a = '\x01';
        }
        lVar9 = *(long *)puVar3;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar9 = *(long *)puVar3;
        }
        plVar12 = (long *)PTR_DAT_04cab208;
        lVar1 = lVar6;
        if (lVar11 != 0) {
          lVar1 = lVar11;
        }
        if (**(int **)(lVar9 + 0xb8) != 0) {
          lVar1 = lVar6;
        }
        if (*(int *)(*(long *)PTR_DAT_04cbc2c8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = Dino_BusSand_View_VehicleBatch__MergedMesh_23f02ec
                          (param_1,param_2,param_3,param_4,param_5,lVar1,0,0);
        *(undefined8 *)(lVar7 + 0x18) = uVar5;
        thunk_FUN_02134474();
        uVar5 = Dino_BusSand_View_VehicleBatch__MergedMesh_23f02ec
                          (param_1,param_2,param_3,param_4,param_5,lVar13,0,0);
        *(undefined8 *)(lVar7 + 0x20) = uVar5;
        thunk_FUN_02134474();
        uVar5 = Dino_BusSand_View_VehicleBatch__MergedMesh_23f02ec
                          (param_1,param_2,param_3,param_4,param_5,lVar8,0,0);
        *(undefined8 *)(lVar7 + 0x28) = uVar5;
        thunk_FUN_02134474();
      }
    }
    if (*(int *)(*plVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    uVar5 = 0;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*plVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar11 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
      if (lVar11 == 0) goto LAB_024f02e4;
      uVar5 = Dino_BusSand_GameAssets__GetMaterial_237c614(lVar11,*(undefined8 *)PTR_DAT_04cbdde0,0)
      ;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*plVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)PTR_DAT_04cbdd80,0);
      lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab588);
      UnityEngine_Material___ctor_437b5a8(lVar11,uVar5,0);
    }
    else {
      lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab588);
      UnityEngine_Material___ctor_437b63c(lVar11,uVar5,0);
    }
    plVar12 = (long *)(lVar7 + 0x38);
    *plVar12 = lVar11;
    thunk_FUN_02134474(plVar12,lVar11);
    if (*plVar12 != 0) {
      UnityEngine_Material__set_enableInstancing_437dbe4(*plVar12,1,0);
      lVar11 = *plVar12;
      uStack_a8 = *(undefined8 *)PTR_DAT_04cbd2d8;
      uStack_a0 = 0xffffffffffffffff;
      uStack_98 = param_7;
      uVar5 = System_Enum__ToString_4863070(&uStack_a8,0);
      uVar5 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbddd0,uVar5,0);
      if (lVar11 != 0) {
        UnityEngine_Object__set_name_43c72ec(lVar11,uVar5,0);
        if (*plVar12 != 0) {
          UnityEngine_Material__SetFloat_4383048(param_1,*plVar12,*(undefined8 *)PTR_DAT_04cbcbb0,0)
          ;
          if (*plVar12 != 0) {
            UnityEngine_Material__SetFloat_4383048
                      (param_2,*plVar12,*(undefined8 *)PTR_DAT_04cbcbc0,0);
            lVar11 = *(long *)(param_6 + 0x20);
            if (lVar11 != 0) {
              if (param_7 < *(uint *)(lVar11 + 0x18)) {
                plVar12 = (long *)(lVar11 + (long)(int)param_7 * 8 + 0x20);
                *plVar12 = lVar7;
                thunk_FUN_02134474(plVar12,lVar7);
                return lVar7;
              }
LAB_024f02e8:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
          }
        }
      }
    }
  }
LAB_024f02e4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

