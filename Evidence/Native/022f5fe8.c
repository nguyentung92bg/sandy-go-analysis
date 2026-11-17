/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$HeadSprite
UnityEngine_Sprite_o* Dino_BusSand_App_UI_YachtRacingUi__HeadSprite (int32_t headId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$HeadSprite
   UnityEngine_Sprite_o* Dino_BusSand_App_UI_YachtRacingUi__HeadSprite (int32_t headId, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_YachtRacingUi__HeadSprite_21f5fe8(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 auStack_38 [2];
  
  puVar2 = PTR_DAT_04cac018;
  if ((bRam0000000004f9bc54 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cae5c8);
    FUN_02132f7c(PTR_DAT_04cae5d0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bc54 = 1;
  }
  puVar1 = PTR_DAT_04cae5c8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar1,param_1,0);
  puVar2 = PTR_DAT_04ca9c30;
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    uVar6 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar5,*(undefined8 *)PTR_DAT_04cae5d0,0);
    lVar5 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar6,*(undefined8 *)puVar2,0);
  }
  uVar7 = System_String__IsNullOrEmpty_46d2084(lVar5,0);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if ((bRam0000000004f9b842 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8,0);
      FUN_02132f7c(PTR_DAT_04cabf58);
      FUN_02132f7c(PTR_DAT_04cac380);
      FUN_02132f7c(PTR_DAT_04cab490);
      FUN_02132f7c(PTR_DAT_04cabf60);
      FUN_02132f7c(PTR_DAT_04cac388);
      bRam0000000004f9b842 = 1;
    }
    auStack_38[0] = 0;
    uVar7 = System_String__IsNullOrEmpty_46d2084(lVar5,0);
    uVar6 = 0;
    if ((uVar7 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = Dino_BusSand_App_SpriteSkin__TryGet_215e2dc(lVar5,auStack_38);
      puVar2 = PTR_DAT_04cab490;
      uVar6 = auStack_38[0];
      if ((uVar7 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UiAssets__Ensure_2162bb4();
        puVar3 = PTR_DAT_04cac380;
        uVar6 = Dino_BusSand_App_UiAssets__Load_object__2946ec8
                          (*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18),lVar5,
                           *(undefined8 *)PTR_DAT_04cac380);
        puVar1 = PTR_DAT_04ca9ae8;
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
        if ((uVar7 & 1) != 0) {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar7 = System_String__EndsWith_46d07b4(lVar5,*(undefined8 *)PTR_DAT_04cabf60,0);
          if ((uVar7 & 1) != 0) {
            lVar4 = *(long *)puVar2;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar4 = *(long *)puVar2;
            }
            uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18);
            uVar6 = System_String__Substring_46d4848(lVar5,0,*(int *)(lVar5 + 0x10) + -2,0);
            uVar6 = Dino_BusSand_App_UiAssets__Load_object__2946ec8
                              (uVar8,uVar6,*(undefined8 *)puVar3);
          }
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
        if ((uVar7 & 1) != 0) {
          lVar4 = *(long *)puVar2;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar4 = *(long *)puVar2;
          }
          uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18);
          uVar6 = System_String__Concat_46c82e0(lVar5,*(undefined8 *)PTR_DAT_04cabf60,0);
          uVar6 = Dino_BusSand_App_UiAssets__Load_object__2946ec8(uVar8,uVar6,*(undefined8 *)puVar3)
          ;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UiAssets__Miss_21633cc(*(undefined8 *)PTR_DAT_04cac388,lVar5);
        }
      }
    }
    return uVar6;
  }
  return 0;
}

