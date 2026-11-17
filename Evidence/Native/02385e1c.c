/* IL2CPP: Dino.BusSand.App.UI.UiKit$$T
System_String_o* Dino_BusSand_App_UI_UiKit__T (System_String_o* key, System_String_o* fallback, System_Object_array* args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$T
   System_String_o* Dino_BusSand_App_UI_UiKit__T (System_String_o* key, System_String_o* fallback,
   System_Object_array* args, const MethodInfo* method); */

long Dino_BusSand_App_UI_UiKit__T_2285e1c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  if ((bRam0000000004f9c186 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab550);
    bRam0000000004f9c186 = 1;
  }
  uVar4 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  puVar1 = PTR_DAT_04cab550;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_Lang__Has_215fb88(param_1,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if ((bRam0000000004f9b81c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cab550,param_3,0);
        FUN_02132f7c(PTR_DAT_04cac078);
        FUN_02132f7c(PTR_DAT_04ca9c30);
        bRam0000000004f9b81c = 1;
      }
      lStack_28 = 0;
      uVar4 = System_String__IsNullOrEmpty_46d2084(param_1,0);
      puVar1 = PTR_DAT_04cab550;
      if ((uVar4 & 1) != 0) {
        return *(long *)PTR_DAT_04ca9c30;
      }
      if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = Dino_BusSand_App_Lang__Current_215f3d0();
      uVar4 = Dino_BusSand_App_Lang__Text_215f904(uVar2,param_1,&lStack_28);
      if ((uVar4 & 1) == 0) {
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar3 = *(long *)puVar1;
        }
        uVar4 = System_String__op_Equality_46d1108
                          (**(undefined8 **)(lVar3 + 0xb8),*(undefined8 *)PTR_DAT_04cac078,0);
        if ((uVar4 & 1) != 0) {
          return param_1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = Dino_BusSand_App_Lang__English_215f81c();
        uVar4 = Dino_BusSand_App_Lang__Text_215f904(uVar2,param_1,&lStack_28);
        if ((uVar4 & 1) == 0) {
          return param_1;
        }
      }
      if ((param_3 != 0) && (*(long *)(param_3 + 0x18) != 0)) {
        lStack_28 = System_String__Format_46d3570(lStack_28,param_3,0);
      }
      return lStack_28;
    }
  }
  if ((param_3 != 0) && (*(long *)(param_3 + 0x18) != 0)) {
    if (param_3 != 0) {
      uStack_38 = 0;
      uStack_40 = 0;
      lStack_28 = 0;
      System_ParamsArray___ctor_483f6e0(&uStack_40,param_3,0);
      uStack_58 = uStack_38;
      uStack_60 = uStack_40;
      lStack_48 = lStack_28;
      uStack_50 = 0;
      lVar3 = System_String__FormatHelper_46d33ec(0,param_2,&uStack_60);
      return lVar3;
    }
    puVar1 = PTR_DAT_04ccc5f0;
    if (param_2 != 0) {
      puVar1 = PTR_DAT_04cc6cb8;
    }
    uVar2 = thunk_FUN_021985a8(puVar1,0,0);
    thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
    uVar5 = thunk_FUN_0216e89c();
    System_ArgumentNullException___ctor_47afb54(uVar5,uVar2,0);
    uVar2 = thunk_FUN_021985a8(PTR_DAT_04d0b438);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar5,uVar2);
  }
  return param_2;
}

