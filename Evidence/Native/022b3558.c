/* IL2CPP: Dino.BusSand.App.UI.BusStreakUi$$SetReward
void Dino_BusSand_App_UI_BusStreakUi__SetReward (UnityEngine_UI_Image_o* img, TMPro_TextMeshProUGUI_o* label, int32_t rewardId, float coinScale, float boosterScale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BusStreakUi$$SetReward
   void Dino_BusSand_App_UI_BusStreakUi__SetReward (UnityEngine_UI_Image_o* img,
   TMPro_TextMeshProUGUI_o* label, int32_t rewardId, float coinScale, float boosterScale, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_BusStreakUi__SetReward_21b3558
               (float param_1,float param_2,float param_3,float param_4,long param_5,long *param_6,
               undefined4 param_7)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  char acStack_4c [4];
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_04caf220;
  if ((bRam0000000004f9ba9a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf220);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ba9a = 1;
  }
  uStack_48 = 0;
  acStack_4c[0] = '\0';
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_UI_BusStreakUi__Reward_21b3194(param_7,&uStack_48,acStack_4c);
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_5 != 0) {
    UnityEngine_UI_Image__set_sprite_44a7258(param_5,lVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
    UnityEngine_Behaviour__set_enabled_43bc50c(param_5,uVar2 & 1,0);
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
    if ((uVar4 & 1) != 0) {
      lVar5 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(param_5,0);
      if ((lVar3 == 0) || (UnityEngine_Sprite__get_rect_434ee28(lVar3,0), lVar5 == 0))
      goto LAB_022b36dc;
      if (acStack_4c[0] != '\0') {
        param_2 = param_1;
      }
      UnityEngine_RectTransform__set_sizeDelta_43cfa70(param_3 * param_2,param_4 * param_2,lVar5,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(param_6,0,0);
    if ((uVar4 & 1) != 0) {
      if (param_6 == (long *)0x0) goto LAB_022b36dc;
      (**(code **)(*param_6 + 0x518))(param_6,uStack_48,*(undefined8 *)(*param_6 + 0x520));
    }
    return;
  }
LAB_022b36dc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

