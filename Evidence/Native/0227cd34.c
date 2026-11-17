/* IL2CPP: Dino.BusSand.App.RenderSetup$$ApplyGameplayEnvironment
UnityEngine_Light_o* Dino_BusSand_App_RenderSetup__ApplyGameplayEnvironment (UnityEngine_Transform_o* parent, bool gp3, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.RenderSetup$$ApplyGameplayEnvironment
   UnityEngine_Light_o* Dino_BusSand_App_RenderSetup__ApplyGameplayEnvironment
   (UnityEngine_Transform_o* parent, bool gp3, const MethodInfo* method); */

long Dino_BusSand_App_RenderSetup__ApplyGameplayEnvironment_217cd34(undefined8 param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  puVar4 = PTR_DAT_04cad368;
  puVar1 = (undefined8 *)PTR_DAT_04cad360;
  puVar3 = PTR_DAT_04cab490;
  if ((bRam0000000004f9b90b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad370);
    FUN_02132f7c(PTR_DAT_04cad378);
    FUN_02132f7c(PTR_DAT_04cad380);
    FUN_02132f7c(PTR_DAT_04cad388);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad358);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cad368);
    FUN_02132f7c(PTR_DAT_04cad360);
    FUN_02132f7c(PTR_DAT_04cad398);
    bRam0000000004f9b90b = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if ((param_2 & 1) == 0) {
    puVar1 = (undefined8 *)puVar4;
  }
  uVar7 = *puVar1;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = Dino_BusSand_App_UiAssets__Prefab_21513b8(uVar7,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  puVar3 = PTR_DAT_04cad390;
  lVar8 = 0;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar8 = UnityEngine_Object__Instantiate_object__2805310(uVar7,param_1,0,*(undefined8 *)puVar3);
    if (lVar8 == 0) goto LAB_0227d184;
    UnityEngine_Object__set_name_43c72ec(lVar8,*(undefined8 *)PTR_DAT_04cad398,0);
    lVar8 = UnityEngine_GameObject__GetComponentInChildren_object__275a9b4
                      (lVar8,1,*(undefined8 *)PTR_DAT_04cad388);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  if ((uVar5 & 1) != 0) {
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c20cc(lVar8,*(undefined8 *)PTR_DAT_04cad398,0);
    if ((lVar8 == 0) || (lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar8,0), lVar6 == 0)
       ) goto LAB_0227d184;
    UnityEngine_Transform__SetParent_43d1e34(lVar6,param_1,0,0);
    lVar8 = UnityEngine_GameObject__AddComponent_object__275a54c
                      (lVar8,*(undefined8 *)PTR_DAT_04cad378);
  }
  if (lVar8 != 0) {
    UnityEngine_Light__set_type_4384e4c(lVar8,1,0);
    uVar12 = _UNK_00e20258;
    uVar11 = _UNK_00e203e8;
    uVar10 = _UNK_00e1ff58;
    if ((param_2 & 1) == 0) {
      uVar10 = 0x3f800000;
      uVar12 = _UNK_00e20440;
      uVar11 = 0x3f800000;
    }
    UnityEngine_Light__set_color_4385308(uVar11,uVar10,0x3f800000,0x3f800000,lVar8,0);
    UnityEngine_Light__set_intensity_4385790(uVar12,lVar8,0);
    lVar6 = UnityEngine_Component__get_transform_43bcd18(lVar8,0);
    puVar3 = PTR_DAT_04cad370;
    uVar11 = _UNK_00e1fe30;
    uVar10 = _UNK_00e20a70;
    uVar12 = _UNK_00e20444;
    uVar9 = _UNK_00e20394;
    if ((param_2 & 1) != 0) {
      uVar11 = _UNK_00e1ff5c;
      uVar10 = _UNK_00e2016c;
      uVar12 = _UNK_00e20ae4;
      uVar9 = _UNK_00e201ec;
    }
    if (lVar6 != 0) {
      UnityEngine_Transform__set_rotation_43d13f8(uVar9,uVar11,uVar10,uVar12,lVar6,0);
      UnityEngine_Light__set_shadows_4387930(lVar8,2,0);
                    /* try { // try from 0227d03c to 0237d04f has its CatchHandler @ 0227d064 */
      UnityEngine_Light__set_shadowStrength_4387aa8(0x3f800000,lVar8,0);
                    /* try { // try from 0227d050 to 0237d077 has its CatchHandler @ 0227d010 */
      UnityEngine_Light__set_shadowBias_43866a4(_UNK_00e2043c,lVar8,0);
                    /* catch() { ... } // from try @ 0227d03c with catch @ 0227d064 */
      UnityEngine_Light__set_shadowNormalBias_438682c(0,lVar8,0);
      UnityEngine_Light__set_shadowNearPlane_43869b4(_UNK_00e20390,lVar8,0);
      UnityEngine_Light__set_cullingMask_4387414(lVar8,0xffffffff,0);
      UnityEngine_Light__set_renderMode_43883e8(lVar8,0,0);
      lVar6 = UnityEngine_Component__GetComponent_object__26f97e8(lVar8,*(undefined8 *)puVar3);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
      if ((uVar5 & 1) != 0) {
        lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
        if (lVar6 == 0) goto LAB_0227d184;
        lVar6 = UnityEngine_GameObject__AddComponent_object__275a54c
                          (lVar6,*(undefined8 *)PTR_DAT_04cad380);
      }
      if (lVar6 != 0) {
        *(undefined1 *)(lVar6 + 0x24) = 0;
        *(undefined4 *)(lVar6 + 0x58) = 1;
        lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
        puVar3 = PTR_DAT_04cad358;
        if (lVar6 != 0) {
          UnityEngine_GameObject__SetActive_43c1408(lVar6,1,0);
          UnityEngine_Behaviour__set_enabled_43bc50c(lVar8,1,0);
          UnityEngine_RenderSettings__set_sun_4374d40(lVar8,0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_RenderSetup__ApplyGameplayRenderSettings_217d188(param_2 & 1);
          return lVar8;
        }
      }
    }
  }
LAB_0227d184:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

