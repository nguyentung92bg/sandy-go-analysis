/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$ItemIcon
UnityEngine_Sprite_o* Dino_BusSand_App_UI_CommerceUi__ItemIcon (int32_t id, bool small, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$ItemIcon
   UnityEngine_Sprite_o* Dino_BusSand_App_UI_CommerceUi__ItemIcon (int32_t id, bool small, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_CommerceUi__ItemIcon_22a80e8(undefined4 param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_38;
  
  puVar4 = PTR_DAT_04cac7b8;
  if ((bRam0000000004f9c2a2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb3cd8);
    FUN_02132f7c(PTR_DAT_04cae5d0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c2a2 = 1;
  }
  puVar5 = PTR_DAT_04cb3cd8;
  puVar2 = (undefined8 *)PTR_DAT_04cae5d0;
  puVar3 = PTR_DAT_04ca9c30;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = Dino_BusSand_App_UI_CommerceUi__ItemRow_22ab158(param_1);
  puVar1 = (undefined8 *)puVar5;
  if ((param_2 & 1) == 0) {
    puVar1 = puVar2;
  }
  uVar8 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar7,*puVar1,0);
  lVar9 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar8,*(undefined8 *)puVar3,0);
  uVar10 = System_String__IsNullOrEmpty_46d2084(lVar9,0);
  if ((uVar10 & 1) != 0) {
    if ((param_2 & 1) == 0) {
      puVar2 = (undefined8 *)puVar5;
    }
    uVar7 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar7,*puVar2,0);
    lVar9 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar7,*(undefined8 *)puVar3,0);
  }
  uVar10 = System_String__IsNullOrEmpty_46d2084(lVar9,0);
  if ((uVar10 & 1) == 0) {
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
    uVar10 = System_String__IsNullOrEmpty_46d2084(lVar9,0);
    uVar7 = 0;
    if ((uVar10 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = Dino_BusSand_App_SpriteSkin__TryGet_215e2dc(lVar9,&uStack_38);
      puVar4 = PTR_DAT_04cab490;
      uVar7 = uStack_38;
      if ((uVar10 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UiAssets__Ensure_2162bb4();
        puVar5 = PTR_DAT_04cac380;
        uVar7 = Dino_BusSand_App_UiAssets__Load_object__2946ec8
                          (*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18),lVar9,
                           *(undefined8 *)PTR_DAT_04cac380);
        puVar3 = PTR_DAT_04ca9ae8;
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
        if ((uVar10 & 1) != 0) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar10 = System_String__EndsWith_46d07b4(lVar9,*(undefined8 *)PTR_DAT_04cabf60,0);
          if ((uVar10 & 1) != 0) {
            lVar6 = *(long *)puVar4;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar6 = *(long *)puVar4;
            }
            uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18);
            uVar7 = System_String__Substring_46d4848(lVar9,0,*(int *)(lVar9 + 0x10) + -2,0);
            uVar7 = Dino_BusSand_App_UiAssets__Load_object__2946ec8
                              (uVar8,uVar7,*(undefined8 *)puVar5);
          }
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
        if ((uVar10 & 1) != 0) {
          lVar6 = *(long *)puVar4;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar4;
          }
          uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18);
          uVar7 = System_String__Concat_46c82e0(lVar9,*(undefined8 *)PTR_DAT_04cabf60,0);
          uVar7 = Dino_BusSand_App_UiAssets__Load_object__2946ec8(uVar8,uVar7,*(undefined8 *)puVar5)
          ;
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
        if ((uVar10 & 1) != 0) {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UiAssets__Miss_21633cc(*(undefined8 *)PTR_DAT_04cac388,lVar9);
        }
      }
    }
    return uVar7;
  }
  return 0;
}

