/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$VehiclePoint
System_Nullable_Vector2__o Dino_BusSand_Cheat_AutoPlayHand__VehiclePoint (Dino_BusSand_Cheat_AutoPlayHand_o* __this, Dino_BusSand_App_Gameplay_GameplayController_o* gc, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$VehiclePoint
   System_Nullable_Vector2__o Dino_BusSand_Cheat_AutoPlayHand__VehiclePoint
   (Dino_BusSand_Cheat_AutoPlayHand_o* __this, Dino_BusSand_App_Gameplay_GameplayController_o* gc,
   int32_t id, const MethodInfo* method); */

undefined1  [16]
Dino_BusSand_Cheat_AutoPlayHand__VehiclePoint_233fefc
          (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
          undefined4 param_6)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if ((bRam0000000004f9c67b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4e90);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabda8);
    bRam0000000004f9c67b = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_58 = 0;
  if ((param_5 == 0) || (*(long *)(param_5 + 0x38) == 0)) goto LAB_02440154;
  lVar2 = Dino_BusSand_View_GameView__VehicleOf_23ab408(*(long *)(param_5 + 0x38),param_6,0);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar5);
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar2,0,0);
  if ((uVar3 & 1) == 0) {
    uVar4 = Dino_BusSand_App_Gameplay_GameplayController__get_Cam_229b328(param_5,0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar5);
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar3 & 1) == 0) {
      if ((lVar2 == 0) ||
         (lVar5 = UnityEngine_Component__get_transform_43bcd18(lVar2,0), lVar5 == 0)) {
LAB_02440154:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      fVar6 = (float)UnityEngine_Transform__get_position_43d0e48(lVar5,0);
      if (cRam0000000004f9bcf8 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9bcf8 = '\x01';
      }
      uVar4 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
      fVar9 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
      fVar7 = (float)Dino_BusSand_View_VehicleView__get_ModelHeightWorld_23fefb0(lVar2,0);
      lVar2 = Dino_BusSand_App_Gameplay_GameplayController__get_Cam_229b328(param_5,0);
      if (lVar2 == 0) goto LAB_02440154;
      param_2 = param_2 + (float)((ulong)uVar4 >> 0x20) * fVar7 * 0.6;
      param_3 = param_3 + fVar9 * fVar7 * _UNK_00e20094;
      uVar8 = UnityEngine_Camera__WorldToScreenPoint_435c56c
                        (fVar6 + (float)uVar4 * fVar7 * 0.6,param_2,param_3,lVar2,0);
      uVar4 = *(undefined8 *)(param_4 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle_467e798
                (uVar8,param_2,uVar4,0,&uStack_58,0);
      if (*(long *)(param_4 + 0x20) == 0) goto LAB_02440154;
      fVar7 = (float)uStack_58;
      fVar9 = uStack_58._4_4_;
      UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_4 + 0x20),0);
      uStack_50 = 0;
      uStack_48 = 0;
      System_Nullable_Vector2____ctor_2bd0a48
                (fVar7 + param_3 * 0.5,fVar9 + fVar6 * 0.5,&uStack_50,
                 *(undefined8 *)PTR_DAT_04cb4e90);
      goto LAB_02440130;
    }
  }
  uStack_48 = 0;
  uStack_50 = 0;
LAB_02440130:
  auVar10._8_4_ = uStack_48;
  auVar10._0_8_ = uStack_50;
  auVar10._12_4_ = 0;
  return auVar10;
}

