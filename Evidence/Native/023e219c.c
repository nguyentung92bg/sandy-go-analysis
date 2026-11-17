/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Spot
System_Nullable_Vector3__o Dino_BusSand_App_UI_HomeBus__Spot (Dino_BusSand_App_UI_HomeBus_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Spot
   System_Nullable_Vector3__o Dino_BusSand_App_UI_HomeBus__Spot (Dino_BusSand_App_UI_HomeBus_o*
   __this, int32_t i, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_HomeBus__Spot_22e219c(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c416 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb18b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c416 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
LAB_023e2210:
    uStack_40 = 0;
    uStack_38 = 0;
    goto LAB_023e22e0;
  }
  if (param_2 == 2) {
    if (*(long *)(param_1 + 0x38) == 0) {
LAB_023e22f8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar3 = UnityEngine_Camera__get_pixelWidth_435aca0(*(long *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_023e22f8;
    iVar4 = UnityEngine_Camera__get_pixelHeight_435ad54(*(long *)(param_1 + 0x38),0);
    fVar8 = _UNK_00e207dc;
LAB_023e22b8:
    Dino_BusSand_App_UI_HomeBus__EyeDepth_22e4704((float)iVar3 / 2.0,(float)iVar4 * fVar8,param_1);
  }
  else {
    if (param_2 == 1) {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_023e22f8;
      iVar3 = UnityEngine_Camera__get_pixelWidth_435aca0(*(long *)(param_1 + 0x38),0);
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_023e22f8;
      iVar4 = UnityEngine_Camera__get_pixelHeight_435ad54(*(long *)(param_1 + 0x38),0);
      fVar8 = _UNK_00e200f8;
      goto LAB_023e22b8;
    }
    if (param_2 != 0) goto LAB_023e2210;
    if ((*(long *)(param_1 + 0x38) == 0) ||
       (lVar6 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0x38),0),
       lVar6 == 0)) goto LAB_023e22f8;
    UnityEngine_Transform__get_position_43d0e48(lVar6,0);
  }
  uStack_40 = 0;
  uStack_38 = 0;
  System_Nullable_Vector3____ctor_2bd0e4c(&uStack_40,*(undefined8 *)PTR_DAT_04cb18b8);
LAB_023e22e0:
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}

