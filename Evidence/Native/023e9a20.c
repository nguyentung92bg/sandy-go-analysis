/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Build
Dino_BusSand_App_UI_HomeStage_o* Dino_BusSand_App_UI_HomeStage__Build (Dino_BusSand_App_UI_HomeAtelier_o* atelier, UnityEngine_Camera_o* cam, System_Func_Nullable_Vector3___o* levelButtonTop, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Build
   Dino_BusSand_App_UI_HomeStage_o* Dino_BusSand_App_UI_HomeStage__Build
   (Dino_BusSand_App_UI_HomeAtelier_o* atelier, UnityEngine_Camera_o* cam,
   System_Func_Nullable_Vector3___o* levelButtonTop, const MethodInfo* method); */

long Dino_BusSand_App_UI_HomeStage__Build_22e9a20
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04cb74a8;
  if ((bRam0000000004f9c45a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cb74c0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb74a8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb74c8);
    FUN_02132f7c(PTR_DAT_04cb74d0);
    bRam0000000004f9c45a = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (**(char **)(lVar3 + 0xb8) == '\0') {
    return 0;
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = Dino_BusSand_View_ArtPack__get_Active_238dea0(0);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_GameAssets__FindShader_237d610(*(undefined8 *)PTR_DAT_04cb74d0,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      if (lVar3 != 0) {
        uVar4 = UnityEngine_Shader__get_isSupported_43755b4(lVar3,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
        UnityEngine_GameObject___ctor_43c20cc(lVar5,*(undefined8 *)PTR_DAT_04cb74c8,0);
        if (lVar5 != 0) {
          lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar5,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          if (lVar6 != 0) {
            lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
            UnityEngine_Transform__set_position_43d0f1c
                      (*(undefined4 *)(lVar7 + 4),*(undefined4 *)(lVar7 + 8),
                       *(undefined4 *)(lVar7 + 0xc),lVar6,0);
            lVar6 = UnityEngine_GameObject__AddComponent_object__275a54c
                              (lVar5,*(undefined8 *)PTR_DAT_04cb74c0);
            if (lVar6 != 0) {
              *(undefined8 *)(lVar6 + 0x20) = param_2;
              thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20),param_2);
              *(undefined8 *)(lVar6 + 0x28) = param_1;
              thunk_FUN_02134474((undefined8 *)(lVar6 + 0x28),param_1);
              *(undefined8 *)(lVar6 + 0x30) = param_3;
              thunk_FUN_02134474((undefined8 *)(lVar6 + 0x30),param_3);
              Dino_BusSand_App_UI_HomeStage__Init_22ee628(lVar6,lVar3);
              if ((*(long *)(lVar6 + 0x78) != 0) &&
                 (uVar4 = Dino_BusSand_App_UI_HomeBus__get_Valid_22dff50(*(long *)(lVar6 + 0x78),0),
                 (uVar4 & 1) != 0)) {
                return lVar6;
              }
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              UnityEngine_Object__Destroy_43c8114(lVar5,0);
              return 0;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    return 0;
  }
  return 0;
}

