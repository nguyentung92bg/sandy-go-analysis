/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$Txt
TMPro_TMP_Text_o* Dino_BusSand_App_UI_UIPanel__Txt (Dino_BusSand_App_UI_UIPanel_o* __this, System_String_o* name, System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$Txt
   TMPro_TMP_Text_o* Dino_BusSand_App_UI_UIPanel__Txt (Dino_BusSand_App_UI_UIPanel_o* __this,
   System_String_o* name, System_String_o* text, const MethodInfo* method); */

long * Dino_BusSand_App_UI_UIPanel__Txt_2200924
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc97 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabe08);
    FUN_02132f7c(PTR_DAT_04cad790);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc97 = 1;
  }
  lVar2 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,param_2);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar2,0,0);
  plVar4 = (long *)0x0;
  if ((uVar3 & 1) == 0) {
    if (lVar2 == 0) {
LAB_02300a6c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    plVar4 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                               (lVar2,*(undefined8 *)PTR_DAT_04cad790);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(plVar4,0,0);
    if ((uVar3 & 1) != 0) {
      plVar4 = (long *)UnityEngine_Component__GetComponentInChildren_object__26f9b94
                                 (lVar2,1,*(undefined8 *)PTR_DAT_04cabe08);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(plVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (plVar4 == (long *)0x0) goto LAB_02300a6c;
      (**(code **)(*plVar4 + 0x518))(plVar4,param_3,*(undefined8 *)(*plVar4 + 0x520));
    }
  }
  return plVar4;
}

