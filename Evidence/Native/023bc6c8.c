/* IL2CPP: Dino.BusSand.App.UI.BootArt$$Image
void Dino_BusSand_App_UI_BootArt__Image (Dino_BusSand_App_UI_UIPanel_o* p, System_String_o* path, System_String_o* sprite, UnityEngine_Color_o color, bool sliced, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BootArt$$Image
   void Dino_BusSand_App_UI_BootArt__Image (Dino_BusSand_App_UI_UIPanel_o* p, System_String_o* path,
   System_String_o* sprite, UnityEngine_Color_o color, bool sliced, const MethodInfo* method); */

void Dino_BusSand_App_UI_BootArt__Image_22bc6c8
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,long param_7,uint param_8)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  if ((bRam0000000004f9c311 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab490);
    bRam0000000004f9c311 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_5 != 0) {
    lVar2 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_5,param_6,0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar5);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
    plVar6 = (long *)0x0;
    if ((uVar3 & 1) != 0) {
      if (lVar2 == 0) goto LAB_023bc864;
      plVar6 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                                 (lVar2,*(undefined8 *)PTR_DAT_04cad788);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(plVar6,0,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (param_7 == 0) {
      if (plVar6 == (long *)0x0) goto LAB_023bc864;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_App_UiAssets__Sprite_21636c4(param_7,0);
      if (plVar6 == (long *)0x0) goto LAB_023bc864;
      UnityEngine_UI_Image__set_sprite_44a7258(plVar6,uVar4,0);
    }
    (**(code **)(*plVar6 + 0x2a8))
              (param_1,param_2,param_3,param_4,plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
    puVar1 = PTR_DAT_04cfca28;
    if ((bRam0000000004faae30 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cfca28,param_8 & 1,0);
      bRam0000000004faae30 = 1;
    }
    uVar3 = UnityEngine_UI_SetPropertyUtility__SetStruct_Int32Enum__28b856c
                      (plVar6 + 0x1d,param_8 & 1,*(undefined8 *)puVar1);
    if ((uVar3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x045afac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x2f8))(plVar6,*(undefined8 *)(*plVar6 + 0x300));
      return;
    }
    return;
  }
LAB_023bc864:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

