/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide$$WorldGuide
Dino_BusSand_App_UI_GuideRequest_o* Dino_BusSand_App_UI_MechanicGuide__WorldGuide (int32_t id, UnityEngine_Vector3_o world, System_String_o* textKey, bool tapThrough, Dino_BusSand_App_Gameplay_GameplayController_o* gc, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide$$WorldGuide
   Dino_BusSand_App_UI_GuideRequest_o* Dino_BusSand_App_UI_MechanicGuide__WorldGuide (int32_t id,
   UnityEngine_Vector3_o world, System_String_o* textKey, bool tapThrough,
   Dino_BusSand_App_Gameplay_GameplayController_o* gc, const MethodInfo* method); */

long Dino_BusSand_App_UI_MechanicGuide__WorldGuide_21f9ba8
               (undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,byte param_6,long param_7)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_DAT_04cb18b0;
  if ((bRam0000000004f9bc5f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb18b0);
    FUN_02132f7c(PTR_DAT_04cb18b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc5f = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_UI_GuideRequest___ctor_22c84c8(lVar3,0);
  puVar1 = PTR_DAT_04cb18b8;
  if (lVar3 == 0) {
LAB_022f9db4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined4 *)(lVar3 + 0x10) = param_4;
  uStack_60 = 0;
  uStack_58 = 0;
  System_Nullable_Vector3____ctor_2bd0e4c(param_1,param_2,param_3,&uStack_60,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar3 + 0x38) = param_5;
  *(undefined8 *)(lVar3 + 0x1c) = uStack_58;
  *(undefined8 *)(lVar3 + 0x14) = uStack_60;
  thunk_FUN_02134474((undefined8 *)(lVar3 + 0x38),param_5);
  uVar4 = _UNK_00e6a900;
  uVar8 = NEON_fmov(0xc1a00000,4);
  *(byte *)(lVar3 + 0x48) = (param_6 ^ 0xff) & 1;
  *(byte *)(lVar3 + 0x40) = param_6 & 1;
  *(byte *)(lVar3 + 0x41) = param_6 & 1;
  *(undefined4 *)(lVar3 + 0x4c) = 0x3f400000;
  *(undefined8 *)(lVar3 + 0x50) = uVar4;
  *(undefined4 *)(lVar3 + 100) = 0x44610000;
  *(undefined8 *)(lVar3 + 0x68) = uVar8;
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_7 == 0) goto LAB_022f9db4;
  uVar4 = Dino_BusSand_App_Gameplay_GameplayController__get_Cam_229b328(param_7,0);
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar7);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar5 & 1) == 0) {
    lVar7 = UnityEngine_Camera__get_main_435d018(0);
  }
  else {
    lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Cam_229b328(param_7,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
  if ((uVar5 & 1) != 0) {
    if (lVar7 == 0) goto LAB_022f9db4;
    UnityEngine_Camera__WorldToScreenPoint_435c56c(param_1,param_2,param_3,lVar7,0);
    iVar2 = UnityEngine_Screen__get_height_436a6c8(0);
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    if (0.5 <= param_2 / (float)iVar2) {
      uVar6 = 0xc3be0000;
      goto LAB_022f9d8c;
    }
  }
  uVar6 = 0x43be0000;
LAB_022f9d8c:
  *(undefined4 *)(lVar3 + 0x5c) = 0;
  *(undefined4 *)(lVar3 + 0x60) = uVar6;
  return lVar3;
}

