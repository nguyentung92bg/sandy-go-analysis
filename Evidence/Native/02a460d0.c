/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$Get<object>
Il2CppObject* Dino_BusSand_App_UI_UIPanel__Get_object_ (Dino_BusSand_App_UI_UIPanel_o* __this, System_String_o* name, const MethodInfo_29460D0* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$Get<object>
   Il2CppObject* Dino_BusSand_App_UI_UIPanel__Get_object_ (Dino_BusSand_App_UI_UIPanel_o* __this,
   System_String_o* name, const MethodInfo_29460D0* method); */

undefined8
Dino_BusSand_App_UI_UIPanel__Get_object__29460d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_28;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_0216b4cc(param_3);
    }
  }
  lVar1 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,param_2,0);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar1,0,0);
  if ((uVar2 & 1) != 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      lVar4 = *(long *)(lVar3 + 0x38);
      if (lVar4 == 0) {
        FUN_0216b4cc(lVar3);
        lVar4 = *(long *)(lVar3 + 0x38);
      }
      uStack_28 = 0;
      uVar5 = *(undefined8 *)(lVar4 + 8);
      if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = System_Type__GetTypeFromHandle_483f0b4(uVar5,0);
      UnityEngine_Component__GetComponentFastPath_43bcf7c(lVar1,uVar5,&uStack_28,0);
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return 0;
}

