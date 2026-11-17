/* IL2CPP: Dino.BusSand.App.UI.KitParts$$RewardBox
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_KitParts__RewardBox (Dino_BusSand_App_UI_KitWindow_o* w, float height, float raysY, float raysSize, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitParts$$RewardBox
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_KitParts__RewardBox
   (Dino_BusSand_App_UI_KitWindow_o* w, float height, float raysY, float raysSize, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_KitParts__RewardBox_230ff1c
          (undefined4 param_1,float param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar2 = PTR_DAT_04caf448;
  puVar1 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c545 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cafbd0);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf448);
    FUN_02132f7c(PTR_DAT_04cb8220);
    bRam0000000004f9c545 = 1;
  }
  puVar3 = PTR_DAT_04cb8220;
  uVar4 = Dino_BusSand_App_UI_KitPopup__TopPanel_2282af4(param_1,param_4,*(undefined8 *)puVar2,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  lVar5 = Dino_BusSand_App_UI_UiKit__Fill_22817d8
                    (0x41f00000,0x41f00000,0x41f00000,0x41f00000,uVar4,*(undefined8 *)puVar3,0);
  if ((lVar5 != 0) && (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0), lVar6 != 0))
  {
    UnityEngine_GameObject__AddComponent_object__275a54c(lVar6,*(undefined8 *)PTR_DAT_04cafbd0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    lVar5 = Dino_BusSand_App_UI_UiKit__Rays_228ce00
                      (param_3,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                       (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],0x3f400000,0x41b00000
                       ,lVar5,&uStack_58,0);
    if (lVar5 != 0) {
      UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,lVar5,0);
      UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,lVar5,0);
      UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0,10.0 - param_2,lVar5,0);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

