/* IL2CPP: Dino.BusSand.View.GameView$$ApplyEnvironment
void Dino_BusSand_View_GameView__ApplyEnvironment (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$ApplyEnvironment
   void Dino_BusSand_View_GameView__ApplyEnvironment (Dino_BusSand_View_GameView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__ApplyEnvironment_239aca0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((bRam0000000004f9c906 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc2c8);
    FUN_02132f7c(PTR_DAT_04cbc2d0);
    bRam0000000004f9c906 = 1;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    UnityEngine_Light__set_color_4385308
              (0x3f800000,_UNK_00e204d0,_UNK_00e20830,0x3f800000,*(long *)(param_1 + 0xd0),0);
    if (*(long *)(param_1 + 0xd0) != 0) {
      UnityEngine_Light__set_intensity_4385790(_UNK_00e20178,*(long *)(param_1 + 0xd0),0);
      if (*(long *)(param_1 + 0xd0) != 0) {
        UnityEngine_Light__set_shadowStrength_4387aa8(_UNK_00e20180,*(long *)(param_1 + 0xd0),0);
        if (*(long *)(param_1 + 0xd0) != 0) {
          lVar3 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0xd0),0);
          UnityEngine_Quaternion__Internal_FromEulerRad_43af004(_UNK_00e20930,_UNK_00e20a40,0,0);
          puVar2 = PTR_DAT_04cab208;
          puVar1 = PTR_DAT_04ca9ae8;
          if (lVar3 != 0) {
            UnityEngine_Transform__set_rotation_43d13f8(lVar3,0);
            UnityEngine_RenderSettings__set_ambientMode_43745c8(1,0);
            uVar8 = _UNK_00e200f8;
            UnityEngine_RenderSettings__set_ambientSkyColor_4374688
                      (_UNK_00e200f8,_UNK_00e20a20,_UNK_00e20204,0x3f800000,0);
            UnityEngine_RenderSettings__set_ambientEquatorColor_437478c
                      (_UNK_00e1fde8,uVar8,_UNK_00e1fde8,0x3f800000,0);
            uVar12 = 0x3f800000;
            uVar8 = _UNK_00e2029c;
            uVar10 = _UNK_00e206ec;
            UnityEngine_RenderSettings__set_ambientGroundColor_4374890(_UNK_00e208e8,0);
            UnityEngine_RenderSettings__set_ambientIntensity_4374938(0x3f800000,0);
            UnityEngine_RenderSettings__set_defaultReflectionMode_4374fb8(1,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar4 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
            uVar4 = 0;
            if ((uVar5 & 1) != 0) {
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              lVar3 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
              if (lVar3 == 0) goto LAB_0249af90;
              uVar4 = Dino_BusSand_GameAssets__GetCubemap_237c850
                                (lVar3,*(undefined8 *)PTR_DAT_04cbc2d0,0);
            }
            puVar1 = PTR_DAT_04cbc2c8;
            UnityEngine_RenderSettings__set_customReflectionTexture_4374ea0(uVar4,0);
            UnityEngine_RenderSettings__set_reflectionIntensity_4374f80(0x3f800000,0);
            uVar6 = UnityEngine_RenderSettings__get_ambientSkyColor_4374604(0);
            uVar9 = uVar8;
            uVar13 = uVar12;
            uVar11 = uVar10;
            uVar7 = UnityEngine_RenderSettings__get_ambientEquatorColor_4374708(0);
            UnityEngine_RenderSettings__get_ambientGroundColor_437480c(0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_View_VehicleBatch__SetGlobals_23f3574
                      (uVar6,uVar8,uVar10,uVar12,uVar7,uVar9,uVar11,uVar13,uVar4,0);
            UnityEngine_RenderSettings__set_skybox_4374c00(0,0);
            if (pcRam0000000004fa6998 == (code *)0x0) {
              pcRam0000000004fa6998 = (code *)FUN_02132f40(&UNK_00e60d11);
            }
                    /* WARNING: Could not recover jumptable at 0x04474438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa6998)(0);
            return;
          }
        }
      }
    }
  }
LAB_0249af90:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

