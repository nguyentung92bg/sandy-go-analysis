/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$TextMat
UnityEngine_Material_o* Dino_BusSand_App_UI_PlayerSettingPanel__TextMat (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, System_String_o* node, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$TextMat
   UnityEngine_Material_o* Dino_BusSand_App_UI_PlayerSettingPanel__TextMat
   (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, System_String_o* node, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_PlayerSettingPanel__TextMat_2301154(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c4db & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabe08);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c4db = 1;
  }
  lVar2 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,param_2,0);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar5);
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
  plVar6 = (long *)0x0;
  if ((uVar3 & 1) != 0) {
    if (lVar2 == 0) goto LAB_02401258;
    plVar6 = (long *)UnityEngine_Component__GetComponentInChildren_object__26f9b94
                               (lVar2,1,*(undefined8 *)PTR_DAT_04cabe08);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(plVar6,0,0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02401240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*plVar6 + 0x528))(plVar6,*(undefined8 *)(*plVar6 + 0x530));
    return uVar4;
  }
LAB_02401258:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

