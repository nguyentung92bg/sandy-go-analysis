/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$SetText
void Dino_BusSand_App_UI_CommerceUi__SetText (UnityEngine_Transform_o* node, System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$SetText
   void Dino_BusSand_App_UI_CommerceUi__SetText (UnityEngine_Transform_o* node, System_String_o*
   text, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommerceUi__SetText_22ac074(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_04cac7b8;
  if ((bRam0000000004f9c2aa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c2aa = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar3 = (long *)Dino_BusSand_App_UI_CommerceUi__Tmp_22abf88(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(plVar3,0,0);
  if ((uVar4 & 1) != 0) {
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x023ac12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x518))(plVar3,param_2,*(undefined8 *)(*plVar3 + 0x520));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

