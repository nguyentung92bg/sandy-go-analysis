/* IL2CPP: Dino.BusSand.App.UI.PaiziSign$$SetText
void Dino_BusSand_App_UI_PaiziSign__SetText (UnityEngine_Transform_o* t, System_String_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PaiziSign$$SetText
   void Dino_BusSand_App_UI_PaiziSign__SetText (UnityEngine_Transform_o* t, System_String_o* s,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_PaiziSign__SetText_22c54b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c355 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad790);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c355 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  plVar3 = (long *)0x0;
  if ((uVar2 & 1) != 0) {
    if (param_1 == 0) goto LAB_023c559c;
    plVar3 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                               (param_1,*(undefined8 *)PTR_DAT_04cad790);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(plVar3,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x023c5588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x518))(plVar3,param_2,*(undefined8 *)(*plVar3 + 0x520));
    return;
  }
LAB_023c559c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

