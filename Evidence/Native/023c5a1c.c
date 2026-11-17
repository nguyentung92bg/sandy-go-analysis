/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$Create
Dino_BusSand_App_UI_GuideDimHoles_o* Dino_BusSand_App_UI_GuideDimHoles__Create (UnityEngine_Transform_o* parent, float alpha, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$Create
   Dino_BusSand_App_UI_GuideDimHoles_o* Dino_BusSand_App_UI_GuideDimHoles__Create
   (UnityEngine_Transform_o* parent, float alpha, const MethodInfo* method); */

long Dino_BusSand_App_UI_GuideDimHoles__Create_22c5a1c(float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  
  puVar2 = PTR_DAT_04cad748;
  puVar1 = PTR_DAT_04cad730;
  if ((bRam0000000004f9c357 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6898);
    FUN_02132f7c(PTR_DAT_04cb68a0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb68a8);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cb68b0);
    FUN_02132f7c(PTR_DAT_04cb68b8);
    FUN_02132f7c(PTR_DAT_04cb68c0);
    FUN_02132f7c(PTR_DAT_04cb68c8);
    bRam0000000004f9c357 = 1;
  }
  plVar5 = (long *)FUN_02133068(*(undefined8 *)puVar2,1);
  uVar9 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar6 = System_Type__GetTypeFromHandle_483f0b4(uVar9,0);
  if (plVar5 != (long *)0x0) {
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
      uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar9,0);
    }
    puVar2 = PTR_DAT_04cb68c8;
    puVar1 = PTR_DAT_04caa070;
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar5[4] = lVar6;
    thunk_FUN_02134474(plVar5 + 4,lVar6);
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    UnityEngine_GameObject___ctor_43c2310(lVar6,*(undefined8 *)puVar2,plVar5,0);
    if (((param_2 != 0) &&
        (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(param_2,0), lVar7 != 0)) &&
       (uVar4 = UnityEngine_GameObject__get_layer_43c1118(lVar7,0), lVar6 != 0)) {
      UnityEngine_GameObject__set_layer_43c11cc(lVar6,uVar4,0);
      plVar5 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar6,0);
      if (plVar5 != (long *)0x0) {
        if (*plVar5 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(plVar5);
        }
        UnityEngine_Transform__SetParent_43d1e34(plVar5,param_2,0,0);
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        puVar2 = PTR_DAT_04cb68a0;
        puVar1 = PTR_DAT_04cacfc0;
        UnityEngine_RectTransform__set_anchorMin_43cf5e4
                  (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                   (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar5,0);
        if (cRam0000000004f9b949 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b949 = '\x01';
        }
        UnityEngine_RectTransform__set_anchorMax_43cf768
                  (*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
                   *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),plVar5,0);
        UnityEngine_RectTransform__set_offsetMin_43cfe84(0xc57a0000,0xc57a0000,plVar5,0);
        UnityEngine_RectTransform__set_offsetMax_43d0018(0x457a0000,0x457a0000,plVar5,0);
        plVar5 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                   (lVar6,*(undefined8 *)puVar2);
        puVar1 = PTR_DAT_04cb6898;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x2c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2d0));
          lVar6 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar6,*(undefined8 *)puVar1);
          puVar3 = PTR_DAT_04cb68c0;
          puVar2 = PTR_DAT_04cb68a8;
          puVar1 = PTR_DAT_04ca9ae8;
          if (lVar6 != 0) {
            *(long *)(lVar6 + 0x58) = (long)plVar5;
            thunk_FUN_02134474((long *)(lVar6 + 0x58),plVar5);
            uVar9 = UnityEngine_Resources__Load_object__2891e2c
                              (*(undefined8 *)puVar3,*(undefined8 *)puVar2);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
            if ((uVar8 & 1) == 0) {
              fVar11 = 1.0;
              if (param_1 <= 1.0) {
                fVar11 = param_1;
              }
              fVar12 = 0.0;
              if (0.0 <= param_1) {
                fVar12 = fVar11 * 0.5;
              }
              (**(code **)(*plVar5 + 0x2a8))(0,0,0,fVar12,plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
              return lVar6;
            }
            lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab588);
            UnityEngine_Material___ctor_437b5a8(lVar7,uVar9,0);
            if (lVar7 != 0) {
              UnityEngine_Object__set_name_43c72ec(lVar7,*(undefined8 *)PTR_DAT_04cb68b0,0);
              plVar10 = (long *)(lVar6 + 0x50);
              *plVar10 = lVar7;
              thunk_FUN_02134474(plVar10,lVar7);
              if (*plVar10 != 0) {
                fVar11 = 1.0;
                if (param_1 <= 1.0) {
                  fVar11 = param_1;
                }
                fVar12 = 0.0;
                if (0.0 <= param_1) {
                  fVar12 = fVar11;
                }
                UnityEngine_Material__SetColor_43830b0
                          (0,0,0,fVar12,*plVar10,*(undefined8 *)PTR_DAT_04cb68b8,0);
                (**(code **)(*plVar5 + 0x348))
                          (plVar5,*(undefined8 *)(lVar6 + 0x50),*(undefined8 *)(*plVar5 + 0x350));
                *(float *)(lVar6 + 0x40) = fVar12;
                *(float *)(lVar6 + 0x44) = fVar12;
                return lVar6;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

