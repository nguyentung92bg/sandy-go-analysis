/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$RewardIcon
UnityEngine_Sprite_o* Dino_BusSand_App_Meta_StreakTowerUtil__RewardIcon (Dino_BusSand_App_Meta_ActivityRewardEntry_o e, bool small, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$RewardIcon
   UnityEngine_Sprite_o* Dino_BusSand_App_Meta_StreakTowerUtil__RewardIcon
   (Dino_BusSand_App_Meta_ActivityRewardEntry_o e, bool small, const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_StreakTowerUtil__RewardIcon_2252390(undefined4 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_38;
  
  puVar5 = PTR_DAT_04cac018;
  if ((bRam0000000004f9bfd3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb3cd0);
    FUN_02132f7c(PTR_DAT_04cb3cd8);
    FUN_02132f7c(PTR_DAT_04cb3ce0);
    FUN_02132f7c(PTR_DAT_04cae5d0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb2d00);
    bRam0000000004f9bfd3 = 1;
  }
  puVar4 = PTR_DAT_04cb2d00;
  uVar3 = *param_1;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04ca9c30;
  uVar8 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar4,uVar3,0);
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    lVar11 = *(long *)puVar5;
  }
  else {
    puVar2 = (undefined8 *)PTR_DAT_04cb3ce0;
    if ((param_2 & 1) == 0) {
      puVar2 = (undefined8 *)PTR_DAT_04cb3cd0;
    }
    uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar8,*puVar2,0);
    lVar11 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar10,*(undefined8 *)puVar5,0);
  }
  puVar4 = PTR_DAT_04cb3cd8;
  puVar2 = (undefined8 *)PTR_DAT_04cae5d0;
  uVar9 = System_String__IsNullOrEmpty_46d2084(lVar11,0);
  if ((uVar9 & 1) != 0) {
    puVar1 = (undefined8 *)puVar4;
    if ((param_2 & 1) == 0) {
      puVar1 = puVar2;
    }
    uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar8,*puVar1,0);
    lVar11 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar10,*(undefined8 *)puVar5,0);
  }
  uVar9 = System_String__IsNullOrEmpty_46d2084(lVar11,0);
  if ((uVar9 & 1) != 0) {
    if ((param_2 & 1) == 0) {
      puVar2 = (undefined8 *)puVar4;
    }
    uVar8 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar8,*puVar2,0);
    lVar11 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar8,*(undefined8 *)puVar5,0);
  }
  uVar9 = System_String__IsNullOrEmpty_46d2084(lVar11,0);
  if ((uVar9 & 1) == 0) {
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
    uStack_38 = 0;
    uVar9 = System_String__IsNullOrEmpty_46d2084(lVar11,0);
    uVar8 = 0;
    if ((uVar9 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = Dino_BusSand_App_SpriteSkin__TryGet_215e2dc(lVar11,&uStack_38);
      puVar5 = PTR_DAT_04cab490;
      uVar8 = uStack_38;
      if ((uVar9 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UiAssets__Ensure_2162bb4();
        puVar6 = PTR_DAT_04cac380;
        uVar8 = Dino_BusSand_App_UiAssets__Load_object__2946ec8
                          (*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),lVar11,
                           *(undefined8 *)PTR_DAT_04cac380);
        puVar4 = PTR_DAT_04ca9ae8;
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
        if ((uVar9 & 1) != 0) {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar9 = System_String__EndsWith_46d07b4(lVar11,*(undefined8 *)PTR_DAT_04cabf60,0);
          if ((uVar9 & 1) != 0) {
            lVar7 = *(long *)puVar5;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar7 = *(long *)puVar5;
            }
            uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
            uVar8 = System_String__Substring_46d4848(lVar11,0,*(int *)(lVar11 + 0x10) + -2,0);
            uVar8 = Dino_BusSand_App_UiAssets__Load_object__2946ec8
                              (uVar10,uVar8,*(undefined8 *)puVar6);
          }
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
        if ((uVar9 & 1) != 0) {
          lVar7 = *(long *)puVar5;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar5;
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
          uVar8 = System_String__Concat_46c82e0(lVar11,*(undefined8 *)PTR_DAT_04cabf60,0);
          uVar8 = Dino_BusSand_App_UiAssets__Load_object__2946ec8
                            (uVar10,uVar8,*(undefined8 *)puVar6);
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
        if ((uVar9 & 1) != 0) {
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UiAssets__Miss_21633cc(*(undefined8 *)PTR_DAT_04cac388,lVar11);
        }
      }
    }
    return uVar8;
  }
  return 0;
}

