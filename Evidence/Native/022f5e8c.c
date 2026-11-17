/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$SetSprite
bool Dino_BusSand_App_UI_YachtRacingUi__SetSprite (UnityEngine_UI_Image_o* img, System_String_o* spriteName, bool nativeSize, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$SetSprite
   bool Dino_BusSand_App_UI_YachtRacingUi__SetSprite (UnityEngine_UI_Image_o* img, System_String_o*
   spriteName, bool nativeSize, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_YachtRacingUi__SetSprite_21f5e8c(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc52 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab490);
    bRam0000000004f9bc52 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_UiAssets__Sprite_21636c4(param_2,0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar4);
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        UnityEngine_UI_Image__set_sprite_44a7258(param_1,uVar3,0);
        if ((param_3 & 1) != 0) {
          (**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
        }
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return 0;
}

